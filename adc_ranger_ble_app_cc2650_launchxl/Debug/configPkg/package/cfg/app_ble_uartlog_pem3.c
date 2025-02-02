/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/cc26xx/Boot.h>
#include <ti/sysbios/family/arm/cc26xx/Timer.h>
#include <ti/sysbios/family/arm/cc26xx/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rom/cortexm/cc26xx/CC26xx.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerCallback.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysCallback.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_cc26xx_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_cc26xx_Timer_Module__ ti_sysbios_family_arm_cc26xx_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Object__ {
    const ti_sysbios_family_arm_cc26xx_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt32 period;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt64 period64;
    xdc_UInt64 savedCurrCount;
    xdc_UInt64 prevThreshold;
    xdc_UInt64 nextThreshold;
} ti_sysbios_family_arm_cc26xx_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_cc26xx_Timer_Object__ obj;
} ti_sysbios_family_arm_cc26xx_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_cc26xx_Timer___VERS
    #define ti_sysbios_family_arm_cc26xx_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_cc26xx_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_cc26xx_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Mailbox_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Mailbox_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Mailbox_Object__ {
    xdc_runtime_IHeap_Handle heap;
    xdc_SizeT msgSize;
    xdc_UInt numMsgs;
    xdc_Ptr buf;
    xdc_UInt numFreeMsgs;
    __TA_ti_sysbios_knl_Mailbox_Instance_State__allocBuf allocBuf;
    ti_sysbios_knl_Queue_Object__ Object_field_dataQue;
    ti_sysbios_knl_Queue_Object__ Object_field_freeQue;
    ti_sysbios_knl_Semaphore_Object__ Object_field_dataSem;
    ti_sysbios_knl_Semaphore_Object__ Object_field_freeSem;
} ti_sysbios_knl_Mailbox_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Mailbox_Object__ obj;
} ti_sysbios_knl_Mailbox_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Mailbox___VERS
    #define ti_sysbios_knl_Mailbox___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Mailbox___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerCallback INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerCallback_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerCallback_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerCallback_Module__ xdc_runtime_LoggerCallback_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerCallback_Object__ {
    const xdc_runtime_LoggerCallback_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_UArg context;
    xdc_UArg arg;
} xdc_runtime_LoggerCallback_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerCallback_Object__ obj;
} xdc_runtime_LoggerCallback_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerCallback___VERS
    #define xdc_runtime_LoggerCallback___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerCallback___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysCallback INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x25, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x2c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x2d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x2e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerCallback VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__FXNS__C, ".const:xdc_runtime_LoggerCallback_Module__FXNS__C");
const xdc_runtime_LoggerCallback_Fxns__ xdc_runtime_LoggerCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ILogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerCallback_enable__E,
    xdc_runtime_LoggerCallback_disable__E,
    xdc_runtime_LoggerCallback_write0__E,
    xdc_runtime_LoggerCallback_write1__E,
    xdc_runtime_LoggerCallback_write2__E,
    xdc_runtime_LoggerCallback_write4__E,
    xdc_runtime_LoggerCallback_write8__E,
    {
        xdc_runtime_LoggerCallback_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x8, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysCallback VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__FXNS__C, ".const:xdc_runtime_SysCallback_Module__FXNS__C");
const xdc_runtime_SysCallback_Fxns__ xdc_runtime_SysCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysCallback_abort__E,
    xdc_runtime_SysCallback_exit__E,
    xdc_runtime_SysCallback_flush__E,
    xdc_runtime_SysCallback_putch__E,
    xdc_runtime_SysCallback_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xc, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xe, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Module_State__ {
    xdc_UInt availMask;
    ti_sysbios_family_arm_cc26xx_Timer_Handle handle;
} ti_sysbios_family_arm_cc26xx_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_cc26xx_Timer_Handle timer;
} ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1664];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1664] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> uartLog_flush */
extern xdc_Void uartLog_flush(xdc_Void);

/* --> Power_idleFunc */
extern xdc_Void Power_idleFunc(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[6];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerCallback DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_LoggerCallback_Object__ xdc_runtime_LoggerCallback_Object__table__V[1];

/* --> uartLog_outputFxn */
extern xdc_Void uartLog_outputFxn(xdc_UArg,xdc_runtime_Log_EventRec*,xdc_Int);

/* --> xdc_runtime_LoggerCallback_defaultCreate */
extern xdc_UArg xdc_runtime_LoggerCallback_defaultCreate(xdc_UArg);


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_LoggerCallback_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerCallback_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Mailbox_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Mailbox_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysCallback DECLARATIONS ========
 */

/* --> xdc_runtime_SysCallback_defaultAbort */
extern xdc_Void xdc_runtime_SysCallback_defaultAbort(xdc_CString);

/* --> xdc_runtime_SysCallback_defaultExit */
extern xdc_Void xdc_runtime_SysCallback_defaultExit(xdc_Int);

/* --> xdc_runtime_SysCallback_defaultFlush */
extern xdc_Void xdc_runtime_SysCallback_defaultFlush(xdc_Void);

/* --> xdc_runtime_SysCallback_defaultPutch */
extern xdc_Void xdc_runtime_SysCallback_defaultPutch(xdc_Char);

/* --> xdc_runtime_SysCallback_defaultReady */
extern xdc_Bool xdc_runtime_SysCallback_defaultReady(xdc_Void);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6080];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_dataQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_freeQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_dataSem);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_freeSem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/bhara/workspace_v8/adc_ranger_ble_app_cc2650_launchxl/Debug/configPkg/package/cfg/app_ble_uartlog_pem3");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.simplelink");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M3");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.simplelink.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerCallback_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}


xdc_Int xdc_runtime_Startup_getState__I(xdc_runtime_Types_ModuleId id) {
    switch (id) {
        case 11:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[1]);
        case 24:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[2]);
        case 28:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[3]);
        case 31:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[4]);
        case 32:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[5]);
        case 36:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[6]);
        case 40:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[7]);
        case 41:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[8]);
        case 42:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[9]);
    }
    return (0);
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern xdc_Void ti_sysbios_family_arm_cc26xx_Boot_trimDevice(void);  /* user defined reset function */
extern xdc_Void ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_cc26xx_Boot_trimDevice();
    ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[3];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.rom.ROM TEMPLATE ========
 */



/*
 *  functions explicitly excluded from the ROM
 */
#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_start__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_start__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_start__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_start__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_initDevice__I, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_initDevice__I");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_initDevice__I = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_initDevice__I;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCount64__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCount64__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCount64__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_getCount64__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_knl_Clock_workFuncDynamic__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_knl_Clock_workFuncDynamic__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_knl_Clock_workFuncDynamic__E = (xdc_Void *)ti_sysbios_knl_Clock_workFuncDynamic__E;

/*
 *  generated functions referenced from within the ROM
 */
#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_Startup_getState__I, ".const:ti_sysbios_rom_ROM_xdc_runtime_Startup_getState__I");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_Startup_getState__I = (xdc_Void *)xdc_runtime_Startup_getState__I;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_Module__startupDone__S, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_Module__startupDone__S");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_Module__startupDone__S = (xdc_Void *)xdc_runtime_System_SupportProxy_Module__startupDone__S;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_abort__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_abort__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_abort__E = (xdc_Void *)xdc_runtime_System_SupportProxy_abort__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_exit__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_exit__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_exit__E = (xdc_Void *)xdc_runtime_System_SupportProxy_exit__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_flush__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_flush__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_flush__E = (xdc_Void *)xdc_runtime_System_SupportProxy_flush__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_putch__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_putch__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_putch__E = (xdc_Void *)xdc_runtime_System_SupportProxy_putch__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_ready__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_ready__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_ready__E = (xdc_Void *)xdc_runtime_System_SupportProxy_ready__E;



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_cc26xx_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_cc26xx_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx TEMPLATE ========
 */


#pragma DATA_SECTION(xdc_runtime_Error_Module__state__V, ".data:xdc_runtime_Error_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__state__V, ".data:xdc_runtime_Memory_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__state__V, ".data:xdc_runtime_Registry_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__state__V, ".data:xdc_runtime_Startup_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_System_Module__state__V, ".data:xdc_runtime_System_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Text_Module__state__V, ".data:xdc_runtime_Text_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__state__V, ".data:ti_sysbios_BIOS_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__state__V, ".data:ti_sysbios_knl_Clock_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__state__V, ".data:ti_sysbios_knl_Swi_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__state__V, ".data:ti_sysbios_knl_Task_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__state__V, ".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__state__V, ".data:ti_sysbios_family_arm_cc26xx_Timer_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V, ".data:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V");

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCChannelEnable, ".const:ti_sysbios_rom_ROM_AONRTCChannelEnable");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCChannelEnable = (xdc_Void *)NULL;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCCompareValueSet, ".const:ti_sysbios_rom_ROM_AONRTCCompareValueSet");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCCompareValueSet = (xdc_Void *)NULL;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCCurrentCompareValueGet, ".const:ti_sysbios_rom_ROM_AONRTCCurrentCompareValueGet");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCCurrentCompareValueGet = (xdc_Void *)NULL;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCEventClear, ".const:ti_sysbios_rom_ROM_AONRTCEventClear");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCEventClear = (xdc_Void *)NULL;



#define REVISION_WORD 0x1001ca98

Void ti_sysbios_rom_cortexm_cc26xx_CC26xx_badRomRevision__E() {
	/* Loop here forever if application is built with wrong version of ROM image */
        while(1) {
            ;
        }
}

Void ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E()
{
    if (*((UInt32 *)(REVISION_WORD)) != 0x20284770) {
	ti_sysbios_rom_cortexm_cc26xx_CC26xx_badRomRevision__E();
    }
}


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    ti_sysbios_knl_Clock_logTick__E();

    {
        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[50];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[50];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot TEMPLATE ========
 */


#include <inc/hw_types.h>


extern Void _c_int00();

Void ResetISR ()
{
    _c_int00();
}

/* workaround bug in driverlib */

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2dc6c00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x15;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2dc6c00,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x684;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)0);


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__id ti_sysbios_family_arm_cc26xx_Boot_Module__id__C = (xdc_Bits16)0x27;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__count ti_sysbios_family_arm_cc26xx_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__heap ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__table ti_sysbios_family_arm_cc26xx_Boot_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_cc26xx_Timer_Params ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_cc26xx_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_cc26xx_Timer_Module__ ti_sysbios_family_arm_cc26xx_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0xa7c5,  /* period */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x10000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt64)0xa7c5,  /* period64 */
        (xdc_UInt64)0x0,  /* savedCurrCount */
        (xdc_UInt64)0xa7c5,  /* prevThreshold */
        (xdc_UInt64)0xa7c5,  /* nextThreshold */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_cc26xx_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_cc26xx_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V = {
    (xdc_UInt)0x0,  /* availMask */
    (ti_sysbios_family_arm_cc26xx_Timer_Handle)&ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__id ti_sysbios_family_arm_cc26xx_Timer_Module__id__C = (xdc_Bits16)0x28;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__count ti_sysbios_family_arm_cc26xx_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__heap ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__table ti_sysbios_family_arm_cc26xx_Timer_Object__table__C = ti_sysbios_family_arm_cc26xx_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4466) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4502) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4541) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_anyMask__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_anyMask ti_sysbios_family_arm_cc26xx_Timer_anyMask__C = (xdc_UInt)0x1;

/* funcHookCH1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1 ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1)0);

/* funcHookCH2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2 ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2)0);

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_startupNeeded ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V = {
    0,  /* timer */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C = (xdc_Bits16)0x29;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C = (xdc_UInt)0x0;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C = 1;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x14,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x24;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x32;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5937) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6007) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1933) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3980) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4028) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4076) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4281) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4309) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4319) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4335) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4365) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4395) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4412) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4433) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4448) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)0);

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x25;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x26;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x2c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x2d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2446) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x2a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4599) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1664];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x680)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x2e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3132) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3168) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3213) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4726) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3104) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)0);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)0);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x1,  /* timeout */
        (xdc_UInt32)0x1,  /* currTimeout */
        (xdc_UInt32)0x0,  /* period */
        0,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_triggerFunc__I)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x18;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4992) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5014) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5032) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)553) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)634) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_DYNAMIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0xa;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = (ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[0];


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x1b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5064) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5118) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)704) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)751) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)790) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)833) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)896) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)uartLog_flush)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)Power_idleFunc)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x19;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x1a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__PARAMS__C, ".const:ti_sysbios_knl_Mailbox_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Mailbox_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Mailbox_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    0,  /* readerEvent */
    (xdc_UInt)0x1,  /* readerEventId */
    0,  /* writerEvent */
    (xdc_UInt)0x1,  /* writerEventId */
    ((xdc_Ptr)0),  /* buf */
    (xdc_UInt)0x0,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V = {
    {&ti_sysbios_knl_Mailbox_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Mailbox_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsMask__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C = ((CT__ti_sysbios_knl_Mailbox_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gateObj__C, ".const:ti_sysbios_knl_Mailbox_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gatePrms__C, ".const:ti_sysbios_knl_Mailbox_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C = ((CT__ti_sysbios_knl_Mailbox_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__id__C, ".const:ti_sysbios_knl_Mailbox_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C = (xdc_Bits16)0x1c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerDefined__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerObj__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__startupDoneFxn ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Mailbox_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__count__C, ".const:ti_sysbios_knl_Mailbox_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__count ti_sysbios_knl_Mailbox_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__heap__C, ".const:ti_sysbios_knl_Mailbox_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__sizeof__C, ".const:ti_sysbios_knl_Mailbox_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C = sizeof(ti_sysbios_knl_Mailbox_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__table__C, ".const:ti_sysbios_knl_Mailbox_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__table ti_sysbios_knl_Mailbox_Object__table__C = 0;

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_A_invalidBufSize__C, ".const:ti_sysbios_knl_Mailbox_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)986) << 16 | 16);

/* maxTypeAlign__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_maxTypeAlign__C, ".const:ti_sysbios_knl_Mailbox_maxTypeAlign__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_maxTypeAlign ti_sysbios_knl_Mailbox_maxTypeAlign__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x1d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x1e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5199) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5229) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1044) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1099) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)833) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1164) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1218) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFuncDynamic__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0x5,  /* priority */
        (xdc_UInt)0x20,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x1f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5272) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5319) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5337) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1312) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1369) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x6;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[6] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x20;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5377) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5445) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5490) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5531) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5563) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5611) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5667) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5698) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5781) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5867) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3715) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3758) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3809) << 16 | 0);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)3840) << 16 | 0);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)3913) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1418) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1487) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1541) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1595) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1658) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1708) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1743) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1776) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1860) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x6;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 0;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id__C = (xdc_Bits16)0x17;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x1;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3475) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x2;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x3;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x4;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x5;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policySpin__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3497) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3501) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3535) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x6;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x7;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4762) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4786) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4807) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4826) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4843) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4873) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4905) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4934) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4945) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4955) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4974) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerCallback INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerCallback_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__PARAMS__C, ".const:xdc_runtime_LoggerCallback_Object__PARAMS__C");
__FAR__ const xdc_runtime_LoggerCallback_Params xdc_runtime_LoggerCallback_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerCallback_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerCallback_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_LoggerCallback_Module__ xdc_runtime_LoggerCallback_Module__root__V = {
    {&xdc_runtime_LoggerCallback_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerCallback_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerCallback_Object__ xdc_runtime_LoggerCallback_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerCallback_Module__FXNS__C,
        1,  /* enabled */
        ((xdc_UArg)(0x0)),  /* context */
        ((xdc_UArg)(0x1)),  /* arg */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerCallback_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsEnabled xdc_runtime_LoggerCallback_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerCallback_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsIncluded xdc_runtime_LoggerCallback_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__diagsMask__C, ".const:xdc_runtime_LoggerCallback_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsMask xdc_runtime_LoggerCallback_Module__diagsMask__C = ((CT__xdc_runtime_LoggerCallback_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__gateObj__C, ".const:xdc_runtime_LoggerCallback_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__gateObj xdc_runtime_LoggerCallback_Module__gateObj__C = ((CT__xdc_runtime_LoggerCallback_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__gatePrms__C, ".const:xdc_runtime_LoggerCallback_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__gatePrms xdc_runtime_LoggerCallback_Module__gatePrms__C = ((CT__xdc_runtime_LoggerCallback_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__id__C, ".const:xdc_runtime_LoggerCallback_Module__id__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__id xdc_runtime_LoggerCallback_Module__id__C = (xdc_Bits16)0x8;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerDefined__C, ".const:xdc_runtime_LoggerCallback_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerDefined xdc_runtime_LoggerCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerObj__C, ".const:xdc_runtime_LoggerCallback_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerObj xdc_runtime_LoggerCallback_Module__loggerObj__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn0 xdc_runtime_LoggerCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn1 xdc_runtime_LoggerCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn2 xdc_runtime_LoggerCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn4 xdc_runtime_LoggerCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn8 xdc_runtime_LoggerCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__startupDoneFxn__C, ".const:xdc_runtime_LoggerCallback_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__startupDoneFxn xdc_runtime_LoggerCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerCallback_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__count__C, ".const:xdc_runtime_LoggerCallback_Object__count__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__count xdc_runtime_LoggerCallback_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__heap__C, ".const:xdc_runtime_LoggerCallback_Object__heap__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__heap xdc_runtime_LoggerCallback_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__sizeof__C, ".const:xdc_runtime_LoggerCallback_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__sizeof xdc_runtime_LoggerCallback_Object__sizeof__C = sizeof(xdc_runtime_LoggerCallback_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__table__C, ".const:xdc_runtime_LoggerCallback_Object__table__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__table xdc_runtime_LoggerCallback_Object__table__C = xdc_runtime_LoggerCallback_Object__table__V;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_outputFxn__C, ".const:xdc_runtime_LoggerCallback_outputFxn__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_outputFxn xdc_runtime_LoggerCallback_outputFxn__C = ((CT__xdc_runtime_LoggerCallback_outputFxn)((xdc_Fxn)uartLog_outputFxn));

/* createInstFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_createInstFxn__C, ".const:xdc_runtime_LoggerCallback_createInstFxn__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_createInstFxn xdc_runtime_LoggerCallback_createInstFxn__C = ((CT__xdc_runtime_LoggerCallback_createInstFxn)((xdc_Fxn)xdc_runtime_LoggerCallback_defaultCreate));


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x6190;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x6190;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x9;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerCallback_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Mailbox_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0xa;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysCallback INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsEnabled__C, ".const:xdc_runtime_SysCallback_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsIncluded__C, ".const:xdc_runtime_SysCallback_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsMask__C, ".const:xdc_runtime_SysCallback_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C = ((CT__xdc_runtime_SysCallback_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gateObj__C, ".const:xdc_runtime_SysCallback_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C = ((CT__xdc_runtime_SysCallback_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gatePrms__C, ".const:xdc_runtime_SysCallback_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C = ((CT__xdc_runtime_SysCallback_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__id__C, ".const:xdc_runtime_SysCallback_Module__id__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C = (xdc_Bits16)0xc;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerDefined__C, ".const:xdc_runtime_SysCallback_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerObj__C, ".const:xdc_runtime_SysCallback_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C = ((CT__xdc_runtime_SysCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn0__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn1__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn2__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn4__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn8__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__startupDoneFxn__C, ".const:xdc_runtime_SysCallback_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__startupDoneFxn xdc_runtime_SysCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysCallback_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__count__C, ".const:xdc_runtime_SysCallback_Object__count__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__heap__C, ".const:xdc_runtime_SysCallback_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__sizeof__C, ".const:xdc_runtime_SysCallback_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__table__C, ".const:xdc_runtime_SysCallback_Object__table__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C = 0;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_abortFxn__C, ".const:xdc_runtime_SysCallback_abortFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_abortFxn xdc_runtime_SysCallback_abortFxn__C = ((CT__xdc_runtime_SysCallback_abortFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultAbort));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_exitFxn__C, ".const:xdc_runtime_SysCallback_exitFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_exitFxn xdc_runtime_SysCallback_exitFxn__C = ((CT__xdc_runtime_SysCallback_exitFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultExit));

/* flushFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_flushFxn__C, ".const:xdc_runtime_SysCallback_flushFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_flushFxn xdc_runtime_SysCallback_flushFxn__C = ((CT__xdc_runtime_SysCallback_flushFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultFlush));

/* putchFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_putchFxn__C, ".const:xdc_runtime_SysCallback_putchFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_putchFxn xdc_runtime_SysCallback_putchFxn__C = ((CT__xdc_runtime_SysCallback_putchFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultPutch));

/* readyFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_readyFxn__C, ".const:xdc_runtime_SysCallback_readyFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_readyFxn xdc_runtime_SysCallback_readyFxn__C = ((CT__xdc_runtime_SysCallback_readyFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultReady));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)0),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0xb;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x0;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortSpin__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitSpin__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6080] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x75,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x61,  /* [491] */
    (xdc_Char)0x6c,  /* [492] */
    (xdc_Char)0x69,  /* [493] */
    (xdc_Char)0x67,  /* [494] */
    (xdc_Char)0x6e,  /* [495] */
    (xdc_Char)0x65,  /* [496] */
    (xdc_Char)0x64,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x73,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x41,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x64,  /* [504] */
    (xdc_Char)0x72,  /* [505] */
    (xdc_Char)0x3a,  /* [506] */
    (xdc_Char)0x20,  /* [507] */
    (xdc_Char)0x4d,  /* [508] */
    (xdc_Char)0x50,  /* [509] */
    (xdc_Char)0x55,  /* [510] */
    (xdc_Char)0x20,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x67,  /* [514] */
    (xdc_Char)0x69,  /* [515] */
    (xdc_Char)0x6f,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x65,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x61,  /* [524] */
    (xdc_Char)0x64,  /* [525] */
    (xdc_Char)0x64,  /* [526] */
    (xdc_Char)0x72,  /* [527] */
    (xdc_Char)0x65,  /* [528] */
    (xdc_Char)0x73,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x6f,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x61,  /* [536] */
    (xdc_Char)0x6c,  /* [537] */
    (xdc_Char)0x69,  /* [538] */
    (xdc_Char)0x67,  /* [539] */
    (xdc_Char)0x6e,  /* [540] */
    (xdc_Char)0x65,  /* [541] */
    (xdc_Char)0x64,  /* [542] */
    (xdc_Char)0x20,  /* [543] */
    (xdc_Char)0x74,  /* [544] */
    (xdc_Char)0x6f,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x73,  /* [547] */
    (xdc_Char)0x69,  /* [548] */
    (xdc_Char)0x7a,  /* [549] */
    (xdc_Char)0x65,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x63,  /* [555] */
    (xdc_Char)0x6c,  /* [556] */
    (xdc_Char)0x6f,  /* [557] */
    (xdc_Char)0x63,  /* [558] */
    (xdc_Char)0x6b,  /* [559] */
    (xdc_Char)0x44,  /* [560] */
    (xdc_Char)0x69,  /* [561] */
    (xdc_Char)0x73,  /* [562] */
    (xdc_Char)0x61,  /* [563] */
    (xdc_Char)0x62,  /* [564] */
    (xdc_Char)0x6c,  /* [565] */
    (xdc_Char)0x65,  /* [566] */
    (xdc_Char)0x64,  /* [567] */
    (xdc_Char)0x3a,  /* [568] */
    (xdc_Char)0x20,  /* [569] */
    (xdc_Char)0x43,  /* [570] */
    (xdc_Char)0x61,  /* [571] */
    (xdc_Char)0x6e,  /* [572] */
    (xdc_Char)0x6e,  /* [573] */
    (xdc_Char)0x6f,  /* [574] */
    (xdc_Char)0x74,  /* [575] */
    (xdc_Char)0x20,  /* [576] */
    (xdc_Char)0x63,  /* [577] */
    (xdc_Char)0x72,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x61,  /* [580] */
    (xdc_Char)0x74,  /* [581] */
    (xdc_Char)0x65,  /* [582] */
    (xdc_Char)0x20,  /* [583] */
    (xdc_Char)0x61,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x63,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6f,  /* [588] */
    (xdc_Char)0x63,  /* [589] */
    (xdc_Char)0x6b,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x73,  /* [594] */
    (xdc_Char)0x74,  /* [595] */
    (xdc_Char)0x61,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x63,  /* [598] */
    (xdc_Char)0x65,  /* [599] */
    (xdc_Char)0x20,  /* [600] */
    (xdc_Char)0x77,  /* [601] */
    (xdc_Char)0x68,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x42,  /* [606] */
    (xdc_Char)0x49,  /* [607] */
    (xdc_Char)0x4f,  /* [608] */
    (xdc_Char)0x53,  /* [609] */
    (xdc_Char)0x2e,  /* [610] */
    (xdc_Char)0x63,  /* [611] */
    (xdc_Char)0x6c,  /* [612] */
    (xdc_Char)0x6f,  /* [613] */
    (xdc_Char)0x63,  /* [614] */
    (xdc_Char)0x6b,  /* [615] */
    (xdc_Char)0x45,  /* [616] */
    (xdc_Char)0x6e,  /* [617] */
    (xdc_Char)0x61,  /* [618] */
    (xdc_Char)0x62,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x65,  /* [621] */
    (xdc_Char)0x64,  /* [622] */
    (xdc_Char)0x20,  /* [623] */
    (xdc_Char)0x69,  /* [624] */
    (xdc_Char)0x73,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x66,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x6c,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x2e,  /* [632] */
    (xdc_Char)0x0,  /* [633] */
    (xdc_Char)0x41,  /* [634] */
    (xdc_Char)0x5f,  /* [635] */
    (xdc_Char)0x62,  /* [636] */
    (xdc_Char)0x61,  /* [637] */
    (xdc_Char)0x64,  /* [638] */
    (xdc_Char)0x54,  /* [639] */
    (xdc_Char)0x68,  /* [640] */
    (xdc_Char)0x72,  /* [641] */
    (xdc_Char)0x65,  /* [642] */
    (xdc_Char)0x61,  /* [643] */
    (xdc_Char)0x64,  /* [644] */
    (xdc_Char)0x54,  /* [645] */
    (xdc_Char)0x79,  /* [646] */
    (xdc_Char)0x70,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x3a,  /* [649] */
    (xdc_Char)0x20,  /* [650] */
    (xdc_Char)0x43,  /* [651] */
    (xdc_Char)0x61,  /* [652] */
    (xdc_Char)0x6e,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x6f,  /* [655] */
    (xdc_Char)0x74,  /* [656] */
    (xdc_Char)0x20,  /* [657] */
    (xdc_Char)0x63,  /* [658] */
    (xdc_Char)0x72,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x61,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x65,  /* [663] */
    (xdc_Char)0x2f,  /* [664] */
    (xdc_Char)0x64,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x6c,  /* [667] */
    (xdc_Char)0x65,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x65,  /* [670] */
    (xdc_Char)0x20,  /* [671] */
    (xdc_Char)0x61,  /* [672] */
    (xdc_Char)0x20,  /* [673] */
    (xdc_Char)0x43,  /* [674] */
    (xdc_Char)0x6c,  /* [675] */
    (xdc_Char)0x6f,  /* [676] */
    (xdc_Char)0x63,  /* [677] */
    (xdc_Char)0x6b,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x66,  /* [680] */
    (xdc_Char)0x72,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x6d,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x48,  /* [685] */
    (xdc_Char)0x77,  /* [686] */
    (xdc_Char)0x69,  /* [687] */
    (xdc_Char)0x20,  /* [688] */
    (xdc_Char)0x6f,  /* [689] */
    (xdc_Char)0x72,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x53,  /* [692] */
    (xdc_Char)0x77,  /* [693] */
    (xdc_Char)0x69,  /* [694] */
    (xdc_Char)0x20,  /* [695] */
    (xdc_Char)0x74,  /* [696] */
    (xdc_Char)0x68,  /* [697] */
    (xdc_Char)0x72,  /* [698] */
    (xdc_Char)0x65,  /* [699] */
    (xdc_Char)0x61,  /* [700] */
    (xdc_Char)0x64,  /* [701] */
    (xdc_Char)0x2e,  /* [702] */
    (xdc_Char)0x0,  /* [703] */
    (xdc_Char)0x41,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x6e,  /* [706] */
    (xdc_Char)0x75,  /* [707] */
    (xdc_Char)0x6c,  /* [708] */
    (xdc_Char)0x6c,  /* [709] */
    (xdc_Char)0x45,  /* [710] */
    (xdc_Char)0x76,  /* [711] */
    (xdc_Char)0x65,  /* [712] */
    (xdc_Char)0x6e,  /* [713] */
    (xdc_Char)0x74,  /* [714] */
    (xdc_Char)0x4d,  /* [715] */
    (xdc_Char)0x61,  /* [716] */
    (xdc_Char)0x73,  /* [717] */
    (xdc_Char)0x6b,  /* [718] */
    (xdc_Char)0x73,  /* [719] */
    (xdc_Char)0x3a,  /* [720] */
    (xdc_Char)0x20,  /* [721] */
    (xdc_Char)0x6f,  /* [722] */
    (xdc_Char)0x72,  /* [723] */
    (xdc_Char)0x4d,  /* [724] */
    (xdc_Char)0x61,  /* [725] */
    (xdc_Char)0x73,  /* [726] */
    (xdc_Char)0x6b,  /* [727] */
    (xdc_Char)0x20,  /* [728] */
    (xdc_Char)0x61,  /* [729] */
    (xdc_Char)0x6e,  /* [730] */
    (xdc_Char)0x64,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x61,  /* [733] */
    (xdc_Char)0x6e,  /* [734] */
    (xdc_Char)0x64,  /* [735] */
    (xdc_Char)0x4d,  /* [736] */
    (xdc_Char)0x61,  /* [737] */
    (xdc_Char)0x73,  /* [738] */
    (xdc_Char)0x6b,  /* [739] */
    (xdc_Char)0x20,  /* [740] */
    (xdc_Char)0x61,  /* [741] */
    (xdc_Char)0x72,  /* [742] */
    (xdc_Char)0x65,  /* [743] */
    (xdc_Char)0x20,  /* [744] */
    (xdc_Char)0x6e,  /* [745] */
    (xdc_Char)0x75,  /* [746] */
    (xdc_Char)0x6c,  /* [747] */
    (xdc_Char)0x6c,  /* [748] */
    (xdc_Char)0x2e,  /* [749] */
    (xdc_Char)0x0,  /* [750] */
    (xdc_Char)0x41,  /* [751] */
    (xdc_Char)0x5f,  /* [752] */
    (xdc_Char)0x6e,  /* [753] */
    (xdc_Char)0x75,  /* [754] */
    (xdc_Char)0x6c,  /* [755] */
    (xdc_Char)0x6c,  /* [756] */
    (xdc_Char)0x45,  /* [757] */
    (xdc_Char)0x76,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x6e,  /* [760] */
    (xdc_Char)0x74,  /* [761] */
    (xdc_Char)0x49,  /* [762] */
    (xdc_Char)0x64,  /* [763] */
    (xdc_Char)0x3a,  /* [764] */
    (xdc_Char)0x20,  /* [765] */
    (xdc_Char)0x70,  /* [766] */
    (xdc_Char)0x6f,  /* [767] */
    (xdc_Char)0x73,  /* [768] */
    (xdc_Char)0x74,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x64,  /* [771] */
    (xdc_Char)0x20,  /* [772] */
    (xdc_Char)0x65,  /* [773] */
    (xdc_Char)0x76,  /* [774] */
    (xdc_Char)0x65,  /* [775] */
    (xdc_Char)0x6e,  /* [776] */
    (xdc_Char)0x74,  /* [777] */
    (xdc_Char)0x49,  /* [778] */
    (xdc_Char)0x64,  /* [779] */
    (xdc_Char)0x20,  /* [780] */
    (xdc_Char)0x69,  /* [781] */
    (xdc_Char)0x73,  /* [782] */
    (xdc_Char)0x20,  /* [783] */
    (xdc_Char)0x6e,  /* [784] */
    (xdc_Char)0x75,  /* [785] */
    (xdc_Char)0x6c,  /* [786] */
    (xdc_Char)0x6c,  /* [787] */
    (xdc_Char)0x2e,  /* [788] */
    (xdc_Char)0x0,  /* [789] */
    (xdc_Char)0x41,  /* [790] */
    (xdc_Char)0x5f,  /* [791] */
    (xdc_Char)0x65,  /* [792] */
    (xdc_Char)0x76,  /* [793] */
    (xdc_Char)0x65,  /* [794] */
    (xdc_Char)0x6e,  /* [795] */
    (xdc_Char)0x74,  /* [796] */
    (xdc_Char)0x49,  /* [797] */
    (xdc_Char)0x6e,  /* [798] */
    (xdc_Char)0x55,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x65,  /* [801] */
    (xdc_Char)0x3a,  /* [802] */
    (xdc_Char)0x20,  /* [803] */
    (xdc_Char)0x45,  /* [804] */
    (xdc_Char)0x76,  /* [805] */
    (xdc_Char)0x65,  /* [806] */
    (xdc_Char)0x6e,  /* [807] */
    (xdc_Char)0x74,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x6f,  /* [810] */
    (xdc_Char)0x62,  /* [811] */
    (xdc_Char)0x6a,  /* [812] */
    (xdc_Char)0x65,  /* [813] */
    (xdc_Char)0x63,  /* [814] */
    (xdc_Char)0x74,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x72,  /* [819] */
    (xdc_Char)0x65,  /* [820] */
    (xdc_Char)0x61,  /* [821] */
    (xdc_Char)0x64,  /* [822] */
    (xdc_Char)0x79,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x69,  /* [825] */
    (xdc_Char)0x6e,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x75,  /* [828] */
    (xdc_Char)0x73,  /* [829] */
    (xdc_Char)0x65,  /* [830] */
    (xdc_Char)0x2e,  /* [831] */
    (xdc_Char)0x0,  /* [832] */
    (xdc_Char)0x41,  /* [833] */
    (xdc_Char)0x5f,  /* [834] */
    (xdc_Char)0x62,  /* [835] */
    (xdc_Char)0x61,  /* [836] */
    (xdc_Char)0x64,  /* [837] */
    (xdc_Char)0x43,  /* [838] */
    (xdc_Char)0x6f,  /* [839] */
    (xdc_Char)0x6e,  /* [840] */
    (xdc_Char)0x74,  /* [841] */
    (xdc_Char)0x65,  /* [842] */
    (xdc_Char)0x78,  /* [843] */
    (xdc_Char)0x74,  /* [844] */
    (xdc_Char)0x3a,  /* [845] */
    (xdc_Char)0x20,  /* [846] */
    (xdc_Char)0x62,  /* [847] */
    (xdc_Char)0x61,  /* [848] */
    (xdc_Char)0x64,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x63,  /* [851] */
    (xdc_Char)0x61,  /* [852] */
    (xdc_Char)0x6c,  /* [853] */
    (xdc_Char)0x6c,  /* [854] */
    (xdc_Char)0x69,  /* [855] */
    (xdc_Char)0x6e,  /* [856] */
    (xdc_Char)0x67,  /* [857] */
    (xdc_Char)0x20,  /* [858] */
    (xdc_Char)0x63,  /* [859] */
    (xdc_Char)0x6f,  /* [860] */
    (xdc_Char)0x6e,  /* [861] */
    (xdc_Char)0x74,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x78,  /* [864] */
    (xdc_Char)0x74,  /* [865] */
    (xdc_Char)0x2e,  /* [866] */
    (xdc_Char)0x20,  /* [867] */
    (xdc_Char)0x4d,  /* [868] */
    (xdc_Char)0x75,  /* [869] */
    (xdc_Char)0x73,  /* [870] */
    (xdc_Char)0x74,  /* [871] */
    (xdc_Char)0x20,  /* [872] */
    (xdc_Char)0x62,  /* [873] */
    (xdc_Char)0x65,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x63,  /* [876] */
    (xdc_Char)0x61,  /* [877] */
    (xdc_Char)0x6c,  /* [878] */
    (xdc_Char)0x6c,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x64,  /* [881] */
    (xdc_Char)0x20,  /* [882] */
    (xdc_Char)0x66,  /* [883] */
    (xdc_Char)0x72,  /* [884] */
    (xdc_Char)0x6f,  /* [885] */
    (xdc_Char)0x6d,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x61,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x54,  /* [890] */
    (xdc_Char)0x61,  /* [891] */
    (xdc_Char)0x73,  /* [892] */
    (xdc_Char)0x6b,  /* [893] */
    (xdc_Char)0x2e,  /* [894] */
    (xdc_Char)0x0,  /* [895] */
    (xdc_Char)0x41,  /* [896] */
    (xdc_Char)0x5f,  /* [897] */
    (xdc_Char)0x70,  /* [898] */
    (xdc_Char)0x65,  /* [899] */
    (xdc_Char)0x6e,  /* [900] */
    (xdc_Char)0x64,  /* [901] */
    (xdc_Char)0x54,  /* [902] */
    (xdc_Char)0x61,  /* [903] */
    (xdc_Char)0x73,  /* [904] */
    (xdc_Char)0x6b,  /* [905] */
    (xdc_Char)0x44,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x73,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x62,  /* [910] */
    (xdc_Char)0x6c,  /* [911] */
    (xdc_Char)0x65,  /* [912] */
    (xdc_Char)0x64,  /* [913] */
    (xdc_Char)0x3a,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x43,  /* [916] */
    (xdc_Char)0x61,  /* [917] */
    (xdc_Char)0x6e,  /* [918] */
    (xdc_Char)0x6e,  /* [919] */
    (xdc_Char)0x6f,  /* [920] */
    (xdc_Char)0x74,  /* [921] */
    (xdc_Char)0x20,  /* [922] */
    (xdc_Char)0x63,  /* [923] */
    (xdc_Char)0x61,  /* [924] */
    (xdc_Char)0x6c,  /* [925] */
    (xdc_Char)0x6c,  /* [926] */
    (xdc_Char)0x20,  /* [927] */
    (xdc_Char)0x45,  /* [928] */
    (xdc_Char)0x76,  /* [929] */
    (xdc_Char)0x65,  /* [930] */
    (xdc_Char)0x6e,  /* [931] */
    (xdc_Char)0x74,  /* [932] */
    (xdc_Char)0x5f,  /* [933] */
    (xdc_Char)0x70,  /* [934] */
    (xdc_Char)0x65,  /* [935] */
    (xdc_Char)0x6e,  /* [936] */
    (xdc_Char)0x64,  /* [937] */
    (xdc_Char)0x28,  /* [938] */
    (xdc_Char)0x29,  /* [939] */
    (xdc_Char)0x20,  /* [940] */
    (xdc_Char)0x77,  /* [941] */
    (xdc_Char)0x68,  /* [942] */
    (xdc_Char)0x69,  /* [943] */
    (xdc_Char)0x6c,  /* [944] */
    (xdc_Char)0x65,  /* [945] */
    (xdc_Char)0x20,  /* [946] */
    (xdc_Char)0x74,  /* [947] */
    (xdc_Char)0x68,  /* [948] */
    (xdc_Char)0x65,  /* [949] */
    (xdc_Char)0x20,  /* [950] */
    (xdc_Char)0x54,  /* [951] */
    (xdc_Char)0x61,  /* [952] */
    (xdc_Char)0x73,  /* [953] */
    (xdc_Char)0x6b,  /* [954] */
    (xdc_Char)0x20,  /* [955] */
    (xdc_Char)0x6f,  /* [956] */
    (xdc_Char)0x72,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x53,  /* [959] */
    (xdc_Char)0x77,  /* [960] */
    (xdc_Char)0x69,  /* [961] */
    (xdc_Char)0x20,  /* [962] */
    (xdc_Char)0x73,  /* [963] */
    (xdc_Char)0x63,  /* [964] */
    (xdc_Char)0x68,  /* [965] */
    (xdc_Char)0x65,  /* [966] */
    (xdc_Char)0x64,  /* [967] */
    (xdc_Char)0x75,  /* [968] */
    (xdc_Char)0x6c,  /* [969] */
    (xdc_Char)0x65,  /* [970] */
    (xdc_Char)0x72,  /* [971] */
    (xdc_Char)0x20,  /* [972] */
    (xdc_Char)0x69,  /* [973] */
    (xdc_Char)0x73,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x64,  /* [976] */
    (xdc_Char)0x69,  /* [977] */
    (xdc_Char)0x73,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x62,  /* [980] */
    (xdc_Char)0x6c,  /* [981] */
    (xdc_Char)0x65,  /* [982] */
    (xdc_Char)0x64,  /* [983] */
    (xdc_Char)0x2e,  /* [984] */
    (xdc_Char)0x0,  /* [985] */
    (xdc_Char)0x4d,  /* [986] */
    (xdc_Char)0x61,  /* [987] */
    (xdc_Char)0x69,  /* [988] */
    (xdc_Char)0x6c,  /* [989] */
    (xdc_Char)0x62,  /* [990] */
    (xdc_Char)0x6f,  /* [991] */
    (xdc_Char)0x78,  /* [992] */
    (xdc_Char)0x5f,  /* [993] */
    (xdc_Char)0x63,  /* [994] */
    (xdc_Char)0x72,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x61,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x65,  /* [999] */
    (xdc_Char)0x27,  /* [1000] */
    (xdc_Char)0x73,  /* [1001] */
    (xdc_Char)0x20,  /* [1002] */
    (xdc_Char)0x62,  /* [1003] */
    (xdc_Char)0x75,  /* [1004] */
    (xdc_Char)0x66,  /* [1005] */
    (xdc_Char)0x53,  /* [1006] */
    (xdc_Char)0x69,  /* [1007] */
    (xdc_Char)0x7a,  /* [1008] */
    (xdc_Char)0x65,  /* [1009] */
    (xdc_Char)0x20,  /* [1010] */
    (xdc_Char)0x70,  /* [1011] */
    (xdc_Char)0x61,  /* [1012] */
    (xdc_Char)0x72,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x6d,  /* [1015] */
    (xdc_Char)0x65,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x65,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x69,  /* [1021] */
    (xdc_Char)0x73,  /* [1022] */
    (xdc_Char)0x20,  /* [1023] */
    (xdc_Char)0x69,  /* [1024] */
    (xdc_Char)0x6e,  /* [1025] */
    (xdc_Char)0x76,  /* [1026] */
    (xdc_Char)0x61,  /* [1027] */
    (xdc_Char)0x6c,  /* [1028] */
    (xdc_Char)0x69,  /* [1029] */
    (xdc_Char)0x64,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x28,  /* [1032] */
    (xdc_Char)0x74,  /* [1033] */
    (xdc_Char)0x6f,  /* [1034] */
    (xdc_Char)0x6f,  /* [1035] */
    (xdc_Char)0x20,  /* [1036] */
    (xdc_Char)0x73,  /* [1037] */
    (xdc_Char)0x6d,  /* [1038] */
    (xdc_Char)0x61,  /* [1039] */
    (xdc_Char)0x6c,  /* [1040] */
    (xdc_Char)0x6c,  /* [1041] */
    (xdc_Char)0x29,  /* [1042] */
    (xdc_Char)0x0,  /* [1043] */
    (xdc_Char)0x41,  /* [1044] */
    (xdc_Char)0x5f,  /* [1045] */
    (xdc_Char)0x6e,  /* [1046] */
    (xdc_Char)0x6f,  /* [1047] */
    (xdc_Char)0x45,  /* [1048] */
    (xdc_Char)0x76,  /* [1049] */
    (xdc_Char)0x65,  /* [1050] */
    (xdc_Char)0x6e,  /* [1051] */
    (xdc_Char)0x74,  /* [1052] */
    (xdc_Char)0x73,  /* [1053] */
    (xdc_Char)0x3a,  /* [1054] */
    (xdc_Char)0x20,  /* [1055] */
    (xdc_Char)0x54,  /* [1056] */
    (xdc_Char)0x68,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x20,  /* [1059] */
    (xdc_Char)0x45,  /* [1060] */
    (xdc_Char)0x76,  /* [1061] */
    (xdc_Char)0x65,  /* [1062] */
    (xdc_Char)0x6e,  /* [1063] */
    (xdc_Char)0x74,  /* [1064] */
    (xdc_Char)0x2e,  /* [1065] */
    (xdc_Char)0x73,  /* [1066] */
    (xdc_Char)0x75,  /* [1067] */
    (xdc_Char)0x70,  /* [1068] */
    (xdc_Char)0x70,  /* [1069] */
    (xdc_Char)0x6f,  /* [1070] */
    (xdc_Char)0x72,  /* [1071] */
    (xdc_Char)0x74,  /* [1072] */
    (xdc_Char)0x73,  /* [1073] */
    (xdc_Char)0x45,  /* [1074] */
    (xdc_Char)0x76,  /* [1075] */
    (xdc_Char)0x65,  /* [1076] */
    (xdc_Char)0x6e,  /* [1077] */
    (xdc_Char)0x74,  /* [1078] */
    (xdc_Char)0x73,  /* [1079] */
    (xdc_Char)0x20,  /* [1080] */
    (xdc_Char)0x66,  /* [1081] */
    (xdc_Char)0x6c,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x67,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x69,  /* [1086] */
    (xdc_Char)0x73,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x64,  /* [1089] */
    (xdc_Char)0x69,  /* [1090] */
    (xdc_Char)0x73,  /* [1091] */
    (xdc_Char)0x61,  /* [1092] */
    (xdc_Char)0x62,  /* [1093] */
    (xdc_Char)0x6c,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x64,  /* [1096] */
    (xdc_Char)0x2e,  /* [1097] */
    (xdc_Char)0x0,  /* [1098] */
    (xdc_Char)0x41,  /* [1099] */
    (xdc_Char)0x5f,  /* [1100] */
    (xdc_Char)0x69,  /* [1101] */
    (xdc_Char)0x6e,  /* [1102] */
    (xdc_Char)0x76,  /* [1103] */
    (xdc_Char)0x54,  /* [1104] */
    (xdc_Char)0x69,  /* [1105] */
    (xdc_Char)0x6d,  /* [1106] */
    (xdc_Char)0x65,  /* [1107] */
    (xdc_Char)0x6f,  /* [1108] */
    (xdc_Char)0x75,  /* [1109] */
    (xdc_Char)0x74,  /* [1110] */
    (xdc_Char)0x3a,  /* [1111] */
    (xdc_Char)0x20,  /* [1112] */
    (xdc_Char)0x43,  /* [1113] */
    (xdc_Char)0x61,  /* [1114] */
    (xdc_Char)0x6e,  /* [1115] */
    (xdc_Char)0x27,  /* [1116] */
    (xdc_Char)0x74,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x75,  /* [1119] */
    (xdc_Char)0x73,  /* [1120] */
    (xdc_Char)0x65,  /* [1121] */
    (xdc_Char)0x20,  /* [1122] */
    (xdc_Char)0x42,  /* [1123] */
    (xdc_Char)0x49,  /* [1124] */
    (xdc_Char)0x4f,  /* [1125] */
    (xdc_Char)0x53,  /* [1126] */
    (xdc_Char)0x5f,  /* [1127] */
    (xdc_Char)0x45,  /* [1128] */
    (xdc_Char)0x56,  /* [1129] */
    (xdc_Char)0x45,  /* [1130] */
    (xdc_Char)0x4e,  /* [1131] */
    (xdc_Char)0x54,  /* [1132] */
    (xdc_Char)0x5f,  /* [1133] */
    (xdc_Char)0x41,  /* [1134] */
    (xdc_Char)0x43,  /* [1135] */
    (xdc_Char)0x51,  /* [1136] */
    (xdc_Char)0x55,  /* [1137] */
    (xdc_Char)0x49,  /* [1138] */
    (xdc_Char)0x52,  /* [1139] */
    (xdc_Char)0x45,  /* [1140] */
    (xdc_Char)0x44,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x77,  /* [1143] */
    (xdc_Char)0x69,  /* [1144] */
    (xdc_Char)0x74,  /* [1145] */
    (xdc_Char)0x68,  /* [1146] */
    (xdc_Char)0x20,  /* [1147] */
    (xdc_Char)0x74,  /* [1148] */
    (xdc_Char)0x68,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x73,  /* [1151] */
    (xdc_Char)0x20,  /* [1152] */
    (xdc_Char)0x53,  /* [1153] */
    (xdc_Char)0x65,  /* [1154] */
    (xdc_Char)0x6d,  /* [1155] */
    (xdc_Char)0x61,  /* [1156] */
    (xdc_Char)0x70,  /* [1157] */
    (xdc_Char)0x68,  /* [1158] */
    (xdc_Char)0x6f,  /* [1159] */
    (xdc_Char)0x72,  /* [1160] */
    (xdc_Char)0x65,  /* [1161] */
    (xdc_Char)0x2e,  /* [1162] */
    (xdc_Char)0x0,  /* [1163] */
    (xdc_Char)0x41,  /* [1164] */
    (xdc_Char)0x5f,  /* [1165] */
    (xdc_Char)0x6f,  /* [1166] */
    (xdc_Char)0x76,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x72,  /* [1169] */
    (xdc_Char)0x66,  /* [1170] */
    (xdc_Char)0x6c,  /* [1171] */
    (xdc_Char)0x6f,  /* [1172] */
    (xdc_Char)0x77,  /* [1173] */
    (xdc_Char)0x3a,  /* [1174] */
    (xdc_Char)0x20,  /* [1175] */
    (xdc_Char)0x43,  /* [1176] */
    (xdc_Char)0x6f,  /* [1177] */
    (xdc_Char)0x75,  /* [1178] */
    (xdc_Char)0x6e,  /* [1179] */
    (xdc_Char)0x74,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x68,  /* [1182] */
    (xdc_Char)0x61,  /* [1183] */
    (xdc_Char)0x73,  /* [1184] */
    (xdc_Char)0x20,  /* [1185] */
    (xdc_Char)0x65,  /* [1186] */
    (xdc_Char)0x78,  /* [1187] */
    (xdc_Char)0x63,  /* [1188] */
    (xdc_Char)0x65,  /* [1189] */
    (xdc_Char)0x65,  /* [1190] */
    (xdc_Char)0x64,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x64,  /* [1193] */
    (xdc_Char)0x20,  /* [1194] */
    (xdc_Char)0x36,  /* [1195] */
    (xdc_Char)0x35,  /* [1196] */
    (xdc_Char)0x35,  /* [1197] */
    (xdc_Char)0x33,  /* [1198] */
    (xdc_Char)0x35,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x61,  /* [1201] */
    (xdc_Char)0x6e,  /* [1202] */
    (xdc_Char)0x64,  /* [1203] */
    (xdc_Char)0x20,  /* [1204] */
    (xdc_Char)0x72,  /* [1205] */
    (xdc_Char)0x6f,  /* [1206] */
    (xdc_Char)0x6c,  /* [1207] */
    (xdc_Char)0x6c,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x64,  /* [1210] */
    (xdc_Char)0x20,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x76,  /* [1213] */
    (xdc_Char)0x65,  /* [1214] */
    (xdc_Char)0x72,  /* [1215] */
    (xdc_Char)0x2e,  /* [1216] */
    (xdc_Char)0x0,  /* [1217] */
    (xdc_Char)0x41,  /* [1218] */
    (xdc_Char)0x5f,  /* [1219] */
    (xdc_Char)0x70,  /* [1220] */
    (xdc_Char)0x65,  /* [1221] */
    (xdc_Char)0x6e,  /* [1222] */
    (xdc_Char)0x64,  /* [1223] */
    (xdc_Char)0x54,  /* [1224] */
    (xdc_Char)0x61,  /* [1225] */
    (xdc_Char)0x73,  /* [1226] */
    (xdc_Char)0x6b,  /* [1227] */
    (xdc_Char)0x44,  /* [1228] */
    (xdc_Char)0x69,  /* [1229] */
    (xdc_Char)0x73,  /* [1230] */
    (xdc_Char)0x61,  /* [1231] */
    (xdc_Char)0x62,  /* [1232] */
    (xdc_Char)0x6c,  /* [1233] */
    (xdc_Char)0x65,  /* [1234] */
    (xdc_Char)0x64,  /* [1235] */
    (xdc_Char)0x3a,  /* [1236] */
    (xdc_Char)0x20,  /* [1237] */
    (xdc_Char)0x43,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x6e,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x6f,  /* [1242] */
    (xdc_Char)0x74,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x63,  /* [1245] */
    (xdc_Char)0x61,  /* [1246] */
    (xdc_Char)0x6c,  /* [1247] */
    (xdc_Char)0x6c,  /* [1248] */
    (xdc_Char)0x20,  /* [1249] */
    (xdc_Char)0x53,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x6d,  /* [1252] */
    (xdc_Char)0x61,  /* [1253] */
    (xdc_Char)0x70,  /* [1254] */
    (xdc_Char)0x68,  /* [1255] */
    (xdc_Char)0x6f,  /* [1256] */
    (xdc_Char)0x72,  /* [1257] */
    (xdc_Char)0x65,  /* [1258] */
    (xdc_Char)0x5f,  /* [1259] */
    (xdc_Char)0x70,  /* [1260] */
    (xdc_Char)0x65,  /* [1261] */
    (xdc_Char)0x6e,  /* [1262] */
    (xdc_Char)0x64,  /* [1263] */
    (xdc_Char)0x28,  /* [1264] */
    (xdc_Char)0x29,  /* [1265] */
    (xdc_Char)0x20,  /* [1266] */
    (xdc_Char)0x77,  /* [1267] */
    (xdc_Char)0x68,  /* [1268] */
    (xdc_Char)0x69,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x20,  /* [1272] */
    (xdc_Char)0x74,  /* [1273] */
    (xdc_Char)0x68,  /* [1274] */
    (xdc_Char)0x65,  /* [1275] */
    (xdc_Char)0x20,  /* [1276] */
    (xdc_Char)0x54,  /* [1277] */
    (xdc_Char)0x61,  /* [1278] */
    (xdc_Char)0x73,  /* [1279] */
    (xdc_Char)0x6b,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x6f,  /* [1282] */
    (xdc_Char)0x72,  /* [1283] */
    (xdc_Char)0x20,  /* [1284] */
    (xdc_Char)0x53,  /* [1285] */
    (xdc_Char)0x77,  /* [1286] */
    (xdc_Char)0x69,  /* [1287] */
    (xdc_Char)0x20,  /* [1288] */
    (xdc_Char)0x73,  /* [1289] */
    (xdc_Char)0x63,  /* [1290] */
    (xdc_Char)0x68,  /* [1291] */
    (xdc_Char)0x65,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x75,  /* [1294] */
    (xdc_Char)0x6c,  /* [1295] */
    (xdc_Char)0x65,  /* [1296] */
    (xdc_Char)0x72,  /* [1297] */
    (xdc_Char)0x20,  /* [1298] */
    (xdc_Char)0x69,  /* [1299] */
    (xdc_Char)0x73,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x64,  /* [1302] */
    (xdc_Char)0x69,  /* [1303] */
    (xdc_Char)0x73,  /* [1304] */
    (xdc_Char)0x61,  /* [1305] */
    (xdc_Char)0x62,  /* [1306] */
    (xdc_Char)0x6c,  /* [1307] */
    (xdc_Char)0x65,  /* [1308] */
    (xdc_Char)0x64,  /* [1309] */
    (xdc_Char)0x2e,  /* [1310] */
    (xdc_Char)0x0,  /* [1311] */
    (xdc_Char)0x41,  /* [1312] */
    (xdc_Char)0x5f,  /* [1313] */
    (xdc_Char)0x73,  /* [1314] */
    (xdc_Char)0x77,  /* [1315] */
    (xdc_Char)0x69,  /* [1316] */
    (xdc_Char)0x44,  /* [1317] */
    (xdc_Char)0x69,  /* [1318] */
    (xdc_Char)0x73,  /* [1319] */
    (xdc_Char)0x61,  /* [1320] */
    (xdc_Char)0x62,  /* [1321] */
    (xdc_Char)0x6c,  /* [1322] */
    (xdc_Char)0x65,  /* [1323] */
    (xdc_Char)0x64,  /* [1324] */
    (xdc_Char)0x3a,  /* [1325] */
    (xdc_Char)0x20,  /* [1326] */
    (xdc_Char)0x43,  /* [1327] */
    (xdc_Char)0x61,  /* [1328] */
    (xdc_Char)0x6e,  /* [1329] */
    (xdc_Char)0x6e,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x74,  /* [1332] */
    (xdc_Char)0x20,  /* [1333] */
    (xdc_Char)0x63,  /* [1334] */
    (xdc_Char)0x72,  /* [1335] */
    (xdc_Char)0x65,  /* [1336] */
    (xdc_Char)0x61,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x65,  /* [1339] */
    (xdc_Char)0x20,  /* [1340] */
    (xdc_Char)0x61,  /* [1341] */
    (xdc_Char)0x20,  /* [1342] */
    (xdc_Char)0x53,  /* [1343] */
    (xdc_Char)0x77,  /* [1344] */
    (xdc_Char)0x69,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x77,  /* [1347] */
    (xdc_Char)0x68,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x6e,  /* [1350] */
    (xdc_Char)0x20,  /* [1351] */
    (xdc_Char)0x53,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x69,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x69,  /* [1356] */
    (xdc_Char)0x73,  /* [1357] */
    (xdc_Char)0x20,  /* [1358] */
    (xdc_Char)0x64,  /* [1359] */
    (xdc_Char)0x69,  /* [1360] */
    (xdc_Char)0x73,  /* [1361] */
    (xdc_Char)0x61,  /* [1362] */
    (xdc_Char)0x62,  /* [1363] */
    (xdc_Char)0x6c,  /* [1364] */
    (xdc_Char)0x65,  /* [1365] */
    (xdc_Char)0x64,  /* [1366] */
    (xdc_Char)0x2e,  /* [1367] */
    (xdc_Char)0x0,  /* [1368] */
    (xdc_Char)0x41,  /* [1369] */
    (xdc_Char)0x5f,  /* [1370] */
    (xdc_Char)0x62,  /* [1371] */
    (xdc_Char)0x61,  /* [1372] */
    (xdc_Char)0x64,  /* [1373] */
    (xdc_Char)0x50,  /* [1374] */
    (xdc_Char)0x72,  /* [1375] */
    (xdc_Char)0x69,  /* [1376] */
    (xdc_Char)0x6f,  /* [1377] */
    (xdc_Char)0x72,  /* [1378] */
    (xdc_Char)0x69,  /* [1379] */
    (xdc_Char)0x74,  /* [1380] */
    (xdc_Char)0x79,  /* [1381] */
    (xdc_Char)0x3a,  /* [1382] */
    (xdc_Char)0x20,  /* [1383] */
    (xdc_Char)0x41,  /* [1384] */
    (xdc_Char)0x6e,  /* [1385] */
    (xdc_Char)0x20,  /* [1386] */
    (xdc_Char)0x69,  /* [1387] */
    (xdc_Char)0x6e,  /* [1388] */
    (xdc_Char)0x76,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x6c,  /* [1391] */
    (xdc_Char)0x69,  /* [1392] */
    (xdc_Char)0x64,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x53,  /* [1395] */
    (xdc_Char)0x77,  /* [1396] */
    (xdc_Char)0x69,  /* [1397] */
    (xdc_Char)0x20,  /* [1398] */
    (xdc_Char)0x70,  /* [1399] */
    (xdc_Char)0x72,  /* [1400] */
    (xdc_Char)0x69,  /* [1401] */
    (xdc_Char)0x6f,  /* [1402] */
    (xdc_Char)0x72,  /* [1403] */
    (xdc_Char)0x69,  /* [1404] */
    (xdc_Char)0x74,  /* [1405] */
    (xdc_Char)0x79,  /* [1406] */
    (xdc_Char)0x20,  /* [1407] */
    (xdc_Char)0x77,  /* [1408] */
    (xdc_Char)0x61,  /* [1409] */
    (xdc_Char)0x73,  /* [1410] */
    (xdc_Char)0x20,  /* [1411] */
    (xdc_Char)0x75,  /* [1412] */
    (xdc_Char)0x73,  /* [1413] */
    (xdc_Char)0x65,  /* [1414] */
    (xdc_Char)0x64,  /* [1415] */
    (xdc_Char)0x2e,  /* [1416] */
    (xdc_Char)0x0,  /* [1417] */
    (xdc_Char)0x41,  /* [1418] */
    (xdc_Char)0x5f,  /* [1419] */
    (xdc_Char)0x62,  /* [1420] */
    (xdc_Char)0x61,  /* [1421] */
    (xdc_Char)0x64,  /* [1422] */
    (xdc_Char)0x54,  /* [1423] */
    (xdc_Char)0x68,  /* [1424] */
    (xdc_Char)0x72,  /* [1425] */
    (xdc_Char)0x65,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x54,  /* [1429] */
    (xdc_Char)0x79,  /* [1430] */
    (xdc_Char)0x70,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x3a,  /* [1433] */
    (xdc_Char)0x20,  /* [1434] */
    (xdc_Char)0x43,  /* [1435] */
    (xdc_Char)0x61,  /* [1436] */
    (xdc_Char)0x6e,  /* [1437] */
    (xdc_Char)0x6e,  /* [1438] */
    (xdc_Char)0x6f,  /* [1439] */
    (xdc_Char)0x74,  /* [1440] */
    (xdc_Char)0x20,  /* [1441] */
    (xdc_Char)0x63,  /* [1442] */
    (xdc_Char)0x72,  /* [1443] */
    (xdc_Char)0x65,  /* [1444] */
    (xdc_Char)0x61,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x65,  /* [1447] */
    (xdc_Char)0x2f,  /* [1448] */
    (xdc_Char)0x64,  /* [1449] */
    (xdc_Char)0x65,  /* [1450] */
    (xdc_Char)0x6c,  /* [1451] */
    (xdc_Char)0x65,  /* [1452] */
    (xdc_Char)0x74,  /* [1453] */
    (xdc_Char)0x65,  /* [1454] */
    (xdc_Char)0x20,  /* [1455] */
    (xdc_Char)0x61,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x74,  /* [1458] */
    (xdc_Char)0x61,  /* [1459] */
    (xdc_Char)0x73,  /* [1460] */
    (xdc_Char)0x6b,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x66,  /* [1463] */
    (xdc_Char)0x72,  /* [1464] */
    (xdc_Char)0x6f,  /* [1465] */
    (xdc_Char)0x6d,  /* [1466] */
    (xdc_Char)0x20,  /* [1467] */
    (xdc_Char)0x48,  /* [1468] */
    (xdc_Char)0x77,  /* [1469] */
    (xdc_Char)0x69,  /* [1470] */
    (xdc_Char)0x20,  /* [1471] */
    (xdc_Char)0x6f,  /* [1472] */
    (xdc_Char)0x72,  /* [1473] */
    (xdc_Char)0x20,  /* [1474] */
    (xdc_Char)0x53,  /* [1475] */
    (xdc_Char)0x77,  /* [1476] */
    (xdc_Char)0x69,  /* [1477] */
    (xdc_Char)0x20,  /* [1478] */
    (xdc_Char)0x74,  /* [1479] */
    (xdc_Char)0x68,  /* [1480] */
    (xdc_Char)0x72,  /* [1481] */
    (xdc_Char)0x65,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x2e,  /* [1485] */
    (xdc_Char)0x0,  /* [1486] */
    (xdc_Char)0x41,  /* [1487] */
    (xdc_Char)0x5f,  /* [1488] */
    (xdc_Char)0x62,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x64,  /* [1491] */
    (xdc_Char)0x54,  /* [1492] */
    (xdc_Char)0x61,  /* [1493] */
    (xdc_Char)0x73,  /* [1494] */
    (xdc_Char)0x6b,  /* [1495] */
    (xdc_Char)0x53,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x74,  /* [1499] */
    (xdc_Char)0x65,  /* [1500] */
    (xdc_Char)0x3a,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x43,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x27,  /* [1506] */
    (xdc_Char)0x74,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x64,  /* [1509] */
    (xdc_Char)0x65,  /* [1510] */
    (xdc_Char)0x6c,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x74,  /* [1513] */
    (xdc_Char)0x65,  /* [1514] */
    (xdc_Char)0x20,  /* [1515] */
    (xdc_Char)0x61,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x74,  /* [1518] */
    (xdc_Char)0x61,  /* [1519] */
    (xdc_Char)0x73,  /* [1520] */
    (xdc_Char)0x6b,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x69,  /* [1523] */
    (xdc_Char)0x6e,  /* [1524] */
    (xdc_Char)0x20,  /* [1525] */
    (xdc_Char)0x52,  /* [1526] */
    (xdc_Char)0x55,  /* [1527] */
    (xdc_Char)0x4e,  /* [1528] */
    (xdc_Char)0x4e,  /* [1529] */
    (xdc_Char)0x49,  /* [1530] */
    (xdc_Char)0x4e,  /* [1531] */
    (xdc_Char)0x47,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x73,  /* [1534] */
    (xdc_Char)0x74,  /* [1535] */
    (xdc_Char)0x61,  /* [1536] */
    (xdc_Char)0x74,  /* [1537] */
    (xdc_Char)0x65,  /* [1538] */
    (xdc_Char)0x2e,  /* [1539] */
    (xdc_Char)0x0,  /* [1540] */
    (xdc_Char)0x41,  /* [1541] */
    (xdc_Char)0x5f,  /* [1542] */
    (xdc_Char)0x6e,  /* [1543] */
    (xdc_Char)0x6f,  /* [1544] */
    (xdc_Char)0x50,  /* [1545] */
    (xdc_Char)0x65,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x64,  /* [1548] */
    (xdc_Char)0x45,  /* [1549] */
    (xdc_Char)0x6c,  /* [1550] */
    (xdc_Char)0x65,  /* [1551] */
    (xdc_Char)0x6d,  /* [1552] */
    (xdc_Char)0x3a,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x4e,  /* [1555] */
    (xdc_Char)0x6f,  /* [1556] */
    (xdc_Char)0x74,  /* [1557] */
    (xdc_Char)0x20,  /* [1558] */
    (xdc_Char)0x65,  /* [1559] */
    (xdc_Char)0x6e,  /* [1560] */
    (xdc_Char)0x6f,  /* [1561] */
    (xdc_Char)0x75,  /* [1562] */
    (xdc_Char)0x67,  /* [1563] */
    (xdc_Char)0x68,  /* [1564] */
    (xdc_Char)0x20,  /* [1565] */
    (xdc_Char)0x69,  /* [1566] */
    (xdc_Char)0x6e,  /* [1567] */
    (xdc_Char)0x66,  /* [1568] */
    (xdc_Char)0x6f,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x74,  /* [1571] */
    (xdc_Char)0x6f,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x64,  /* [1574] */
    (xdc_Char)0x65,  /* [1575] */
    (xdc_Char)0x6c,  /* [1576] */
    (xdc_Char)0x65,  /* [1577] */
    (xdc_Char)0x74,  /* [1578] */
    (xdc_Char)0x65,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x42,  /* [1581] */
    (xdc_Char)0x4c,  /* [1582] */
    (xdc_Char)0x4f,  /* [1583] */
    (xdc_Char)0x43,  /* [1584] */
    (xdc_Char)0x4b,  /* [1585] */
    (xdc_Char)0x45,  /* [1586] */
    (xdc_Char)0x44,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x74,  /* [1589] */
    (xdc_Char)0x61,  /* [1590] */
    (xdc_Char)0x73,  /* [1591] */
    (xdc_Char)0x6b,  /* [1592] */
    (xdc_Char)0x2e,  /* [1593] */
    (xdc_Char)0x0,  /* [1594] */
    (xdc_Char)0x41,  /* [1595] */
    (xdc_Char)0x5f,  /* [1596] */
    (xdc_Char)0x74,  /* [1597] */
    (xdc_Char)0x61,  /* [1598] */
    (xdc_Char)0x73,  /* [1599] */
    (xdc_Char)0x6b,  /* [1600] */
    (xdc_Char)0x44,  /* [1601] */
    (xdc_Char)0x69,  /* [1602] */
    (xdc_Char)0x73,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x62,  /* [1605] */
    (xdc_Char)0x6c,  /* [1606] */
    (xdc_Char)0x65,  /* [1607] */
    (xdc_Char)0x64,  /* [1608] */
    (xdc_Char)0x3a,  /* [1609] */
    (xdc_Char)0x20,  /* [1610] */
    (xdc_Char)0x43,  /* [1611] */
    (xdc_Char)0x61,  /* [1612] */
    (xdc_Char)0x6e,  /* [1613] */
    (xdc_Char)0x6e,  /* [1614] */
    (xdc_Char)0x6f,  /* [1615] */
    (xdc_Char)0x74,  /* [1616] */
    (xdc_Char)0x20,  /* [1617] */
    (xdc_Char)0x63,  /* [1618] */
    (xdc_Char)0x72,  /* [1619] */
    (xdc_Char)0x65,  /* [1620] */
    (xdc_Char)0x61,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x65,  /* [1623] */
    (xdc_Char)0x20,  /* [1624] */
    (xdc_Char)0x61,  /* [1625] */
    (xdc_Char)0x20,  /* [1626] */
    (xdc_Char)0x74,  /* [1627] */
    (xdc_Char)0x61,  /* [1628] */
    (xdc_Char)0x73,  /* [1629] */
    (xdc_Char)0x6b,  /* [1630] */
    (xdc_Char)0x20,  /* [1631] */
    (xdc_Char)0x77,  /* [1632] */
    (xdc_Char)0x68,  /* [1633] */
    (xdc_Char)0x65,  /* [1634] */
    (xdc_Char)0x6e,  /* [1635] */
    (xdc_Char)0x20,  /* [1636] */
    (xdc_Char)0x74,  /* [1637] */
    (xdc_Char)0x61,  /* [1638] */
    (xdc_Char)0x73,  /* [1639] */
    (xdc_Char)0x6b,  /* [1640] */
    (xdc_Char)0x69,  /* [1641] */
    (xdc_Char)0x6e,  /* [1642] */
    (xdc_Char)0x67,  /* [1643] */
    (xdc_Char)0x20,  /* [1644] */
    (xdc_Char)0x69,  /* [1645] */
    (xdc_Char)0x73,  /* [1646] */
    (xdc_Char)0x20,  /* [1647] */
    (xdc_Char)0x64,  /* [1648] */
    (xdc_Char)0x69,  /* [1649] */
    (xdc_Char)0x73,  /* [1650] */
    (xdc_Char)0x61,  /* [1651] */
    (xdc_Char)0x62,  /* [1652] */
    (xdc_Char)0x6c,  /* [1653] */
    (xdc_Char)0x65,  /* [1654] */
    (xdc_Char)0x64,  /* [1655] */
    (xdc_Char)0x2e,  /* [1656] */
    (xdc_Char)0x0,  /* [1657] */
    (xdc_Char)0x41,  /* [1658] */
    (xdc_Char)0x5f,  /* [1659] */
    (xdc_Char)0x62,  /* [1660] */
    (xdc_Char)0x61,  /* [1661] */
    (xdc_Char)0x64,  /* [1662] */
    (xdc_Char)0x50,  /* [1663] */
    (xdc_Char)0x72,  /* [1664] */
    (xdc_Char)0x69,  /* [1665] */
    (xdc_Char)0x6f,  /* [1666] */
    (xdc_Char)0x72,  /* [1667] */
    (xdc_Char)0x69,  /* [1668] */
    (xdc_Char)0x74,  /* [1669] */
    (xdc_Char)0x79,  /* [1670] */
    (xdc_Char)0x3a,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x41,  /* [1673] */
    (xdc_Char)0x6e,  /* [1674] */
    (xdc_Char)0x20,  /* [1675] */
    (xdc_Char)0x69,  /* [1676] */
    (xdc_Char)0x6e,  /* [1677] */
    (xdc_Char)0x76,  /* [1678] */
    (xdc_Char)0x61,  /* [1679] */
    (xdc_Char)0x6c,  /* [1680] */
    (xdc_Char)0x69,  /* [1681] */
    (xdc_Char)0x64,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x73,  /* [1686] */
    (xdc_Char)0x6b,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x70,  /* [1689] */
    (xdc_Char)0x72,  /* [1690] */
    (xdc_Char)0x69,  /* [1691] */
    (xdc_Char)0x6f,  /* [1692] */
    (xdc_Char)0x72,  /* [1693] */
    (xdc_Char)0x69,  /* [1694] */
    (xdc_Char)0x74,  /* [1695] */
    (xdc_Char)0x79,  /* [1696] */
    (xdc_Char)0x20,  /* [1697] */
    (xdc_Char)0x77,  /* [1698] */
    (xdc_Char)0x61,  /* [1699] */
    (xdc_Char)0x73,  /* [1700] */
    (xdc_Char)0x20,  /* [1701] */
    (xdc_Char)0x75,  /* [1702] */
    (xdc_Char)0x73,  /* [1703] */
    (xdc_Char)0x65,  /* [1704] */
    (xdc_Char)0x64,  /* [1705] */
    (xdc_Char)0x2e,  /* [1706] */
    (xdc_Char)0x0,  /* [1707] */
    (xdc_Char)0x41,  /* [1708] */
    (xdc_Char)0x5f,  /* [1709] */
    (xdc_Char)0x62,  /* [1710] */
    (xdc_Char)0x61,  /* [1711] */
    (xdc_Char)0x64,  /* [1712] */
    (xdc_Char)0x54,  /* [1713] */
    (xdc_Char)0x69,  /* [1714] */
    (xdc_Char)0x6d,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x6f,  /* [1717] */
    (xdc_Char)0x75,  /* [1718] */
    (xdc_Char)0x74,  /* [1719] */
    (xdc_Char)0x3a,  /* [1720] */
    (xdc_Char)0x20,  /* [1721] */
    (xdc_Char)0x43,  /* [1722] */
    (xdc_Char)0x61,  /* [1723] */
    (xdc_Char)0x6e,  /* [1724] */
    (xdc_Char)0x27,  /* [1725] */
    (xdc_Char)0x74,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x73,  /* [1728] */
    (xdc_Char)0x6c,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x70,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x46,  /* [1734] */
    (xdc_Char)0x4f,  /* [1735] */
    (xdc_Char)0x52,  /* [1736] */
    (xdc_Char)0x45,  /* [1737] */
    (xdc_Char)0x56,  /* [1738] */
    (xdc_Char)0x45,  /* [1739] */
    (xdc_Char)0x52,  /* [1740] */
    (xdc_Char)0x2e,  /* [1741] */
    (xdc_Char)0x0,  /* [1742] */
    (xdc_Char)0x41,  /* [1743] */
    (xdc_Char)0x5f,  /* [1744] */
    (xdc_Char)0x62,  /* [1745] */
    (xdc_Char)0x61,  /* [1746] */
    (xdc_Char)0x64,  /* [1747] */
    (xdc_Char)0x41,  /* [1748] */
    (xdc_Char)0x66,  /* [1749] */
    (xdc_Char)0x66,  /* [1750] */
    (xdc_Char)0x69,  /* [1751] */
    (xdc_Char)0x6e,  /* [1752] */
    (xdc_Char)0x69,  /* [1753] */
    (xdc_Char)0x74,  /* [1754] */
    (xdc_Char)0x79,  /* [1755] */
    (xdc_Char)0x3a,  /* [1756] */
    (xdc_Char)0x20,  /* [1757] */
    (xdc_Char)0x49,  /* [1758] */
    (xdc_Char)0x6e,  /* [1759] */
    (xdc_Char)0x76,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x6c,  /* [1762] */
    (xdc_Char)0x69,  /* [1763] */
    (xdc_Char)0x64,  /* [1764] */
    (xdc_Char)0x20,  /* [1765] */
    (xdc_Char)0x61,  /* [1766] */
    (xdc_Char)0x66,  /* [1767] */
    (xdc_Char)0x66,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x6e,  /* [1770] */
    (xdc_Char)0x69,  /* [1771] */
    (xdc_Char)0x74,  /* [1772] */
    (xdc_Char)0x79,  /* [1773] */
    (xdc_Char)0x2e,  /* [1774] */
    (xdc_Char)0x0,  /* [1775] */
    (xdc_Char)0x41,  /* [1776] */
    (xdc_Char)0x5f,  /* [1777] */
    (xdc_Char)0x73,  /* [1778] */
    (xdc_Char)0x6c,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x65,  /* [1781] */
    (xdc_Char)0x70,  /* [1782] */
    (xdc_Char)0x54,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x73,  /* [1785] */
    (xdc_Char)0x6b,  /* [1786] */
    (xdc_Char)0x44,  /* [1787] */
    (xdc_Char)0x69,  /* [1788] */
    (xdc_Char)0x73,  /* [1789] */
    (xdc_Char)0x61,  /* [1790] */
    (xdc_Char)0x62,  /* [1791] */
    (xdc_Char)0x6c,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x64,  /* [1794] */
    (xdc_Char)0x3a,  /* [1795] */
    (xdc_Char)0x20,  /* [1796] */
    (xdc_Char)0x43,  /* [1797] */
    (xdc_Char)0x61,  /* [1798] */
    (xdc_Char)0x6e,  /* [1799] */
    (xdc_Char)0x6e,  /* [1800] */
    (xdc_Char)0x6f,  /* [1801] */
    (xdc_Char)0x74,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x63,  /* [1804] */
    (xdc_Char)0x61,  /* [1805] */
    (xdc_Char)0x6c,  /* [1806] */
    (xdc_Char)0x6c,  /* [1807] */
    (xdc_Char)0x20,  /* [1808] */
    (xdc_Char)0x54,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x73,  /* [1811] */
    (xdc_Char)0x6b,  /* [1812] */
    (xdc_Char)0x5f,  /* [1813] */
    (xdc_Char)0x73,  /* [1814] */
    (xdc_Char)0x6c,  /* [1815] */
    (xdc_Char)0x65,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x70,  /* [1818] */
    (xdc_Char)0x28,  /* [1819] */
    (xdc_Char)0x29,  /* [1820] */
    (xdc_Char)0x20,  /* [1821] */
    (xdc_Char)0x77,  /* [1822] */
    (xdc_Char)0x68,  /* [1823] */
    (xdc_Char)0x69,  /* [1824] */
    (xdc_Char)0x6c,  /* [1825] */
    (xdc_Char)0x65,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x74,  /* [1828] */
    (xdc_Char)0x68,  /* [1829] */
    (xdc_Char)0x65,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x54,  /* [1832] */
    (xdc_Char)0x61,  /* [1833] */
    (xdc_Char)0x73,  /* [1834] */
    (xdc_Char)0x6b,  /* [1835] */
    (xdc_Char)0x20,  /* [1836] */
    (xdc_Char)0x73,  /* [1837] */
    (xdc_Char)0x63,  /* [1838] */
    (xdc_Char)0x68,  /* [1839] */
    (xdc_Char)0x65,  /* [1840] */
    (xdc_Char)0x64,  /* [1841] */
    (xdc_Char)0x75,  /* [1842] */
    (xdc_Char)0x6c,  /* [1843] */
    (xdc_Char)0x65,  /* [1844] */
    (xdc_Char)0x72,  /* [1845] */
    (xdc_Char)0x20,  /* [1846] */
    (xdc_Char)0x69,  /* [1847] */
    (xdc_Char)0x73,  /* [1848] */
    (xdc_Char)0x20,  /* [1849] */
    (xdc_Char)0x64,  /* [1850] */
    (xdc_Char)0x69,  /* [1851] */
    (xdc_Char)0x73,  /* [1852] */
    (xdc_Char)0x61,  /* [1853] */
    (xdc_Char)0x62,  /* [1854] */
    (xdc_Char)0x6c,  /* [1855] */
    (xdc_Char)0x65,  /* [1856] */
    (xdc_Char)0x64,  /* [1857] */
    (xdc_Char)0x2e,  /* [1858] */
    (xdc_Char)0x0,  /* [1859] */
    (xdc_Char)0x41,  /* [1860] */
    (xdc_Char)0x5f,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6e,  /* [1863] */
    (xdc_Char)0x76,  /* [1864] */
    (xdc_Char)0x61,  /* [1865] */
    (xdc_Char)0x6c,  /* [1866] */
    (xdc_Char)0x69,  /* [1867] */
    (xdc_Char)0x64,  /* [1868] */
    (xdc_Char)0x43,  /* [1869] */
    (xdc_Char)0x6f,  /* [1870] */
    (xdc_Char)0x72,  /* [1871] */
    (xdc_Char)0x65,  /* [1872] */
    (xdc_Char)0x49,  /* [1873] */
    (xdc_Char)0x64,  /* [1874] */
    (xdc_Char)0x3a,  /* [1875] */
    (xdc_Char)0x20,  /* [1876] */
    (xdc_Char)0x43,  /* [1877] */
    (xdc_Char)0x61,  /* [1878] */
    (xdc_Char)0x6e,  /* [1879] */
    (xdc_Char)0x6e,  /* [1880] */
    (xdc_Char)0x6f,  /* [1881] */
    (xdc_Char)0x74,  /* [1882] */
    (xdc_Char)0x20,  /* [1883] */
    (xdc_Char)0x70,  /* [1884] */
    (xdc_Char)0x61,  /* [1885] */
    (xdc_Char)0x73,  /* [1886] */
    (xdc_Char)0x73,  /* [1887] */
    (xdc_Char)0x20,  /* [1888] */
    (xdc_Char)0x61,  /* [1889] */
    (xdc_Char)0x20,  /* [1890] */
    (xdc_Char)0x6e,  /* [1891] */
    (xdc_Char)0x6f,  /* [1892] */
    (xdc_Char)0x6e,  /* [1893] */
    (xdc_Char)0x2d,  /* [1894] */
    (xdc_Char)0x7a,  /* [1895] */
    (xdc_Char)0x65,  /* [1896] */
    (xdc_Char)0x72,  /* [1897] */
    (xdc_Char)0x6f,  /* [1898] */
    (xdc_Char)0x20,  /* [1899] */
    (xdc_Char)0x43,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x72,  /* [1902] */
    (xdc_Char)0x65,  /* [1903] */
    (xdc_Char)0x49,  /* [1904] */
    (xdc_Char)0x64,  /* [1905] */
    (xdc_Char)0x20,  /* [1906] */
    (xdc_Char)0x69,  /* [1907] */
    (xdc_Char)0x6e,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x61,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x6e,  /* [1912] */
    (xdc_Char)0x6f,  /* [1913] */
    (xdc_Char)0x6e,  /* [1914] */
    (xdc_Char)0x2d,  /* [1915] */
    (xdc_Char)0x53,  /* [1916] */
    (xdc_Char)0x4d,  /* [1917] */
    (xdc_Char)0x50,  /* [1918] */
    (xdc_Char)0x20,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x70,  /* [1921] */
    (xdc_Char)0x70,  /* [1922] */
    (xdc_Char)0x6c,  /* [1923] */
    (xdc_Char)0x69,  /* [1924] */
    (xdc_Char)0x63,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x74,  /* [1927] */
    (xdc_Char)0x69,  /* [1928] */
    (xdc_Char)0x6f,  /* [1929] */
    (xdc_Char)0x6e,  /* [1930] */
    (xdc_Char)0x2e,  /* [1931] */
    (xdc_Char)0x0,  /* [1932] */
    (xdc_Char)0x41,  /* [1933] */
    (xdc_Char)0x5f,  /* [1934] */
    (xdc_Char)0x75,  /* [1935] */
    (xdc_Char)0x6e,  /* [1936] */
    (xdc_Char)0x73,  /* [1937] */
    (xdc_Char)0x75,  /* [1938] */
    (xdc_Char)0x70,  /* [1939] */
    (xdc_Char)0x70,  /* [1940] */
    (xdc_Char)0x6f,  /* [1941] */
    (xdc_Char)0x72,  /* [1942] */
    (xdc_Char)0x74,  /* [1943] */
    (xdc_Char)0x65,  /* [1944] */
    (xdc_Char)0x64,  /* [1945] */
    (xdc_Char)0x4d,  /* [1946] */
    (xdc_Char)0x61,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x6b,  /* [1949] */
    (xdc_Char)0x69,  /* [1950] */
    (xdc_Char)0x6e,  /* [1951] */
    (xdc_Char)0x67,  /* [1952] */
    (xdc_Char)0x4f,  /* [1953] */
    (xdc_Char)0x70,  /* [1954] */
    (xdc_Char)0x74,  /* [1955] */
    (xdc_Char)0x69,  /* [1956] */
    (xdc_Char)0x6f,  /* [1957] */
    (xdc_Char)0x6e,  /* [1958] */
    (xdc_Char)0x3a,  /* [1959] */
    (xdc_Char)0x20,  /* [1960] */
    (xdc_Char)0x75,  /* [1961] */
    (xdc_Char)0x6e,  /* [1962] */
    (xdc_Char)0x73,  /* [1963] */
    (xdc_Char)0x75,  /* [1964] */
    (xdc_Char)0x70,  /* [1965] */
    (xdc_Char)0x70,  /* [1966] */
    (xdc_Char)0x6f,  /* [1967] */
    (xdc_Char)0x72,  /* [1968] */
    (xdc_Char)0x74,  /* [1969] */
    (xdc_Char)0x65,  /* [1970] */
    (xdc_Char)0x64,  /* [1971] */
    (xdc_Char)0x20,  /* [1972] */
    (xdc_Char)0x6d,  /* [1973] */
    (xdc_Char)0x61,  /* [1974] */
    (xdc_Char)0x73,  /* [1975] */
    (xdc_Char)0x6b,  /* [1976] */
    (xdc_Char)0x53,  /* [1977] */
    (xdc_Char)0x65,  /* [1978] */
    (xdc_Char)0x74,  /* [1979] */
    (xdc_Char)0x74,  /* [1980] */
    (xdc_Char)0x69,  /* [1981] */
    (xdc_Char)0x6e,  /* [1982] */
    (xdc_Char)0x67,  /* [1983] */
    (xdc_Char)0x2e,  /* [1984] */
    (xdc_Char)0x0,  /* [1985] */
    (xdc_Char)0x41,  /* [1986] */
    (xdc_Char)0x5f,  /* [1987] */
    (xdc_Char)0x7a,  /* [1988] */
    (xdc_Char)0x65,  /* [1989] */
    (xdc_Char)0x72,  /* [1990] */
    (xdc_Char)0x6f,  /* [1991] */
    (xdc_Char)0x54,  /* [1992] */
    (xdc_Char)0x69,  /* [1993] */
    (xdc_Char)0x6d,  /* [1994] */
    (xdc_Char)0x65,  /* [1995] */
    (xdc_Char)0x6f,  /* [1996] */
    (xdc_Char)0x75,  /* [1997] */
    (xdc_Char)0x74,  /* [1998] */
    (xdc_Char)0x3a,  /* [1999] */
    (xdc_Char)0x20,  /* [2000] */
    (xdc_Char)0x54,  /* [2001] */
    (xdc_Char)0x69,  /* [2002] */
    (xdc_Char)0x6d,  /* [2003] */
    (xdc_Char)0x65,  /* [2004] */
    (xdc_Char)0x6f,  /* [2005] */
    (xdc_Char)0x75,  /* [2006] */
    (xdc_Char)0x74,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x76,  /* [2009] */
    (xdc_Char)0x61,  /* [2010] */
    (xdc_Char)0x6c,  /* [2011] */
    (xdc_Char)0x75,  /* [2012] */
    (xdc_Char)0x65,  /* [2013] */
    (xdc_Char)0x20,  /* [2014] */
    (xdc_Char)0x61,  /* [2015] */
    (xdc_Char)0x6e,  /* [2016] */
    (xdc_Char)0x6e,  /* [2017] */
    (xdc_Char)0x6f,  /* [2018] */
    (xdc_Char)0x74,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x62,  /* [2021] */
    (xdc_Char)0x65,  /* [2022] */
    (xdc_Char)0x20,  /* [2023] */
    (xdc_Char)0x7a,  /* [2024] */
    (xdc_Char)0x65,  /* [2025] */
    (xdc_Char)0x72,  /* [2026] */
    (xdc_Char)0x6f,  /* [2027] */
    (xdc_Char)0x0,  /* [2028] */
    (xdc_Char)0x41,  /* [2029] */
    (xdc_Char)0x5f,  /* [2030] */
    (xdc_Char)0x69,  /* [2031] */
    (xdc_Char)0x6e,  /* [2032] */
    (xdc_Char)0x76,  /* [2033] */
    (xdc_Char)0x61,  /* [2034] */
    (xdc_Char)0x6c,  /* [2035] */
    (xdc_Char)0x69,  /* [2036] */
    (xdc_Char)0x64,  /* [2037] */
    (xdc_Char)0x4b,  /* [2038] */
    (xdc_Char)0x65,  /* [2039] */
    (xdc_Char)0x79,  /* [2040] */
    (xdc_Char)0x3a,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x74,  /* [2043] */
    (xdc_Char)0x68,  /* [2044] */
    (xdc_Char)0x65,  /* [2045] */
    (xdc_Char)0x20,  /* [2046] */
    (xdc_Char)0x6b,  /* [2047] */
    (xdc_Char)0x65,  /* [2048] */
    (xdc_Char)0x79,  /* [2049] */
    (xdc_Char)0x20,  /* [2050] */
    (xdc_Char)0x6d,  /* [2051] */
    (xdc_Char)0x75,  /* [2052] */
    (xdc_Char)0x73,  /* [2053] */
    (xdc_Char)0x74,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x62,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x73,  /* [2059] */
    (xdc_Char)0x65,  /* [2060] */
    (xdc_Char)0x74,  /* [2061] */
    (xdc_Char)0x20,  /* [2062] */
    (xdc_Char)0x74,  /* [2063] */
    (xdc_Char)0x6f,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x61,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x6e,  /* [2068] */
    (xdc_Char)0x6f,  /* [2069] */
    (xdc_Char)0x6e,  /* [2070] */
    (xdc_Char)0x2d,  /* [2071] */
    (xdc_Char)0x64,  /* [2072] */
    (xdc_Char)0x65,  /* [2073] */
    (xdc_Char)0x66,  /* [2074] */
    (xdc_Char)0x61,  /* [2075] */
    (xdc_Char)0x75,  /* [2076] */
    (xdc_Char)0x6c,  /* [2077] */
    (xdc_Char)0x74,  /* [2078] */
    (xdc_Char)0x20,  /* [2079] */
    (xdc_Char)0x76,  /* [2080] */
    (xdc_Char)0x61,  /* [2081] */
    (xdc_Char)0x6c,  /* [2082] */
    (xdc_Char)0x75,  /* [2083] */
    (xdc_Char)0x65,  /* [2084] */
    (xdc_Char)0x0,  /* [2085] */
    (xdc_Char)0x41,  /* [2086] */
    (xdc_Char)0x5f,  /* [2087] */
    (xdc_Char)0x62,  /* [2088] */
    (xdc_Char)0x61,  /* [2089] */
    (xdc_Char)0x64,  /* [2090] */
    (xdc_Char)0x43,  /* [2091] */
    (xdc_Char)0x6f,  /* [2092] */
    (xdc_Char)0x6e,  /* [2093] */
    (xdc_Char)0x74,  /* [2094] */
    (xdc_Char)0x65,  /* [2095] */
    (xdc_Char)0x78,  /* [2096] */
    (xdc_Char)0x74,  /* [2097] */
    (xdc_Char)0x3a,  /* [2098] */
    (xdc_Char)0x20,  /* [2099] */
    (xdc_Char)0x62,  /* [2100] */
    (xdc_Char)0x61,  /* [2101] */
    (xdc_Char)0x64,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x63,  /* [2104] */
    (xdc_Char)0x61,  /* [2105] */
    (xdc_Char)0x6c,  /* [2106] */
    (xdc_Char)0x6c,  /* [2107] */
    (xdc_Char)0x69,  /* [2108] */
    (xdc_Char)0x6e,  /* [2109] */
    (xdc_Char)0x67,  /* [2110] */
    (xdc_Char)0x20,  /* [2111] */
    (xdc_Char)0x63,  /* [2112] */
    (xdc_Char)0x6f,  /* [2113] */
    (xdc_Char)0x6e,  /* [2114] */
    (xdc_Char)0x74,  /* [2115] */
    (xdc_Char)0x65,  /* [2116] */
    (xdc_Char)0x78,  /* [2117] */
    (xdc_Char)0x74,  /* [2118] */
    (xdc_Char)0x2e,  /* [2119] */
    (xdc_Char)0x20,  /* [2120] */
    (xdc_Char)0x4d,  /* [2121] */
    (xdc_Char)0x61,  /* [2122] */
    (xdc_Char)0x79,  /* [2123] */
    (xdc_Char)0x20,  /* [2124] */
    (xdc_Char)0x6e,  /* [2125] */
    (xdc_Char)0x6f,  /* [2126] */
    (xdc_Char)0x74,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x62,  /* [2129] */
    (xdc_Char)0x65,  /* [2130] */
    (xdc_Char)0x20,  /* [2131] */
    (xdc_Char)0x65,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x74,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x72,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x64,  /* [2138] */
    (xdc_Char)0x20,  /* [2139] */
    (xdc_Char)0x66,  /* [2140] */
    (xdc_Char)0x72,  /* [2141] */
    (xdc_Char)0x6f,  /* [2142] */
    (xdc_Char)0x6d,  /* [2143] */
    (xdc_Char)0x20,  /* [2144] */
    (xdc_Char)0x61,  /* [2145] */
    (xdc_Char)0x20,  /* [2146] */
    (xdc_Char)0x68,  /* [2147] */
    (xdc_Char)0x61,  /* [2148] */
    (xdc_Char)0x72,  /* [2149] */
    (xdc_Char)0x64,  /* [2150] */
    (xdc_Char)0x77,  /* [2151] */
    (xdc_Char)0x61,  /* [2152] */
    (xdc_Char)0x72,  /* [2153] */
    (xdc_Char)0x65,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x69,  /* [2156] */
    (xdc_Char)0x6e,  /* [2157] */
    (xdc_Char)0x74,  /* [2158] */
    (xdc_Char)0x65,  /* [2159] */
    (xdc_Char)0x72,  /* [2160] */
    (xdc_Char)0x72,  /* [2161] */
    (xdc_Char)0x75,  /* [2162] */
    (xdc_Char)0x70,  /* [2163] */
    (xdc_Char)0x74,  /* [2164] */
    (xdc_Char)0x20,  /* [2165] */
    (xdc_Char)0x74,  /* [2166] */
    (xdc_Char)0x68,  /* [2167] */
    (xdc_Char)0x72,  /* [2168] */
    (xdc_Char)0x65,  /* [2169] */
    (xdc_Char)0x61,  /* [2170] */
    (xdc_Char)0x64,  /* [2171] */
    (xdc_Char)0x2e,  /* [2172] */
    (xdc_Char)0x0,  /* [2173] */
    (xdc_Char)0x41,  /* [2174] */
    (xdc_Char)0x5f,  /* [2175] */
    (xdc_Char)0x62,  /* [2176] */
    (xdc_Char)0x61,  /* [2177] */
    (xdc_Char)0x64,  /* [2178] */
    (xdc_Char)0x43,  /* [2179] */
    (xdc_Char)0x6f,  /* [2180] */
    (xdc_Char)0x6e,  /* [2181] */
    (xdc_Char)0x74,  /* [2182] */
    (xdc_Char)0x65,  /* [2183] */
    (xdc_Char)0x78,  /* [2184] */
    (xdc_Char)0x74,  /* [2185] */
    (xdc_Char)0x3a,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x62,  /* [2188] */
    (xdc_Char)0x61,  /* [2189] */
    (xdc_Char)0x64,  /* [2190] */
    (xdc_Char)0x20,  /* [2191] */
    (xdc_Char)0x63,  /* [2192] */
    (xdc_Char)0x61,  /* [2193] */
    (xdc_Char)0x6c,  /* [2194] */
    (xdc_Char)0x6c,  /* [2195] */
    (xdc_Char)0x69,  /* [2196] */
    (xdc_Char)0x6e,  /* [2197] */
    (xdc_Char)0x67,  /* [2198] */
    (xdc_Char)0x20,  /* [2199] */
    (xdc_Char)0x63,  /* [2200] */
    (xdc_Char)0x6f,  /* [2201] */
    (xdc_Char)0x6e,  /* [2202] */
    (xdc_Char)0x74,  /* [2203] */
    (xdc_Char)0x65,  /* [2204] */
    (xdc_Char)0x78,  /* [2205] */
    (xdc_Char)0x74,  /* [2206] */
    (xdc_Char)0x2e,  /* [2207] */
    (xdc_Char)0x20,  /* [2208] */
    (xdc_Char)0x4d,  /* [2209] */
    (xdc_Char)0x61,  /* [2210] */
    (xdc_Char)0x79,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x6e,  /* [2213] */
    (xdc_Char)0x6f,  /* [2214] */
    (xdc_Char)0x74,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x62,  /* [2217] */
    (xdc_Char)0x65,  /* [2218] */
    (xdc_Char)0x20,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x6e,  /* [2221] */
    (xdc_Char)0x74,  /* [2222] */
    (xdc_Char)0x65,  /* [2223] */
    (xdc_Char)0x72,  /* [2224] */
    (xdc_Char)0x65,  /* [2225] */
    (xdc_Char)0x64,  /* [2226] */
    (xdc_Char)0x20,  /* [2227] */
    (xdc_Char)0x66,  /* [2228] */
    (xdc_Char)0x72,  /* [2229] */
    (xdc_Char)0x6f,  /* [2230] */
    (xdc_Char)0x6d,  /* [2231] */
    (xdc_Char)0x20,  /* [2232] */
    (xdc_Char)0x61,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x73,  /* [2235] */
    (xdc_Char)0x6f,  /* [2236] */
    (xdc_Char)0x66,  /* [2237] */
    (xdc_Char)0x74,  /* [2238] */
    (xdc_Char)0x77,  /* [2239] */
    (xdc_Char)0x61,  /* [2240] */
    (xdc_Char)0x72,  /* [2241] */
    (xdc_Char)0x65,  /* [2242] */
    (xdc_Char)0x20,  /* [2243] */
    (xdc_Char)0x6f,  /* [2244] */
    (xdc_Char)0x72,  /* [2245] */
    (xdc_Char)0x20,  /* [2246] */
    (xdc_Char)0x68,  /* [2247] */
    (xdc_Char)0x61,  /* [2248] */
    (xdc_Char)0x72,  /* [2249] */
    (xdc_Char)0x64,  /* [2250] */
    (xdc_Char)0x77,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x72,  /* [2253] */
    (xdc_Char)0x65,  /* [2254] */
    (xdc_Char)0x20,  /* [2255] */
    (xdc_Char)0x69,  /* [2256] */
    (xdc_Char)0x6e,  /* [2257] */
    (xdc_Char)0x74,  /* [2258] */
    (xdc_Char)0x65,  /* [2259] */
    (xdc_Char)0x72,  /* [2260] */
    (xdc_Char)0x72,  /* [2261] */
    (xdc_Char)0x75,  /* [2262] */
    (xdc_Char)0x70,  /* [2263] */
    (xdc_Char)0x74,  /* [2264] */
    (xdc_Char)0x20,  /* [2265] */
    (xdc_Char)0x74,  /* [2266] */
    (xdc_Char)0x68,  /* [2267] */
    (xdc_Char)0x72,  /* [2268] */
    (xdc_Char)0x65,  /* [2269] */
    (xdc_Char)0x61,  /* [2270] */
    (xdc_Char)0x64,  /* [2271] */
    (xdc_Char)0x2e,  /* [2272] */
    (xdc_Char)0x0,  /* [2273] */
    (xdc_Char)0x41,  /* [2274] */
    (xdc_Char)0x5f,  /* [2275] */
    (xdc_Char)0x62,  /* [2276] */
    (xdc_Char)0x61,  /* [2277] */
    (xdc_Char)0x64,  /* [2278] */
    (xdc_Char)0x43,  /* [2279] */
    (xdc_Char)0x6f,  /* [2280] */
    (xdc_Char)0x6e,  /* [2281] */
    (xdc_Char)0x74,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x78,  /* [2284] */
    (xdc_Char)0x74,  /* [2285] */
    (xdc_Char)0x3a,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x62,  /* [2288] */
    (xdc_Char)0x61,  /* [2289] */
    (xdc_Char)0x64,  /* [2290] */
    (xdc_Char)0x20,  /* [2291] */
    (xdc_Char)0x63,  /* [2292] */
    (xdc_Char)0x61,  /* [2293] */
    (xdc_Char)0x6c,  /* [2294] */
    (xdc_Char)0x6c,  /* [2295] */
    (xdc_Char)0x69,  /* [2296] */
    (xdc_Char)0x6e,  /* [2297] */
    (xdc_Char)0x67,  /* [2298] */
    (xdc_Char)0x20,  /* [2299] */
    (xdc_Char)0x63,  /* [2300] */
    (xdc_Char)0x6f,  /* [2301] */
    (xdc_Char)0x6e,  /* [2302] */
    (xdc_Char)0x74,  /* [2303] */
    (xdc_Char)0x65,  /* [2304] */
    (xdc_Char)0x78,  /* [2305] */
    (xdc_Char)0x74,  /* [2306] */
    (xdc_Char)0x2e,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x53,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x20,  /* [2312] */
    (xdc_Char)0x47,  /* [2313] */
    (xdc_Char)0x61,  /* [2314] */
    (xdc_Char)0x74,  /* [2315] */
    (xdc_Char)0x65,  /* [2316] */
    (xdc_Char)0x4d,  /* [2317] */
    (xdc_Char)0x75,  /* [2318] */
    (xdc_Char)0x74,  /* [2319] */
    (xdc_Char)0x65,  /* [2320] */
    (xdc_Char)0x78,  /* [2321] */
    (xdc_Char)0x50,  /* [2322] */
    (xdc_Char)0x72,  /* [2323] */
    (xdc_Char)0x69,  /* [2324] */
    (xdc_Char)0x20,  /* [2325] */
    (xdc_Char)0x41,  /* [2326] */
    (xdc_Char)0x50,  /* [2327] */
    (xdc_Char)0x49,  /* [2328] */
    (xdc_Char)0x20,  /* [2329] */
    (xdc_Char)0x64,  /* [2330] */
    (xdc_Char)0x6f,  /* [2331] */
    (xdc_Char)0x63,  /* [2332] */
    (xdc_Char)0x20,  /* [2333] */
    (xdc_Char)0x66,  /* [2334] */
    (xdc_Char)0x6f,  /* [2335] */
    (xdc_Char)0x72,  /* [2336] */
    (xdc_Char)0x20,  /* [2337] */
    (xdc_Char)0x64,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x74,  /* [2340] */
    (xdc_Char)0x61,  /* [2341] */
    (xdc_Char)0x69,  /* [2342] */
    (xdc_Char)0x6c,  /* [2343] */
    (xdc_Char)0x73,  /* [2344] */
    (xdc_Char)0x2e,  /* [2345] */
    (xdc_Char)0x0,  /* [2346] */
    (xdc_Char)0x41,  /* [2347] */
    (xdc_Char)0x5f,  /* [2348] */
    (xdc_Char)0x65,  /* [2349] */
    (xdc_Char)0x6e,  /* [2350] */
    (xdc_Char)0x74,  /* [2351] */
    (xdc_Char)0x65,  /* [2352] */
    (xdc_Char)0x72,  /* [2353] */
    (xdc_Char)0x54,  /* [2354] */
    (xdc_Char)0x61,  /* [2355] */
    (xdc_Char)0x73,  /* [2356] */
    (xdc_Char)0x6b,  /* [2357] */
    (xdc_Char)0x44,  /* [2358] */
    (xdc_Char)0x69,  /* [2359] */
    (xdc_Char)0x73,  /* [2360] */
    (xdc_Char)0x61,  /* [2361] */
    (xdc_Char)0x62,  /* [2362] */
    (xdc_Char)0x6c,  /* [2363] */
    (xdc_Char)0x65,  /* [2364] */
    (xdc_Char)0x64,  /* [2365] */
    (xdc_Char)0x3a,  /* [2366] */
    (xdc_Char)0x20,  /* [2367] */
    (xdc_Char)0x43,  /* [2368] */
    (xdc_Char)0x61,  /* [2369] */
    (xdc_Char)0x6e,  /* [2370] */
    (xdc_Char)0x6e,  /* [2371] */
    (xdc_Char)0x6f,  /* [2372] */
    (xdc_Char)0x74,  /* [2373] */
    (xdc_Char)0x20,  /* [2374] */
    (xdc_Char)0x63,  /* [2375] */
    (xdc_Char)0x61,  /* [2376] */
    (xdc_Char)0x6c,  /* [2377] */
    (xdc_Char)0x6c,  /* [2378] */
    (xdc_Char)0x20,  /* [2379] */
    (xdc_Char)0x47,  /* [2380] */
    (xdc_Char)0x61,  /* [2381] */
    (xdc_Char)0x74,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x4d,  /* [2384] */
    (xdc_Char)0x75,  /* [2385] */
    (xdc_Char)0x74,  /* [2386] */
    (xdc_Char)0x65,  /* [2387] */
    (xdc_Char)0x78,  /* [2388] */
    (xdc_Char)0x50,  /* [2389] */
    (xdc_Char)0x72,  /* [2390] */
    (xdc_Char)0x69,  /* [2391] */
    (xdc_Char)0x5f,  /* [2392] */
    (xdc_Char)0x65,  /* [2393] */
    (xdc_Char)0x6e,  /* [2394] */
    (xdc_Char)0x74,  /* [2395] */
    (xdc_Char)0x65,  /* [2396] */
    (xdc_Char)0x72,  /* [2397] */
    (xdc_Char)0x28,  /* [2398] */
    (xdc_Char)0x29,  /* [2399] */
    (xdc_Char)0x20,  /* [2400] */
    (xdc_Char)0x77,  /* [2401] */
    (xdc_Char)0x68,  /* [2402] */
    (xdc_Char)0x69,  /* [2403] */
    (xdc_Char)0x6c,  /* [2404] */
    (xdc_Char)0x65,  /* [2405] */
    (xdc_Char)0x20,  /* [2406] */
    (xdc_Char)0x74,  /* [2407] */
    (xdc_Char)0x68,  /* [2408] */
    (xdc_Char)0x65,  /* [2409] */
    (xdc_Char)0x20,  /* [2410] */
    (xdc_Char)0x54,  /* [2411] */
    (xdc_Char)0x61,  /* [2412] */
    (xdc_Char)0x73,  /* [2413] */
    (xdc_Char)0x6b,  /* [2414] */
    (xdc_Char)0x20,  /* [2415] */
    (xdc_Char)0x6f,  /* [2416] */
    (xdc_Char)0x72,  /* [2417] */
    (xdc_Char)0x20,  /* [2418] */
    (xdc_Char)0x53,  /* [2419] */
    (xdc_Char)0x77,  /* [2420] */
    (xdc_Char)0x69,  /* [2421] */
    (xdc_Char)0x20,  /* [2422] */
    (xdc_Char)0x73,  /* [2423] */
    (xdc_Char)0x63,  /* [2424] */
    (xdc_Char)0x68,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x64,  /* [2427] */
    (xdc_Char)0x75,  /* [2428] */
    (xdc_Char)0x6c,  /* [2429] */
    (xdc_Char)0x65,  /* [2430] */
    (xdc_Char)0x72,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x69,  /* [2433] */
    (xdc_Char)0x73,  /* [2434] */
    (xdc_Char)0x20,  /* [2435] */
    (xdc_Char)0x64,  /* [2436] */
    (xdc_Char)0x69,  /* [2437] */
    (xdc_Char)0x73,  /* [2438] */
    (xdc_Char)0x61,  /* [2439] */
    (xdc_Char)0x62,  /* [2440] */
    (xdc_Char)0x6c,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x64,  /* [2443] */
    (xdc_Char)0x2e,  /* [2444] */
    (xdc_Char)0x0,  /* [2445] */
    (xdc_Char)0x41,  /* [2446] */
    (xdc_Char)0x5f,  /* [2447] */
    (xdc_Char)0x62,  /* [2448] */
    (xdc_Char)0x61,  /* [2449] */
    (xdc_Char)0x64,  /* [2450] */
    (xdc_Char)0x43,  /* [2451] */
    (xdc_Char)0x6f,  /* [2452] */
    (xdc_Char)0x6e,  /* [2453] */
    (xdc_Char)0x74,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x78,  /* [2456] */
    (xdc_Char)0x74,  /* [2457] */
    (xdc_Char)0x3a,  /* [2458] */
    (xdc_Char)0x20,  /* [2459] */
    (xdc_Char)0x62,  /* [2460] */
    (xdc_Char)0x61,  /* [2461] */
    (xdc_Char)0x64,  /* [2462] */
    (xdc_Char)0x20,  /* [2463] */
    (xdc_Char)0x63,  /* [2464] */
    (xdc_Char)0x61,  /* [2465] */
    (xdc_Char)0x6c,  /* [2466] */
    (xdc_Char)0x6c,  /* [2467] */
    (xdc_Char)0x69,  /* [2468] */
    (xdc_Char)0x6e,  /* [2469] */
    (xdc_Char)0x67,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x63,  /* [2472] */
    (xdc_Char)0x6f,  /* [2473] */
    (xdc_Char)0x6e,  /* [2474] */
    (xdc_Char)0x74,  /* [2475] */
    (xdc_Char)0x65,  /* [2476] */
    (xdc_Char)0x78,  /* [2477] */
    (xdc_Char)0x74,  /* [2478] */
    (xdc_Char)0x2e,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x53,  /* [2481] */
    (xdc_Char)0x65,  /* [2482] */
    (xdc_Char)0x65,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x47,  /* [2485] */
    (xdc_Char)0x61,  /* [2486] */
    (xdc_Char)0x74,  /* [2487] */
    (xdc_Char)0x65,  /* [2488] */
    (xdc_Char)0x4d,  /* [2489] */
    (xdc_Char)0x75,  /* [2490] */
    (xdc_Char)0x74,  /* [2491] */
    (xdc_Char)0x65,  /* [2492] */
    (xdc_Char)0x78,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x41,  /* [2495] */
    (xdc_Char)0x50,  /* [2496] */
    (xdc_Char)0x49,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x64,  /* [2499] */
    (xdc_Char)0x6f,  /* [2500] */
    (xdc_Char)0x63,  /* [2501] */
    (xdc_Char)0x20,  /* [2502] */
    (xdc_Char)0x66,  /* [2503] */
    (xdc_Char)0x6f,  /* [2504] */
    (xdc_Char)0x72,  /* [2505] */
    (xdc_Char)0x20,  /* [2506] */
    (xdc_Char)0x64,  /* [2507] */
    (xdc_Char)0x65,  /* [2508] */
    (xdc_Char)0x74,  /* [2509] */
    (xdc_Char)0x61,  /* [2510] */
    (xdc_Char)0x69,  /* [2511] */
    (xdc_Char)0x6c,  /* [2512] */
    (xdc_Char)0x73,  /* [2513] */
    (xdc_Char)0x2e,  /* [2514] */
    (xdc_Char)0x0,  /* [2515] */
    (xdc_Char)0x41,  /* [2516] */
    (xdc_Char)0x5f,  /* [2517] */
    (xdc_Char)0x62,  /* [2518] */
    (xdc_Char)0x61,  /* [2519] */
    (xdc_Char)0x64,  /* [2520] */
    (xdc_Char)0x43,  /* [2521] */
    (xdc_Char)0x6f,  /* [2522] */
    (xdc_Char)0x6e,  /* [2523] */
    (xdc_Char)0x74,  /* [2524] */
    (xdc_Char)0x65,  /* [2525] */
    (xdc_Char)0x78,  /* [2526] */
    (xdc_Char)0x74,  /* [2527] */
    (xdc_Char)0x3a,  /* [2528] */
    (xdc_Char)0x20,  /* [2529] */
    (xdc_Char)0x62,  /* [2530] */
    (xdc_Char)0x61,  /* [2531] */
    (xdc_Char)0x64,  /* [2532] */
    (xdc_Char)0x20,  /* [2533] */
    (xdc_Char)0x63,  /* [2534] */
    (xdc_Char)0x61,  /* [2535] */
    (xdc_Char)0x6c,  /* [2536] */
    (xdc_Char)0x6c,  /* [2537] */
    (xdc_Char)0x69,  /* [2538] */
    (xdc_Char)0x6e,  /* [2539] */
    (xdc_Char)0x67,  /* [2540] */
    (xdc_Char)0x20,  /* [2541] */
    (xdc_Char)0x63,  /* [2542] */
    (xdc_Char)0x6f,  /* [2543] */
    (xdc_Char)0x6e,  /* [2544] */
    (xdc_Char)0x74,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x78,  /* [2547] */
    (xdc_Char)0x74,  /* [2548] */
    (xdc_Char)0x2e,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x53,  /* [2551] */
    (xdc_Char)0x65,  /* [2552] */
    (xdc_Char)0x65,  /* [2553] */
    (xdc_Char)0x20,  /* [2554] */
    (xdc_Char)0x47,  /* [2555] */
    (xdc_Char)0x61,  /* [2556] */
    (xdc_Char)0x74,  /* [2557] */
    (xdc_Char)0x65,  /* [2558] */
    (xdc_Char)0x53,  /* [2559] */
    (xdc_Char)0x70,  /* [2560] */
    (xdc_Char)0x69,  /* [2561] */
    (xdc_Char)0x6e,  /* [2562] */
    (xdc_Char)0x6c,  /* [2563] */
    (xdc_Char)0x6f,  /* [2564] */
    (xdc_Char)0x63,  /* [2565] */
    (xdc_Char)0x6b,  /* [2566] */
    (xdc_Char)0x20,  /* [2567] */
    (xdc_Char)0x41,  /* [2568] */
    (xdc_Char)0x50,  /* [2569] */
    (xdc_Char)0x49,  /* [2570] */
    (xdc_Char)0x20,  /* [2571] */
    (xdc_Char)0x64,  /* [2572] */
    (xdc_Char)0x6f,  /* [2573] */
    (xdc_Char)0x63,  /* [2574] */
    (xdc_Char)0x20,  /* [2575] */
    (xdc_Char)0x66,  /* [2576] */
    (xdc_Char)0x6f,  /* [2577] */
    (xdc_Char)0x72,  /* [2578] */
    (xdc_Char)0x20,  /* [2579] */
    (xdc_Char)0x64,  /* [2580] */
    (xdc_Char)0x65,  /* [2581] */
    (xdc_Char)0x74,  /* [2582] */
    (xdc_Char)0x61,  /* [2583] */
    (xdc_Char)0x69,  /* [2584] */
    (xdc_Char)0x6c,  /* [2585] */
    (xdc_Char)0x73,  /* [2586] */
    (xdc_Char)0x2e,  /* [2587] */
    (xdc_Char)0x0,  /* [2588] */
    (xdc_Char)0x41,  /* [2589] */
    (xdc_Char)0x5f,  /* [2590] */
    (xdc_Char)0x69,  /* [2591] */
    (xdc_Char)0x6e,  /* [2592] */
    (xdc_Char)0x76,  /* [2593] */
    (xdc_Char)0x61,  /* [2594] */
    (xdc_Char)0x6c,  /* [2595] */
    (xdc_Char)0x69,  /* [2596] */
    (xdc_Char)0x64,  /* [2597] */
    (xdc_Char)0x51,  /* [2598] */
    (xdc_Char)0x75,  /* [2599] */
    (xdc_Char)0x61,  /* [2600] */
    (xdc_Char)0x6c,  /* [2601] */
    (xdc_Char)0x69,  /* [2602] */
    (xdc_Char)0x74,  /* [2603] */
    (xdc_Char)0x79,  /* [2604] */
    (xdc_Char)0x3a,  /* [2605] */
    (xdc_Char)0x20,  /* [2606] */
    (xdc_Char)0x53,  /* [2607] */
    (xdc_Char)0x65,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x20,  /* [2610] */
    (xdc_Char)0x47,  /* [2611] */
    (xdc_Char)0x61,  /* [2612] */
    (xdc_Char)0x74,  /* [2613] */
    (xdc_Char)0x65,  /* [2614] */
    (xdc_Char)0x53,  /* [2615] */
    (xdc_Char)0x70,  /* [2616] */
    (xdc_Char)0x69,  /* [2617] */
    (xdc_Char)0x6e,  /* [2618] */
    (xdc_Char)0x6c,  /* [2619] */
    (xdc_Char)0x6f,  /* [2620] */
    (xdc_Char)0x63,  /* [2621] */
    (xdc_Char)0x6b,  /* [2622] */
    (xdc_Char)0x20,  /* [2623] */
    (xdc_Char)0x41,  /* [2624] */
    (xdc_Char)0x50,  /* [2625] */
    (xdc_Char)0x49,  /* [2626] */
    (xdc_Char)0x20,  /* [2627] */
    (xdc_Char)0x64,  /* [2628] */
    (xdc_Char)0x6f,  /* [2629] */
    (xdc_Char)0x63,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x66,  /* [2632] */
    (xdc_Char)0x6f,  /* [2633] */
    (xdc_Char)0x72,  /* [2634] */
    (xdc_Char)0x20,  /* [2635] */
    (xdc_Char)0x64,  /* [2636] */
    (xdc_Char)0x65,  /* [2637] */
    (xdc_Char)0x74,  /* [2638] */
    (xdc_Char)0x61,  /* [2639] */
    (xdc_Char)0x69,  /* [2640] */
    (xdc_Char)0x6c,  /* [2641] */
    (xdc_Char)0x73,  /* [2642] */
    (xdc_Char)0x2e,  /* [2643] */
    (xdc_Char)0x0,  /* [2644] */
    (xdc_Char)0x62,  /* [2645] */
    (xdc_Char)0x75,  /* [2646] */
    (xdc_Char)0x66,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x70,  /* [2649] */
    (xdc_Char)0x61,  /* [2650] */
    (xdc_Char)0x72,  /* [2651] */
    (xdc_Char)0x61,  /* [2652] */
    (xdc_Char)0x6d,  /* [2653] */
    (xdc_Char)0x65,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x65,  /* [2656] */
    (xdc_Char)0x72,  /* [2657] */
    (xdc_Char)0x20,  /* [2658] */
    (xdc_Char)0x63,  /* [2659] */
    (xdc_Char)0x61,  /* [2660] */
    (xdc_Char)0x6e,  /* [2661] */
    (xdc_Char)0x6e,  /* [2662] */
    (xdc_Char)0x6f,  /* [2663] */
    (xdc_Char)0x74,  /* [2664] */
    (xdc_Char)0x20,  /* [2665] */
    (xdc_Char)0x62,  /* [2666] */
    (xdc_Char)0x65,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x6e,  /* [2669] */
    (xdc_Char)0x75,  /* [2670] */
    (xdc_Char)0x6c,  /* [2671] */
    (xdc_Char)0x6c,  /* [2672] */
    (xdc_Char)0x0,  /* [2673] */
    (xdc_Char)0x62,  /* [2674] */
    (xdc_Char)0x75,  /* [2675] */
    (xdc_Char)0x66,  /* [2676] */
    (xdc_Char)0x20,  /* [2677] */
    (xdc_Char)0x6e,  /* [2678] */
    (xdc_Char)0x6f,  /* [2679] */
    (xdc_Char)0x74,  /* [2680] */
    (xdc_Char)0x20,  /* [2681] */
    (xdc_Char)0x70,  /* [2682] */
    (xdc_Char)0x72,  /* [2683] */
    (xdc_Char)0x6f,  /* [2684] */
    (xdc_Char)0x70,  /* [2685] */
    (xdc_Char)0x65,  /* [2686] */
    (xdc_Char)0x72,  /* [2687] */
    (xdc_Char)0x6c,  /* [2688] */
    (xdc_Char)0x79,  /* [2689] */
    (xdc_Char)0x20,  /* [2690] */
    (xdc_Char)0x61,  /* [2691] */
    (xdc_Char)0x6c,  /* [2692] */
    (xdc_Char)0x69,  /* [2693] */
    (xdc_Char)0x67,  /* [2694] */
    (xdc_Char)0x6e,  /* [2695] */
    (xdc_Char)0x65,  /* [2696] */
    (xdc_Char)0x64,  /* [2697] */
    (xdc_Char)0x0,  /* [2698] */
    (xdc_Char)0x61,  /* [2699] */
    (xdc_Char)0x6c,  /* [2700] */
    (xdc_Char)0x69,  /* [2701] */
    (xdc_Char)0x67,  /* [2702] */
    (xdc_Char)0x6e,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x70,  /* [2705] */
    (xdc_Char)0x61,  /* [2706] */
    (xdc_Char)0x72,  /* [2707] */
    (xdc_Char)0x61,  /* [2708] */
    (xdc_Char)0x6d,  /* [2709] */
    (xdc_Char)0x65,  /* [2710] */
    (xdc_Char)0x74,  /* [2711] */
    (xdc_Char)0x65,  /* [2712] */
    (xdc_Char)0x72,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x6d,  /* [2715] */
    (xdc_Char)0x75,  /* [2716] */
    (xdc_Char)0x73,  /* [2717] */
    (xdc_Char)0x74,  /* [2718] */
    (xdc_Char)0x20,  /* [2719] */
    (xdc_Char)0x62,  /* [2720] */
    (xdc_Char)0x65,  /* [2721] */
    (xdc_Char)0x20,  /* [2722] */
    (xdc_Char)0x30,  /* [2723] */
    (xdc_Char)0x20,  /* [2724] */
    (xdc_Char)0x6f,  /* [2725] */
    (xdc_Char)0x72,  /* [2726] */
    (xdc_Char)0x20,  /* [2727] */
    (xdc_Char)0x61,  /* [2728] */
    (xdc_Char)0x20,  /* [2729] */
    (xdc_Char)0x70,  /* [2730] */
    (xdc_Char)0x6f,  /* [2731] */
    (xdc_Char)0x77,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x72,  /* [2734] */
    (xdc_Char)0x20,  /* [2735] */
    (xdc_Char)0x6f,  /* [2736] */
    (xdc_Char)0x66,  /* [2737] */
    (xdc_Char)0x20,  /* [2738] */
    (xdc_Char)0x32,  /* [2739] */
    (xdc_Char)0x20,  /* [2740] */
    (xdc_Char)0x3e,  /* [2741] */
    (xdc_Char)0x3d,  /* [2742] */
    (xdc_Char)0x20,  /* [2743] */
    (xdc_Char)0x74,  /* [2744] */
    (xdc_Char)0x68,  /* [2745] */
    (xdc_Char)0x65,  /* [2746] */
    (xdc_Char)0x20,  /* [2747] */
    (xdc_Char)0x76,  /* [2748] */
    (xdc_Char)0x61,  /* [2749] */
    (xdc_Char)0x6c,  /* [2750] */
    (xdc_Char)0x75,  /* [2751] */
    (xdc_Char)0x65,  /* [2752] */
    (xdc_Char)0x20,  /* [2753] */
    (xdc_Char)0x6f,  /* [2754] */
    (xdc_Char)0x66,  /* [2755] */
    (xdc_Char)0x20,  /* [2756] */
    (xdc_Char)0x4d,  /* [2757] */
    (xdc_Char)0x65,  /* [2758] */
    (xdc_Char)0x6d,  /* [2759] */
    (xdc_Char)0x6f,  /* [2760] */
    (xdc_Char)0x72,  /* [2761] */
    (xdc_Char)0x79,  /* [2762] */
    (xdc_Char)0x5f,  /* [2763] */
    (xdc_Char)0x67,  /* [2764] */
    (xdc_Char)0x65,  /* [2765] */
    (xdc_Char)0x74,  /* [2766] */
    (xdc_Char)0x4d,  /* [2767] */
    (xdc_Char)0x61,  /* [2768] */
    (xdc_Char)0x78,  /* [2769] */
    (xdc_Char)0x44,  /* [2770] */
    (xdc_Char)0x65,  /* [2771] */
    (xdc_Char)0x66,  /* [2772] */
    (xdc_Char)0x61,  /* [2773] */
    (xdc_Char)0x75,  /* [2774] */
    (xdc_Char)0x6c,  /* [2775] */
    (xdc_Char)0x74,  /* [2776] */
    (xdc_Char)0x54,  /* [2777] */
    (xdc_Char)0x79,  /* [2778] */
    (xdc_Char)0x70,  /* [2779] */
    (xdc_Char)0x65,  /* [2780] */
    (xdc_Char)0x41,  /* [2781] */
    (xdc_Char)0x6c,  /* [2782] */
    (xdc_Char)0x69,  /* [2783] */
    (xdc_Char)0x67,  /* [2784] */
    (xdc_Char)0x6e,  /* [2785] */
    (xdc_Char)0x28,  /* [2786] */
    (xdc_Char)0x29,  /* [2787] */
    (xdc_Char)0x0,  /* [2788] */
    (xdc_Char)0x61,  /* [2789] */
    (xdc_Char)0x6c,  /* [2790] */
    (xdc_Char)0x69,  /* [2791] */
    (xdc_Char)0x67,  /* [2792] */
    (xdc_Char)0x6e,  /* [2793] */
    (xdc_Char)0x20,  /* [2794] */
    (xdc_Char)0x70,  /* [2795] */
    (xdc_Char)0x61,  /* [2796] */
    (xdc_Char)0x72,  /* [2797] */
    (xdc_Char)0x61,  /* [2798] */
    (xdc_Char)0x6d,  /* [2799] */
    (xdc_Char)0x65,  /* [2800] */
    (xdc_Char)0x74,  /* [2801] */
    (xdc_Char)0x65,  /* [2802] */
    (xdc_Char)0x72,  /* [2803] */
    (xdc_Char)0x20,  /* [2804] */
    (xdc_Char)0x31,  /* [2805] */
    (xdc_Char)0x29,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x6d,  /* [2808] */
    (xdc_Char)0x75,  /* [2809] */
    (xdc_Char)0x73,  /* [2810] */
    (xdc_Char)0x74,  /* [2811] */
    (xdc_Char)0x20,  /* [2812] */
    (xdc_Char)0x62,  /* [2813] */
    (xdc_Char)0x65,  /* [2814] */
    (xdc_Char)0x20,  /* [2815] */
    (xdc_Char)0x30,  /* [2816] */
    (xdc_Char)0x20,  /* [2817] */
    (xdc_Char)0x6f,  /* [2818] */
    (xdc_Char)0x72,  /* [2819] */
    (xdc_Char)0x20,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x20,  /* [2822] */
    (xdc_Char)0x70,  /* [2823] */
    (xdc_Char)0x6f,  /* [2824] */
    (xdc_Char)0x77,  /* [2825] */
    (xdc_Char)0x65,  /* [2826] */
    (xdc_Char)0x72,  /* [2827] */
    (xdc_Char)0x20,  /* [2828] */
    (xdc_Char)0x6f,  /* [2829] */
    (xdc_Char)0x66,  /* [2830] */
    (xdc_Char)0x20,  /* [2831] */
    (xdc_Char)0x32,  /* [2832] */
    (xdc_Char)0x20,  /* [2833] */
    (xdc_Char)0x61,  /* [2834] */
    (xdc_Char)0x6e,  /* [2835] */
    (xdc_Char)0x64,  /* [2836] */
    (xdc_Char)0x20,  /* [2837] */
    (xdc_Char)0x32,  /* [2838] */
    (xdc_Char)0x29,  /* [2839] */
    (xdc_Char)0x20,  /* [2840] */
    (xdc_Char)0x6e,  /* [2841] */
    (xdc_Char)0x6f,  /* [2842] */
    (xdc_Char)0x74,  /* [2843] */
    (xdc_Char)0x20,  /* [2844] */
    (xdc_Char)0x67,  /* [2845] */
    (xdc_Char)0x72,  /* [2846] */
    (xdc_Char)0x65,  /* [2847] */
    (xdc_Char)0x61,  /* [2848] */
    (xdc_Char)0x74,  /* [2849] */
    (xdc_Char)0x65,  /* [2850] */
    (xdc_Char)0x72,  /* [2851] */
    (xdc_Char)0x20,  /* [2852] */
    (xdc_Char)0x74,  /* [2853] */
    (xdc_Char)0x68,  /* [2854] */
    (xdc_Char)0x61,  /* [2855] */
    (xdc_Char)0x6e,  /* [2856] */
    (xdc_Char)0x20,  /* [2857] */
    (xdc_Char)0x74,  /* [2858] */
    (xdc_Char)0x68,  /* [2859] */
    (xdc_Char)0x65,  /* [2860] */
    (xdc_Char)0x20,  /* [2861] */
    (xdc_Char)0x68,  /* [2862] */
    (xdc_Char)0x65,  /* [2863] */
    (xdc_Char)0x61,  /* [2864] */
    (xdc_Char)0x70,  /* [2865] */
    (xdc_Char)0x73,  /* [2866] */
    (xdc_Char)0x20,  /* [2867] */
    (xdc_Char)0x61,  /* [2868] */
    (xdc_Char)0x6c,  /* [2869] */
    (xdc_Char)0x69,  /* [2870] */
    (xdc_Char)0x67,  /* [2871] */
    (xdc_Char)0x6e,  /* [2872] */
    (xdc_Char)0x6d,  /* [2873] */
    (xdc_Char)0x65,  /* [2874] */
    (xdc_Char)0x6e,  /* [2875] */
    (xdc_Char)0x74,  /* [2876] */
    (xdc_Char)0x0,  /* [2877] */
    (xdc_Char)0x62,  /* [2878] */
    (xdc_Char)0x6c,  /* [2879] */
    (xdc_Char)0x6f,  /* [2880] */
    (xdc_Char)0x63,  /* [2881] */
    (xdc_Char)0x6b,  /* [2882] */
    (xdc_Char)0x53,  /* [2883] */
    (xdc_Char)0x69,  /* [2884] */
    (xdc_Char)0x7a,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x6d,  /* [2888] */
    (xdc_Char)0x75,  /* [2889] */
    (xdc_Char)0x73,  /* [2890] */
    (xdc_Char)0x74,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x62,  /* [2893] */
    (xdc_Char)0x65,  /* [2894] */
    (xdc_Char)0x20,  /* [2895] */
    (xdc_Char)0x6c,  /* [2896] */
    (xdc_Char)0x61,  /* [2897] */
    (xdc_Char)0x72,  /* [2898] */
    (xdc_Char)0x67,  /* [2899] */
    (xdc_Char)0x65,  /* [2900] */
    (xdc_Char)0x20,  /* [2901] */
    (xdc_Char)0x65,  /* [2902] */
    (xdc_Char)0x6e,  /* [2903] */
    (xdc_Char)0x6f,  /* [2904] */
    (xdc_Char)0x75,  /* [2905] */
    (xdc_Char)0x67,  /* [2906] */
    (xdc_Char)0x68,  /* [2907] */
    (xdc_Char)0x20,  /* [2908] */
    (xdc_Char)0x74,  /* [2909] */
    (xdc_Char)0x6f,  /* [2910] */
    (xdc_Char)0x20,  /* [2911] */
    (xdc_Char)0x68,  /* [2912] */
    (xdc_Char)0x6f,  /* [2913] */
    (xdc_Char)0x6c,  /* [2914] */
    (xdc_Char)0x64,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x61,  /* [2917] */
    (xdc_Char)0x74,  /* [2918] */
    (xdc_Char)0x6c,  /* [2919] */
    (xdc_Char)0x65,  /* [2920] */
    (xdc_Char)0x61,  /* [2921] */
    (xdc_Char)0x73,  /* [2922] */
    (xdc_Char)0x74,  /* [2923] */
    (xdc_Char)0x20,  /* [2924] */
    (xdc_Char)0x74,  /* [2925] */
    (xdc_Char)0x77,  /* [2926] */
    (xdc_Char)0x6f,  /* [2927] */
    (xdc_Char)0x20,  /* [2928] */
    (xdc_Char)0x70,  /* [2929] */
    (xdc_Char)0x6f,  /* [2930] */
    (xdc_Char)0x69,  /* [2931] */
    (xdc_Char)0x6e,  /* [2932] */
    (xdc_Char)0x74,  /* [2933] */
    (xdc_Char)0x65,  /* [2934] */
    (xdc_Char)0x72,  /* [2935] */
    (xdc_Char)0x73,  /* [2936] */
    (xdc_Char)0x0,  /* [2937] */
    (xdc_Char)0x6e,  /* [2938] */
    (xdc_Char)0x75,  /* [2939] */
    (xdc_Char)0x6d,  /* [2940] */
    (xdc_Char)0x42,  /* [2941] */
    (xdc_Char)0x6c,  /* [2942] */
    (xdc_Char)0x6f,  /* [2943] */
    (xdc_Char)0x63,  /* [2944] */
    (xdc_Char)0x6b,  /* [2945] */
    (xdc_Char)0x73,  /* [2946] */
    (xdc_Char)0x20,  /* [2947] */
    (xdc_Char)0x63,  /* [2948] */
    (xdc_Char)0x61,  /* [2949] */
    (xdc_Char)0x6e,  /* [2950] */
    (xdc_Char)0x6e,  /* [2951] */
    (xdc_Char)0x6f,  /* [2952] */
    (xdc_Char)0x74,  /* [2953] */
    (xdc_Char)0x20,  /* [2954] */
    (xdc_Char)0x62,  /* [2955] */
    (xdc_Char)0x65,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x7a,  /* [2958] */
    (xdc_Char)0x65,  /* [2959] */
    (xdc_Char)0x72,  /* [2960] */
    (xdc_Char)0x6f,  /* [2961] */
    (xdc_Char)0x0,  /* [2962] */
    (xdc_Char)0x62,  /* [2963] */
    (xdc_Char)0x75,  /* [2964] */
    (xdc_Char)0x66,  /* [2965] */
    (xdc_Char)0x53,  /* [2966] */
    (xdc_Char)0x69,  /* [2967] */
    (xdc_Char)0x7a,  /* [2968] */
    (xdc_Char)0x65,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x63,  /* [2971] */
    (xdc_Char)0x61,  /* [2972] */
    (xdc_Char)0x6e,  /* [2973] */
    (xdc_Char)0x6e,  /* [2974] */
    (xdc_Char)0x6f,  /* [2975] */
    (xdc_Char)0x74,  /* [2976] */
    (xdc_Char)0x20,  /* [2977] */
    (xdc_Char)0x62,  /* [2978] */
    (xdc_Char)0x65,  /* [2979] */
    (xdc_Char)0x20,  /* [2980] */
    (xdc_Char)0x7a,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x72,  /* [2983] */
    (xdc_Char)0x6f,  /* [2984] */
    (xdc_Char)0x0,  /* [2985] */
    (xdc_Char)0x48,  /* [2986] */
    (xdc_Char)0x65,  /* [2987] */
    (xdc_Char)0x61,  /* [2988] */
    (xdc_Char)0x70,  /* [2989] */
    (xdc_Char)0x42,  /* [2990] */
    (xdc_Char)0x75,  /* [2991] */
    (xdc_Char)0x66,  /* [2992] */
    (xdc_Char)0x5f,  /* [2993] */
    (xdc_Char)0x63,  /* [2994] */
    (xdc_Char)0x72,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x61,  /* [2997] */
    (xdc_Char)0x74,  /* [2998] */
    (xdc_Char)0x65,  /* [2999] */
    (xdc_Char)0x27,  /* [3000] */
    (xdc_Char)0x73,  /* [3001] */
    (xdc_Char)0x20,  /* [3002] */
    (xdc_Char)0x62,  /* [3003] */
    (xdc_Char)0x75,  /* [3004] */
    (xdc_Char)0x66,  /* [3005] */
    (xdc_Char)0x53,  /* [3006] */
    (xdc_Char)0x69,  /* [3007] */
    (xdc_Char)0x7a,  /* [3008] */
    (xdc_Char)0x65,  /* [3009] */
    (xdc_Char)0x20,  /* [3010] */
    (xdc_Char)0x70,  /* [3011] */
    (xdc_Char)0x61,  /* [3012] */
    (xdc_Char)0x72,  /* [3013] */
    (xdc_Char)0x61,  /* [3014] */
    (xdc_Char)0x6d,  /* [3015] */
    (xdc_Char)0x65,  /* [3016] */
    (xdc_Char)0x74,  /* [3017] */
    (xdc_Char)0x65,  /* [3018] */
    (xdc_Char)0x72,  /* [3019] */
    (xdc_Char)0x20,  /* [3020] */
    (xdc_Char)0x69,  /* [3021] */
    (xdc_Char)0x73,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x69,  /* [3024] */
    (xdc_Char)0x6e,  /* [3025] */
    (xdc_Char)0x76,  /* [3026] */
    (xdc_Char)0x61,  /* [3027] */
    (xdc_Char)0x6c,  /* [3028] */
    (xdc_Char)0x69,  /* [3029] */
    (xdc_Char)0x64,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x28,  /* [3032] */
    (xdc_Char)0x74,  /* [3033] */
    (xdc_Char)0x6f,  /* [3034] */
    (xdc_Char)0x6f,  /* [3035] */
    (xdc_Char)0x20,  /* [3036] */
    (xdc_Char)0x73,  /* [3037] */
    (xdc_Char)0x6d,  /* [3038] */
    (xdc_Char)0x61,  /* [3039] */
    (xdc_Char)0x6c,  /* [3040] */
    (xdc_Char)0x6c,  /* [3041] */
    (xdc_Char)0x29,  /* [3042] */
    (xdc_Char)0x0,  /* [3043] */
    (xdc_Char)0x43,  /* [3044] */
    (xdc_Char)0x61,  /* [3045] */
    (xdc_Char)0x6e,  /* [3046] */
    (xdc_Char)0x6e,  /* [3047] */
    (xdc_Char)0x6f,  /* [3048] */
    (xdc_Char)0x74,  /* [3049] */
    (xdc_Char)0x20,  /* [3050] */
    (xdc_Char)0x63,  /* [3051] */
    (xdc_Char)0x61,  /* [3052] */
    (xdc_Char)0x6c,  /* [3053] */
    (xdc_Char)0x6c,  /* [3054] */
    (xdc_Char)0x20,  /* [3055] */
    (xdc_Char)0x48,  /* [3056] */
    (xdc_Char)0x65,  /* [3057] */
    (xdc_Char)0x61,  /* [3058] */
    (xdc_Char)0x70,  /* [3059] */
    (xdc_Char)0x42,  /* [3060] */
    (xdc_Char)0x75,  /* [3061] */
    (xdc_Char)0x66,  /* [3062] */
    (xdc_Char)0x5f,  /* [3063] */
    (xdc_Char)0x66,  /* [3064] */
    (xdc_Char)0x72,  /* [3065] */
    (xdc_Char)0x65,  /* [3066] */
    (xdc_Char)0x65,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x77,  /* [3069] */
    (xdc_Char)0x68,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x6e,  /* [3072] */
    (xdc_Char)0x20,  /* [3073] */
    (xdc_Char)0x6e,  /* [3074] */
    (xdc_Char)0x6f,  /* [3075] */
    (xdc_Char)0x20,  /* [3076] */
    (xdc_Char)0x62,  /* [3077] */
    (xdc_Char)0x6c,  /* [3078] */
    (xdc_Char)0x6f,  /* [3079] */
    (xdc_Char)0x63,  /* [3080] */
    (xdc_Char)0x6b,  /* [3081] */
    (xdc_Char)0x73,  /* [3082] */
    (xdc_Char)0x20,  /* [3083] */
    (xdc_Char)0x68,  /* [3084] */
    (xdc_Char)0x61,  /* [3085] */
    (xdc_Char)0x76,  /* [3086] */
    (xdc_Char)0x65,  /* [3087] */
    (xdc_Char)0x20,  /* [3088] */
    (xdc_Char)0x62,  /* [3089] */
    (xdc_Char)0x65,  /* [3090] */
    (xdc_Char)0x65,  /* [3091] */
    (xdc_Char)0x6e,  /* [3092] */
    (xdc_Char)0x20,  /* [3093] */
    (xdc_Char)0x61,  /* [3094] */
    (xdc_Char)0x6c,  /* [3095] */
    (xdc_Char)0x6c,  /* [3096] */
    (xdc_Char)0x6f,  /* [3097] */
    (xdc_Char)0x63,  /* [3098] */
    (xdc_Char)0x61,  /* [3099] */
    (xdc_Char)0x74,  /* [3100] */
    (xdc_Char)0x65,  /* [3101] */
    (xdc_Char)0x64,  /* [3102] */
    (xdc_Char)0x0,  /* [3103] */
    (xdc_Char)0x41,  /* [3104] */
    (xdc_Char)0x5f,  /* [3105] */
    (xdc_Char)0x69,  /* [3106] */
    (xdc_Char)0x6e,  /* [3107] */
    (xdc_Char)0x76,  /* [3108] */
    (xdc_Char)0x61,  /* [3109] */
    (xdc_Char)0x6c,  /* [3110] */
    (xdc_Char)0x69,  /* [3111] */
    (xdc_Char)0x64,  /* [3112] */
    (xdc_Char)0x46,  /* [3113] */
    (xdc_Char)0x72,  /* [3114] */
    (xdc_Char)0x65,  /* [3115] */
    (xdc_Char)0x65,  /* [3116] */
    (xdc_Char)0x3a,  /* [3117] */
    (xdc_Char)0x20,  /* [3118] */
    (xdc_Char)0x49,  /* [3119] */
    (xdc_Char)0x6e,  /* [3120] */
    (xdc_Char)0x76,  /* [3121] */
    (xdc_Char)0x61,  /* [3122] */
    (xdc_Char)0x6c,  /* [3123] */
    (xdc_Char)0x69,  /* [3124] */
    (xdc_Char)0x64,  /* [3125] */
    (xdc_Char)0x20,  /* [3126] */
    (xdc_Char)0x66,  /* [3127] */
    (xdc_Char)0x72,  /* [3128] */
    (xdc_Char)0x65,  /* [3129] */
    (xdc_Char)0x65,  /* [3130] */
    (xdc_Char)0x0,  /* [3131] */
    (xdc_Char)0x41,  /* [3132] */
    (xdc_Char)0x5f,  /* [3133] */
    (xdc_Char)0x7a,  /* [3134] */
    (xdc_Char)0x65,  /* [3135] */
    (xdc_Char)0x72,  /* [3136] */
    (xdc_Char)0x6f,  /* [3137] */
    (xdc_Char)0x42,  /* [3138] */
    (xdc_Char)0x6c,  /* [3139] */
    (xdc_Char)0x6f,  /* [3140] */
    (xdc_Char)0x63,  /* [3141] */
    (xdc_Char)0x6b,  /* [3142] */
    (xdc_Char)0x3a,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x43,  /* [3145] */
    (xdc_Char)0x61,  /* [3146] */
    (xdc_Char)0x6e,  /* [3147] */
    (xdc_Char)0x6e,  /* [3148] */
    (xdc_Char)0x6f,  /* [3149] */
    (xdc_Char)0x74,  /* [3150] */
    (xdc_Char)0x20,  /* [3151] */
    (xdc_Char)0x61,  /* [3152] */
    (xdc_Char)0x6c,  /* [3153] */
    (xdc_Char)0x6c,  /* [3154] */
    (xdc_Char)0x6f,  /* [3155] */
    (xdc_Char)0x63,  /* [3156] */
    (xdc_Char)0x61,  /* [3157] */
    (xdc_Char)0x74,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x20,  /* [3160] */
    (xdc_Char)0x73,  /* [3161] */
    (xdc_Char)0x69,  /* [3162] */
    (xdc_Char)0x7a,  /* [3163] */
    (xdc_Char)0x65,  /* [3164] */
    (xdc_Char)0x20,  /* [3165] */
    (xdc_Char)0x30,  /* [3166] */
    (xdc_Char)0x0,  /* [3167] */
    (xdc_Char)0x41,  /* [3168] */
    (xdc_Char)0x5f,  /* [3169] */
    (xdc_Char)0x68,  /* [3170] */
    (xdc_Char)0x65,  /* [3171] */
    (xdc_Char)0x61,  /* [3172] */
    (xdc_Char)0x70,  /* [3173] */
    (xdc_Char)0x53,  /* [3174] */
    (xdc_Char)0x69,  /* [3175] */
    (xdc_Char)0x7a,  /* [3176] */
    (xdc_Char)0x65,  /* [3177] */
    (xdc_Char)0x3a,  /* [3178] */
    (xdc_Char)0x20,  /* [3179] */
    (xdc_Char)0x52,  /* [3180] */
    (xdc_Char)0x65,  /* [3181] */
    (xdc_Char)0x71,  /* [3182] */
    (xdc_Char)0x75,  /* [3183] */
    (xdc_Char)0x65,  /* [3184] */
    (xdc_Char)0x73,  /* [3185] */
    (xdc_Char)0x74,  /* [3186] */
    (xdc_Char)0x65,  /* [3187] */
    (xdc_Char)0x64,  /* [3188] */
    (xdc_Char)0x20,  /* [3189] */
    (xdc_Char)0x68,  /* [3190] */
    (xdc_Char)0x65,  /* [3191] */
    (xdc_Char)0x61,  /* [3192] */
    (xdc_Char)0x70,  /* [3193] */
    (xdc_Char)0x20,  /* [3194] */
    (xdc_Char)0x73,  /* [3195] */
    (xdc_Char)0x69,  /* [3196] */
    (xdc_Char)0x7a,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x69,  /* [3200] */
    (xdc_Char)0x73,  /* [3201] */
    (xdc_Char)0x20,  /* [3202] */
    (xdc_Char)0x74,  /* [3203] */
    (xdc_Char)0x6f,  /* [3204] */
    (xdc_Char)0x6f,  /* [3205] */
    (xdc_Char)0x20,  /* [3206] */
    (xdc_Char)0x73,  /* [3207] */
    (xdc_Char)0x6d,  /* [3208] */
    (xdc_Char)0x61,  /* [3209] */
    (xdc_Char)0x6c,  /* [3210] */
    (xdc_Char)0x6c,  /* [3211] */
    (xdc_Char)0x0,  /* [3212] */
    (xdc_Char)0x41,  /* [3213] */
    (xdc_Char)0x5f,  /* [3214] */
    (xdc_Char)0x61,  /* [3215] */
    (xdc_Char)0x6c,  /* [3216] */
    (xdc_Char)0x69,  /* [3217] */
    (xdc_Char)0x67,  /* [3218] */
    (xdc_Char)0x6e,  /* [3219] */
    (xdc_Char)0x3a,  /* [3220] */
    (xdc_Char)0x20,  /* [3221] */
    (xdc_Char)0x52,  /* [3222] */
    (xdc_Char)0x65,  /* [3223] */
    (xdc_Char)0x71,  /* [3224] */
    (xdc_Char)0x75,  /* [3225] */
    (xdc_Char)0x65,  /* [3226] */
    (xdc_Char)0x73,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x65,  /* [3229] */
    (xdc_Char)0x64,  /* [3230] */
    (xdc_Char)0x20,  /* [3231] */
    (xdc_Char)0x61,  /* [3232] */
    (xdc_Char)0x6c,  /* [3233] */
    (xdc_Char)0x69,  /* [3234] */
    (xdc_Char)0x67,  /* [3235] */
    (xdc_Char)0x6e,  /* [3236] */
    (xdc_Char)0x20,  /* [3237] */
    (xdc_Char)0x69,  /* [3238] */
    (xdc_Char)0x73,  /* [3239] */
    (xdc_Char)0x20,  /* [3240] */
    (xdc_Char)0x6e,  /* [3241] */
    (xdc_Char)0x6f,  /* [3242] */
    (xdc_Char)0x74,  /* [3243] */
    (xdc_Char)0x20,  /* [3244] */
    (xdc_Char)0x61,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x70,  /* [3247] */
    (xdc_Char)0x6f,  /* [3248] */
    (xdc_Char)0x77,  /* [3249] */
    (xdc_Char)0x65,  /* [3250] */
    (xdc_Char)0x72,  /* [3251] */
    (xdc_Char)0x20,  /* [3252] */
    (xdc_Char)0x6f,  /* [3253] */
    (xdc_Char)0x66,  /* [3254] */
    (xdc_Char)0x20,  /* [3255] */
    (xdc_Char)0x32,  /* [3256] */
    (xdc_Char)0x0,  /* [3257] */
    (xdc_Char)0x49,  /* [3258] */
    (xdc_Char)0x6e,  /* [3259] */
    (xdc_Char)0x76,  /* [3260] */
    (xdc_Char)0x61,  /* [3261] */
    (xdc_Char)0x6c,  /* [3262] */
    (xdc_Char)0x69,  /* [3263] */
    (xdc_Char)0x64,  /* [3264] */
    (xdc_Char)0x20,  /* [3265] */
    (xdc_Char)0x62,  /* [3266] */
    (xdc_Char)0x6c,  /* [3267] */
    (xdc_Char)0x6f,  /* [3268] */
    (xdc_Char)0x63,  /* [3269] */
    (xdc_Char)0x6b,  /* [3270] */
    (xdc_Char)0x20,  /* [3271] */
    (xdc_Char)0x61,  /* [3272] */
    (xdc_Char)0x64,  /* [3273] */
    (xdc_Char)0x64,  /* [3274] */
    (xdc_Char)0x72,  /* [3275] */
    (xdc_Char)0x65,  /* [3276] */
    (xdc_Char)0x73,  /* [3277] */
    (xdc_Char)0x73,  /* [3278] */
    (xdc_Char)0x20,  /* [3279] */
    (xdc_Char)0x6f,  /* [3280] */
    (xdc_Char)0x6e,  /* [3281] */
    (xdc_Char)0x20,  /* [3282] */
    (xdc_Char)0x74,  /* [3283] */
    (xdc_Char)0x68,  /* [3284] */
    (xdc_Char)0x65,  /* [3285] */
    (xdc_Char)0x20,  /* [3286] */
    (xdc_Char)0x66,  /* [3287] */
    (xdc_Char)0x72,  /* [3288] */
    (xdc_Char)0x65,  /* [3289] */
    (xdc_Char)0x65,  /* [3290] */
    (xdc_Char)0x2e,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x46,  /* [3293] */
    (xdc_Char)0x61,  /* [3294] */
    (xdc_Char)0x69,  /* [3295] */
    (xdc_Char)0x6c,  /* [3296] */
    (xdc_Char)0x65,  /* [3297] */
    (xdc_Char)0x64,  /* [3298] */
    (xdc_Char)0x20,  /* [3299] */
    (xdc_Char)0x74,  /* [3300] */
    (xdc_Char)0x6f,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x66,  /* [3303] */
    (xdc_Char)0x72,  /* [3304] */
    (xdc_Char)0x65,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x20,  /* [3307] */
    (xdc_Char)0x62,  /* [3308] */
    (xdc_Char)0x6c,  /* [3309] */
    (xdc_Char)0x6f,  /* [3310] */
    (xdc_Char)0x63,  /* [3311] */
    (xdc_Char)0x6b,  /* [3312] */
    (xdc_Char)0x20,  /* [3313] */
    (xdc_Char)0x62,  /* [3314] */
    (xdc_Char)0x61,  /* [3315] */
    (xdc_Char)0x63,  /* [3316] */
    (xdc_Char)0x6b,  /* [3317] */
    (xdc_Char)0x20,  /* [3318] */
    (xdc_Char)0x74,  /* [3319] */
    (xdc_Char)0x6f,  /* [3320] */
    (xdc_Char)0x20,  /* [3321] */
    (xdc_Char)0x68,  /* [3322] */
    (xdc_Char)0x65,  /* [3323] */
    (xdc_Char)0x61,  /* [3324] */
    (xdc_Char)0x70,  /* [3325] */
    (xdc_Char)0x2e,  /* [3326] */
    (xdc_Char)0x0,  /* [3327] */
    (xdc_Char)0x41,  /* [3328] */
    (xdc_Char)0x5f,  /* [3329] */
    (xdc_Char)0x64,  /* [3330] */
    (xdc_Char)0x6f,  /* [3331] */
    (xdc_Char)0x75,  /* [3332] */
    (xdc_Char)0x62,  /* [3333] */
    (xdc_Char)0x6c,  /* [3334] */
    (xdc_Char)0x65,  /* [3335] */
    (xdc_Char)0x46,  /* [3336] */
    (xdc_Char)0x72,  /* [3337] */
    (xdc_Char)0x65,  /* [3338] */
    (xdc_Char)0x65,  /* [3339] */
    (xdc_Char)0x3a,  /* [3340] */
    (xdc_Char)0x20,  /* [3341] */
    (xdc_Char)0x42,  /* [3342] */
    (xdc_Char)0x75,  /* [3343] */
    (xdc_Char)0x66,  /* [3344] */
    (xdc_Char)0x66,  /* [3345] */
    (xdc_Char)0x65,  /* [3346] */
    (xdc_Char)0x72,  /* [3347] */
    (xdc_Char)0x20,  /* [3348] */
    (xdc_Char)0x61,  /* [3349] */
    (xdc_Char)0x6c,  /* [3350] */
    (xdc_Char)0x72,  /* [3351] */
    (xdc_Char)0x65,  /* [3352] */
    (xdc_Char)0x61,  /* [3353] */
    (xdc_Char)0x64,  /* [3354] */
    (xdc_Char)0x79,  /* [3355] */
    (xdc_Char)0x20,  /* [3356] */
    (xdc_Char)0x66,  /* [3357] */
    (xdc_Char)0x72,  /* [3358] */
    (xdc_Char)0x65,  /* [3359] */
    (xdc_Char)0x65,  /* [3360] */
    (xdc_Char)0x0,  /* [3361] */
    (xdc_Char)0x41,  /* [3362] */
    (xdc_Char)0x5f,  /* [3363] */
    (xdc_Char)0x62,  /* [3364] */
    (xdc_Char)0x75,  /* [3365] */
    (xdc_Char)0x66,  /* [3366] */
    (xdc_Char)0x4f,  /* [3367] */
    (xdc_Char)0x76,  /* [3368] */
    (xdc_Char)0x65,  /* [3369] */
    (xdc_Char)0x72,  /* [3370] */
    (xdc_Char)0x66,  /* [3371] */
    (xdc_Char)0x6c,  /* [3372] */
    (xdc_Char)0x6f,  /* [3373] */
    (xdc_Char)0x77,  /* [3374] */
    (xdc_Char)0x3a,  /* [3375] */
    (xdc_Char)0x20,  /* [3376] */
    (xdc_Char)0x42,  /* [3377] */
    (xdc_Char)0x75,  /* [3378] */
    (xdc_Char)0x66,  /* [3379] */
    (xdc_Char)0x66,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x72,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x6f,  /* [3384] */
    (xdc_Char)0x76,  /* [3385] */
    (xdc_Char)0x65,  /* [3386] */
    (xdc_Char)0x72,  /* [3387] */
    (xdc_Char)0x66,  /* [3388] */
    (xdc_Char)0x6c,  /* [3389] */
    (xdc_Char)0x6f,  /* [3390] */
    (xdc_Char)0x77,  /* [3391] */
    (xdc_Char)0x0,  /* [3392] */
    (xdc_Char)0x41,  /* [3393] */
    (xdc_Char)0x5f,  /* [3394] */
    (xdc_Char)0x6e,  /* [3395] */
    (xdc_Char)0x6f,  /* [3396] */
    (xdc_Char)0x74,  /* [3397] */
    (xdc_Char)0x45,  /* [3398] */
    (xdc_Char)0x6d,  /* [3399] */
    (xdc_Char)0x70,  /* [3400] */
    (xdc_Char)0x74,  /* [3401] */
    (xdc_Char)0x79,  /* [3402] */
    (xdc_Char)0x3a,  /* [3403] */
    (xdc_Char)0x20,  /* [3404] */
    (xdc_Char)0x48,  /* [3405] */
    (xdc_Char)0x65,  /* [3406] */
    (xdc_Char)0x61,  /* [3407] */
    (xdc_Char)0x70,  /* [3408] */
    (xdc_Char)0x20,  /* [3409] */
    (xdc_Char)0x6e,  /* [3410] */
    (xdc_Char)0x6f,  /* [3411] */
    (xdc_Char)0x74,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x65,  /* [3414] */
    (xdc_Char)0x6d,  /* [3415] */
    (xdc_Char)0x70,  /* [3416] */
    (xdc_Char)0x74,  /* [3417] */
    (xdc_Char)0x79,  /* [3418] */
    (xdc_Char)0x0,  /* [3419] */
    (xdc_Char)0x41,  /* [3420] */
    (xdc_Char)0x5f,  /* [3421] */
    (xdc_Char)0x6e,  /* [3422] */
    (xdc_Char)0x75,  /* [3423] */
    (xdc_Char)0x6c,  /* [3424] */
    (xdc_Char)0x6c,  /* [3425] */
    (xdc_Char)0x4f,  /* [3426] */
    (xdc_Char)0x62,  /* [3427] */
    (xdc_Char)0x6a,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x63,  /* [3430] */
    (xdc_Char)0x74,  /* [3431] */
    (xdc_Char)0x3a,  /* [3432] */
    (xdc_Char)0x20,  /* [3433] */
    (xdc_Char)0x48,  /* [3434] */
    (xdc_Char)0x65,  /* [3435] */
    (xdc_Char)0x61,  /* [3436] */
    (xdc_Char)0x70,  /* [3437] */
    (xdc_Char)0x54,  /* [3438] */
    (xdc_Char)0x72,  /* [3439] */
    (xdc_Char)0x61,  /* [3440] */
    (xdc_Char)0x63,  /* [3441] */
    (xdc_Char)0x6b,  /* [3442] */
    (xdc_Char)0x5f,  /* [3443] */
    (xdc_Char)0x70,  /* [3444] */
    (xdc_Char)0x72,  /* [3445] */
    (xdc_Char)0x69,  /* [3446] */
    (xdc_Char)0x6e,  /* [3447] */
    (xdc_Char)0x74,  /* [3448] */
    (xdc_Char)0x48,  /* [3449] */
    (xdc_Char)0x65,  /* [3450] */
    (xdc_Char)0x61,  /* [3451] */
    (xdc_Char)0x70,  /* [3452] */
    (xdc_Char)0x20,  /* [3453] */
    (xdc_Char)0x63,  /* [3454] */
    (xdc_Char)0x61,  /* [3455] */
    (xdc_Char)0x6c,  /* [3456] */
    (xdc_Char)0x6c,  /* [3457] */
    (xdc_Char)0x65,  /* [3458] */
    (xdc_Char)0x64,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x77,  /* [3461] */
    (xdc_Char)0x69,  /* [3462] */
    (xdc_Char)0x74,  /* [3463] */
    (xdc_Char)0x68,  /* [3464] */
    (xdc_Char)0x20,  /* [3465] */
    (xdc_Char)0x6e,  /* [3466] */
    (xdc_Char)0x75,  /* [3467] */
    (xdc_Char)0x6c,  /* [3468] */
    (xdc_Char)0x6c,  /* [3469] */
    (xdc_Char)0x20,  /* [3470] */
    (xdc_Char)0x6f,  /* [3471] */
    (xdc_Char)0x62,  /* [3472] */
    (xdc_Char)0x6a,  /* [3473] */
    (xdc_Char)0x0,  /* [3474] */
    (xdc_Char)0x61,  /* [3475] */
    (xdc_Char)0x73,  /* [3476] */
    (xdc_Char)0x73,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x72,  /* [3479] */
    (xdc_Char)0x74,  /* [3480] */
    (xdc_Char)0x69,  /* [3481] */
    (xdc_Char)0x6f,  /* [3482] */
    (xdc_Char)0x6e,  /* [3483] */
    (xdc_Char)0x20,  /* [3484] */
    (xdc_Char)0x66,  /* [3485] */
    (xdc_Char)0x61,  /* [3486] */
    (xdc_Char)0x69,  /* [3487] */
    (xdc_Char)0x6c,  /* [3488] */
    (xdc_Char)0x75,  /* [3489] */
    (xdc_Char)0x72,  /* [3490] */
    (xdc_Char)0x65,  /* [3491] */
    (xdc_Char)0x25,  /* [3492] */
    (xdc_Char)0x73,  /* [3493] */
    (xdc_Char)0x25,  /* [3494] */
    (xdc_Char)0x73,  /* [3495] */
    (xdc_Char)0x0,  /* [3496] */
    (xdc_Char)0x25,  /* [3497] */
    (xdc_Char)0x24,  /* [3498] */
    (xdc_Char)0x53,  /* [3499] */
    (xdc_Char)0x0,  /* [3500] */
    (xdc_Char)0x6f,  /* [3501] */
    (xdc_Char)0x75,  /* [3502] */
    (xdc_Char)0x74,  /* [3503] */
    (xdc_Char)0x20,  /* [3504] */
    (xdc_Char)0x6f,  /* [3505] */
    (xdc_Char)0x66,  /* [3506] */
    (xdc_Char)0x20,  /* [3507] */
    (xdc_Char)0x6d,  /* [3508] */
    (xdc_Char)0x65,  /* [3509] */
    (xdc_Char)0x6d,  /* [3510] */
    (xdc_Char)0x6f,  /* [3511] */
    (xdc_Char)0x72,  /* [3512] */
    (xdc_Char)0x79,  /* [3513] */
    (xdc_Char)0x3a,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x68,  /* [3516] */
    (xdc_Char)0x65,  /* [3517] */
    (xdc_Char)0x61,  /* [3518] */
    (xdc_Char)0x70,  /* [3519] */
    (xdc_Char)0x3d,  /* [3520] */
    (xdc_Char)0x30,  /* [3521] */
    (xdc_Char)0x78,  /* [3522] */
    (xdc_Char)0x25,  /* [3523] */
    (xdc_Char)0x78,  /* [3524] */
    (xdc_Char)0x2c,  /* [3525] */
    (xdc_Char)0x20,  /* [3526] */
    (xdc_Char)0x73,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x7a,  /* [3529] */
    (xdc_Char)0x65,  /* [3530] */
    (xdc_Char)0x3d,  /* [3531] */
    (xdc_Char)0x25,  /* [3532] */
    (xdc_Char)0x75,  /* [3533] */
    (xdc_Char)0x0,  /* [3534] */
    (xdc_Char)0x25,  /* [3535] */
    (xdc_Char)0x73,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x30,  /* [3538] */
    (xdc_Char)0x78,  /* [3539] */
    (xdc_Char)0x25,  /* [3540] */
    (xdc_Char)0x78,  /* [3541] */
    (xdc_Char)0x0,  /* [3542] */
    (xdc_Char)0x45,  /* [3543] */
    (xdc_Char)0x5f,  /* [3544] */
    (xdc_Char)0x62,  /* [3545] */
    (xdc_Char)0x61,  /* [3546] */
    (xdc_Char)0x64,  /* [3547] */
    (xdc_Char)0x4c,  /* [3548] */
    (xdc_Char)0x65,  /* [3549] */
    (xdc_Char)0x76,  /* [3550] */
    (xdc_Char)0x65,  /* [3551] */
    (xdc_Char)0x6c,  /* [3552] */
    (xdc_Char)0x3a,  /* [3553] */
    (xdc_Char)0x20,  /* [3554] */
    (xdc_Char)0x42,  /* [3555] */
    (xdc_Char)0x61,  /* [3556] */
    (xdc_Char)0x64,  /* [3557] */
    (xdc_Char)0x20,  /* [3558] */
    (xdc_Char)0x66,  /* [3559] */
    (xdc_Char)0x69,  /* [3560] */
    (xdc_Char)0x6c,  /* [3561] */
    (xdc_Char)0x74,  /* [3562] */
    (xdc_Char)0x65,  /* [3563] */
    (xdc_Char)0x72,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x6c,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x76,  /* [3568] */
    (xdc_Char)0x65,  /* [3569] */
    (xdc_Char)0x6c,  /* [3570] */
    (xdc_Char)0x20,  /* [3571] */
    (xdc_Char)0x76,  /* [3572] */
    (xdc_Char)0x61,  /* [3573] */
    (xdc_Char)0x6c,  /* [3574] */
    (xdc_Char)0x75,  /* [3575] */
    (xdc_Char)0x65,  /* [3576] */
    (xdc_Char)0x3a,  /* [3577] */
    (xdc_Char)0x20,  /* [3578] */
    (xdc_Char)0x25,  /* [3579] */
    (xdc_Char)0x64,  /* [3580] */
    (xdc_Char)0x0,  /* [3581] */
    (xdc_Char)0x66,  /* [3582] */
    (xdc_Char)0x72,  /* [3583] */
    (xdc_Char)0x65,  /* [3584] */
    (xdc_Char)0x65,  /* [3585] */
    (xdc_Char)0x28,  /* [3586] */
    (xdc_Char)0x29,  /* [3587] */
    (xdc_Char)0x20,  /* [3588] */
    (xdc_Char)0x69,  /* [3589] */
    (xdc_Char)0x6e,  /* [3590] */
    (xdc_Char)0x76,  /* [3591] */
    (xdc_Char)0x61,  /* [3592] */
    (xdc_Char)0x6c,  /* [3593] */
    (xdc_Char)0x69,  /* [3594] */
    (xdc_Char)0x64,  /* [3595] */
    (xdc_Char)0x20,  /* [3596] */
    (xdc_Char)0x69,  /* [3597] */
    (xdc_Char)0x6e,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x67,  /* [3600] */
    (xdc_Char)0x72,  /* [3601] */
    (xdc_Char)0x6f,  /* [3602] */
    (xdc_Char)0x77,  /* [3603] */
    (xdc_Char)0x74,  /* [3604] */
    (xdc_Char)0x68,  /* [3605] */
    (xdc_Char)0x2d,  /* [3606] */
    (xdc_Char)0x6f,  /* [3607] */
    (xdc_Char)0x6e,  /* [3608] */
    (xdc_Char)0x6c,  /* [3609] */
    (xdc_Char)0x79,  /* [3610] */
    (xdc_Char)0x20,  /* [3611] */
    (xdc_Char)0x48,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x61,  /* [3614] */
    (xdc_Char)0x70,  /* [3615] */
    (xdc_Char)0x4d,  /* [3616] */
    (xdc_Char)0x69,  /* [3617] */
    (xdc_Char)0x6e,  /* [3618] */
    (xdc_Char)0x0,  /* [3619] */
    (xdc_Char)0x54,  /* [3620] */
    (xdc_Char)0x68,  /* [3621] */
    (xdc_Char)0x65,  /* [3622] */
    (xdc_Char)0x20,  /* [3623] */
    (xdc_Char)0x52,  /* [3624] */
    (xdc_Char)0x54,  /* [3625] */
    (xdc_Char)0x53,  /* [3626] */
    (xdc_Char)0x20,  /* [3627] */
    (xdc_Char)0x68,  /* [3628] */
    (xdc_Char)0x65,  /* [3629] */
    (xdc_Char)0x61,  /* [3630] */
    (xdc_Char)0x70,  /* [3631] */
    (xdc_Char)0x20,  /* [3632] */
    (xdc_Char)0x69,  /* [3633] */
    (xdc_Char)0x73,  /* [3634] */
    (xdc_Char)0x20,  /* [3635] */
    (xdc_Char)0x75,  /* [3636] */
    (xdc_Char)0x73,  /* [3637] */
    (xdc_Char)0x65,  /* [3638] */
    (xdc_Char)0x64,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x75,  /* [3641] */
    (xdc_Char)0x70,  /* [3642] */
    (xdc_Char)0x2e,  /* [3643] */
    (xdc_Char)0x20,  /* [3644] */
    (xdc_Char)0x45,  /* [3645] */
    (xdc_Char)0x78,  /* [3646] */
    (xdc_Char)0x61,  /* [3647] */
    (xdc_Char)0x6d,  /* [3648] */
    (xdc_Char)0x69,  /* [3649] */
    (xdc_Char)0x6e,  /* [3650] */
    (xdc_Char)0x65,  /* [3651] */
    (xdc_Char)0x20,  /* [3652] */
    (xdc_Char)0x50,  /* [3653] */
    (xdc_Char)0x72,  /* [3654] */
    (xdc_Char)0x6f,  /* [3655] */
    (xdc_Char)0x67,  /* [3656] */
    (xdc_Char)0x72,  /* [3657] */
    (xdc_Char)0x61,  /* [3658] */
    (xdc_Char)0x6d,  /* [3659] */
    (xdc_Char)0x2e,  /* [3660] */
    (xdc_Char)0x68,  /* [3661] */
    (xdc_Char)0x65,  /* [3662] */
    (xdc_Char)0x61,  /* [3663] */
    (xdc_Char)0x70,  /* [3664] */
    (xdc_Char)0x2e,  /* [3665] */
    (xdc_Char)0x0,  /* [3666] */
    (xdc_Char)0x45,  /* [3667] */
    (xdc_Char)0x5f,  /* [3668] */
    (xdc_Char)0x62,  /* [3669] */
    (xdc_Char)0x61,  /* [3670] */
    (xdc_Char)0x64,  /* [3671] */
    (xdc_Char)0x43,  /* [3672] */
    (xdc_Char)0x6f,  /* [3673] */
    (xdc_Char)0x6d,  /* [3674] */
    (xdc_Char)0x6d,  /* [3675] */
    (xdc_Char)0x61,  /* [3676] */
    (xdc_Char)0x6e,  /* [3677] */
    (xdc_Char)0x64,  /* [3678] */
    (xdc_Char)0x3a,  /* [3679] */
    (xdc_Char)0x20,  /* [3680] */
    (xdc_Char)0x52,  /* [3681] */
    (xdc_Char)0x65,  /* [3682] */
    (xdc_Char)0x63,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x69,  /* [3685] */
    (xdc_Char)0x76,  /* [3686] */
    (xdc_Char)0x65,  /* [3687] */
    (xdc_Char)0x64,  /* [3688] */
    (xdc_Char)0x20,  /* [3689] */
    (xdc_Char)0x69,  /* [3690] */
    (xdc_Char)0x6e,  /* [3691] */
    (xdc_Char)0x76,  /* [3692] */
    (xdc_Char)0x61,  /* [3693] */
    (xdc_Char)0x6c,  /* [3694] */
    (xdc_Char)0x69,  /* [3695] */
    (xdc_Char)0x64,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x63,  /* [3698] */
    (xdc_Char)0x6f,  /* [3699] */
    (xdc_Char)0x6d,  /* [3700] */
    (xdc_Char)0x6d,  /* [3701] */
    (xdc_Char)0x61,  /* [3702] */
    (xdc_Char)0x6e,  /* [3703] */
    (xdc_Char)0x64,  /* [3704] */
    (xdc_Char)0x2c,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x69,  /* [3707] */
    (xdc_Char)0x64,  /* [3708] */
    (xdc_Char)0x3a,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x25,  /* [3711] */
    (xdc_Char)0x64,  /* [3712] */
    (xdc_Char)0x2e,  /* [3713] */
    (xdc_Char)0x0,  /* [3714] */
    (xdc_Char)0x45,  /* [3715] */
    (xdc_Char)0x5f,  /* [3716] */
    (xdc_Char)0x73,  /* [3717] */
    (xdc_Char)0x74,  /* [3718] */
    (xdc_Char)0x61,  /* [3719] */
    (xdc_Char)0x63,  /* [3720] */
    (xdc_Char)0x6b,  /* [3721] */
    (xdc_Char)0x4f,  /* [3722] */
    (xdc_Char)0x76,  /* [3723] */
    (xdc_Char)0x65,  /* [3724] */
    (xdc_Char)0x72,  /* [3725] */
    (xdc_Char)0x66,  /* [3726] */
    (xdc_Char)0x6c,  /* [3727] */
    (xdc_Char)0x6f,  /* [3728] */
    (xdc_Char)0x77,  /* [3729] */
    (xdc_Char)0x3a,  /* [3730] */
    (xdc_Char)0x20,  /* [3731] */
    (xdc_Char)0x54,  /* [3732] */
    (xdc_Char)0x61,  /* [3733] */
    (xdc_Char)0x73,  /* [3734] */
    (xdc_Char)0x6b,  /* [3735] */
    (xdc_Char)0x20,  /* [3736] */
    (xdc_Char)0x30,  /* [3737] */
    (xdc_Char)0x78,  /* [3738] */
    (xdc_Char)0x25,  /* [3739] */
    (xdc_Char)0x78,  /* [3740] */
    (xdc_Char)0x20,  /* [3741] */
    (xdc_Char)0x73,  /* [3742] */
    (xdc_Char)0x74,  /* [3743] */
    (xdc_Char)0x61,  /* [3744] */
    (xdc_Char)0x63,  /* [3745] */
    (xdc_Char)0x6b,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x6f,  /* [3748] */
    (xdc_Char)0x76,  /* [3749] */
    (xdc_Char)0x65,  /* [3750] */
    (xdc_Char)0x72,  /* [3751] */
    (xdc_Char)0x66,  /* [3752] */
    (xdc_Char)0x6c,  /* [3753] */
    (xdc_Char)0x6f,  /* [3754] */
    (xdc_Char)0x77,  /* [3755] */
    (xdc_Char)0x2e,  /* [3756] */
    (xdc_Char)0x0,  /* [3757] */
    (xdc_Char)0x45,  /* [3758] */
    (xdc_Char)0x5f,  /* [3759] */
    (xdc_Char)0x73,  /* [3760] */
    (xdc_Char)0x70,  /* [3761] */
    (xdc_Char)0x4f,  /* [3762] */
    (xdc_Char)0x75,  /* [3763] */
    (xdc_Char)0x74,  /* [3764] */
    (xdc_Char)0x4f,  /* [3765] */
    (xdc_Char)0x66,  /* [3766] */
    (xdc_Char)0x42,  /* [3767] */
    (xdc_Char)0x6f,  /* [3768] */
    (xdc_Char)0x75,  /* [3769] */
    (xdc_Char)0x6e,  /* [3770] */
    (xdc_Char)0x64,  /* [3771] */
    (xdc_Char)0x73,  /* [3772] */
    (xdc_Char)0x3a,  /* [3773] */
    (xdc_Char)0x20,  /* [3774] */
    (xdc_Char)0x54,  /* [3775] */
    (xdc_Char)0x61,  /* [3776] */
    (xdc_Char)0x73,  /* [3777] */
    (xdc_Char)0x6b,  /* [3778] */
    (xdc_Char)0x20,  /* [3779] */
    (xdc_Char)0x30,  /* [3780] */
    (xdc_Char)0x78,  /* [3781] */
    (xdc_Char)0x25,  /* [3782] */
    (xdc_Char)0x78,  /* [3783] */
    (xdc_Char)0x20,  /* [3784] */
    (xdc_Char)0x73,  /* [3785] */
    (xdc_Char)0x74,  /* [3786] */
    (xdc_Char)0x61,  /* [3787] */
    (xdc_Char)0x63,  /* [3788] */
    (xdc_Char)0x6b,  /* [3789] */
    (xdc_Char)0x20,  /* [3790] */
    (xdc_Char)0x65,  /* [3791] */
    (xdc_Char)0x72,  /* [3792] */
    (xdc_Char)0x72,  /* [3793] */
    (xdc_Char)0x6f,  /* [3794] */
    (xdc_Char)0x72,  /* [3795] */
    (xdc_Char)0x2c,  /* [3796] */
    (xdc_Char)0x20,  /* [3797] */
    (xdc_Char)0x53,  /* [3798] */
    (xdc_Char)0x50,  /* [3799] */
    (xdc_Char)0x20,  /* [3800] */
    (xdc_Char)0x3d,  /* [3801] */
    (xdc_Char)0x20,  /* [3802] */
    (xdc_Char)0x30,  /* [3803] */
    (xdc_Char)0x78,  /* [3804] */
    (xdc_Char)0x25,  /* [3805] */
    (xdc_Char)0x78,  /* [3806] */
    (xdc_Char)0x2e,  /* [3807] */
    (xdc_Char)0x0,  /* [3808] */
    (xdc_Char)0x45,  /* [3809] */
    (xdc_Char)0x5f,  /* [3810] */
    (xdc_Char)0x64,  /* [3811] */
    (xdc_Char)0x65,  /* [3812] */
    (xdc_Char)0x6c,  /* [3813] */
    (xdc_Char)0x65,  /* [3814] */
    (xdc_Char)0x74,  /* [3815] */
    (xdc_Char)0x65,  /* [3816] */
    (xdc_Char)0x4e,  /* [3817] */
    (xdc_Char)0x6f,  /* [3818] */
    (xdc_Char)0x74,  /* [3819] */
    (xdc_Char)0x41,  /* [3820] */
    (xdc_Char)0x6c,  /* [3821] */
    (xdc_Char)0x6c,  /* [3822] */
    (xdc_Char)0x6f,  /* [3823] */
    (xdc_Char)0x77,  /* [3824] */
    (xdc_Char)0x65,  /* [3825] */
    (xdc_Char)0x64,  /* [3826] */
    (xdc_Char)0x3a,  /* [3827] */
    (xdc_Char)0x20,  /* [3828] */
    (xdc_Char)0x54,  /* [3829] */
    (xdc_Char)0x61,  /* [3830] */
    (xdc_Char)0x73,  /* [3831] */
    (xdc_Char)0x6b,  /* [3832] */
    (xdc_Char)0x20,  /* [3833] */
    (xdc_Char)0x30,  /* [3834] */
    (xdc_Char)0x78,  /* [3835] */
    (xdc_Char)0x25,  /* [3836] */
    (xdc_Char)0x78,  /* [3837] */
    (xdc_Char)0x2e,  /* [3838] */
    (xdc_Char)0x0,  /* [3839] */
    (xdc_Char)0x45,  /* [3840] */
    (xdc_Char)0x5f,  /* [3841] */
    (xdc_Char)0x6d,  /* [3842] */
    (xdc_Char)0x6f,  /* [3843] */
    (xdc_Char)0x64,  /* [3844] */
    (xdc_Char)0x75,  /* [3845] */
    (xdc_Char)0x6c,  /* [3846] */
    (xdc_Char)0x65,  /* [3847] */
    (xdc_Char)0x53,  /* [3848] */
    (xdc_Char)0x74,  /* [3849] */
    (xdc_Char)0x61,  /* [3850] */
    (xdc_Char)0x74,  /* [3851] */
    (xdc_Char)0x65,  /* [3852] */
    (xdc_Char)0x43,  /* [3853] */
    (xdc_Char)0x68,  /* [3854] */
    (xdc_Char)0x65,  /* [3855] */
    (xdc_Char)0x63,  /* [3856] */
    (xdc_Char)0x6b,  /* [3857] */
    (xdc_Char)0x46,  /* [3858] */
    (xdc_Char)0x61,  /* [3859] */
    (xdc_Char)0x69,  /* [3860] */
    (xdc_Char)0x6c,  /* [3861] */
    (xdc_Char)0x65,  /* [3862] */
    (xdc_Char)0x64,  /* [3863] */
    (xdc_Char)0x3a,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x54,  /* [3866] */
    (xdc_Char)0x61,  /* [3867] */
    (xdc_Char)0x73,  /* [3868] */
    (xdc_Char)0x6b,  /* [3869] */
    (xdc_Char)0x20,  /* [3870] */
    (xdc_Char)0x6d,  /* [3871] */
    (xdc_Char)0x6f,  /* [3872] */
    (xdc_Char)0x64,  /* [3873] */
    (xdc_Char)0x75,  /* [3874] */
    (xdc_Char)0x6c,  /* [3875] */
    (xdc_Char)0x65,  /* [3876] */
    (xdc_Char)0x20,  /* [3877] */
    (xdc_Char)0x73,  /* [3878] */
    (xdc_Char)0x74,  /* [3879] */
    (xdc_Char)0x61,  /* [3880] */
    (xdc_Char)0x74,  /* [3881] */
    (xdc_Char)0x65,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x64,  /* [3884] */
    (xdc_Char)0x61,  /* [3885] */
    (xdc_Char)0x74,  /* [3886] */
    (xdc_Char)0x61,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x69,  /* [3889] */
    (xdc_Char)0x6e,  /* [3890] */
    (xdc_Char)0x74,  /* [3891] */
    (xdc_Char)0x65,  /* [3892] */
    (xdc_Char)0x67,  /* [3893] */
    (xdc_Char)0x72,  /* [3894] */
    (xdc_Char)0x69,  /* [3895] */
    (xdc_Char)0x74,  /* [3896] */
    (xdc_Char)0x79,  /* [3897] */
    (xdc_Char)0x20,  /* [3898] */
    (xdc_Char)0x63,  /* [3899] */
    (xdc_Char)0x68,  /* [3900] */
    (xdc_Char)0x65,  /* [3901] */
    (xdc_Char)0x63,  /* [3902] */
    (xdc_Char)0x6b,  /* [3903] */
    (xdc_Char)0x20,  /* [3904] */
    (xdc_Char)0x66,  /* [3905] */
    (xdc_Char)0x61,  /* [3906] */
    (xdc_Char)0x69,  /* [3907] */
    (xdc_Char)0x6c,  /* [3908] */
    (xdc_Char)0x65,  /* [3909] */
    (xdc_Char)0x64,  /* [3910] */
    (xdc_Char)0x2e,  /* [3911] */
    (xdc_Char)0x0,  /* [3912] */
    (xdc_Char)0x45,  /* [3913] */
    (xdc_Char)0x5f,  /* [3914] */
    (xdc_Char)0x6f,  /* [3915] */
    (xdc_Char)0x62,  /* [3916] */
    (xdc_Char)0x6a,  /* [3917] */
    (xdc_Char)0x65,  /* [3918] */
    (xdc_Char)0x63,  /* [3919] */
    (xdc_Char)0x74,  /* [3920] */
    (xdc_Char)0x43,  /* [3921] */
    (xdc_Char)0x68,  /* [3922] */
    (xdc_Char)0x65,  /* [3923] */
    (xdc_Char)0x63,  /* [3924] */
    (xdc_Char)0x6b,  /* [3925] */
    (xdc_Char)0x46,  /* [3926] */
    (xdc_Char)0x61,  /* [3927] */
    (xdc_Char)0x69,  /* [3928] */
    (xdc_Char)0x6c,  /* [3929] */
    (xdc_Char)0x65,  /* [3930] */
    (xdc_Char)0x64,  /* [3931] */
    (xdc_Char)0x3a,  /* [3932] */
    (xdc_Char)0x20,  /* [3933] */
    (xdc_Char)0x54,  /* [3934] */
    (xdc_Char)0x61,  /* [3935] */
    (xdc_Char)0x73,  /* [3936] */
    (xdc_Char)0x6b,  /* [3937] */
    (xdc_Char)0x20,  /* [3938] */
    (xdc_Char)0x30,  /* [3939] */
    (xdc_Char)0x78,  /* [3940] */
    (xdc_Char)0x25,  /* [3941] */
    (xdc_Char)0x78,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x6f,  /* [3944] */
    (xdc_Char)0x62,  /* [3945] */
    (xdc_Char)0x6a,  /* [3946] */
    (xdc_Char)0x65,  /* [3947] */
    (xdc_Char)0x63,  /* [3948] */
    (xdc_Char)0x74,  /* [3949] */
    (xdc_Char)0x20,  /* [3950] */
    (xdc_Char)0x64,  /* [3951] */
    (xdc_Char)0x61,  /* [3952] */
    (xdc_Char)0x74,  /* [3953] */
    (xdc_Char)0x61,  /* [3954] */
    (xdc_Char)0x20,  /* [3955] */
    (xdc_Char)0x69,  /* [3956] */
    (xdc_Char)0x6e,  /* [3957] */
    (xdc_Char)0x74,  /* [3958] */
    (xdc_Char)0x65,  /* [3959] */
    (xdc_Char)0x67,  /* [3960] */
    (xdc_Char)0x72,  /* [3961] */
    (xdc_Char)0x69,  /* [3962] */
    (xdc_Char)0x74,  /* [3963] */
    (xdc_Char)0x79,  /* [3964] */
    (xdc_Char)0x20,  /* [3965] */
    (xdc_Char)0x63,  /* [3966] */
    (xdc_Char)0x68,  /* [3967] */
    (xdc_Char)0x65,  /* [3968] */
    (xdc_Char)0x63,  /* [3969] */
    (xdc_Char)0x6b,  /* [3970] */
    (xdc_Char)0x20,  /* [3971] */
    (xdc_Char)0x66,  /* [3972] */
    (xdc_Char)0x61,  /* [3973] */
    (xdc_Char)0x69,  /* [3974] */
    (xdc_Char)0x6c,  /* [3975] */
    (xdc_Char)0x65,  /* [3976] */
    (xdc_Char)0x64,  /* [3977] */
    (xdc_Char)0x2e,  /* [3978] */
    (xdc_Char)0x0,  /* [3979] */
    (xdc_Char)0x45,  /* [3980] */
    (xdc_Char)0x5f,  /* [3981] */
    (xdc_Char)0x61,  /* [3982] */
    (xdc_Char)0x6c,  /* [3983] */
    (xdc_Char)0x72,  /* [3984] */
    (xdc_Char)0x65,  /* [3985] */
    (xdc_Char)0x61,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x79,  /* [3988] */
    (xdc_Char)0x44,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x66,  /* [3991] */
    (xdc_Char)0x69,  /* [3992] */
    (xdc_Char)0x6e,  /* [3993] */
    (xdc_Char)0x65,  /* [3994] */
    (xdc_Char)0x64,  /* [3995] */
    (xdc_Char)0x3a,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x48,  /* [3998] */
    (xdc_Char)0x77,  /* [3999] */
    (xdc_Char)0x69,  /* [4000] */
    (xdc_Char)0x20,  /* [4001] */
    (xdc_Char)0x61,  /* [4002] */
    (xdc_Char)0x6c,  /* [4003] */
    (xdc_Char)0x72,  /* [4004] */
    (xdc_Char)0x65,  /* [4005] */
    (xdc_Char)0x61,  /* [4006] */
    (xdc_Char)0x64,  /* [4007] */
    (xdc_Char)0x79,  /* [4008] */
    (xdc_Char)0x20,  /* [4009] */
    (xdc_Char)0x64,  /* [4010] */
    (xdc_Char)0x65,  /* [4011] */
    (xdc_Char)0x66,  /* [4012] */
    (xdc_Char)0x69,  /* [4013] */
    (xdc_Char)0x6e,  /* [4014] */
    (xdc_Char)0x65,  /* [4015] */
    (xdc_Char)0x64,  /* [4016] */
    (xdc_Char)0x3a,  /* [4017] */
    (xdc_Char)0x20,  /* [4018] */
    (xdc_Char)0x69,  /* [4019] */
    (xdc_Char)0x6e,  /* [4020] */
    (xdc_Char)0x74,  /* [4021] */
    (xdc_Char)0x72,  /* [4022] */
    (xdc_Char)0x23,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x25,  /* [4025] */
    (xdc_Char)0x64,  /* [4026] */
    (xdc_Char)0x0,  /* [4027] */
    (xdc_Char)0x45,  /* [4028] */
    (xdc_Char)0x5f,  /* [4029] */
    (xdc_Char)0x68,  /* [4030] */
    (xdc_Char)0x77,  /* [4031] */
    (xdc_Char)0x69,  /* [4032] */
    (xdc_Char)0x4c,  /* [4033] */
    (xdc_Char)0x69,  /* [4034] */
    (xdc_Char)0x6d,  /* [4035] */
    (xdc_Char)0x69,  /* [4036] */
    (xdc_Char)0x74,  /* [4037] */
    (xdc_Char)0x45,  /* [4038] */
    (xdc_Char)0x78,  /* [4039] */
    (xdc_Char)0x63,  /* [4040] */
    (xdc_Char)0x65,  /* [4041] */
    (xdc_Char)0x65,  /* [4042] */
    (xdc_Char)0x64,  /* [4043] */
    (xdc_Char)0x65,  /* [4044] */
    (xdc_Char)0x64,  /* [4045] */
    (xdc_Char)0x3a,  /* [4046] */
    (xdc_Char)0x20,  /* [4047] */
    (xdc_Char)0x54,  /* [4048] */
    (xdc_Char)0x6f,  /* [4049] */
    (xdc_Char)0x6f,  /* [4050] */
    (xdc_Char)0x20,  /* [4051] */
    (xdc_Char)0x6d,  /* [4052] */
    (xdc_Char)0x61,  /* [4053] */
    (xdc_Char)0x6e,  /* [4054] */
    (xdc_Char)0x79,  /* [4055] */
    (xdc_Char)0x20,  /* [4056] */
    (xdc_Char)0x69,  /* [4057] */
    (xdc_Char)0x6e,  /* [4058] */
    (xdc_Char)0x74,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x72,  /* [4061] */
    (xdc_Char)0x72,  /* [4062] */
    (xdc_Char)0x75,  /* [4063] */
    (xdc_Char)0x70,  /* [4064] */
    (xdc_Char)0x74,  /* [4065] */
    (xdc_Char)0x73,  /* [4066] */
    (xdc_Char)0x20,  /* [4067] */
    (xdc_Char)0x64,  /* [4068] */
    (xdc_Char)0x65,  /* [4069] */
    (xdc_Char)0x66,  /* [4070] */
    (xdc_Char)0x69,  /* [4071] */
    (xdc_Char)0x6e,  /* [4072] */
    (xdc_Char)0x65,  /* [4073] */
    (xdc_Char)0x64,  /* [4074] */
    (xdc_Char)0x0,  /* [4075] */
    (xdc_Char)0x45,  /* [4076] */
    (xdc_Char)0x5f,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x78,  /* [4079] */
    (xdc_Char)0x63,  /* [4080] */
    (xdc_Char)0x65,  /* [4081] */
    (xdc_Char)0x70,  /* [4082] */
    (xdc_Char)0x74,  /* [4083] */
    (xdc_Char)0x69,  /* [4084] */
    (xdc_Char)0x6f,  /* [4085] */
    (xdc_Char)0x6e,  /* [4086] */
    (xdc_Char)0x3a,  /* [4087] */
    (xdc_Char)0x20,  /* [4088] */
    (xdc_Char)0x69,  /* [4089] */
    (xdc_Char)0x64,  /* [4090] */
    (xdc_Char)0x20,  /* [4091] */
    (xdc_Char)0x3d,  /* [4092] */
    (xdc_Char)0x20,  /* [4093] */
    (xdc_Char)0x25,  /* [4094] */
    (xdc_Char)0x64,  /* [4095] */
    (xdc_Char)0x2c,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x70,  /* [4098] */
    (xdc_Char)0x63,  /* [4099] */
    (xdc_Char)0x20,  /* [4100] */
    (xdc_Char)0x3d,  /* [4101] */
    (xdc_Char)0x20,  /* [4102] */
    (xdc_Char)0x25,  /* [4103] */
    (xdc_Char)0x30,  /* [4104] */
    (xdc_Char)0x38,  /* [4105] */
    (xdc_Char)0x78,  /* [4106] */
    (xdc_Char)0x2e,  /* [4107] */
    (xdc_Char)0xa,  /* [4108] */
    (xdc_Char)0x54,  /* [4109] */
    (xdc_Char)0x6f,  /* [4110] */
    (xdc_Char)0x20,  /* [4111] */
    (xdc_Char)0x73,  /* [4112] */
    (xdc_Char)0x65,  /* [4113] */
    (xdc_Char)0x65,  /* [4114] */
    (xdc_Char)0x20,  /* [4115] */
    (xdc_Char)0x6d,  /* [4116] */
    (xdc_Char)0x6f,  /* [4117] */
    (xdc_Char)0x72,  /* [4118] */
    (xdc_Char)0x65,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x65,  /* [4121] */
    (xdc_Char)0x78,  /* [4122] */
    (xdc_Char)0x63,  /* [4123] */
    (xdc_Char)0x65,  /* [4124] */
    (xdc_Char)0x70,  /* [4125] */
    (xdc_Char)0x74,  /* [4126] */
    (xdc_Char)0x69,  /* [4127] */
    (xdc_Char)0x6f,  /* [4128] */
    (xdc_Char)0x6e,  /* [4129] */
    (xdc_Char)0x20,  /* [4130] */
    (xdc_Char)0x64,  /* [4131] */
    (xdc_Char)0x65,  /* [4132] */
    (xdc_Char)0x74,  /* [4133] */
    (xdc_Char)0x61,  /* [4134] */
    (xdc_Char)0x69,  /* [4135] */
    (xdc_Char)0x6c,  /* [4136] */
    (xdc_Char)0x2c,  /* [4137] */
    (xdc_Char)0x20,  /* [4138] */
    (xdc_Char)0x73,  /* [4139] */
    (xdc_Char)0x65,  /* [4140] */
    (xdc_Char)0x74,  /* [4141] */
    (xdc_Char)0x20,  /* [4142] */
    (xdc_Char)0x74,  /* [4143] */
    (xdc_Char)0x69,  /* [4144] */
    (xdc_Char)0x2e,  /* [4145] */
    (xdc_Char)0x73,  /* [4146] */
    (xdc_Char)0x79,  /* [4147] */
    (xdc_Char)0x73,  /* [4148] */
    (xdc_Char)0x62,  /* [4149] */
    (xdc_Char)0x69,  /* [4150] */
    (xdc_Char)0x6f,  /* [4151] */
    (xdc_Char)0x73,  /* [4152] */
    (xdc_Char)0x2e,  /* [4153] */
    (xdc_Char)0x66,  /* [4154] */
    (xdc_Char)0x61,  /* [4155] */
    (xdc_Char)0x6d,  /* [4156] */
    (xdc_Char)0x69,  /* [4157] */
    (xdc_Char)0x6c,  /* [4158] */
    (xdc_Char)0x79,  /* [4159] */
    (xdc_Char)0x2e,  /* [4160] */
    (xdc_Char)0x61,  /* [4161] */
    (xdc_Char)0x72,  /* [4162] */
    (xdc_Char)0x6d,  /* [4163] */
    (xdc_Char)0x2e,  /* [4164] */
    (xdc_Char)0x6d,  /* [4165] */
    (xdc_Char)0x33,  /* [4166] */
    (xdc_Char)0x2e,  /* [4167] */
    (xdc_Char)0x48,  /* [4168] */
    (xdc_Char)0x77,  /* [4169] */
    (xdc_Char)0x69,  /* [4170] */
    (xdc_Char)0x2e,  /* [4171] */
    (xdc_Char)0x65,  /* [4172] */
    (xdc_Char)0x6e,  /* [4173] */
    (xdc_Char)0x61,  /* [4174] */
    (xdc_Char)0x62,  /* [4175] */
    (xdc_Char)0x6c,  /* [4176] */
    (xdc_Char)0x65,  /* [4177] */
    (xdc_Char)0x45,  /* [4178] */
    (xdc_Char)0x78,  /* [4179] */
    (xdc_Char)0x63,  /* [4180] */
    (xdc_Char)0x65,  /* [4181] */
    (xdc_Char)0x70,  /* [4182] */
    (xdc_Char)0x74,  /* [4183] */
    (xdc_Char)0x69,  /* [4184] */
    (xdc_Char)0x6f,  /* [4185] */
    (xdc_Char)0x6e,  /* [4186] */
    (xdc_Char)0x20,  /* [4187] */
    (xdc_Char)0x3d,  /* [4188] */
    (xdc_Char)0x20,  /* [4189] */
    (xdc_Char)0x74,  /* [4190] */
    (xdc_Char)0x72,  /* [4191] */
    (xdc_Char)0x75,  /* [4192] */
    (xdc_Char)0x65,  /* [4193] */
    (xdc_Char)0x20,  /* [4194] */
    (xdc_Char)0x6f,  /* [4195] */
    (xdc_Char)0x72,  /* [4196] */
    (xdc_Char)0x2c,  /* [4197] */
    (xdc_Char)0xa,  /* [4198] */
    (xdc_Char)0x65,  /* [4199] */
    (xdc_Char)0x78,  /* [4200] */
    (xdc_Char)0x61,  /* [4201] */
    (xdc_Char)0x6d,  /* [4202] */
    (xdc_Char)0x69,  /* [4203] */
    (xdc_Char)0x6e,  /* [4204] */
    (xdc_Char)0x65,  /* [4205] */
    (xdc_Char)0x20,  /* [4206] */
    (xdc_Char)0x74,  /* [4207] */
    (xdc_Char)0x68,  /* [4208] */
    (xdc_Char)0x65,  /* [4209] */
    (xdc_Char)0x20,  /* [4210] */
    (xdc_Char)0x45,  /* [4211] */
    (xdc_Char)0x78,  /* [4212] */
    (xdc_Char)0x63,  /* [4213] */
    (xdc_Char)0x65,  /* [4214] */
    (xdc_Char)0x70,  /* [4215] */
    (xdc_Char)0x74,  /* [4216] */
    (xdc_Char)0x69,  /* [4217] */
    (xdc_Char)0x6f,  /* [4218] */
    (xdc_Char)0x6e,  /* [4219] */
    (xdc_Char)0x20,  /* [4220] */
    (xdc_Char)0x76,  /* [4221] */
    (xdc_Char)0x69,  /* [4222] */
    (xdc_Char)0x65,  /* [4223] */
    (xdc_Char)0x77,  /* [4224] */
    (xdc_Char)0x20,  /* [4225] */
    (xdc_Char)0x66,  /* [4226] */
    (xdc_Char)0x6f,  /* [4227] */
    (xdc_Char)0x72,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x74,  /* [4230] */
    (xdc_Char)0x68,  /* [4231] */
    (xdc_Char)0x65,  /* [4232] */
    (xdc_Char)0x20,  /* [4233] */
    (xdc_Char)0x74,  /* [4234] */
    (xdc_Char)0x69,  /* [4235] */
    (xdc_Char)0x2e,  /* [4236] */
    (xdc_Char)0x73,  /* [4237] */
    (xdc_Char)0x79,  /* [4238] */
    (xdc_Char)0x73,  /* [4239] */
    (xdc_Char)0x62,  /* [4240] */
    (xdc_Char)0x69,  /* [4241] */
    (xdc_Char)0x6f,  /* [4242] */
    (xdc_Char)0x73,  /* [4243] */
    (xdc_Char)0x2e,  /* [4244] */
    (xdc_Char)0x66,  /* [4245] */
    (xdc_Char)0x61,  /* [4246] */
    (xdc_Char)0x6d,  /* [4247] */
    (xdc_Char)0x69,  /* [4248] */
    (xdc_Char)0x6c,  /* [4249] */
    (xdc_Char)0x79,  /* [4250] */
    (xdc_Char)0x2e,  /* [4251] */
    (xdc_Char)0x61,  /* [4252] */
    (xdc_Char)0x72,  /* [4253] */
    (xdc_Char)0x6d,  /* [4254] */
    (xdc_Char)0x2e,  /* [4255] */
    (xdc_Char)0x6d,  /* [4256] */
    (xdc_Char)0x33,  /* [4257] */
    (xdc_Char)0x2e,  /* [4258] */
    (xdc_Char)0x48,  /* [4259] */
    (xdc_Char)0x77,  /* [4260] */
    (xdc_Char)0x69,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x6d,  /* [4263] */
    (xdc_Char)0x6f,  /* [4264] */
    (xdc_Char)0x64,  /* [4265] */
    (xdc_Char)0x75,  /* [4266] */
    (xdc_Char)0x6c,  /* [4267] */
    (xdc_Char)0x65,  /* [4268] */
    (xdc_Char)0x20,  /* [4269] */
    (xdc_Char)0x75,  /* [4270] */
    (xdc_Char)0x73,  /* [4271] */
    (xdc_Char)0x69,  /* [4272] */
    (xdc_Char)0x6e,  /* [4273] */
    (xdc_Char)0x67,  /* [4274] */
    (xdc_Char)0x20,  /* [4275] */
    (xdc_Char)0x52,  /* [4276] */
    (xdc_Char)0x4f,  /* [4277] */
    (xdc_Char)0x56,  /* [4278] */
    (xdc_Char)0x2e,  /* [4279] */
    (xdc_Char)0x0,  /* [4280] */
    (xdc_Char)0x45,  /* [4281] */
    (xdc_Char)0x5f,  /* [4282] */
    (xdc_Char)0x6e,  /* [4283] */
    (xdc_Char)0x6f,  /* [4284] */
    (xdc_Char)0x49,  /* [4285] */
    (xdc_Char)0x73,  /* [4286] */
    (xdc_Char)0x72,  /* [4287] */
    (xdc_Char)0x3a,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x69,  /* [4290] */
    (xdc_Char)0x64,  /* [4291] */
    (xdc_Char)0x20,  /* [4292] */
    (xdc_Char)0x3d,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x25,  /* [4295] */
    (xdc_Char)0x64,  /* [4296] */
    (xdc_Char)0x2c,  /* [4297] */
    (xdc_Char)0x20,  /* [4298] */
    (xdc_Char)0x70,  /* [4299] */
    (xdc_Char)0x63,  /* [4300] */
    (xdc_Char)0x20,  /* [4301] */
    (xdc_Char)0x3d,  /* [4302] */
    (xdc_Char)0x20,  /* [4303] */
    (xdc_Char)0x25,  /* [4304] */
    (xdc_Char)0x30,  /* [4305] */
    (xdc_Char)0x38,  /* [4306] */
    (xdc_Char)0x78,  /* [4307] */
    (xdc_Char)0x0,  /* [4308] */
    (xdc_Char)0x45,  /* [4309] */
    (xdc_Char)0x5f,  /* [4310] */
    (xdc_Char)0x4e,  /* [4311] */
    (xdc_Char)0x4d,  /* [4312] */
    (xdc_Char)0x49,  /* [4313] */
    (xdc_Char)0x3a,  /* [4314] */
    (xdc_Char)0x20,  /* [4315] */
    (xdc_Char)0x25,  /* [4316] */
    (xdc_Char)0x73,  /* [4317] */
    (xdc_Char)0x0,  /* [4318] */
    (xdc_Char)0x45,  /* [4319] */
    (xdc_Char)0x5f,  /* [4320] */
    (xdc_Char)0x68,  /* [4321] */
    (xdc_Char)0x61,  /* [4322] */
    (xdc_Char)0x72,  /* [4323] */
    (xdc_Char)0x64,  /* [4324] */
    (xdc_Char)0x46,  /* [4325] */
    (xdc_Char)0x61,  /* [4326] */
    (xdc_Char)0x75,  /* [4327] */
    (xdc_Char)0x6c,  /* [4328] */
    (xdc_Char)0x74,  /* [4329] */
    (xdc_Char)0x3a,  /* [4330] */
    (xdc_Char)0x20,  /* [4331] */
    (xdc_Char)0x25,  /* [4332] */
    (xdc_Char)0x73,  /* [4333] */
    (xdc_Char)0x0,  /* [4334] */
    (xdc_Char)0x45,  /* [4335] */
    (xdc_Char)0x5f,  /* [4336] */
    (xdc_Char)0x6d,  /* [4337] */
    (xdc_Char)0x65,  /* [4338] */
    (xdc_Char)0x6d,  /* [4339] */
    (xdc_Char)0x46,  /* [4340] */
    (xdc_Char)0x61,  /* [4341] */
    (xdc_Char)0x75,  /* [4342] */
    (xdc_Char)0x6c,  /* [4343] */
    (xdc_Char)0x74,  /* [4344] */
    (xdc_Char)0x3a,  /* [4345] */
    (xdc_Char)0x20,  /* [4346] */
    (xdc_Char)0x25,  /* [4347] */
    (xdc_Char)0x73,  /* [4348] */
    (xdc_Char)0x2c,  /* [4349] */
    (xdc_Char)0x20,  /* [4350] */
    (xdc_Char)0x61,  /* [4351] */
    (xdc_Char)0x64,  /* [4352] */
    (xdc_Char)0x64,  /* [4353] */
    (xdc_Char)0x72,  /* [4354] */
    (xdc_Char)0x65,  /* [4355] */
    (xdc_Char)0x73,  /* [4356] */
    (xdc_Char)0x73,  /* [4357] */
    (xdc_Char)0x3a,  /* [4358] */
    (xdc_Char)0x20,  /* [4359] */
    (xdc_Char)0x25,  /* [4360] */
    (xdc_Char)0x30,  /* [4361] */
    (xdc_Char)0x38,  /* [4362] */
    (xdc_Char)0x78,  /* [4363] */
    (xdc_Char)0x0,  /* [4364] */
    (xdc_Char)0x45,  /* [4365] */
    (xdc_Char)0x5f,  /* [4366] */
    (xdc_Char)0x62,  /* [4367] */
    (xdc_Char)0x75,  /* [4368] */
    (xdc_Char)0x73,  /* [4369] */
    (xdc_Char)0x46,  /* [4370] */
    (xdc_Char)0x61,  /* [4371] */
    (xdc_Char)0x75,  /* [4372] */
    (xdc_Char)0x6c,  /* [4373] */
    (xdc_Char)0x74,  /* [4374] */
    (xdc_Char)0x3a,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x25,  /* [4377] */
    (xdc_Char)0x73,  /* [4378] */
    (xdc_Char)0x2c,  /* [4379] */
    (xdc_Char)0x20,  /* [4380] */
    (xdc_Char)0x61,  /* [4381] */
    (xdc_Char)0x64,  /* [4382] */
    (xdc_Char)0x64,  /* [4383] */
    (xdc_Char)0x72,  /* [4384] */
    (xdc_Char)0x65,  /* [4385] */
    (xdc_Char)0x73,  /* [4386] */
    (xdc_Char)0x73,  /* [4387] */
    (xdc_Char)0x3a,  /* [4388] */
    (xdc_Char)0x20,  /* [4389] */
    (xdc_Char)0x25,  /* [4390] */
    (xdc_Char)0x30,  /* [4391] */
    (xdc_Char)0x38,  /* [4392] */
    (xdc_Char)0x78,  /* [4393] */
    (xdc_Char)0x0,  /* [4394] */
    (xdc_Char)0x45,  /* [4395] */
    (xdc_Char)0x5f,  /* [4396] */
    (xdc_Char)0x75,  /* [4397] */
    (xdc_Char)0x73,  /* [4398] */
    (xdc_Char)0x61,  /* [4399] */
    (xdc_Char)0x67,  /* [4400] */
    (xdc_Char)0x65,  /* [4401] */
    (xdc_Char)0x46,  /* [4402] */
    (xdc_Char)0x61,  /* [4403] */
    (xdc_Char)0x75,  /* [4404] */
    (xdc_Char)0x6c,  /* [4405] */
    (xdc_Char)0x74,  /* [4406] */
    (xdc_Char)0x3a,  /* [4407] */
    (xdc_Char)0x20,  /* [4408] */
    (xdc_Char)0x25,  /* [4409] */
    (xdc_Char)0x73,  /* [4410] */
    (xdc_Char)0x0,  /* [4411] */
    (xdc_Char)0x45,  /* [4412] */
    (xdc_Char)0x5f,  /* [4413] */
    (xdc_Char)0x73,  /* [4414] */
    (xdc_Char)0x76,  /* [4415] */
    (xdc_Char)0x43,  /* [4416] */
    (xdc_Char)0x61,  /* [4417] */
    (xdc_Char)0x6c,  /* [4418] */
    (xdc_Char)0x6c,  /* [4419] */
    (xdc_Char)0x3a,  /* [4420] */
    (xdc_Char)0x20,  /* [4421] */
    (xdc_Char)0x73,  /* [4422] */
    (xdc_Char)0x76,  /* [4423] */
    (xdc_Char)0x4e,  /* [4424] */
    (xdc_Char)0x75,  /* [4425] */
    (xdc_Char)0x6d,  /* [4426] */
    (xdc_Char)0x20,  /* [4427] */
    (xdc_Char)0x3d,  /* [4428] */
    (xdc_Char)0x20,  /* [4429] */
    (xdc_Char)0x25,  /* [4430] */
    (xdc_Char)0x64,  /* [4431] */
    (xdc_Char)0x0,  /* [4432] */
    (xdc_Char)0x45,  /* [4433] */
    (xdc_Char)0x5f,  /* [4434] */
    (xdc_Char)0x64,  /* [4435] */
    (xdc_Char)0x65,  /* [4436] */
    (xdc_Char)0x62,  /* [4437] */
    (xdc_Char)0x75,  /* [4438] */
    (xdc_Char)0x67,  /* [4439] */
    (xdc_Char)0x4d,  /* [4440] */
    (xdc_Char)0x6f,  /* [4441] */
    (xdc_Char)0x6e,  /* [4442] */
    (xdc_Char)0x3a,  /* [4443] */
    (xdc_Char)0x20,  /* [4444] */
    (xdc_Char)0x25,  /* [4445] */
    (xdc_Char)0x73,  /* [4446] */
    (xdc_Char)0x0,  /* [4447] */
    (xdc_Char)0x45,  /* [4448] */
    (xdc_Char)0x5f,  /* [4449] */
    (xdc_Char)0x72,  /* [4450] */
    (xdc_Char)0x65,  /* [4451] */
    (xdc_Char)0x73,  /* [4452] */
    (xdc_Char)0x65,  /* [4453] */
    (xdc_Char)0x72,  /* [4454] */
    (xdc_Char)0x76,  /* [4455] */
    (xdc_Char)0x65,  /* [4456] */
    (xdc_Char)0x64,  /* [4457] */
    (xdc_Char)0x3a,  /* [4458] */
    (xdc_Char)0x20,  /* [4459] */
    (xdc_Char)0x25,  /* [4460] */
    (xdc_Char)0x73,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x25,  /* [4463] */
    (xdc_Char)0x64,  /* [4464] */
    (xdc_Char)0x0,  /* [4465] */
    (xdc_Char)0x45,  /* [4466] */
    (xdc_Char)0x5f,  /* [4467] */
    (xdc_Char)0x69,  /* [4468] */
    (xdc_Char)0x6e,  /* [4469] */
    (xdc_Char)0x76,  /* [4470] */
    (xdc_Char)0x61,  /* [4471] */
    (xdc_Char)0x6c,  /* [4472] */
    (xdc_Char)0x69,  /* [4473] */
    (xdc_Char)0x64,  /* [4474] */
    (xdc_Char)0x54,  /* [4475] */
    (xdc_Char)0x69,  /* [4476] */
    (xdc_Char)0x6d,  /* [4477] */
    (xdc_Char)0x65,  /* [4478] */
    (xdc_Char)0x72,  /* [4479] */
    (xdc_Char)0x3a,  /* [4480] */
    (xdc_Char)0x20,  /* [4481] */
    (xdc_Char)0x49,  /* [4482] */
    (xdc_Char)0x6e,  /* [4483] */
    (xdc_Char)0x76,  /* [4484] */
    (xdc_Char)0x61,  /* [4485] */
    (xdc_Char)0x6c,  /* [4486] */
    (xdc_Char)0x69,  /* [4487] */
    (xdc_Char)0x64,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x54,  /* [4490] */
    (xdc_Char)0x69,  /* [4491] */
    (xdc_Char)0x6d,  /* [4492] */
    (xdc_Char)0x65,  /* [4493] */
    (xdc_Char)0x72,  /* [4494] */
    (xdc_Char)0x20,  /* [4495] */
    (xdc_Char)0x49,  /* [4496] */
    (xdc_Char)0x64,  /* [4497] */
    (xdc_Char)0x20,  /* [4498] */
    (xdc_Char)0x25,  /* [4499] */
    (xdc_Char)0x64,  /* [4500] */
    (xdc_Char)0x0,  /* [4501] */
    (xdc_Char)0x45,  /* [4502] */
    (xdc_Char)0x5f,  /* [4503] */
    (xdc_Char)0x6e,  /* [4504] */
    (xdc_Char)0x6f,  /* [4505] */
    (xdc_Char)0x74,  /* [4506] */
    (xdc_Char)0x41,  /* [4507] */
    (xdc_Char)0x76,  /* [4508] */
    (xdc_Char)0x61,  /* [4509] */
    (xdc_Char)0x69,  /* [4510] */
    (xdc_Char)0x6c,  /* [4511] */
    (xdc_Char)0x61,  /* [4512] */
    (xdc_Char)0x62,  /* [4513] */
    (xdc_Char)0x6c,  /* [4514] */
    (xdc_Char)0x65,  /* [4515] */
    (xdc_Char)0x3a,  /* [4516] */
    (xdc_Char)0x20,  /* [4517] */
    (xdc_Char)0x54,  /* [4518] */
    (xdc_Char)0x69,  /* [4519] */
    (xdc_Char)0x6d,  /* [4520] */
    (xdc_Char)0x65,  /* [4521] */
    (xdc_Char)0x72,  /* [4522] */
    (xdc_Char)0x20,  /* [4523] */
    (xdc_Char)0x6e,  /* [4524] */
    (xdc_Char)0x6f,  /* [4525] */
    (xdc_Char)0x74,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x61,  /* [4528] */
    (xdc_Char)0x76,  /* [4529] */
    (xdc_Char)0x61,  /* [4530] */
    (xdc_Char)0x69,  /* [4531] */
    (xdc_Char)0x6c,  /* [4532] */
    (xdc_Char)0x61,  /* [4533] */
    (xdc_Char)0x62,  /* [4534] */
    (xdc_Char)0x6c,  /* [4535] */
    (xdc_Char)0x65,  /* [4536] */
    (xdc_Char)0x20,  /* [4537] */
    (xdc_Char)0x25,  /* [4538] */
    (xdc_Char)0x64,  /* [4539] */
    (xdc_Char)0x0,  /* [4540] */
    (xdc_Char)0x45,  /* [4541] */
    (xdc_Char)0x5f,  /* [4542] */
    (xdc_Char)0x63,  /* [4543] */
    (xdc_Char)0x61,  /* [4544] */
    (xdc_Char)0x6e,  /* [4545] */
    (xdc_Char)0x6e,  /* [4546] */
    (xdc_Char)0x6f,  /* [4547] */
    (xdc_Char)0x74,  /* [4548] */
    (xdc_Char)0x53,  /* [4549] */
    (xdc_Char)0x75,  /* [4550] */
    (xdc_Char)0x70,  /* [4551] */
    (xdc_Char)0x70,  /* [4552] */
    (xdc_Char)0x6f,  /* [4553] */
    (xdc_Char)0x72,  /* [4554] */
    (xdc_Char)0x74,  /* [4555] */
    (xdc_Char)0x3a,  /* [4556] */
    (xdc_Char)0x20,  /* [4557] */
    (xdc_Char)0x54,  /* [4558] */
    (xdc_Char)0x69,  /* [4559] */
    (xdc_Char)0x6d,  /* [4560] */
    (xdc_Char)0x65,  /* [4561] */
    (xdc_Char)0x72,  /* [4562] */
    (xdc_Char)0x20,  /* [4563] */
    (xdc_Char)0x63,  /* [4564] */
    (xdc_Char)0x61,  /* [4565] */
    (xdc_Char)0x6e,  /* [4566] */
    (xdc_Char)0x6e,  /* [4567] */
    (xdc_Char)0x6f,  /* [4568] */
    (xdc_Char)0x74,  /* [4569] */
    (xdc_Char)0x20,  /* [4570] */
    (xdc_Char)0x73,  /* [4571] */
    (xdc_Char)0x75,  /* [4572] */
    (xdc_Char)0x70,  /* [4573] */
    (xdc_Char)0x70,  /* [4574] */
    (xdc_Char)0x6f,  /* [4575] */
    (xdc_Char)0x72,  /* [4576] */
    (xdc_Char)0x74,  /* [4577] */
    (xdc_Char)0x20,  /* [4578] */
    (xdc_Char)0x72,  /* [4579] */
    (xdc_Char)0x65,  /* [4580] */
    (xdc_Char)0x71,  /* [4581] */
    (xdc_Char)0x75,  /* [4582] */
    (xdc_Char)0x65,  /* [4583] */
    (xdc_Char)0x73,  /* [4584] */
    (xdc_Char)0x74,  /* [4585] */
    (xdc_Char)0x65,  /* [4586] */
    (xdc_Char)0x64,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x70,  /* [4589] */
    (xdc_Char)0x65,  /* [4590] */
    (xdc_Char)0x72,  /* [4591] */
    (xdc_Char)0x69,  /* [4592] */
    (xdc_Char)0x6f,  /* [4593] */
    (xdc_Char)0x64,  /* [4594] */
    (xdc_Char)0x20,  /* [4595] */
    (xdc_Char)0x25,  /* [4596] */
    (xdc_Char)0x64,  /* [4597] */
    (xdc_Char)0x0,  /* [4598] */
    (xdc_Char)0x45,  /* [4599] */
    (xdc_Char)0x5f,  /* [4600] */
    (xdc_Char)0x73,  /* [4601] */
    (xdc_Char)0x74,  /* [4602] */
    (xdc_Char)0x61,  /* [4603] */
    (xdc_Char)0x63,  /* [4604] */
    (xdc_Char)0x6b,  /* [4605] */
    (xdc_Char)0x4f,  /* [4606] */
    (xdc_Char)0x76,  /* [4607] */
    (xdc_Char)0x65,  /* [4608] */
    (xdc_Char)0x72,  /* [4609] */
    (xdc_Char)0x66,  /* [4610] */
    (xdc_Char)0x6c,  /* [4611] */
    (xdc_Char)0x6f,  /* [4612] */
    (xdc_Char)0x77,  /* [4613] */
    (xdc_Char)0x3a,  /* [4614] */
    (xdc_Char)0x20,  /* [4615] */
    (xdc_Char)0x49,  /* [4616] */
    (xdc_Char)0x53,  /* [4617] */
    (xdc_Char)0x52,  /* [4618] */
    (xdc_Char)0x20,  /* [4619] */
    (xdc_Char)0x73,  /* [4620] */
    (xdc_Char)0x74,  /* [4621] */
    (xdc_Char)0x61,  /* [4622] */
    (xdc_Char)0x63,  /* [4623] */
    (xdc_Char)0x6b,  /* [4624] */
    (xdc_Char)0x20,  /* [4625] */
    (xdc_Char)0x6f,  /* [4626] */
    (xdc_Char)0x76,  /* [4627] */
    (xdc_Char)0x65,  /* [4628] */
    (xdc_Char)0x72,  /* [4629] */
    (xdc_Char)0x66,  /* [4630] */
    (xdc_Char)0x6c,  /* [4631] */
    (xdc_Char)0x6f,  /* [4632] */
    (xdc_Char)0x77,  /* [4633] */
    (xdc_Char)0x2e,  /* [4634] */
    (xdc_Char)0x0,  /* [4635] */
    (xdc_Char)0x45,  /* [4636] */
    (xdc_Char)0x5f,  /* [4637] */
    (xdc_Char)0x70,  /* [4638] */
    (xdc_Char)0x72,  /* [4639] */
    (xdc_Char)0x69,  /* [4640] */
    (xdc_Char)0x6f,  /* [4641] */
    (xdc_Char)0x72,  /* [4642] */
    (xdc_Char)0x69,  /* [4643] */
    (xdc_Char)0x74,  /* [4644] */
    (xdc_Char)0x79,  /* [4645] */
    (xdc_Char)0x3a,  /* [4646] */
    (xdc_Char)0x20,  /* [4647] */
    (xdc_Char)0x54,  /* [4648] */
    (xdc_Char)0x68,  /* [4649] */
    (xdc_Char)0x72,  /* [4650] */
    (xdc_Char)0x65,  /* [4651] */
    (xdc_Char)0x61,  /* [4652] */
    (xdc_Char)0x64,  /* [4653] */
    (xdc_Char)0x20,  /* [4654] */
    (xdc_Char)0x70,  /* [4655] */
    (xdc_Char)0x72,  /* [4656] */
    (xdc_Char)0x69,  /* [4657] */
    (xdc_Char)0x6f,  /* [4658] */
    (xdc_Char)0x72,  /* [4659] */
    (xdc_Char)0x69,  /* [4660] */
    (xdc_Char)0x74,  /* [4661] */
    (xdc_Char)0x79,  /* [4662] */
    (xdc_Char)0x20,  /* [4663] */
    (xdc_Char)0x69,  /* [4664] */
    (xdc_Char)0x73,  /* [4665] */
    (xdc_Char)0x20,  /* [4666] */
    (xdc_Char)0x69,  /* [4667] */
    (xdc_Char)0x6e,  /* [4668] */
    (xdc_Char)0x76,  /* [4669] */
    (xdc_Char)0x61,  /* [4670] */
    (xdc_Char)0x6c,  /* [4671] */
    (xdc_Char)0x69,  /* [4672] */
    (xdc_Char)0x64,  /* [4673] */
    (xdc_Char)0x20,  /* [4674] */
    (xdc_Char)0x25,  /* [4675] */
    (xdc_Char)0x64,  /* [4676] */
    (xdc_Char)0x0,  /* [4677] */
    (xdc_Char)0x72,  /* [4678] */
    (xdc_Char)0x65,  /* [4679] */
    (xdc_Char)0x71,  /* [4680] */
    (xdc_Char)0x75,  /* [4681] */
    (xdc_Char)0x65,  /* [4682] */
    (xdc_Char)0x73,  /* [4683] */
    (xdc_Char)0x74,  /* [4684] */
    (xdc_Char)0x65,  /* [4685] */
    (xdc_Char)0x64,  /* [4686] */
    (xdc_Char)0x20,  /* [4687] */
    (xdc_Char)0x73,  /* [4688] */
    (xdc_Char)0x69,  /* [4689] */
    (xdc_Char)0x7a,  /* [4690] */
    (xdc_Char)0x65,  /* [4691] */
    (xdc_Char)0x20,  /* [4692] */
    (xdc_Char)0x69,  /* [4693] */
    (xdc_Char)0x73,  /* [4694] */
    (xdc_Char)0x20,  /* [4695] */
    (xdc_Char)0x74,  /* [4696] */
    (xdc_Char)0x6f,  /* [4697] */
    (xdc_Char)0x6f,  /* [4698] */
    (xdc_Char)0x20,  /* [4699] */
    (xdc_Char)0x62,  /* [4700] */
    (xdc_Char)0x69,  /* [4701] */
    (xdc_Char)0x67,  /* [4702] */
    (xdc_Char)0x3a,  /* [4703] */
    (xdc_Char)0x20,  /* [4704] */
    (xdc_Char)0x68,  /* [4705] */
    (xdc_Char)0x61,  /* [4706] */
    (xdc_Char)0x6e,  /* [4707] */
    (xdc_Char)0x64,  /* [4708] */
    (xdc_Char)0x6c,  /* [4709] */
    (xdc_Char)0x65,  /* [4710] */
    (xdc_Char)0x3d,  /* [4711] */
    (xdc_Char)0x30,  /* [4712] */
    (xdc_Char)0x78,  /* [4713] */
    (xdc_Char)0x25,  /* [4714] */
    (xdc_Char)0x78,  /* [4715] */
    (xdc_Char)0x2c,  /* [4716] */
    (xdc_Char)0x20,  /* [4717] */
    (xdc_Char)0x73,  /* [4718] */
    (xdc_Char)0x69,  /* [4719] */
    (xdc_Char)0x7a,  /* [4720] */
    (xdc_Char)0x65,  /* [4721] */
    (xdc_Char)0x3d,  /* [4722] */
    (xdc_Char)0x25,  /* [4723] */
    (xdc_Char)0x75,  /* [4724] */
    (xdc_Char)0x0,  /* [4725] */
    (xdc_Char)0x6f,  /* [4726] */
    (xdc_Char)0x75,  /* [4727] */
    (xdc_Char)0x74,  /* [4728] */
    (xdc_Char)0x20,  /* [4729] */
    (xdc_Char)0x6f,  /* [4730] */
    (xdc_Char)0x66,  /* [4731] */
    (xdc_Char)0x20,  /* [4732] */
    (xdc_Char)0x6d,  /* [4733] */
    (xdc_Char)0x65,  /* [4734] */
    (xdc_Char)0x6d,  /* [4735] */
    (xdc_Char)0x6f,  /* [4736] */
    (xdc_Char)0x72,  /* [4737] */
    (xdc_Char)0x79,  /* [4738] */
    (xdc_Char)0x3a,  /* [4739] */
    (xdc_Char)0x20,  /* [4740] */
    (xdc_Char)0x68,  /* [4741] */
    (xdc_Char)0x61,  /* [4742] */
    (xdc_Char)0x6e,  /* [4743] */
    (xdc_Char)0x64,  /* [4744] */
    (xdc_Char)0x6c,  /* [4745] */
    (xdc_Char)0x65,  /* [4746] */
    (xdc_Char)0x3d,  /* [4747] */
    (xdc_Char)0x30,  /* [4748] */
    (xdc_Char)0x78,  /* [4749] */
    (xdc_Char)0x25,  /* [4750] */
    (xdc_Char)0x78,  /* [4751] */
    (xdc_Char)0x2c,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x73,  /* [4754] */
    (xdc_Char)0x69,  /* [4755] */
    (xdc_Char)0x7a,  /* [4756] */
    (xdc_Char)0x65,  /* [4757] */
    (xdc_Char)0x3d,  /* [4758] */
    (xdc_Char)0x25,  /* [4759] */
    (xdc_Char)0x75,  /* [4760] */
    (xdc_Char)0x0,  /* [4761] */
    (xdc_Char)0x3c,  /* [4762] */
    (xdc_Char)0x2d,  /* [4763] */
    (xdc_Char)0x2d,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x63,  /* [4766] */
    (xdc_Char)0x6f,  /* [4767] */
    (xdc_Char)0x6e,  /* [4768] */
    (xdc_Char)0x73,  /* [4769] */
    (xdc_Char)0x74,  /* [4770] */
    (xdc_Char)0x72,  /* [4771] */
    (xdc_Char)0x75,  /* [4772] */
    (xdc_Char)0x63,  /* [4773] */
    (xdc_Char)0x74,  /* [4774] */
    (xdc_Char)0x3a,  /* [4775] */
    (xdc_Char)0x20,  /* [4776] */
    (xdc_Char)0x25,  /* [4777] */
    (xdc_Char)0x70,  /* [4778] */
    (xdc_Char)0x28,  /* [4779] */
    (xdc_Char)0x27,  /* [4780] */
    (xdc_Char)0x25,  /* [4781] */
    (xdc_Char)0x73,  /* [4782] */
    (xdc_Char)0x27,  /* [4783] */
    (xdc_Char)0x29,  /* [4784] */
    (xdc_Char)0x0,  /* [4785] */
    (xdc_Char)0x3c,  /* [4786] */
    (xdc_Char)0x2d,  /* [4787] */
    (xdc_Char)0x2d,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x63,  /* [4790] */
    (xdc_Char)0x72,  /* [4791] */
    (xdc_Char)0x65,  /* [4792] */
    (xdc_Char)0x61,  /* [4793] */
    (xdc_Char)0x74,  /* [4794] */
    (xdc_Char)0x65,  /* [4795] */
    (xdc_Char)0x3a,  /* [4796] */
    (xdc_Char)0x20,  /* [4797] */
    (xdc_Char)0x25,  /* [4798] */
    (xdc_Char)0x70,  /* [4799] */
    (xdc_Char)0x28,  /* [4800] */
    (xdc_Char)0x27,  /* [4801] */
    (xdc_Char)0x25,  /* [4802] */
    (xdc_Char)0x73,  /* [4803] */
    (xdc_Char)0x27,  /* [4804] */
    (xdc_Char)0x29,  /* [4805] */
    (xdc_Char)0x0,  /* [4806] */
    (xdc_Char)0x2d,  /* [4807] */
    (xdc_Char)0x2d,  /* [4808] */
    (xdc_Char)0x3e,  /* [4809] */
    (xdc_Char)0x20,  /* [4810] */
    (xdc_Char)0x64,  /* [4811] */
    (xdc_Char)0x65,  /* [4812] */
    (xdc_Char)0x73,  /* [4813] */
    (xdc_Char)0x74,  /* [4814] */
    (xdc_Char)0x72,  /* [4815] */
    (xdc_Char)0x75,  /* [4816] */
    (xdc_Char)0x63,  /* [4817] */
    (xdc_Char)0x74,  /* [4818] */
    (xdc_Char)0x3a,  /* [4819] */
    (xdc_Char)0x20,  /* [4820] */
    (xdc_Char)0x28,  /* [4821] */
    (xdc_Char)0x25,  /* [4822] */
    (xdc_Char)0x70,  /* [4823] */
    (xdc_Char)0x29,  /* [4824] */
    (xdc_Char)0x0,  /* [4825] */
    (xdc_Char)0x2d,  /* [4826] */
    (xdc_Char)0x2d,  /* [4827] */
    (xdc_Char)0x3e,  /* [4828] */
    (xdc_Char)0x20,  /* [4829] */
    (xdc_Char)0x64,  /* [4830] */
    (xdc_Char)0x65,  /* [4831] */
    (xdc_Char)0x6c,  /* [4832] */
    (xdc_Char)0x65,  /* [4833] */
    (xdc_Char)0x74,  /* [4834] */
    (xdc_Char)0x65,  /* [4835] */
    (xdc_Char)0x3a,  /* [4836] */
    (xdc_Char)0x20,  /* [4837] */
    (xdc_Char)0x28,  /* [4838] */
    (xdc_Char)0x25,  /* [4839] */
    (xdc_Char)0x70,  /* [4840] */
    (xdc_Char)0x29,  /* [4841] */
    (xdc_Char)0x0,  /* [4842] */
    (xdc_Char)0x1b,  /* [4843] */
    (xdc_Char)0x5b,  /* [4844] */
    (xdc_Char)0x33,  /* [4845] */
    (xdc_Char)0x31,  /* [4846] */
    (xdc_Char)0x3b,  /* [4847] */
    (xdc_Char)0x31,  /* [4848] */
    (xdc_Char)0x6d,  /* [4849] */
    (xdc_Char)0x45,  /* [4850] */
    (xdc_Char)0x52,  /* [4851] */
    (xdc_Char)0x52,  /* [4852] */
    (xdc_Char)0x4f,  /* [4853] */
    (xdc_Char)0x52,  /* [4854] */
    (xdc_Char)0x3a,  /* [4855] */
    (xdc_Char)0x1b,  /* [4856] */
    (xdc_Char)0x5b,  /* [4857] */
    (xdc_Char)0x30,  /* [4858] */
    (xdc_Char)0x6d,  /* [4859] */
    (xdc_Char)0x20,  /* [4860] */
    (xdc_Char)0x28,  /* [4861] */
    (xdc_Char)0x25,  /* [4862] */
    (xdc_Char)0x73,  /* [4863] */
    (xdc_Char)0x3a,  /* [4864] */
    (xdc_Char)0x25,  /* [4865] */
    (xdc_Char)0x64,  /* [4866] */
    (xdc_Char)0x29,  /* [4867] */
    (xdc_Char)0x20,  /* [4868] */
    (xdc_Char)0x25,  /* [4869] */
    (xdc_Char)0x24,  /* [4870] */
    (xdc_Char)0x53,  /* [4871] */
    (xdc_Char)0x0,  /* [4872] */
    (xdc_Char)0x1b,  /* [4873] */
    (xdc_Char)0x5b,  /* [4874] */
    (xdc_Char)0x33,  /* [4875] */
    (xdc_Char)0x33,  /* [4876] */
    (xdc_Char)0x3b,  /* [4877] */
    (xdc_Char)0x31,  /* [4878] */
    (xdc_Char)0x6d,  /* [4879] */
    (xdc_Char)0x57,  /* [4880] */
    (xdc_Char)0x41,  /* [4881] */
    (xdc_Char)0x52,  /* [4882] */
    (xdc_Char)0x4e,  /* [4883] */
    (xdc_Char)0x49,  /* [4884] */
    (xdc_Char)0x4e,  /* [4885] */
    (xdc_Char)0x47,  /* [4886] */
    (xdc_Char)0x3a,  /* [4887] */
    (xdc_Char)0x1b,  /* [4888] */
    (xdc_Char)0x5b,  /* [4889] */
    (xdc_Char)0x30,  /* [4890] */
    (xdc_Char)0x6d,  /* [4891] */
    (xdc_Char)0x20,  /* [4892] */
    (xdc_Char)0x28,  /* [4893] */
    (xdc_Char)0x25,  /* [4894] */
    (xdc_Char)0x73,  /* [4895] */
    (xdc_Char)0x3a,  /* [4896] */
    (xdc_Char)0x25,  /* [4897] */
    (xdc_Char)0x64,  /* [4898] */
    (xdc_Char)0x29,  /* [4899] */
    (xdc_Char)0x20,  /* [4900] */
    (xdc_Char)0x25,  /* [4901] */
    (xdc_Char)0x24,  /* [4902] */
    (xdc_Char)0x53,  /* [4903] */
    (xdc_Char)0x0,  /* [4904] */
    (xdc_Char)0x1b,  /* [4905] */
    (xdc_Char)0x5b,  /* [4906] */
    (xdc_Char)0x33,  /* [4907] */
    (xdc_Char)0x32,  /* [4908] */
    (xdc_Char)0x3b,  /* [4909] */
    (xdc_Char)0x31,  /* [4910] */
    (xdc_Char)0x6d,  /* [4911] */
    (xdc_Char)0x49,  /* [4912] */
    (xdc_Char)0x4e,  /* [4913] */
    (xdc_Char)0x46,  /* [4914] */
    (xdc_Char)0x4f,  /* [4915] */
    (xdc_Char)0x3a,  /* [4916] */
    (xdc_Char)0x1b,  /* [4917] */
    (xdc_Char)0x5b,  /* [4918] */
    (xdc_Char)0x30,  /* [4919] */
    (xdc_Char)0x6d,  /* [4920] */
    (xdc_Char)0x20,  /* [4921] */
    (xdc_Char)0x28,  /* [4922] */
    (xdc_Char)0x25,  /* [4923] */
    (xdc_Char)0x73,  /* [4924] */
    (xdc_Char)0x3a,  /* [4925] */
    (xdc_Char)0x25,  /* [4926] */
    (xdc_Char)0x64,  /* [4927] */
    (xdc_Char)0x29,  /* [4928] */
    (xdc_Char)0x20,  /* [4929] */
    (xdc_Char)0x25,  /* [4930] */
    (xdc_Char)0x24,  /* [4931] */
    (xdc_Char)0x53,  /* [4932] */
    (xdc_Char)0x0,  /* [4933] */
    (xdc_Char)0x53,  /* [4934] */
    (xdc_Char)0x74,  /* [4935] */
    (xdc_Char)0x61,  /* [4936] */
    (xdc_Char)0x72,  /* [4937] */
    (xdc_Char)0x74,  /* [4938] */
    (xdc_Char)0x3a,  /* [4939] */
    (xdc_Char)0x20,  /* [4940] */
    (xdc_Char)0x25,  /* [4941] */
    (xdc_Char)0x24,  /* [4942] */
    (xdc_Char)0x53,  /* [4943] */
    (xdc_Char)0x0,  /* [4944] */
    (xdc_Char)0x53,  /* [4945] */
    (xdc_Char)0x74,  /* [4946] */
    (xdc_Char)0x6f,  /* [4947] */
    (xdc_Char)0x70,  /* [4948] */
    (xdc_Char)0x3a,  /* [4949] */
    (xdc_Char)0x20,  /* [4950] */
    (xdc_Char)0x25,  /* [4951] */
    (xdc_Char)0x24,  /* [4952] */
    (xdc_Char)0x53,  /* [4953] */
    (xdc_Char)0x0,  /* [4954] */
    (xdc_Char)0x53,  /* [4955] */
    (xdc_Char)0x74,  /* [4956] */
    (xdc_Char)0x61,  /* [4957] */
    (xdc_Char)0x72,  /* [4958] */
    (xdc_Char)0x74,  /* [4959] */
    (xdc_Char)0x49,  /* [4960] */
    (xdc_Char)0x6e,  /* [4961] */
    (xdc_Char)0x73,  /* [4962] */
    (xdc_Char)0x74,  /* [4963] */
    (xdc_Char)0x61,  /* [4964] */
    (xdc_Char)0x6e,  /* [4965] */
    (xdc_Char)0x63,  /* [4966] */
    (xdc_Char)0x65,  /* [4967] */
    (xdc_Char)0x3a,  /* [4968] */
    (xdc_Char)0x20,  /* [4969] */
    (xdc_Char)0x25,  /* [4970] */
    (xdc_Char)0x24,  /* [4971] */
    (xdc_Char)0x53,  /* [4972] */
    (xdc_Char)0x0,  /* [4973] */
    (xdc_Char)0x53,  /* [4974] */
    (xdc_Char)0x74,  /* [4975] */
    (xdc_Char)0x6f,  /* [4976] */
    (xdc_Char)0x70,  /* [4977] */
    (xdc_Char)0x49,  /* [4978] */
    (xdc_Char)0x6e,  /* [4979] */
    (xdc_Char)0x73,  /* [4980] */
    (xdc_Char)0x74,  /* [4981] */
    (xdc_Char)0x61,  /* [4982] */
    (xdc_Char)0x6e,  /* [4983] */
    (xdc_Char)0x63,  /* [4984] */
    (xdc_Char)0x65,  /* [4985] */
    (xdc_Char)0x3a,  /* [4986] */
    (xdc_Char)0x20,  /* [4987] */
    (xdc_Char)0x25,  /* [4988] */
    (xdc_Char)0x24,  /* [4989] */
    (xdc_Char)0x53,  /* [4990] */
    (xdc_Char)0x0,  /* [4991] */
    (xdc_Char)0x4c,  /* [4992] */
    (xdc_Char)0x57,  /* [4993] */
    (xdc_Char)0x5f,  /* [4994] */
    (xdc_Char)0x64,  /* [4995] */
    (xdc_Char)0x65,  /* [4996] */
    (xdc_Char)0x6c,  /* [4997] */
    (xdc_Char)0x61,  /* [4998] */
    (xdc_Char)0x79,  /* [4999] */
    (xdc_Char)0x65,  /* [5000] */
    (xdc_Char)0x64,  /* [5001] */
    (xdc_Char)0x3a,  /* [5002] */
    (xdc_Char)0x20,  /* [5003] */
    (xdc_Char)0x64,  /* [5004] */
    (xdc_Char)0x65,  /* [5005] */
    (xdc_Char)0x6c,  /* [5006] */
    (xdc_Char)0x61,  /* [5007] */
    (xdc_Char)0x79,  /* [5008] */
    (xdc_Char)0x3a,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x25,  /* [5011] */
    (xdc_Char)0x64,  /* [5012] */
    (xdc_Char)0x0,  /* [5013] */
    (xdc_Char)0x4c,  /* [5014] */
    (xdc_Char)0x4d,  /* [5015] */
    (xdc_Char)0x5f,  /* [5016] */
    (xdc_Char)0x74,  /* [5017] */
    (xdc_Char)0x69,  /* [5018] */
    (xdc_Char)0x63,  /* [5019] */
    (xdc_Char)0x6b,  /* [5020] */
    (xdc_Char)0x3a,  /* [5021] */
    (xdc_Char)0x20,  /* [5022] */
    (xdc_Char)0x74,  /* [5023] */
    (xdc_Char)0x69,  /* [5024] */
    (xdc_Char)0x63,  /* [5025] */
    (xdc_Char)0x6b,  /* [5026] */
    (xdc_Char)0x3a,  /* [5027] */
    (xdc_Char)0x20,  /* [5028] */
    (xdc_Char)0x25,  /* [5029] */
    (xdc_Char)0x64,  /* [5030] */
    (xdc_Char)0x0,  /* [5031] */
    (xdc_Char)0x4c,  /* [5032] */
    (xdc_Char)0x4d,  /* [5033] */
    (xdc_Char)0x5f,  /* [5034] */
    (xdc_Char)0x62,  /* [5035] */
    (xdc_Char)0x65,  /* [5036] */
    (xdc_Char)0x67,  /* [5037] */
    (xdc_Char)0x69,  /* [5038] */
    (xdc_Char)0x6e,  /* [5039] */
    (xdc_Char)0x3a,  /* [5040] */
    (xdc_Char)0x20,  /* [5041] */
    (xdc_Char)0x63,  /* [5042] */
    (xdc_Char)0x6c,  /* [5043] */
    (xdc_Char)0x6b,  /* [5044] */
    (xdc_Char)0x3a,  /* [5045] */
    (xdc_Char)0x20,  /* [5046] */
    (xdc_Char)0x30,  /* [5047] */
    (xdc_Char)0x78,  /* [5048] */
    (xdc_Char)0x25,  /* [5049] */
    (xdc_Char)0x78,  /* [5050] */
    (xdc_Char)0x2c,  /* [5051] */
    (xdc_Char)0x20,  /* [5052] */
    (xdc_Char)0x66,  /* [5053] */
    (xdc_Char)0x75,  /* [5054] */
    (xdc_Char)0x6e,  /* [5055] */
    (xdc_Char)0x63,  /* [5056] */
    (xdc_Char)0x3a,  /* [5057] */
    (xdc_Char)0x20,  /* [5058] */
    (xdc_Char)0x30,  /* [5059] */
    (xdc_Char)0x78,  /* [5060] */
    (xdc_Char)0x25,  /* [5061] */
    (xdc_Char)0x78,  /* [5062] */
    (xdc_Char)0x0,  /* [5063] */
    (xdc_Char)0x4c,  /* [5064] */
    (xdc_Char)0x4d,  /* [5065] */
    (xdc_Char)0x5f,  /* [5066] */
    (xdc_Char)0x70,  /* [5067] */
    (xdc_Char)0x6f,  /* [5068] */
    (xdc_Char)0x73,  /* [5069] */
    (xdc_Char)0x74,  /* [5070] */
    (xdc_Char)0x3a,  /* [5071] */
    (xdc_Char)0x20,  /* [5072] */
    (xdc_Char)0x65,  /* [5073] */
    (xdc_Char)0x76,  /* [5074] */
    (xdc_Char)0x65,  /* [5075] */
    (xdc_Char)0x6e,  /* [5076] */
    (xdc_Char)0x74,  /* [5077] */
    (xdc_Char)0x3a,  /* [5078] */
    (xdc_Char)0x20,  /* [5079] */
    (xdc_Char)0x30,  /* [5080] */
    (xdc_Char)0x78,  /* [5081] */
    (xdc_Char)0x25,  /* [5082] */
    (xdc_Char)0x78,  /* [5083] */
    (xdc_Char)0x2c,  /* [5084] */
    (xdc_Char)0x20,  /* [5085] */
    (xdc_Char)0x63,  /* [5086] */
    (xdc_Char)0x75,  /* [5087] */
    (xdc_Char)0x72,  /* [5088] */
    (xdc_Char)0x72,  /* [5089] */
    (xdc_Char)0x45,  /* [5090] */
    (xdc_Char)0x76,  /* [5091] */
    (xdc_Char)0x65,  /* [5092] */
    (xdc_Char)0x6e,  /* [5093] */
    (xdc_Char)0x74,  /* [5094] */
    (xdc_Char)0x73,  /* [5095] */
    (xdc_Char)0x3a,  /* [5096] */
    (xdc_Char)0x20,  /* [5097] */
    (xdc_Char)0x30,  /* [5098] */
    (xdc_Char)0x78,  /* [5099] */
    (xdc_Char)0x25,  /* [5100] */
    (xdc_Char)0x78,  /* [5101] */
    (xdc_Char)0x2c,  /* [5102] */
    (xdc_Char)0x20,  /* [5103] */
    (xdc_Char)0x65,  /* [5104] */
    (xdc_Char)0x76,  /* [5105] */
    (xdc_Char)0x65,  /* [5106] */
    (xdc_Char)0x6e,  /* [5107] */
    (xdc_Char)0x74,  /* [5108] */
    (xdc_Char)0x49,  /* [5109] */
    (xdc_Char)0x64,  /* [5110] */
    (xdc_Char)0x3a,  /* [5111] */
    (xdc_Char)0x20,  /* [5112] */
    (xdc_Char)0x30,  /* [5113] */
    (xdc_Char)0x78,  /* [5114] */
    (xdc_Char)0x25,  /* [5115] */
    (xdc_Char)0x78,  /* [5116] */
    (xdc_Char)0x0,  /* [5117] */
    (xdc_Char)0x4c,  /* [5118] */
    (xdc_Char)0x4d,  /* [5119] */
    (xdc_Char)0x5f,  /* [5120] */
    (xdc_Char)0x70,  /* [5121] */
    (xdc_Char)0x65,  /* [5122] */
    (xdc_Char)0x6e,  /* [5123] */
    (xdc_Char)0x64,  /* [5124] */
    (xdc_Char)0x3a,  /* [5125] */
    (xdc_Char)0x20,  /* [5126] */
    (xdc_Char)0x65,  /* [5127] */
    (xdc_Char)0x76,  /* [5128] */
    (xdc_Char)0x65,  /* [5129] */
    (xdc_Char)0x6e,  /* [5130] */
    (xdc_Char)0x74,  /* [5131] */
    (xdc_Char)0x3a,  /* [5132] */
    (xdc_Char)0x20,  /* [5133] */
    (xdc_Char)0x30,  /* [5134] */
    (xdc_Char)0x78,  /* [5135] */
    (xdc_Char)0x25,  /* [5136] */
    (xdc_Char)0x78,  /* [5137] */
    (xdc_Char)0x2c,  /* [5138] */
    (xdc_Char)0x20,  /* [5139] */
    (xdc_Char)0x63,  /* [5140] */
    (xdc_Char)0x75,  /* [5141] */
    (xdc_Char)0x72,  /* [5142] */
    (xdc_Char)0x72,  /* [5143] */
    (xdc_Char)0x45,  /* [5144] */
    (xdc_Char)0x76,  /* [5145] */
    (xdc_Char)0x65,  /* [5146] */
    (xdc_Char)0x6e,  /* [5147] */
    (xdc_Char)0x74,  /* [5148] */
    (xdc_Char)0x73,  /* [5149] */
    (xdc_Char)0x3a,  /* [5150] */
    (xdc_Char)0x20,  /* [5151] */
    (xdc_Char)0x30,  /* [5152] */
    (xdc_Char)0x78,  /* [5153] */
    (xdc_Char)0x25,  /* [5154] */
    (xdc_Char)0x78,  /* [5155] */
    (xdc_Char)0x2c,  /* [5156] */
    (xdc_Char)0x20,  /* [5157] */
    (xdc_Char)0x61,  /* [5158] */
    (xdc_Char)0x6e,  /* [5159] */
    (xdc_Char)0x64,  /* [5160] */
    (xdc_Char)0x4d,  /* [5161] */
    (xdc_Char)0x61,  /* [5162] */
    (xdc_Char)0x73,  /* [5163] */
    (xdc_Char)0x6b,  /* [5164] */
    (xdc_Char)0x3a,  /* [5165] */
    (xdc_Char)0x20,  /* [5166] */
    (xdc_Char)0x30,  /* [5167] */
    (xdc_Char)0x78,  /* [5168] */
    (xdc_Char)0x25,  /* [5169] */
    (xdc_Char)0x78,  /* [5170] */
    (xdc_Char)0x2c,  /* [5171] */
    (xdc_Char)0x20,  /* [5172] */
    (xdc_Char)0x6f,  /* [5173] */
    (xdc_Char)0x72,  /* [5174] */
    (xdc_Char)0x4d,  /* [5175] */
    (xdc_Char)0x61,  /* [5176] */
    (xdc_Char)0x73,  /* [5177] */
    (xdc_Char)0x6b,  /* [5178] */
    (xdc_Char)0x3a,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x30,  /* [5181] */
    (xdc_Char)0x78,  /* [5182] */
    (xdc_Char)0x25,  /* [5183] */
    (xdc_Char)0x78,  /* [5184] */
    (xdc_Char)0x2c,  /* [5185] */
    (xdc_Char)0x20,  /* [5186] */
    (xdc_Char)0x74,  /* [5187] */
    (xdc_Char)0x69,  /* [5188] */
    (xdc_Char)0x6d,  /* [5189] */
    (xdc_Char)0x65,  /* [5190] */
    (xdc_Char)0x6f,  /* [5191] */
    (xdc_Char)0x75,  /* [5192] */
    (xdc_Char)0x74,  /* [5193] */
    (xdc_Char)0x3a,  /* [5194] */
    (xdc_Char)0x20,  /* [5195] */
    (xdc_Char)0x25,  /* [5196] */
    (xdc_Char)0x64,  /* [5197] */
    (xdc_Char)0x0,  /* [5198] */
    (xdc_Char)0x4c,  /* [5199] */
    (xdc_Char)0x4d,  /* [5200] */
    (xdc_Char)0x5f,  /* [5201] */
    (xdc_Char)0x70,  /* [5202] */
    (xdc_Char)0x6f,  /* [5203] */
    (xdc_Char)0x73,  /* [5204] */
    (xdc_Char)0x74,  /* [5205] */
    (xdc_Char)0x3a,  /* [5206] */
    (xdc_Char)0x20,  /* [5207] */
    (xdc_Char)0x73,  /* [5208] */
    (xdc_Char)0x65,  /* [5209] */
    (xdc_Char)0x6d,  /* [5210] */
    (xdc_Char)0x3a,  /* [5211] */
    (xdc_Char)0x20,  /* [5212] */
    (xdc_Char)0x30,  /* [5213] */
    (xdc_Char)0x78,  /* [5214] */
    (xdc_Char)0x25,  /* [5215] */
    (xdc_Char)0x78,  /* [5216] */
    (xdc_Char)0x2c,  /* [5217] */
    (xdc_Char)0x20,  /* [5218] */
    (xdc_Char)0x63,  /* [5219] */
    (xdc_Char)0x6f,  /* [5220] */
    (xdc_Char)0x75,  /* [5221] */
    (xdc_Char)0x6e,  /* [5222] */
    (xdc_Char)0x74,  /* [5223] */
    (xdc_Char)0x3a,  /* [5224] */
    (xdc_Char)0x20,  /* [5225] */
    (xdc_Char)0x25,  /* [5226] */
    (xdc_Char)0x64,  /* [5227] */
    (xdc_Char)0x0,  /* [5228] */
    (xdc_Char)0x4c,  /* [5229] */
    (xdc_Char)0x4d,  /* [5230] */
    (xdc_Char)0x5f,  /* [5231] */
    (xdc_Char)0x70,  /* [5232] */
    (xdc_Char)0x65,  /* [5233] */
    (xdc_Char)0x6e,  /* [5234] */
    (xdc_Char)0x64,  /* [5235] */
    (xdc_Char)0x3a,  /* [5236] */
    (xdc_Char)0x20,  /* [5237] */
    (xdc_Char)0x73,  /* [5238] */
    (xdc_Char)0x65,  /* [5239] */
    (xdc_Char)0x6d,  /* [5240] */
    (xdc_Char)0x3a,  /* [5241] */
    (xdc_Char)0x20,  /* [5242] */
    (xdc_Char)0x30,  /* [5243] */
    (xdc_Char)0x78,  /* [5244] */
    (xdc_Char)0x25,  /* [5245] */
    (xdc_Char)0x78,  /* [5246] */
    (xdc_Char)0x2c,  /* [5247] */
    (xdc_Char)0x20,  /* [5248] */
    (xdc_Char)0x63,  /* [5249] */
    (xdc_Char)0x6f,  /* [5250] */
    (xdc_Char)0x75,  /* [5251] */
    (xdc_Char)0x6e,  /* [5252] */
    (xdc_Char)0x74,  /* [5253] */
    (xdc_Char)0x3a,  /* [5254] */
    (xdc_Char)0x20,  /* [5255] */
    (xdc_Char)0x25,  /* [5256] */
    (xdc_Char)0x64,  /* [5257] */
    (xdc_Char)0x2c,  /* [5258] */
    (xdc_Char)0x20,  /* [5259] */
    (xdc_Char)0x74,  /* [5260] */
    (xdc_Char)0x69,  /* [5261] */
    (xdc_Char)0x6d,  /* [5262] */
    (xdc_Char)0x65,  /* [5263] */
    (xdc_Char)0x6f,  /* [5264] */
    (xdc_Char)0x75,  /* [5265] */
    (xdc_Char)0x74,  /* [5266] */
    (xdc_Char)0x3a,  /* [5267] */
    (xdc_Char)0x20,  /* [5268] */
    (xdc_Char)0x25,  /* [5269] */
    (xdc_Char)0x64,  /* [5270] */
    (xdc_Char)0x0,  /* [5271] */
    (xdc_Char)0x4c,  /* [5272] */
    (xdc_Char)0x4d,  /* [5273] */
    (xdc_Char)0x5f,  /* [5274] */
    (xdc_Char)0x62,  /* [5275] */
    (xdc_Char)0x65,  /* [5276] */
    (xdc_Char)0x67,  /* [5277] */
    (xdc_Char)0x69,  /* [5278] */
    (xdc_Char)0x6e,  /* [5279] */
    (xdc_Char)0x3a,  /* [5280] */
    (xdc_Char)0x20,  /* [5281] */
    (xdc_Char)0x73,  /* [5282] */
    (xdc_Char)0x77,  /* [5283] */
    (xdc_Char)0x69,  /* [5284] */
    (xdc_Char)0x3a,  /* [5285] */
    (xdc_Char)0x20,  /* [5286] */
    (xdc_Char)0x30,  /* [5287] */
    (xdc_Char)0x78,  /* [5288] */
    (xdc_Char)0x25,  /* [5289] */
    (xdc_Char)0x78,  /* [5290] */
    (xdc_Char)0x2c,  /* [5291] */
    (xdc_Char)0x20,  /* [5292] */
    (xdc_Char)0x66,  /* [5293] */
    (xdc_Char)0x75,  /* [5294] */
    (xdc_Char)0x6e,  /* [5295] */
    (xdc_Char)0x63,  /* [5296] */
    (xdc_Char)0x3a,  /* [5297] */
    (xdc_Char)0x20,  /* [5298] */
    (xdc_Char)0x30,  /* [5299] */
    (xdc_Char)0x78,  /* [5300] */
    (xdc_Char)0x25,  /* [5301] */
    (xdc_Char)0x78,  /* [5302] */
    (xdc_Char)0x2c,  /* [5303] */
    (xdc_Char)0x20,  /* [5304] */
    (xdc_Char)0x70,  /* [5305] */
    (xdc_Char)0x72,  /* [5306] */
    (xdc_Char)0x65,  /* [5307] */
    (xdc_Char)0x54,  /* [5308] */
    (xdc_Char)0x68,  /* [5309] */
    (xdc_Char)0x72,  /* [5310] */
    (xdc_Char)0x65,  /* [5311] */
    (xdc_Char)0x61,  /* [5312] */
    (xdc_Char)0x64,  /* [5313] */
    (xdc_Char)0x3a,  /* [5314] */
    (xdc_Char)0x20,  /* [5315] */
    (xdc_Char)0x25,  /* [5316] */
    (xdc_Char)0x64,  /* [5317] */
    (xdc_Char)0x0,  /* [5318] */
    (xdc_Char)0x4c,  /* [5319] */
    (xdc_Char)0x44,  /* [5320] */
    (xdc_Char)0x5f,  /* [5321] */
    (xdc_Char)0x65,  /* [5322] */
    (xdc_Char)0x6e,  /* [5323] */
    (xdc_Char)0x64,  /* [5324] */
    (xdc_Char)0x3a,  /* [5325] */
    (xdc_Char)0x20,  /* [5326] */
    (xdc_Char)0x73,  /* [5327] */
    (xdc_Char)0x77,  /* [5328] */
    (xdc_Char)0x69,  /* [5329] */
    (xdc_Char)0x3a,  /* [5330] */
    (xdc_Char)0x20,  /* [5331] */
    (xdc_Char)0x30,  /* [5332] */
    (xdc_Char)0x78,  /* [5333] */
    (xdc_Char)0x25,  /* [5334] */
    (xdc_Char)0x78,  /* [5335] */
    (xdc_Char)0x0,  /* [5336] */
    (xdc_Char)0x4c,  /* [5337] */
    (xdc_Char)0x4d,  /* [5338] */
    (xdc_Char)0x5f,  /* [5339] */
    (xdc_Char)0x70,  /* [5340] */
    (xdc_Char)0x6f,  /* [5341] */
    (xdc_Char)0x73,  /* [5342] */
    (xdc_Char)0x74,  /* [5343] */
    (xdc_Char)0x3a,  /* [5344] */
    (xdc_Char)0x20,  /* [5345] */
    (xdc_Char)0x73,  /* [5346] */
    (xdc_Char)0x77,  /* [5347] */
    (xdc_Char)0x69,  /* [5348] */
    (xdc_Char)0x3a,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x30,  /* [5351] */
    (xdc_Char)0x78,  /* [5352] */
    (xdc_Char)0x25,  /* [5353] */
    (xdc_Char)0x78,  /* [5354] */
    (xdc_Char)0x2c,  /* [5355] */
    (xdc_Char)0x20,  /* [5356] */
    (xdc_Char)0x66,  /* [5357] */
    (xdc_Char)0x75,  /* [5358] */
    (xdc_Char)0x6e,  /* [5359] */
    (xdc_Char)0x63,  /* [5360] */
    (xdc_Char)0x3a,  /* [5361] */
    (xdc_Char)0x20,  /* [5362] */
    (xdc_Char)0x30,  /* [5363] */
    (xdc_Char)0x78,  /* [5364] */
    (xdc_Char)0x25,  /* [5365] */
    (xdc_Char)0x78,  /* [5366] */
    (xdc_Char)0x2c,  /* [5367] */
    (xdc_Char)0x20,  /* [5368] */
    (xdc_Char)0x70,  /* [5369] */
    (xdc_Char)0x72,  /* [5370] */
    (xdc_Char)0x69,  /* [5371] */
    (xdc_Char)0x3a,  /* [5372] */
    (xdc_Char)0x20,  /* [5373] */
    (xdc_Char)0x25,  /* [5374] */
    (xdc_Char)0x64,  /* [5375] */
    (xdc_Char)0x0,  /* [5376] */
    (xdc_Char)0x4c,  /* [5377] */
    (xdc_Char)0x4d,  /* [5378] */
    (xdc_Char)0x5f,  /* [5379] */
    (xdc_Char)0x73,  /* [5380] */
    (xdc_Char)0x77,  /* [5381] */
    (xdc_Char)0x69,  /* [5382] */
    (xdc_Char)0x74,  /* [5383] */
    (xdc_Char)0x63,  /* [5384] */
    (xdc_Char)0x68,  /* [5385] */
    (xdc_Char)0x3a,  /* [5386] */
    (xdc_Char)0x20,  /* [5387] */
    (xdc_Char)0x6f,  /* [5388] */
    (xdc_Char)0x6c,  /* [5389] */
    (xdc_Char)0x64,  /* [5390] */
    (xdc_Char)0x74,  /* [5391] */
    (xdc_Char)0x73,  /* [5392] */
    (xdc_Char)0x6b,  /* [5393] */
    (xdc_Char)0x3a,  /* [5394] */
    (xdc_Char)0x20,  /* [5395] */
    (xdc_Char)0x30,  /* [5396] */
    (xdc_Char)0x78,  /* [5397] */
    (xdc_Char)0x25,  /* [5398] */
    (xdc_Char)0x78,  /* [5399] */
    (xdc_Char)0x2c,  /* [5400] */
    (xdc_Char)0x20,  /* [5401] */
    (xdc_Char)0x6f,  /* [5402] */
    (xdc_Char)0x6c,  /* [5403] */
    (xdc_Char)0x64,  /* [5404] */
    (xdc_Char)0x66,  /* [5405] */
    (xdc_Char)0x75,  /* [5406] */
    (xdc_Char)0x6e,  /* [5407] */
    (xdc_Char)0x63,  /* [5408] */
    (xdc_Char)0x3a,  /* [5409] */
    (xdc_Char)0x20,  /* [5410] */
    (xdc_Char)0x30,  /* [5411] */
    (xdc_Char)0x78,  /* [5412] */
    (xdc_Char)0x25,  /* [5413] */
    (xdc_Char)0x78,  /* [5414] */
    (xdc_Char)0x2c,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x6e,  /* [5417] */
    (xdc_Char)0x65,  /* [5418] */
    (xdc_Char)0x77,  /* [5419] */
    (xdc_Char)0x74,  /* [5420] */
    (xdc_Char)0x73,  /* [5421] */
    (xdc_Char)0x6b,  /* [5422] */
    (xdc_Char)0x3a,  /* [5423] */
    (xdc_Char)0x20,  /* [5424] */
    (xdc_Char)0x30,  /* [5425] */
    (xdc_Char)0x78,  /* [5426] */
    (xdc_Char)0x25,  /* [5427] */
    (xdc_Char)0x78,  /* [5428] */
    (xdc_Char)0x2c,  /* [5429] */
    (xdc_Char)0x20,  /* [5430] */
    (xdc_Char)0x6e,  /* [5431] */
    (xdc_Char)0x65,  /* [5432] */
    (xdc_Char)0x77,  /* [5433] */
    (xdc_Char)0x66,  /* [5434] */
    (xdc_Char)0x75,  /* [5435] */
    (xdc_Char)0x6e,  /* [5436] */
    (xdc_Char)0x63,  /* [5437] */
    (xdc_Char)0x3a,  /* [5438] */
    (xdc_Char)0x20,  /* [5439] */
    (xdc_Char)0x30,  /* [5440] */
    (xdc_Char)0x78,  /* [5441] */
    (xdc_Char)0x25,  /* [5442] */
    (xdc_Char)0x78,  /* [5443] */
    (xdc_Char)0x0,  /* [5444] */
    (xdc_Char)0x4c,  /* [5445] */
    (xdc_Char)0x4d,  /* [5446] */
    (xdc_Char)0x5f,  /* [5447] */
    (xdc_Char)0x73,  /* [5448] */
    (xdc_Char)0x6c,  /* [5449] */
    (xdc_Char)0x65,  /* [5450] */
    (xdc_Char)0x65,  /* [5451] */
    (xdc_Char)0x70,  /* [5452] */
    (xdc_Char)0x3a,  /* [5453] */
    (xdc_Char)0x20,  /* [5454] */
    (xdc_Char)0x74,  /* [5455] */
    (xdc_Char)0x73,  /* [5456] */
    (xdc_Char)0x6b,  /* [5457] */
    (xdc_Char)0x3a,  /* [5458] */
    (xdc_Char)0x20,  /* [5459] */
    (xdc_Char)0x30,  /* [5460] */
    (xdc_Char)0x78,  /* [5461] */
    (xdc_Char)0x25,  /* [5462] */
    (xdc_Char)0x78,  /* [5463] */
    (xdc_Char)0x2c,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x66,  /* [5466] */
    (xdc_Char)0x75,  /* [5467] */
    (xdc_Char)0x6e,  /* [5468] */
    (xdc_Char)0x63,  /* [5469] */
    (xdc_Char)0x3a,  /* [5470] */
    (xdc_Char)0x20,  /* [5471] */
    (xdc_Char)0x30,  /* [5472] */
    (xdc_Char)0x78,  /* [5473] */
    (xdc_Char)0x25,  /* [5474] */
    (xdc_Char)0x78,  /* [5475] */
    (xdc_Char)0x2c,  /* [5476] */
    (xdc_Char)0x20,  /* [5477] */
    (xdc_Char)0x74,  /* [5478] */
    (xdc_Char)0x69,  /* [5479] */
    (xdc_Char)0x6d,  /* [5480] */
    (xdc_Char)0x65,  /* [5481] */
    (xdc_Char)0x6f,  /* [5482] */
    (xdc_Char)0x75,  /* [5483] */
    (xdc_Char)0x74,  /* [5484] */
    (xdc_Char)0x3a,  /* [5485] */
    (xdc_Char)0x20,  /* [5486] */
    (xdc_Char)0x25,  /* [5487] */
    (xdc_Char)0x64,  /* [5488] */
    (xdc_Char)0x0,  /* [5489] */
    (xdc_Char)0x4c,  /* [5490] */
    (xdc_Char)0x44,  /* [5491] */
    (xdc_Char)0x5f,  /* [5492] */
    (xdc_Char)0x72,  /* [5493] */
    (xdc_Char)0x65,  /* [5494] */
    (xdc_Char)0x61,  /* [5495] */
    (xdc_Char)0x64,  /* [5496] */
    (xdc_Char)0x79,  /* [5497] */
    (xdc_Char)0x3a,  /* [5498] */
    (xdc_Char)0x20,  /* [5499] */
    (xdc_Char)0x74,  /* [5500] */
    (xdc_Char)0x73,  /* [5501] */
    (xdc_Char)0x6b,  /* [5502] */
    (xdc_Char)0x3a,  /* [5503] */
    (xdc_Char)0x20,  /* [5504] */
    (xdc_Char)0x30,  /* [5505] */
    (xdc_Char)0x78,  /* [5506] */
    (xdc_Char)0x25,  /* [5507] */
    (xdc_Char)0x78,  /* [5508] */
    (xdc_Char)0x2c,  /* [5509] */
    (xdc_Char)0x20,  /* [5510] */
    (xdc_Char)0x66,  /* [5511] */
    (xdc_Char)0x75,  /* [5512] */
    (xdc_Char)0x6e,  /* [5513] */
    (xdc_Char)0x63,  /* [5514] */
    (xdc_Char)0x3a,  /* [5515] */
    (xdc_Char)0x20,  /* [5516] */
    (xdc_Char)0x30,  /* [5517] */
    (xdc_Char)0x78,  /* [5518] */
    (xdc_Char)0x25,  /* [5519] */
    (xdc_Char)0x78,  /* [5520] */
    (xdc_Char)0x2c,  /* [5521] */
    (xdc_Char)0x20,  /* [5522] */
    (xdc_Char)0x70,  /* [5523] */
    (xdc_Char)0x72,  /* [5524] */
    (xdc_Char)0x69,  /* [5525] */
    (xdc_Char)0x3a,  /* [5526] */
    (xdc_Char)0x20,  /* [5527] */
    (xdc_Char)0x25,  /* [5528] */
    (xdc_Char)0x64,  /* [5529] */
    (xdc_Char)0x0,  /* [5530] */
    (xdc_Char)0x4c,  /* [5531] */
    (xdc_Char)0x44,  /* [5532] */
    (xdc_Char)0x5f,  /* [5533] */
    (xdc_Char)0x62,  /* [5534] */
    (xdc_Char)0x6c,  /* [5535] */
    (xdc_Char)0x6f,  /* [5536] */
    (xdc_Char)0x63,  /* [5537] */
    (xdc_Char)0x6b,  /* [5538] */
    (xdc_Char)0x3a,  /* [5539] */
    (xdc_Char)0x20,  /* [5540] */
    (xdc_Char)0x74,  /* [5541] */
    (xdc_Char)0x73,  /* [5542] */
    (xdc_Char)0x6b,  /* [5543] */
    (xdc_Char)0x3a,  /* [5544] */
    (xdc_Char)0x20,  /* [5545] */
    (xdc_Char)0x30,  /* [5546] */
    (xdc_Char)0x78,  /* [5547] */
    (xdc_Char)0x25,  /* [5548] */
    (xdc_Char)0x78,  /* [5549] */
    (xdc_Char)0x2c,  /* [5550] */
    (xdc_Char)0x20,  /* [5551] */
    (xdc_Char)0x66,  /* [5552] */
    (xdc_Char)0x75,  /* [5553] */
    (xdc_Char)0x6e,  /* [5554] */
    (xdc_Char)0x63,  /* [5555] */
    (xdc_Char)0x3a,  /* [5556] */
    (xdc_Char)0x20,  /* [5557] */
    (xdc_Char)0x30,  /* [5558] */
    (xdc_Char)0x78,  /* [5559] */
    (xdc_Char)0x25,  /* [5560] */
    (xdc_Char)0x78,  /* [5561] */
    (xdc_Char)0x0,  /* [5562] */
    (xdc_Char)0x4c,  /* [5563] */
    (xdc_Char)0x4d,  /* [5564] */
    (xdc_Char)0x5f,  /* [5565] */
    (xdc_Char)0x79,  /* [5566] */
    (xdc_Char)0x69,  /* [5567] */
    (xdc_Char)0x65,  /* [5568] */
    (xdc_Char)0x6c,  /* [5569] */
    (xdc_Char)0x64,  /* [5570] */
    (xdc_Char)0x3a,  /* [5571] */
    (xdc_Char)0x20,  /* [5572] */
    (xdc_Char)0x74,  /* [5573] */
    (xdc_Char)0x73,  /* [5574] */
    (xdc_Char)0x6b,  /* [5575] */
    (xdc_Char)0x3a,  /* [5576] */
    (xdc_Char)0x20,  /* [5577] */
    (xdc_Char)0x30,  /* [5578] */
    (xdc_Char)0x78,  /* [5579] */
    (xdc_Char)0x25,  /* [5580] */
    (xdc_Char)0x78,  /* [5581] */
    (xdc_Char)0x2c,  /* [5582] */
    (xdc_Char)0x20,  /* [5583] */
    (xdc_Char)0x66,  /* [5584] */
    (xdc_Char)0x75,  /* [5585] */
    (xdc_Char)0x6e,  /* [5586] */
    (xdc_Char)0x63,  /* [5587] */
    (xdc_Char)0x3a,  /* [5588] */
    (xdc_Char)0x20,  /* [5589] */
    (xdc_Char)0x30,  /* [5590] */
    (xdc_Char)0x78,  /* [5591] */
    (xdc_Char)0x25,  /* [5592] */
    (xdc_Char)0x78,  /* [5593] */
    (xdc_Char)0x2c,  /* [5594] */
    (xdc_Char)0x20,  /* [5595] */
    (xdc_Char)0x63,  /* [5596] */
    (xdc_Char)0x75,  /* [5597] */
    (xdc_Char)0x72,  /* [5598] */
    (xdc_Char)0x72,  /* [5599] */
    (xdc_Char)0x54,  /* [5600] */
    (xdc_Char)0x68,  /* [5601] */
    (xdc_Char)0x72,  /* [5602] */
    (xdc_Char)0x65,  /* [5603] */
    (xdc_Char)0x61,  /* [5604] */
    (xdc_Char)0x64,  /* [5605] */
    (xdc_Char)0x3a,  /* [5606] */
    (xdc_Char)0x20,  /* [5607] */
    (xdc_Char)0x25,  /* [5608] */
    (xdc_Char)0x64,  /* [5609] */
    (xdc_Char)0x0,  /* [5610] */
    (xdc_Char)0x4c,  /* [5611] */
    (xdc_Char)0x4d,  /* [5612] */
    (xdc_Char)0x5f,  /* [5613] */
    (xdc_Char)0x73,  /* [5614] */
    (xdc_Char)0x65,  /* [5615] */
    (xdc_Char)0x74,  /* [5616] */
    (xdc_Char)0x50,  /* [5617] */
    (xdc_Char)0x72,  /* [5618] */
    (xdc_Char)0x69,  /* [5619] */
    (xdc_Char)0x3a,  /* [5620] */
    (xdc_Char)0x20,  /* [5621] */
    (xdc_Char)0x74,  /* [5622] */
    (xdc_Char)0x73,  /* [5623] */
    (xdc_Char)0x6b,  /* [5624] */
    (xdc_Char)0x3a,  /* [5625] */
    (xdc_Char)0x20,  /* [5626] */
    (xdc_Char)0x30,  /* [5627] */
    (xdc_Char)0x78,  /* [5628] */
    (xdc_Char)0x25,  /* [5629] */
    (xdc_Char)0x78,  /* [5630] */
    (xdc_Char)0x2c,  /* [5631] */
    (xdc_Char)0x20,  /* [5632] */
    (xdc_Char)0x66,  /* [5633] */
    (xdc_Char)0x75,  /* [5634] */
    (xdc_Char)0x6e,  /* [5635] */
    (xdc_Char)0x63,  /* [5636] */
    (xdc_Char)0x3a,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x30,  /* [5639] */
    (xdc_Char)0x78,  /* [5640] */
    (xdc_Char)0x25,  /* [5641] */
    (xdc_Char)0x78,  /* [5642] */
    (xdc_Char)0x2c,  /* [5643] */
    (xdc_Char)0x20,  /* [5644] */
    (xdc_Char)0x6f,  /* [5645] */
    (xdc_Char)0x6c,  /* [5646] */
    (xdc_Char)0x64,  /* [5647] */
    (xdc_Char)0x50,  /* [5648] */
    (xdc_Char)0x72,  /* [5649] */
    (xdc_Char)0x69,  /* [5650] */
    (xdc_Char)0x3a,  /* [5651] */
    (xdc_Char)0x20,  /* [5652] */
    (xdc_Char)0x25,  /* [5653] */
    (xdc_Char)0x64,  /* [5654] */
    (xdc_Char)0x2c,  /* [5655] */
    (xdc_Char)0x20,  /* [5656] */
    (xdc_Char)0x6e,  /* [5657] */
    (xdc_Char)0x65,  /* [5658] */
    (xdc_Char)0x77,  /* [5659] */
    (xdc_Char)0x50,  /* [5660] */
    (xdc_Char)0x72,  /* [5661] */
    (xdc_Char)0x69,  /* [5662] */
    (xdc_Char)0x20,  /* [5663] */
    (xdc_Char)0x25,  /* [5664] */
    (xdc_Char)0x64,  /* [5665] */
    (xdc_Char)0x0,  /* [5666] */
    (xdc_Char)0x4c,  /* [5667] */
    (xdc_Char)0x44,  /* [5668] */
    (xdc_Char)0x5f,  /* [5669] */
    (xdc_Char)0x65,  /* [5670] */
    (xdc_Char)0x78,  /* [5671] */
    (xdc_Char)0x69,  /* [5672] */
    (xdc_Char)0x74,  /* [5673] */
    (xdc_Char)0x3a,  /* [5674] */
    (xdc_Char)0x20,  /* [5675] */
    (xdc_Char)0x74,  /* [5676] */
    (xdc_Char)0x73,  /* [5677] */
    (xdc_Char)0x6b,  /* [5678] */
    (xdc_Char)0x3a,  /* [5679] */
    (xdc_Char)0x20,  /* [5680] */
    (xdc_Char)0x30,  /* [5681] */
    (xdc_Char)0x78,  /* [5682] */
    (xdc_Char)0x25,  /* [5683] */
    (xdc_Char)0x78,  /* [5684] */
    (xdc_Char)0x2c,  /* [5685] */
    (xdc_Char)0x20,  /* [5686] */
    (xdc_Char)0x66,  /* [5687] */
    (xdc_Char)0x75,  /* [5688] */
    (xdc_Char)0x6e,  /* [5689] */
    (xdc_Char)0x63,  /* [5690] */
    (xdc_Char)0x3a,  /* [5691] */
    (xdc_Char)0x20,  /* [5692] */
    (xdc_Char)0x30,  /* [5693] */
    (xdc_Char)0x78,  /* [5694] */
    (xdc_Char)0x25,  /* [5695] */
    (xdc_Char)0x78,  /* [5696] */
    (xdc_Char)0x0,  /* [5697] */
    (xdc_Char)0x4c,  /* [5698] */
    (xdc_Char)0x4d,  /* [5699] */
    (xdc_Char)0x5f,  /* [5700] */
    (xdc_Char)0x73,  /* [5701] */
    (xdc_Char)0x65,  /* [5702] */
    (xdc_Char)0x74,  /* [5703] */
    (xdc_Char)0x41,  /* [5704] */
    (xdc_Char)0x66,  /* [5705] */
    (xdc_Char)0x66,  /* [5706] */
    (xdc_Char)0x69,  /* [5707] */
    (xdc_Char)0x6e,  /* [5708] */
    (xdc_Char)0x69,  /* [5709] */
    (xdc_Char)0x74,  /* [5710] */
    (xdc_Char)0x79,  /* [5711] */
    (xdc_Char)0x3a,  /* [5712] */
    (xdc_Char)0x20,  /* [5713] */
    (xdc_Char)0x74,  /* [5714] */
    (xdc_Char)0x73,  /* [5715] */
    (xdc_Char)0x6b,  /* [5716] */
    (xdc_Char)0x3a,  /* [5717] */
    (xdc_Char)0x20,  /* [5718] */
    (xdc_Char)0x30,  /* [5719] */
    (xdc_Char)0x78,  /* [5720] */
    (xdc_Char)0x25,  /* [5721] */
    (xdc_Char)0x78,  /* [5722] */
    (xdc_Char)0x2c,  /* [5723] */
    (xdc_Char)0x20,  /* [5724] */
    (xdc_Char)0x66,  /* [5725] */
    (xdc_Char)0x75,  /* [5726] */
    (xdc_Char)0x6e,  /* [5727] */
    (xdc_Char)0x63,  /* [5728] */
    (xdc_Char)0x3a,  /* [5729] */
    (xdc_Char)0x20,  /* [5730] */
    (xdc_Char)0x30,  /* [5731] */
    (xdc_Char)0x78,  /* [5732] */
    (xdc_Char)0x25,  /* [5733] */
    (xdc_Char)0x78,  /* [5734] */
    (xdc_Char)0x2c,  /* [5735] */
    (xdc_Char)0x20,  /* [5736] */
    (xdc_Char)0x6f,  /* [5737] */
    (xdc_Char)0x6c,  /* [5738] */
    (xdc_Char)0x64,  /* [5739] */
    (xdc_Char)0x43,  /* [5740] */
    (xdc_Char)0x6f,  /* [5741] */
    (xdc_Char)0x72,  /* [5742] */
    (xdc_Char)0x65,  /* [5743] */
    (xdc_Char)0x3a,  /* [5744] */
    (xdc_Char)0x20,  /* [5745] */
    (xdc_Char)0x25,  /* [5746] */
    (xdc_Char)0x64,  /* [5747] */
    (xdc_Char)0x2c,  /* [5748] */
    (xdc_Char)0x20,  /* [5749] */
    (xdc_Char)0x6f,  /* [5750] */
    (xdc_Char)0x6c,  /* [5751] */
    (xdc_Char)0x64,  /* [5752] */
    (xdc_Char)0x41,  /* [5753] */
    (xdc_Char)0x66,  /* [5754] */
    (xdc_Char)0x66,  /* [5755] */
    (xdc_Char)0x69,  /* [5756] */
    (xdc_Char)0x6e,  /* [5757] */
    (xdc_Char)0x69,  /* [5758] */
    (xdc_Char)0x74,  /* [5759] */
    (xdc_Char)0x79,  /* [5760] */
    (xdc_Char)0x20,  /* [5761] */
    (xdc_Char)0x25,  /* [5762] */
    (xdc_Char)0x64,  /* [5763] */
    (xdc_Char)0x2c,  /* [5764] */
    (xdc_Char)0x20,  /* [5765] */
    (xdc_Char)0x6e,  /* [5766] */
    (xdc_Char)0x65,  /* [5767] */
    (xdc_Char)0x77,  /* [5768] */
    (xdc_Char)0x41,  /* [5769] */
    (xdc_Char)0x66,  /* [5770] */
    (xdc_Char)0x66,  /* [5771] */
    (xdc_Char)0x69,  /* [5772] */
    (xdc_Char)0x6e,  /* [5773] */
    (xdc_Char)0x69,  /* [5774] */
    (xdc_Char)0x74,  /* [5775] */
    (xdc_Char)0x79,  /* [5776] */
    (xdc_Char)0x20,  /* [5777] */
    (xdc_Char)0x25,  /* [5778] */
    (xdc_Char)0x64,  /* [5779] */
    (xdc_Char)0x0,  /* [5780] */
    (xdc_Char)0x4c,  /* [5781] */
    (xdc_Char)0x44,  /* [5782] */
    (xdc_Char)0x5f,  /* [5783] */
    (xdc_Char)0x73,  /* [5784] */
    (xdc_Char)0x63,  /* [5785] */
    (xdc_Char)0x68,  /* [5786] */
    (xdc_Char)0x65,  /* [5787] */
    (xdc_Char)0x64,  /* [5788] */
    (xdc_Char)0x75,  /* [5789] */
    (xdc_Char)0x6c,  /* [5790] */
    (xdc_Char)0x65,  /* [5791] */
    (xdc_Char)0x3a,  /* [5792] */
    (xdc_Char)0x20,  /* [5793] */
    (xdc_Char)0x63,  /* [5794] */
    (xdc_Char)0x6f,  /* [5795] */
    (xdc_Char)0x72,  /* [5796] */
    (xdc_Char)0x65,  /* [5797] */
    (xdc_Char)0x49,  /* [5798] */
    (xdc_Char)0x64,  /* [5799] */
    (xdc_Char)0x3a,  /* [5800] */
    (xdc_Char)0x20,  /* [5801] */
    (xdc_Char)0x25,  /* [5802] */
    (xdc_Char)0x64,  /* [5803] */
    (xdc_Char)0x2c,  /* [5804] */
    (xdc_Char)0x20,  /* [5805] */
    (xdc_Char)0x77,  /* [5806] */
    (xdc_Char)0x6f,  /* [5807] */
    (xdc_Char)0x72,  /* [5808] */
    (xdc_Char)0x6b,  /* [5809] */
    (xdc_Char)0x46,  /* [5810] */
    (xdc_Char)0x6c,  /* [5811] */
    (xdc_Char)0x61,  /* [5812] */
    (xdc_Char)0x67,  /* [5813] */
    (xdc_Char)0x3a,  /* [5814] */
    (xdc_Char)0x20,  /* [5815] */
    (xdc_Char)0x25,  /* [5816] */
    (xdc_Char)0x64,  /* [5817] */
    (xdc_Char)0x2c,  /* [5818] */
    (xdc_Char)0x20,  /* [5819] */
    (xdc_Char)0x63,  /* [5820] */
    (xdc_Char)0x75,  /* [5821] */
    (xdc_Char)0x72,  /* [5822] */
    (xdc_Char)0x53,  /* [5823] */
    (xdc_Char)0x65,  /* [5824] */
    (xdc_Char)0x74,  /* [5825] */
    (xdc_Char)0x4c,  /* [5826] */
    (xdc_Char)0x6f,  /* [5827] */
    (xdc_Char)0x63,  /* [5828] */
    (xdc_Char)0x61,  /* [5829] */
    (xdc_Char)0x6c,  /* [5830] */
    (xdc_Char)0x3a,  /* [5831] */
    (xdc_Char)0x20,  /* [5832] */
    (xdc_Char)0x25,  /* [5833] */
    (xdc_Char)0x64,  /* [5834] */
    (xdc_Char)0x2c,  /* [5835] */
    (xdc_Char)0x20,  /* [5836] */
    (xdc_Char)0x63,  /* [5837] */
    (xdc_Char)0x75,  /* [5838] */
    (xdc_Char)0x72,  /* [5839] */
    (xdc_Char)0x53,  /* [5840] */
    (xdc_Char)0x65,  /* [5841] */
    (xdc_Char)0x74,  /* [5842] */
    (xdc_Char)0x58,  /* [5843] */
    (xdc_Char)0x3a,  /* [5844] */
    (xdc_Char)0x20,  /* [5845] */
    (xdc_Char)0x25,  /* [5846] */
    (xdc_Char)0x64,  /* [5847] */
    (xdc_Char)0x2c,  /* [5848] */
    (xdc_Char)0x20,  /* [5849] */
    (xdc_Char)0x63,  /* [5850] */
    (xdc_Char)0x75,  /* [5851] */
    (xdc_Char)0x72,  /* [5852] */
    (xdc_Char)0x4d,  /* [5853] */
    (xdc_Char)0x61,  /* [5854] */
    (xdc_Char)0x73,  /* [5855] */
    (xdc_Char)0x6b,  /* [5856] */
    (xdc_Char)0x4c,  /* [5857] */
    (xdc_Char)0x6f,  /* [5858] */
    (xdc_Char)0x63,  /* [5859] */
    (xdc_Char)0x61,  /* [5860] */
    (xdc_Char)0x6c,  /* [5861] */
    (xdc_Char)0x3a,  /* [5862] */
    (xdc_Char)0x20,  /* [5863] */
    (xdc_Char)0x25,  /* [5864] */
    (xdc_Char)0x64,  /* [5865] */
    (xdc_Char)0x0,  /* [5866] */
    (xdc_Char)0x4c,  /* [5867] */
    (xdc_Char)0x44,  /* [5868] */
    (xdc_Char)0x5f,  /* [5869] */
    (xdc_Char)0x6e,  /* [5870] */
    (xdc_Char)0x6f,  /* [5871] */
    (xdc_Char)0x57,  /* [5872] */
    (xdc_Char)0x6f,  /* [5873] */
    (xdc_Char)0x72,  /* [5874] */
    (xdc_Char)0x6b,  /* [5875] */
    (xdc_Char)0x3a,  /* [5876] */
    (xdc_Char)0x20,  /* [5877] */
    (xdc_Char)0x63,  /* [5878] */
    (xdc_Char)0x6f,  /* [5879] */
    (xdc_Char)0x72,  /* [5880] */
    (xdc_Char)0x65,  /* [5881] */
    (xdc_Char)0x49,  /* [5882] */
    (xdc_Char)0x64,  /* [5883] */
    (xdc_Char)0x3a,  /* [5884] */
    (xdc_Char)0x20,  /* [5885] */
    (xdc_Char)0x25,  /* [5886] */
    (xdc_Char)0x64,  /* [5887] */
    (xdc_Char)0x2c,  /* [5888] */
    (xdc_Char)0x20,  /* [5889] */
    (xdc_Char)0x63,  /* [5890] */
    (xdc_Char)0x75,  /* [5891] */
    (xdc_Char)0x72,  /* [5892] */
    (xdc_Char)0x53,  /* [5893] */
    (xdc_Char)0x65,  /* [5894] */
    (xdc_Char)0x74,  /* [5895] */
    (xdc_Char)0x4c,  /* [5896] */
    (xdc_Char)0x6f,  /* [5897] */
    (xdc_Char)0x63,  /* [5898] */
    (xdc_Char)0x61,  /* [5899] */
    (xdc_Char)0x6c,  /* [5900] */
    (xdc_Char)0x3a,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x25,  /* [5903] */
    (xdc_Char)0x64,  /* [5904] */
    (xdc_Char)0x2c,  /* [5905] */
    (xdc_Char)0x20,  /* [5906] */
    (xdc_Char)0x63,  /* [5907] */
    (xdc_Char)0x75,  /* [5908] */
    (xdc_Char)0x72,  /* [5909] */
    (xdc_Char)0x53,  /* [5910] */
    (xdc_Char)0x65,  /* [5911] */
    (xdc_Char)0x74,  /* [5912] */
    (xdc_Char)0x58,  /* [5913] */
    (xdc_Char)0x3a,  /* [5914] */
    (xdc_Char)0x20,  /* [5915] */
    (xdc_Char)0x25,  /* [5916] */
    (xdc_Char)0x64,  /* [5917] */
    (xdc_Char)0x2c,  /* [5918] */
    (xdc_Char)0x20,  /* [5919] */
    (xdc_Char)0x63,  /* [5920] */
    (xdc_Char)0x75,  /* [5921] */
    (xdc_Char)0x72,  /* [5922] */
    (xdc_Char)0x4d,  /* [5923] */
    (xdc_Char)0x61,  /* [5924] */
    (xdc_Char)0x73,  /* [5925] */
    (xdc_Char)0x6b,  /* [5926] */
    (xdc_Char)0x4c,  /* [5927] */
    (xdc_Char)0x6f,  /* [5928] */
    (xdc_Char)0x63,  /* [5929] */
    (xdc_Char)0x61,  /* [5930] */
    (xdc_Char)0x6c,  /* [5931] */
    (xdc_Char)0x3a,  /* [5932] */
    (xdc_Char)0x20,  /* [5933] */
    (xdc_Char)0x25,  /* [5934] */
    (xdc_Char)0x64,  /* [5935] */
    (xdc_Char)0x0,  /* [5936] */
    (xdc_Char)0x4c,  /* [5937] */
    (xdc_Char)0x4d,  /* [5938] */
    (xdc_Char)0x5f,  /* [5939] */
    (xdc_Char)0x62,  /* [5940] */
    (xdc_Char)0x65,  /* [5941] */
    (xdc_Char)0x67,  /* [5942] */
    (xdc_Char)0x69,  /* [5943] */
    (xdc_Char)0x6e,  /* [5944] */
    (xdc_Char)0x3a,  /* [5945] */
    (xdc_Char)0x20,  /* [5946] */
    (xdc_Char)0x68,  /* [5947] */
    (xdc_Char)0x77,  /* [5948] */
    (xdc_Char)0x69,  /* [5949] */
    (xdc_Char)0x3a,  /* [5950] */
    (xdc_Char)0x20,  /* [5951] */
    (xdc_Char)0x30,  /* [5952] */
    (xdc_Char)0x78,  /* [5953] */
    (xdc_Char)0x25,  /* [5954] */
    (xdc_Char)0x78,  /* [5955] */
    (xdc_Char)0x2c,  /* [5956] */
    (xdc_Char)0x20,  /* [5957] */
    (xdc_Char)0x66,  /* [5958] */
    (xdc_Char)0x75,  /* [5959] */
    (xdc_Char)0x6e,  /* [5960] */
    (xdc_Char)0x63,  /* [5961] */
    (xdc_Char)0x3a,  /* [5962] */
    (xdc_Char)0x20,  /* [5963] */
    (xdc_Char)0x30,  /* [5964] */
    (xdc_Char)0x78,  /* [5965] */
    (xdc_Char)0x25,  /* [5966] */
    (xdc_Char)0x78,  /* [5967] */
    (xdc_Char)0x2c,  /* [5968] */
    (xdc_Char)0x20,  /* [5969] */
    (xdc_Char)0x70,  /* [5970] */
    (xdc_Char)0x72,  /* [5971] */
    (xdc_Char)0x65,  /* [5972] */
    (xdc_Char)0x54,  /* [5973] */
    (xdc_Char)0x68,  /* [5974] */
    (xdc_Char)0x72,  /* [5975] */
    (xdc_Char)0x65,  /* [5976] */
    (xdc_Char)0x61,  /* [5977] */
    (xdc_Char)0x64,  /* [5978] */
    (xdc_Char)0x3a,  /* [5979] */
    (xdc_Char)0x20,  /* [5980] */
    (xdc_Char)0x25,  /* [5981] */
    (xdc_Char)0x64,  /* [5982] */
    (xdc_Char)0x2c,  /* [5983] */
    (xdc_Char)0x20,  /* [5984] */
    (xdc_Char)0x69,  /* [5985] */
    (xdc_Char)0x6e,  /* [5986] */
    (xdc_Char)0x74,  /* [5987] */
    (xdc_Char)0x4e,  /* [5988] */
    (xdc_Char)0x75,  /* [5989] */
    (xdc_Char)0x6d,  /* [5990] */
    (xdc_Char)0x3a,  /* [5991] */
    (xdc_Char)0x20,  /* [5992] */
    (xdc_Char)0x25,  /* [5993] */
    (xdc_Char)0x64,  /* [5994] */
    (xdc_Char)0x2c,  /* [5995] */
    (xdc_Char)0x20,  /* [5996] */
    (xdc_Char)0x69,  /* [5997] */
    (xdc_Char)0x72,  /* [5998] */
    (xdc_Char)0x70,  /* [5999] */
    (xdc_Char)0x3a,  /* [6000] */
    (xdc_Char)0x20,  /* [6001] */
    (xdc_Char)0x30,  /* [6002] */
    (xdc_Char)0x78,  /* [6003] */
    (xdc_Char)0x25,  /* [6004] */
    (xdc_Char)0x78,  /* [6005] */
    (xdc_Char)0x0,  /* [6006] */
    (xdc_Char)0x4c,  /* [6007] */
    (xdc_Char)0x44,  /* [6008] */
    (xdc_Char)0x5f,  /* [6009] */
    (xdc_Char)0x65,  /* [6010] */
    (xdc_Char)0x6e,  /* [6011] */
    (xdc_Char)0x64,  /* [6012] */
    (xdc_Char)0x3a,  /* [6013] */
    (xdc_Char)0x20,  /* [6014] */
    (xdc_Char)0x68,  /* [6015] */
    (xdc_Char)0x77,  /* [6016] */
    (xdc_Char)0x69,  /* [6017] */
    (xdc_Char)0x3a,  /* [6018] */
    (xdc_Char)0x20,  /* [6019] */
    (xdc_Char)0x30,  /* [6020] */
    (xdc_Char)0x78,  /* [6021] */
    (xdc_Char)0x25,  /* [6022] */
    (xdc_Char)0x78,  /* [6023] */
    (xdc_Char)0x0,  /* [6024] */
    (xdc_Char)0x78,  /* [6025] */
    (xdc_Char)0x64,  /* [6026] */
    (xdc_Char)0x63,  /* [6027] */
    (xdc_Char)0x2e,  /* [6028] */
    (xdc_Char)0x0,  /* [6029] */
    (xdc_Char)0x72,  /* [6030] */
    (xdc_Char)0x75,  /* [6031] */
    (xdc_Char)0x6e,  /* [6032] */
    (xdc_Char)0x74,  /* [6033] */
    (xdc_Char)0x69,  /* [6034] */
    (xdc_Char)0x6d,  /* [6035] */
    (xdc_Char)0x65,  /* [6036] */
    (xdc_Char)0x2e,  /* [6037] */
    (xdc_Char)0x0,  /* [6038] */
    (xdc_Char)0x4d,  /* [6039] */
    (xdc_Char)0x61,  /* [6040] */
    (xdc_Char)0x69,  /* [6041] */
    (xdc_Char)0x6e,  /* [6042] */
    (xdc_Char)0x0,  /* [6043] */
    (xdc_Char)0x4d,  /* [6044] */
    (xdc_Char)0x65,  /* [6045] */
    (xdc_Char)0x6d,  /* [6046] */
    (xdc_Char)0x6f,  /* [6047] */
    (xdc_Char)0x72,  /* [6048] */
    (xdc_Char)0x79,  /* [6049] */
    (xdc_Char)0x0,  /* [6050] */
    (xdc_Char)0x74,  /* [6051] */
    (xdc_Char)0x69,  /* [6052] */
    (xdc_Char)0x2e,  /* [6053] */
    (xdc_Char)0x73,  /* [6054] */
    (xdc_Char)0x79,  /* [6055] */
    (xdc_Char)0x73,  /* [6056] */
    (xdc_Char)0x62,  /* [6057] */
    (xdc_Char)0x69,  /* [6058] */
    (xdc_Char)0x6f,  /* [6059] */
    (xdc_Char)0x73,  /* [6060] */
    (xdc_Char)0x2e,  /* [6061] */
    (xdc_Char)0x6b,  /* [6062] */
    (xdc_Char)0x6e,  /* [6063] */
    (xdc_Char)0x6c,  /* [6064] */
    (xdc_Char)0x2e,  /* [6065] */
    (xdc_Char)0x54,  /* [6066] */
    (xdc_Char)0x61,  /* [6067] */
    (xdc_Char)0x73,  /* [6068] */
    (xdc_Char)0x6b,  /* [6069] */
    (xdc_Char)0x2e,  /* [6070] */
    (xdc_Char)0x49,  /* [6071] */
    (xdc_Char)0x64,  /* [6072] */
    (xdc_Char)0x6c,  /* [6073] */
    (xdc_Char)0x65,  /* [6074] */
    (xdc_Char)0x54,  /* [6075] */
    (xdc_Char)0x61,  /* [6076] */
    (xdc_Char)0x73,  /* [6077] */
    (xdc_Char)0x6b,  /* [6078] */
    (xdc_Char)0x0,  /* [6079] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1789,  /* left */
        (xdc_Bits16)0x178e,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1797,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x179c,  /* right */
    },  /* [3] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0xd;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x17c0;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x4;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0xe;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0xf;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysCallback */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysCallback_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysCallback_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysCallback_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysCallback_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysCallback_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysCallback_ready();
}


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_cc26xx_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_cc26xx_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer___S1) - sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Mailbox OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Mailbox_Object2__ s0; char c; } ti_sysbios_knl_Mailbox___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__DESC__C, ".const:ti_sysbios_knl_Mailbox_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Mailbox_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Mailbox___S1) - sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Mailbox_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Mailbox_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerCallback OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerCallback_Object2__ s0; char c; } xdc_runtime_LoggerCallback___S1;
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__DESC__C, ".const:xdc_runtime_LoggerCallback_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerCallback_Object__DESC__C = {
    (xdc_Ptr)&xdc_runtime_LoggerCallback_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerCallback_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerCallback___S1) - sizeof(xdc_runtime_LoggerCallback_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerCallback_Object2__), /* objSize */
    (xdc_Ptr)&xdc_runtime_LoggerCallback_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerCallback_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_cc26xx_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 27;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Event_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle* instp)
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Event_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerCallback SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerCallback_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerCallback_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerCallback_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerCallback_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerCallback_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerCallback_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerCallback_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerCallback_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerCallback_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerCallback_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerCallback_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerCallback_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerCallback_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerCallback_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerCallback_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerCallback_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerCallback_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerCallback_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerCallback_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerCallback_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerCallback_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 8;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerCallback_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_LoggerCallback_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_LoggerCallback_Object__ *)oa) + i;
    }

    if (xdc_runtime_LoggerCallback_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerCallback_Object__ *)xdc_runtime_LoggerCallback_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerCallback_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerCallback_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerCallback_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_LoggerCallback___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    xdc_runtime_LoggerCallback_Params __prms;
    xdc_runtime_LoggerCallback_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerCallback_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
xdc_runtime_LoggerCallback_Handle xdc_runtime_LoggerCallback_create( const xdc_runtime_LoggerCallback_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_LoggerCallback_Params __prms;
    xdc_runtime_LoggerCallback_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerCallback_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void xdc_runtime_LoggerCallback_construct(xdc_runtime_LoggerCallback_Struct *__obj, const xdc_runtime_LoggerCallback_Params *__paramsPtr )
{
    xdc_runtime_LoggerCallback_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerCallback_Params), NULL);
    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerCallback_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void xdc_runtime_LoggerCallback_destruct(xdc_runtime_LoggerCallback_Struct *obj)
{
    xdc_runtime_LoggerCallback_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerCallback_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_LoggerCallback_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}

/* delete */
void xdc_runtime_LoggerCallback_delete(xdc_runtime_LoggerCallback_Handle* instp)
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_LoggerCallback_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysCallback_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

