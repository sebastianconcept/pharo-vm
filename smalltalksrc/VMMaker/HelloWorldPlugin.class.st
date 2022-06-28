Class {
	#name : #HelloWorldPlugin,
	#superclass : #SmartSyntaxInterpreterPlugin,
	#category : #'VMMaker-Plugins'
}

{ #category : #translation }
HelloWorldPlugin class >> moduleNameAndVersion [

	^ self moduleName , Character space asString , Date today asString
]

{ #category : #'as yet unclassified' }
HelloWorldPlugin >> primitiveGetHelloString [

	self primitive: 'primitiveGetHelloString'.

	^ 'Hello from your HelloWorldPlugin.'
]
