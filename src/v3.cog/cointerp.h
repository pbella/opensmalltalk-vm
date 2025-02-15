/* Automatically generated by
	CCodeGeneratorGlobalStructure VMMaker.oscog-eem.3047 uuid: 548d0a5b-eb23-4df6-bbb1-0b431cc840b3
 */


/*** Function Prototypes ***/


#if !PRODUCTION && defined(PlatformNoDbgRegParms)
# define NoDbgRegParms PlatformNoDbgRegParms
#endif

#if !defined(NoDbgRegParms)
# define NoDbgRegParms /*empty*/
#endif



#if !defined(NeverInline)
# define NeverInline /*empty*/
#endif

extern usqInt argumentCountAddress(void);
extern void assertValidMachineCodeFrame(sqInt instrPtr);
extern void callForCogCompiledCodeCompaction(void);
extern void ceActivateFailingPrimitiveMethod(sqInt aPrimitiveMethod);
extern sqInt ceActiveContext(void);
extern sqInt ceBaseFrameReturn(sqInt returnValue);
#if IMMUTABILITY
extern sqInt ceCannotAssignTowithIndexvalueToAssign(sqInt immutableObject, sqInt index, sqInt valueToAssign);
#endif /* IMMUTABILITY */
extern sqInt ceCannotResume(void);
extern void ceCheckForInterrupt(void);
extern sqInt ceContextinstVar(sqInt maybeContext, sqInt slotIndex);
extern sqInt ceContextinstVarvalue(sqInt maybeMarriedContext, sqInt slotIndex, sqInt anOop);
extern sqInt ceInterpretMethodFromPICreceiver(sqInt aMethodObj, sqInt rcvr);
extern sqInt ceMNUFromPICMNUMethodreceiver(sqInt aMethodObj, sqInt rcvr);
extern sqInt ceNewArraySlotSize(sqInt slotSize);
extern sqInt ceNonLocalReturn(sqInt returnValue);
extern void ceReapAndResetErrorCodeFor(CogMethod *cogMethod);
extern sqInt ceSendAborttonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
extern sqInt ceSendFromInLineCacheMiss(CogMethod *cogMethodOrPIC);
extern sqInt ceSendMustBeBooleanTointerpretingAtDelta(sqInt aNonBooleanObject, sqInt jumpSize);
extern sqInt ceSendMustBeBoolean(sqInt anObject);
extern sqInt ceSendsupertonumArgs(sqInt selector, sqInt superNormalBar, sqInt rcvr, sqInt numArgs);
extern void ceStackOverflow(sqInt contextSwitchIfNotNil);
extern void ceTakeProfileSample(CogMethod *aCogMethodOrNil);
extern void ceTraceBlockActivation(void);
extern void ceTraceLinkedSend(sqInt theReceiver);
extern void ceTraceStoreOfinto(sqInt aValue, sqInt anObject);
extern usqInt cFramePointerAddress(void);
extern void checkAssertsEnabledInCoInterpreter(void);
extern sqInt checkIfCFramePointerInUse(void);
extern void clearTraceLog(void);
extern CogMethod * cogMethodOf(sqInt aMethodOop);
extern void compilationBreakpointFor(sqInt selectorOop);
extern usqInt cReturnAddressAddress(void);
extern sqInt createClosureNumArgsnumCopiedstartpc(sqInt numArgs, sqInt numCopied, sqInt initialIP);
extern usqInt cStackPointerAddress(void);
extern sqInt defaultNativeStackFrameSize(void);
extern void dumpPrimTraceLog(void);
extern void dumpTraceLog(void);
extern void executeCogMethodfromLinkedSendWithReceiver(CogMethod *cogMethod, sqInt rcvr);
extern void executeCogPICfromLinkedSendWithReceiverandCacheTag(CogMethod *cogPIC, sqInt rcvr, sqInt cacheTag);
extern usqInt framePointerAddress(void);
extern void (*functionPointerForCompiledMethodprimitiveIndexprimitivePropertyFlagsInto(sqInt methodObj, sqInt primitiveIndex, sqInt *flagsPtr))(void) ;
extern void ifValidWriteBackStackPointersSaveTo(void *theCFP, void *theCSP, char **savedFPP, char **savedSPP);
extern usqInt instructionPointerAddress(void);
extern sqInt interpret(void);
extern usqInt interpretAddress(void);
extern sqInt isCogMethodReference(sqInt methodHeader);
extern sqInt lookupMNUreceiver(sqInt selector, sqInt rcvr);
extern sqInt lookupOrdinaryreceiver(sqInt selector, sqInt rcvr);
extern void markActiveMethodsAndReferents(void);
extern sqInt marryFrameCopiesTemps(void);
extern sqInt maxLookupNoMNUErrorCode(void);
extern void * methodCacheAddress(void);
extern sqInt methodHasCogMethod(sqInt aMethodOop);
extern sqInt methodNeedsLargeContext(sqInt methodObj);
extern sqInt methodShouldBeCogged(sqInt aMethodObj);
extern CogMethod * mframeHomeMethodExport(void);
extern CogMethod * mframeHomeMethod(char *theFP);
extern sqInt mMethodClass(void);
extern void mnuCompilationBreakpointFor(sqInt selectorOop);
extern usqInt newMethodAddress(void);
extern usqInt nextProfileTickAddress(void);
extern sqInt noAssertHeaderOf(sqInt methodPointer);
extern sqInt positive32BitIntegerFor(unsigned int integerValue);
extern unsigned int positive32BitValueOf(sqInt oop);
extern sqInt positive64BitIntegerFor(usqLong integerValue);
extern usqLong positive64BitValueOf(sqInt oop);
extern sqInt primErrTable(void);
extern usqInt primFailCodeAddress(void);
extern usqInt primitiveFailAddress(void);
extern sqInt primitivePropertyFlags(sqInt primIndex);
extern void * primTraceLogAddress(void);
extern usqInt primTraceLogIndexAddress(void);
EXPORT(void) printCogMethod(CogMethod *cogMethod);
extern sqInt quickPrimitiveConstantFor(sqInt aQuickPrimitiveIndex);
extern sqInt (*quickPrimitiveGeneratorFor(sqInt aQuickPrimitiveIndex))(void) ;
extern sqInt quickPrimitiveInstVarIndexFor(sqInt primIndex);
extern sqInt rawHeaderOf(sqInt methodPointer);
extern void rawHeaderOfput(sqInt methodOop, sqInt cogMethodOrMethodHeader);
extern sqInt recordFastCCallPrimTraceForMethod(sqInt aMethodObj);
extern sqInt recordPrimTraceForMethod(sqInt aMethodObj);
extern void reportMinimumUnusedHeadroom(void);
extern sqInt signed32BitIntegerFor(sqInt integerValue);
extern int signed32BitValueOf(sqInt oop);
extern sqInt signed64BitIntegerFor(sqLong integerValue);
extern sqLong signed64BitValueOf(sqInt oop);
extern sqInt specialSelectorNumArgs(sqInt index);
extern usqInt stackLimitAddress(void);
extern usqInt stackPointerAddress(void);
extern sqInt startPCOfMethodHeader(sqInt aCompiledMethodHeader);
extern sqInt startPCOrNilOfLiteralin(sqInt lit, sqInt aMethodObj);
extern void updateStackZoneReferencesToCompiledCodePreCompaction(void);
extern usqInt primitiveFunctionPointerAddress(void);
extern char * cStringOrNullFor(sqInt oop);
extern sqInt failed(void);
extern sqInt identityHashOf(sqInt anOop);
extern void primitiveClosureValueNoContextSwitch(void);
extern sqInt primitiveFail(void);
extern sqInt primitiveFailForFFIExceptionat(usqLong exceptionCode, usqInt pc);
extern sqInt primitiveFailForOSError(sqLong osError);
extern sqInt primitiveFailFor(sqInt reasonCode);
extern sqInt primitiveFailureCode(void);
extern sqInt signalNoResume(sqInt aSemaphore);
extern usqInt sizeOfAlienData(sqInt oop);
extern void * startOfAlienData(sqInt oop);
extern sqInt ceStoreCheck(sqInt anOop);
extern usqInt freeStartAddress(void);
extern sqInt isReallyYoungObject(sqInt obj);
extern sqInt methodHeaderOf(sqInt methodObj);
extern sqInt noShiftCompactClassIndexOf(sqInt oop);
extern sqInt nullHeaderForMachineCodeMethod(void);
extern sqInt receiverTagBitsForMethod(sqInt aMethodObj);
extern usqInt scavengeThresholdAddress(void);
extern sqInt smallIntegerTag(void);
extern sqInt withoutForwardingOnandwithsendToCogit(sqInt obj1, sqInt obj2, sqInt aBool, sqInt (*selector)(sqInt,sqInt,sqInt));
extern usqInt youngStartAddress(void);
extern sqInt addressCouldBeObj(sqInt address);
extern sqInt characterValueOf(sqInt oop);
extern sqInt checkOkayOop(usqInt oop);
extern sqInt eeInstantiateClassIndexformatnumSlots(sqInt compactClassIndex, sqInt objFormat, sqInt numSlots);
extern sqInt eeInstantiateClassindexableSize(sqInt classPointer, sqInt size);
extern sqInt fetchClassTagOf(sqInt oop);
extern void findStringBeginningWith(char *aCString);
extern void findString(char *aCString);
extern double floatValueOf(sqInt oop);
extern sqInt isYoungObject(sqInt obj);
extern sqInt lastPointerOf(sqInt objOop);
extern sqInt leakCheckBecome(void);
extern sqInt leakCheckFullGC(void);
extern sqInt leakCheckNewSpaceGC(void);
extern sqInt literalCountOfMethodHeader(sqInt methodHeader);
extern sqInt objectAfter(sqInt oop);
extern sqInt pinObject(sqInt objOop);
extern sqInt safeLastPointerOf(sqInt objOop);
extern sqInt shortentoIndexableSize(sqInt obj, sqInt nSlots);
extern void unpinObject(sqInt objOop);
extern sqInt addressCouldBeOop(sqInt address);
extern sqInt arrayFormat(void);
extern void beRootIfOld(sqInt oop);
extern sqInt byteSizeOf(sqInt oop);
extern unsigned int byteSwapped32IfBigEndian(unsigned int w);
extern unsigned long long byteSwapped64IfBigEndian(unsigned long long w);
extern sqInt byteSwapped(sqInt w);
extern sqInt characterObjectOf(sqInt characterCode);
extern sqInt characterTable(void);
extern sqInt checkedLongAt(sqInt byteAddress);
extern sqInt checkOopHasOkayClass(usqInt obj);
extern sqInt classArray(void);
extern sqInt classFloat(void);
extern sqInt classHeader(sqInt oop);
extern sqInt classSmallInteger(void);
extern sqInt compactClassAt(sqInt ccIndex);
extern sqInt compactClassIndexOfClass(sqInt classObj);
extern sqInt compactClassIndexOfHeader(sqInt header);
extern sqInt compactClassIndexOf(sqInt oop);
extern sqInt falseObject(void);
extern sqInt fetchByteofObject(sqInt byteIndex, sqInt oop);
extern sqInt fetchPointerofObject(sqInt fieldIndex, sqInt oop);
extern sqInt formatOfClass(sqInt classPointer);
extern sqInt headerIndicatesAlternateBytecodeSet(sqInt methodHeader);
extern sqInt instanceSizeOf(sqInt classObj);
extern sqInt instantiateClassindexableSize(sqInt classPointer, sqInt size);
extern sqInt isArrayNonImm(sqInt oop);
extern sqInt isCharacterValue(sqInt anInteger);
extern sqInt isCompiledMethod(sqInt oop);
extern sqInt isImmediate(sqInt anOop);
extern sqInt isIntegerValue(sqInt intValue);
extern sqInt isMarked(sqInt oop);
extern sqInt isNonImmediate(sqInt anOop);
extern sqInt isNonIntegerObject(sqInt objectPointer);
extern sqInt isOopCompiledMethod(sqInt oop);
extern sqInt isOopImmutable(sqInt anOop);
extern sqInt isOopMutable(sqInt anOop);
extern sqInt isPinned(sqInt objOop);
extern sqInt isYoung(sqInt oop);
extern sqInt literalCountOf(sqInt methodPointer);
extern sqInt markAndTrace(sqInt oop);
extern sqInt maybeSplObj(sqInt index);
extern sqInt minSlotsForShortening(void);
extern sqInt nilObject(void);
extern sqInt noShiftCompactClassIndexOfHeader(sqInt header);
extern sqInt numBytesOfBytes(sqInt objOop);
extern sqInt numBytesOf(sqInt objOop);
extern sqInt numSlotsOf(sqInt obj);
extern sqInt objectBefore(sqInt address);
extern sqInt objectExactlyBefore(sqInt oop);
extern sqInt popRemappableOop(void);
extern sqInt primitiveErrorTable(void);
extern void pushRemappableOop(sqInt oop);
extern sqInt remap(sqInt oop);
extern sqInt shouldRemapObj(sqInt oop);
extern sqInt shouldRemapOop(sqInt oop);
extern sqInt splObj(sqInt index);
extern sqInt storePointerUncheckedofObjectwithValue(sqInt fieldIndex, sqInt oop, sqInt valuePointer);
extern sqInt stringForCString(const char *aCString);
extern void tenuringIncrementalGC(void);
extern sqInt topRemappableOop(void);
extern sqInt trueObject(void);
extern void addIdleUsecs(sqInt idleUsecs);
extern sqInt argumentCountOfClosure(sqInt closurePointer);
extern sqInt argumentCountOfMethodHeader(sqInt header);
extern sqInt argumentCountOf(sqInt methodPointer);
extern sqInt canContextSwitchIfActivatingheader(sqInt theMethod, sqInt methodHeader);
extern sqInt copiedValueCountOfClosure(sqInt closurePointer);
extern sqInt copiedValueCountOfFullClosure(sqInt closurePointer);
extern sqInt disownVM(sqInt flags);
extern sqInt doSignalSemaphoreWithIndex(sqInt index);
extern void (*functionPointerForinClass(sqInt primIdx,sqInt theClass))(void) ;
extern usqLong getNextWakeupUsecs(void);
extern sqInt * getStackPointer(void);
extern sqInt highBit(usqInt anUnsignedValue);
extern sqInt isFloatObject(sqInt oop);
extern sqInt isKindOfInteger(sqInt oop);
extern sqInt isLargeIntegerObject(sqInt oop);
extern sqInt isLargeNegativeIntegerObject(sqInt oop);
extern sqInt isLargePositiveIntegerObject(sqInt oop);
extern sqInt isQuickPrimitiveIndex(sqInt anInteger);
extern sqInt isReadMediatedContextInstVarIndex(sqInt index);
extern sqInt isWriteMediatedContextInstVarIndex(sqInt index);
extern sqInt isKindOfClass(sqInt oop, sqInt aClass);
extern sqInt literalofMethod(sqInt offset, sqInt methodPointer);
extern sqInt longStoreBytecodeForHeader(sqInt methodHeader);
extern sqInt lookupSelectorinClass(sqInt selector, sqInt class);
extern sqInt maybeSelectorOfMethod(sqInt methodObj);
extern sqInt methodClassAssociationOf(sqInt methodPointer);
extern sqInt methodClassOf(sqInt methodPointer);
extern sqInt methodPrimitiveIndex(void);
extern sqInt methodUsesAlternateBytecodeSet(sqInt aMethodObj);
extern sqInt objCouldBeClassObj(sqInt objOop);
extern sqInt ownVM(sqInt threadIndexAndFlags);
extern sqInt penultimateLiteralOf(sqInt aMethodOop);
extern sqInt popStack(void);
extern sqInt primitiveIndexOfMethodheader(sqInt theMethod, sqInt methodHeader);
extern sqInt primitiveIndexOf(sqInt methodPointer);
extern void printChar(sqInt aByte);
extern sqInt printHexnp(usqInt n);
extern void printHex(usqInt n);
extern void print(char *s);
extern sqInt readableFormat(sqInt imageVersion);
extern void setNextWakeupUsecs(usqLong value);
extern sqInt sizeOfCallPrimitiveBytecode(sqInt methodHeader);
extern sqInt sizeOfLongStoreTempBytecode(sqInt methodHeader);
extern sqInt specialSelector(sqInt index);
extern usqIntptr_t stackPositiveMachineIntegerValue(sqInt offset);
extern sqIntptr_t stackSignedMachineIntegerValue(sqInt offset);
extern sqInt stackTop(void);
extern sqInt stackValue(sqInt offset);
extern sqInt startPCOfMethod(sqInt aCompiledMethod);
extern sqInt tempCountOf(sqInt methodPointer);
extern sqInt temporaryCountOfMethodHeader(sqInt header);
extern sqInt ultimateLiteralOf(sqInt aMethodOop);


/*** Global Variables ***/
extern sqInt breakLookupClassTag;
extern char * breakSelector;
extern sqInt breakSelectorLength ;
extern sqInt checkedPluginName;
extern sqInt checkForLeaks;
extern sqInt debugCallbackInvokes;
extern sqInt debugCallbackPath;
extern sqInt debugCallbackReturns;
extern sqInt deferDisplayUpdates;
extern sqInt desiredCogCodeSize;
extern sqInt desiredEdenBytes;
extern sqInt desiredNumStackPages;
extern void * displayBits;
extern int displayDepth;
extern int displayHeight;
extern int displayWidth;
extern sqInt eventTraceMask;
extern sqInt extraVMMemory;
extern sqInt ffiExceptionResponse;
extern usqInt heapBase;
extern sqInt inIOProcessEvents;
extern struct VirtualMachine* interpreterProxy;
extern sqInt maxLiteralCountForCompile ;
extern sqInt minBackwardJumpCountForCompile ;
extern char primitiveDoMixedArithmetic ;
extern char * primTracePluginName;
extern volatile int sendTrace;
extern sqInt sendWheelEvents;
extern int (*showSurfaceFn)(sqIntptr_t, int, int, int, int);
extern sqInt suppressHeartbeatFlag;


/*** Macros ***/
#define compilationBreakpointclassTagisMNUCase(sel, classTag, isMNU) do { \
	if (numBytesOf(sel) == (isMNU ? -breakSelectorLength : breakSelectorLength) \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, (isMNU ? -breakSelectorLength : breakSelectorLength))) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define compilationBreakpointisMNUCase(sel, isMNU) do { \
	if (numBytesOf(sel) == (isMNU ? -breakSelectorLength : breakSelectorLength) \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, (isMNU ? -breakSelectorLength : breakSelectorLength))) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define mnuCompilationBreakpoint(sel, len) do { \
	if ((len) == -breakSelectorLength \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, -breakSelectorLength)) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define primNumberExternalCall() 117
#define classFieldOffset() (0 - BaseHeaderSize)
#define compactClassFieldWidth() 5
#define instFormatFieldLSB() 8
#define instFormatFieldWidth() 4
#define compactClassFieldLSB() 12
#define firstByteFormat() 8
#define firstCompiledMethodFormat() 12
#define firstLongFormat() 6
#define indexablePointersFormat() 3
#define isForwarded(oop) false
#define shiftForWord() 2
#define weakArrayFormat() 4
#define alternateHeaderNumLiteralsMask() 0x7FFF
#define flush() fflush(stdout)
#define primitiveDoMixedArithmetic() primitiveDoMixedArithmetic
#define remoteIsInstVarAccess() 128

