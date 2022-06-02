Class {
	#name : #TExternalSendNode,
	#superclass : #TParseNode,
	#instVars : [
		'variableBindings',
		'wrappedSendNode'
	],
	#category : #'Slang-AST'
}

{ #category : #'instance-creation' }
TExternalSendNode class >> receiver: aReceiverNode selector: aString arguments: aCollection  variableBindings: bindings [

	^ (self receiver: aReceiverNode selector: aString arguments: aCollection)
		variableBindings: bindings;
		yourself
]

{ #category : #'instance-creation' }
TExternalSendNode class >> send: aWrappedSendNode variableBindings: bindings [

	^ self new
		wrappedSendNode: aWrappedSendNode;
		variableBindings: bindings;
		yourself
]

{ #category : #tranforming }
TExternalSendNode >> asCASTExpressionIn: aCodeGenerator [

	self notYetImplemented
]

{ #category : #tranforming }
TExternalSendNode >> asCASTIn: aCodeGenerator [

	^ CCompoundStatementNode statements: (self cExternalizationsIn: aCodeGenerator)
		  , { (wrappedSendNode asCASTIn: aCodeGenerator) }
		  , (self cInternalizationsIn: aCodeGenerator)
]

{ #category : #transformations }
TExternalSendNode >> bindVariableUsesIn: aDictionary andConstantFoldIf: constantFold in: codeGen [

	| newExpression |
	newExpression := wrappedSendNode bindVariableUsesIn: aDictionary andConstantFoldIf: constantFold in: codeGen.
	^newExpression = wrappedSendNode
		ifTrue: [self]
		ifFalse: [
			self haltIf: [ newExpression isSend not ].
			self shallowCopy
				wrappedSendNode: newExpression;
				yourself]
]

{ #category : #transformations }
TExternalSendNode >> bindVariablesIn: aDictionary unless: cautionaryBlock [ 
	
	(cautionaryBlock value: self) ifTrue: [^self].
	wrappedSendNode := wrappedSendNode bindVariablesIn: aDictionary unless: cautionaryBlock
]

{ #category : #'c-translation' }
TExternalSendNode >> cExternalizationsIn: codeGenerator [
	
	| tAssignments |
	tAssignments := OrderedCollection new.
	variableBindings keysAndValuesDo: [ :global :local |
		tAssignments add: (TAssignmentNode
			variable: (TVariableNode named: global)
			expression: (TVariableNode named: local name))
	].

	^ tAssignments collect: [ :e | e asCASTIn: codeGenerator ]
]

{ #category : #'c-translations' }
TExternalSendNode >> cInternalizationsIn: codeGenerator [
	
	| tAssignments |
	tAssignments := OrderedCollection new.
	variableBindings keysAndValuesDo: [ :global :local |
		tAssignments add: (TAssignmentNode
			variable: (TVariableNode named: local name)
			expression: (TVariableNode named: global))
	].

	^ tAssignments collect: [ :e | e asCASTIn: codeGenerator ]
]

{ #category : #accessing }
TExternalSendNode >> isExternalSend [

	^ true
]

{ #category : #testing }
TExternalSendNode >> isSend [
	
	^ true
]

{ #category : #testing }
TExternalSendNode >> isValueExpansion [
	
	^ wrappedSendNode isValueExpansion
]

{ #category : #accessing }
TExternalSendNode >> localizedVariables [
	
	^ variableBindings keys
]

{ #category : #asd }
TExternalSendNode >> nodesDo: aBlock [
	"Apply aBlock to all nodes in the receiver.
	 N.B. This is assumed to be bottom-up, leaves first."
	wrappedSendNode nodesDo: aBlock.
	aBlock value: self
]

{ #category : #accessing }
TExternalSendNode >> nodesDo: aBlock parent: parent [

	wrappedSendNode nodesDo: aBlock parent: self.
	aBlock value: self value: parent
]

{ #category : #transformations }
TExternalSendNode >> printOn: aStream level: level [
	
	wrappedSendNode printOn: aStream level: level
]

{ #category : #asd }
TExternalSendNode >> replaceNodesIn: aDictionary [

	^aDictionary at: self ifAbsent: [ | newNode |
		newNode := wrappedSendNode replaceNodesIn: aDictionary.
		wrappedSendNode := newNode.
		self]
]

{ #category : #accessing }
TExternalSendNode >> selector [
	
	^ wrappedSendNode selector 
]

{ #category : #accessing }
TExternalSendNode >> variableBindings [
	^ variableBindings
]

{ #category : #accessing }
TExternalSendNode >> variableBindings: aCollection [
	
	variableBindings := aCollection 
]

{ #category : #accessing }
TExternalSendNode >> wrappedSendNode [

	^ wrappedSendNode
]

{ #category : #accessing }
TExternalSendNode >> wrappedSendNode: anObject [

	wrappedSendNode := anObject
]