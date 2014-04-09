/* Automatically generated by
	CCodeGeneratorGlobalStructure VMMaker.oscog-eem.670 uuid: 071bf6af-04c0-4256-b053-d66378b73d27
 */


/*** Function Prototypes ***/
sqInt activeProcess(void);
sqInt addGCRoot(sqInt *varLoc);
sqInt addressCouldBeObj(sqInt address);
usqInt argumentCountAddress(void);
sqInt argumentCountOfClosure(sqInt closurePointer);
sqInt argumentCountOfMethodHeader(sqInt header);
sqInt argumentCountOf(sqInt methodPointer);
sqInt arrayFormat(void);
void assertValidMachineCodeFrame(sqInt instrPtr);
sqInt becomewith(sqInt array1, sqInt array2);
void beRootIfOld(sqInt oop);
sqInt byteLengthOf(sqInt objOop);
sqInt byteSizeOf(sqInt oop);
sqInt byteSwapped(sqInt w);
void callForCogCompiledCodeCompaction(void);
sqInt canContextSwitchIfActivatingheader(sqInt theMethod, sqInt methodHeader);
void ceActivateFailingPrimitiveMethod(sqInt aPrimitiveMethod);
sqInt ceActiveContext(void);
sqInt ceBaseFrameReturn(sqInt returnValue);
sqInt ceCannotResume(void);
void ceCheckForInterrupts(void);
void ceCheckProfileTick(void);
sqInt ceClassAtIndex(sqInt classIndex);
sqInt ceContextinstVar(sqInt maybeContext, sqInt slotIndex);
sqInt ceContextinstVarvalue(sqInt maybeMarriedContext, sqInt slotIndex, sqInt anOop);
sqInt ceDynamicSuperSendtonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
sqInt ceExplicitReceiverAt(sqInt level);
sqInt ceInterpretMethodFromPICreceiver(sqInt aMethodObj, sqInt rcvr);
sqInt ceMNUFromPICMNUMethodreceiver(sqInt aMethodObj, sqInt rcvr);
sqInt ceNewArraySlotSize(sqInt slotSize);
sqInt ceNonLocalReturn(sqInt returnValue);
sqInt cePositive32BitIntegerFor(usqInt anInteger);
sqInt ceReturnToInterpreter(sqInt anOop);
sqInt ceSendAborttonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
sqInt ceSendFromInLineCacheMiss(CogMethod *cogMethodOrPIC);
sqInt ceSendMustBeBoolean(sqInt anObject);
sqInt ceSendsupertonumArgs(sqInt selector, sqInt superNormalBar, sqInt rcvr, sqInt numArgs);
void ceStackOverflow(sqInt contextSwitchIfNotNil);
sqInt ceStoreCheck(sqInt anOop);
void ceTraceBlockActivation(void);
void ceTraceLinkedSend(sqInt theReceiver);
void ceTraceStoreOfinto(sqInt aValue, sqInt anObject);
sqInt characterObjectOf(sqInt characterCode);
sqInt characterTag(void);
sqInt characterValueOf(sqInt oop);
sqInt checkAllAccessibleObjectsOkay(void);
void checkAssertsEnabledInCoInterpreter(void);
sqInt checkedLongAt(sqInt byteAddress);
sqInt checkOkayInterpreterObjects(sqInt writeBack);
sqInt checkOkayOop(usqInt oop);
sqInt checkOopHasOkayClass(usqInt obj);
sqInt classAtIndex(sqInt classIndex);
sqInt classFloatCompactIndex(void);
sqInt classIndexMask(void);
sqInt classIndexOf(sqInt objOop);
sqInt classOrNilAtIndex(sqInt classIndex);
sqInt classTableMajorIndexShift(void);
sqInt classTableMinorIndexMask(void);
sqInt classTableRootObj(void);
void clearTraceLog(void);
CogMethod * cogMethodOf(sqInt aMethodOop);
sqInt compactClassIndexOf(sqInt objOop);
void compilationBreakpointFor(sqInt selectorOop);
sqInt copiedValueCountOfClosure(sqInt closurePointer);
void countMarkedAndUnmarkdObjects(sqInt printFlags);
sqInt createClosureNumArgsnumCopiedstartpc(sqInt numArgs, sqInt numCopied, sqInt initialIP);
char * cStringOrNullFor(sqInt oop);
sqInt doSignalSemaphoreWithIndex(sqInt index);
void dumpPrimTraceLog(void);
void dumpTraceLog(void);
sqInt eeInstantiateClassIndexformatnumSlots(sqInt knownClassIndex, sqInt objFormat, sqInt numSlots);
extern void error(char *s);
void executeCogMethodfromLinkedSendWithReceiver(CogMethod *cogMethod, sqInt rcvr);
void executeCogMethodfromLinkedSendWithReceiverandCacheTag(CogMethod *cogMethod, sqInt rcvr, sqInt cacheTag);
sqInt failed(void);
sqInt fetchByteofObject(sqInt byteIndex, sqInt objOop);
void findStringBeginningWith(char *aCString);
void findString(char *aCString);
sqInt firstByteFormat(void);
sqInt firstCompiledMethodFormat(void);
sqInt firstLongFormat(void);
sqInt firstShortFormat(void);
sqInt fixedFieldsFieldWidth(void);
sqInt fixedFieldsOfClassFormatMask(void);
sqInt flushExternalPrimitiveOf(sqInt methodObj);
sqInt followForwarded(sqInt objOop);
sqInt formatMask(void);
sqInt formatOfClass(sqInt classPointer);
sqInt formatShift(void);
usqInt framePointerAddress(void);
usqInt freeStartAddress(void);
void (*functionPointerForCompiledMethodprimitiveIndex(sqInt methodObj, sqInt primIndex))(void) ;
void (*functionPointerForinClass(sqInt primIdx,sqInt theClass))(void) ;
usqLong getNextWakeupUsecs(void);
usqInt getScavengeThreshold(void);
sqInt * getStackPointer(void);
usqLong headerForSlotsformatclassIndex(sqInt numSlots, sqInt formatField, sqInt classIndex);
sqInt headerIndicatesAlternateBytecodeSet(sqInt methodHeader);
sqInt headerOf(sqInt methodPointer);
sqInt highBit(usqInt anUnsignedValue);
sqInt identityHashHalfWordMask(void);
void ifValidWriteBackStackPointersSaveTo(void *theCFP, void *theCSP, char **savedFPP, char **savedSPP);
sqInt implicitReceiverFormixinimplementing(sqInt rcvr, sqInt mixin, sqInt selector);
sqInt indexablePointersFormat(void);
sqInt initialPCForHeadermethod(sqInt methodHeader, sqInt theMethod);
void inOrderPrintFreeTreeprintList(sqInt freeChunk, sqInt printNextList);
sqInt instanceSizeOf(sqInt classObj);
usqInt instructionPointerAddress(void);
usqInt interpretAddress(void);
sqInt isCharacterObject(sqInt oop);
sqInt isCharacterValue(sqInt anInteger);
sqInt isCogMethodReference(sqInt methodHeader);
sqInt isCompiledMethod(sqInt objOop);
sqInt isForwardedObjectClassIndexPun(void);
sqInt isForwarded(sqInt objOop);
sqInt isImmediate(sqInt oop);
sqInt isIntegerValue(sqInt intValue);
sqInt isMarked(sqInt objOop);
sqInt isNonImmediate(sqInt oop);
sqInt isOldObject(sqInt objOop);
sqInt isOopCompiledMethod(sqInt oop);
sqInt isOopForwarded(sqInt oop);
sqInt isOopImmutable(sqInt oop);
sqInt isOopMutable(sqInt oop);
sqInt isPinned(sqInt objOop);
sqInt isQuickPrimitiveIndex(sqInt anInteger);
sqInt isReadMediatedContextInstVarIndex(sqInt index);
sqInt isReallyYoungObject(sqInt objOop);
sqInt isReallyYoung(sqInt oop);
sqInt isWriteMediatedContextInstVarIndex(sqInt index);
sqInt isYoungObject(sqInt objOop);
sqInt isYoung(sqInt oop);
sqInt isKindOfClass(sqInt oop, sqInt aClass);
sqInt lastPointerOfWhileSwizzling(sqInt objOop);
sqInt lastPointerOf(sqInt objOop);
sqInt leakCheckBecome(void);
sqInt leakCheckFullGC(void);
sqInt leakCheckIncrementalGC(void);
sqInt leakCheckNewSpaceGC(void);
sqInt lengthOf(sqInt objOop);
sqInt literalCountOfHeader(sqInt headerPointer);
sqInt literalofMethod(sqInt offset, sqInt methodPointer);
void longPrintOop(sqInt oop);
void longPrintReferencesTo(sqInt anOop);
sqInt longStoreBytecodeForHeader(sqInt methodHeader);
sqInt lookupreceiver(sqInt selector, sqInt rcvr);
void markActiveMethodsAndReferents(void);
void markAndTrace(sqInt objOop);
sqInt maxLookupNoMNUErrorCode(void);
sqInt maybeSplObj(sqInt index);
void * methodCacheAddress(void);
sqInt methodClassAssociationOf(sqInt methodPointer);
sqInt methodClassOf(sqInt methodPointer);
sqInt methodHasCogMethod(sqInt aMethodOop);
sqInt methodPrimitiveIndex(void);
sqInt methodShouldBeCogged(sqInt aMethodObj);
sqInt methodUsesAlternateBytecodeSet(sqInt aMethodObj);
CogMethod * mframeHomeMethodExport(void);
CogMethod * mframeHomeMethod(char *theFP);
sqInt mMethodClass(void);
usqInt newMethodAddress(void);
usqInt nextProfileTickAddress(void);
sqInt noAssertHeaderOf(sqInt methodPointer);
sqInt nonIndexablePointerFormat(void);
sqLong nullHeaderForMachineCodeMethod(void);
sqInt numPointerSlotsOf(sqInt objOop);
sqInt numSlotsHalfShift(void);
sqInt numSlotsMask(void);
sqInt numStrongSlotsOfephemeronInactiveIf(sqInt objOop, int (*criterion)(sqInt key));
sqInt numTagBits(void);
sqInt objectAfter(sqInt objOop);
sqInt objectBefore(sqInt objOop);
sqInt obsoleteDontUseThisFetchWordofObject(sqInt fieldIndex, sqInt oop);
sqInt penultimateLiteralOf(sqInt aMethodOop);
void pinObject(sqInt objOop);
sqInt popRemappableOop(void);
sqInt popStack(void);
sqInt primErrTable(void);
usqInt primFailCodeAddress(void);
void primitiveClosureValueNoContextSwitch(void);
sqInt primitiveErrorTable(void);
sqInt primitiveFail(void);
usqInt primitiveFailAddress(void);
sqInt primitiveFailFor(sqInt reasonCode);
sqInt primitiveFailureCode(void);
usqInt primitiveFunctionPointerAddress(void);
sqInt primitiveIndexOfMethodheader(sqInt theMethod, sqInt methodHeader);
sqInt primitiveIndexOf(sqInt methodPointer);
sqInt primitivePropertyFlags(sqInt primIndex);
void * primTraceLogAddress(void);
usqInt primTraceLogIndexAddress(void);
void printAllStacks(void);
sqInt printCallStackOf(sqInt aContextOrProcessOrFrame);
void printChar(sqInt aByte);
void printCogMethod(CogMethod *cogMethod);
void printFrameWithSP(char *theFP, char *theSP);
void printFreeChunk(sqInt freeChunk);
void printFreeList(sqInt chunkOrIndex);
void printHex(sqInt n);
void printInstancesOf(sqInt aClassOop);
void printInstancesWithClassIndex(sqInt classIndex);
void printLikelyImplementorsOfSelector(sqInt selector);
void printMethodCache(void);
void printMethodCacheFor(sqInt thing);
void printMethodDictionaryOf(sqInt behavior);
void printMethodDictionary(sqInt dictionary);
void printMethodReferencesTo(sqInt anOop);
void printObjectsFromto(sqInt startAddress, sqInt endAddress);
void printObjStack(sqInt objStack);
void printProcessStack(sqInt aProcess);
sqInt printProcsOnList(sqInt procList);
void printReferencesTo(sqInt anOop);
sqInt printStackCallStackOf(char *aFramePointer);
void print(char *s);
void pushRemappableOop(sqInt oop);
sqInt quickPrimitiveConstantFor(sqInt aQuickPrimitiveIndex);
int (*quickPrimitiveGeneratorFor(sqInt aQuickPrimitiveIndex))(void) ;
sqInt quickPrimitiveInstVarIndexFor(sqInt primIndex);
sqInt rawHeaderOf(sqInt methodPointer);
void rawHeaderOfput(sqInt methodOop, sqInt cogMethodOrMethodHeader);
sqInt remapObj(sqInt objOop);
sqInt rememberedBitShift(void);
sqInt removeGCRoot(sqInt *varLoc);
void reportMinimumUnusedHeadroom(void);
void setBreakSelector(char *aString);
void setNextWakeupUsecs(usqLong value);
sqInt shiftForWord(void);
void shortPrintFrameAndNCallers(char *theFP, sqInt n);
void shortPrintObjectsFromto(sqInt startAddress, sqInt endAddress);
sqInt shouldRemapObj(sqInt objOop);
sqInt shouldRemapOop(sqInt oop);
sqInt signalNoResume(sqInt aSemaphore);
usqInt sizeOfAlienData(sqInt oop);
sqInt sizeOfCallPrimitiveBytecode(sqInt methodHeader);
sqInt sizeOfLongStoreTempBytecode(sqInt methodHeader);
sqInt specialSelectorNumArgs(sqInt index);
sqInt specialSelector(sqInt index);
sqInt splObj(sqInt index);
usqInt stackLimitAddress(void);
usqInt stackPointerAddress(void);
unsigned long stackPositiveMachineIntegerValue(sqInt offset);
long stackSignedMachineIntegerValue(sqInt offset);
sqInt stackTop(void);
sqInt stackValue(sqInt offset);
void * startOfAlienData(sqInt oop);
sqInt startPCOfMethodHeader(sqInt aCompiledMethodHeader);
sqInt startPCOfMethod(sqInt aCompiledMethod);
sqInt startPCOrNilOfLiteralin(sqInt lit, sqInt aMethodObj);
usqInt storeCheckBoundary(void);
sqInt storePointerUncheckedofObjectwithValue(sqInt fieldIndex, sqInt objOop, sqInt valuePointer);
sqInt stringForCString(const char *aCString);
sqInt tagMask(void);
sqInt tempCountOf(sqInt methodPointer);
sqInt temporaryCountOfMethodHeader(sqInt header);
void tenuringIncrementalGC(void);
sqInt topRemappableOop(void);
void updateStackZoneReferencesToCompiledCodePreCompaction(void);
sqInt vmEndianness(void);
extern void warning(char *s);
sqInt weakArrayFormat(void);
char * whereIs(sqInt anOop);
sqInt withoutForwardingOnandsendToCogit(sqInt obj1, sqInt obj2, sqInt (*selector)(sqInt,sqInt));
sqInt withoutForwardingOnandwithsendToCogit(sqInt obj1, sqInt obj2, sqInt aBool, sqInt (*selector)(sqInt,sqInt,sqInt));


/*** Global Variables ***/
char * breakSelector;
sqInt breakSelectorLength ;
sqInt checkForLeaks;
sqInt deferDisplayUpdates;
sqInt desiredCogCodeSize;
sqInt desiredEdenBytes;
sqInt desiredNumStackPages;
sqInt extraVMMemory;
usqInt heapBase;
sqInt inIOProcessEvents;
struct VirtualMachine* interpreterProxy;
sqInt maxLiteralCountForCompile ;
sqInt minBackwardJumpCountForCompile ;
volatile int sendTrace;
void * showSurfaceFn;
sqInt suppressHeartbeatFlag;


/*** Macros ***/
#define compilationBreakpoint(sel, len) do { \
	if ((len) == breakSelectorLength \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, breakSelectorLength)) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define startOfMemory() heapBase
#define wordSize() 4

