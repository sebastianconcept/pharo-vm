Class {
	#name : #VMPermanentSpaceMemoryTest,
	#superclass : #VMSpurInitializedOldSpaceTest,
	#category : #'VMMakerTests-PermSpace'
}

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testMarkingNewSpaceDoesNotMarkPermSpace [

	| permanentObject newObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.
	newObject := self newObjectWithSlots: 1.
	self keepObjectInVMVariable1: newObject.
	
	self assert: (memory getMemoryMap isYoungObject: newObject).

	memory storePointer: 0 ofObject: newObject withValue: permanentObject.

	memory doScavenge: 1 "TenureByAge".

	self deny: (memory isMarked: permanentObject)
]

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testMarkingOldSpaceDoesNotMarkPermSpace [

	| permanentObject oldObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.
	oldObject := self newOldSpaceObjectWithSlots: 1.
	self keepObjectInVMVariable1: oldObject.
	
	self assert: (memory getMemoryMap isOldObject: oldObject).

	memory storePointer: 0 ofObject: oldObject withValue: permanentObject.

	memory fullGC.

	self deny: (memory isMarked: permanentObject)
]

{ #category : #'test - moving' }
VMPermanentSpaceMemoryTest >> testMoveOldObjectInRememberedSetIsMovedFromSet [

	| oldObject youngObject permanentObject |

	oldObject := self newOldSpaceArrayWithSlots: 1.
	youngObject := self newObjectWithSlots: 0.
	
	memory storePointer: 0 ofObject: oldObject withValue: youngObject.
	
	self assert: (memory isRemembered: oldObject). 
	self assert: (memory getFromOldSpaceRememberedSet isInRememberedSet: oldObject). 
	self deny: (memory getFromPermSpaceRememberedSet isInRememberedSet: oldObject). 
	
	permanentObject := memory moveToPermSpace: oldObject.	
	
	self assert: (memory isRemembered: permanentObject). 
	
	"Old object is now a forwarder shoul not be in any remembered set"
	self deny: (memory getFromOldSpaceRememberedSet isInRememberedSet: oldObject). 
	self deny: (memory getFromPermSpaceRememberedSet isInRememberedSet: oldObject). 

	self deny: (memory getFromOldSpaceRememberedSet isInRememberedSet: permanentObject). 
	self assert: (memory getFromPermSpaceRememberedSet isInRememberedSet: permanentObject). 

]

{ #category : #'test - moving' }
VMPermanentSpaceMemoryTest >> testMovingOldObjectToPermSpaceIsCorrectlyForwarded [

	| permanentObject oldObject rootObject|
	
	rootObject := self newOldSpaceObjectWithSlots: 1.
	oldObject := self newOldByteObjectOfSize: 1.

	memory storePointer: 0 ofObject: rootObject withValue: oldObject.
	self keepObjectInVMVariable1: rootObject.

	permanentObject := memory moveToPermSpace: oldObject.	
	
	self assert: (memory isForwarded: (memory fetchPointer: 0 ofObject: rootObject)).

	memory fullGC.
	
	self deny: (memory isForwarded: (memory fetchPointer: 0 ofObject: rootObject)).
	self assert: (memory fetchPointer: 0 ofObject: rootObject) equals: permanentObject.

]

{ #category : #'test - moving' }
VMPermanentSpaceMemoryTest >> testMovingOldObjectToPermSpaceLeavesForwarder [

	| permanentObject oldObject |
	
	oldObject := self newOldByteObjectOfSize: 1.
	self keepObjectInVMVariable1: oldObject.
	self assert: (memory getMemoryMap isOldObject: oldObject).

	permanentObject := memory moveToPermSpace: oldObject.	
	
	self assert: (memory isForwarded: oldObject).

]

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testNewPermanentByteArrayIsCorrectlyAllocated [

	| permanentObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.

	self assert: permanentObject equals: memory getMemoryMap permSpaceStart
]

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testNewPermanentByteArrayIsNonYoungObject [

	| permanentObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.

	self deny: (memory getMemoryMap isYoungObject: permanentObject)
]

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testNewPermanentByteArrayIsNotAnOldObject [

	| permanentObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.

	self deny: (memory getMemoryMap isOldObject: permanentObject)
]

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testNewPermanentByteArrayIsPermanentObject [

	| permanentObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.

	self assert: (memory getMemoryMap isPermanentObject: permanentObject)
]

{ #category : #'tests - allocation' }
VMPermanentSpaceMemoryTest >> testNextObjectIsReturningAGoodValue [

	| permanentObject nextObject |
	
	permanentObject := self newPermanentByteObjectOfSize: 14.
	nextObject := memory objectAfter: permanentObject.

	self assert: nextObject equals: memory permSpaceFreeStart
	
]