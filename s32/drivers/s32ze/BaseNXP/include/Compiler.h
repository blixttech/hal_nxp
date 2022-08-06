/*
 * Copyright 2021-2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
/**
*   @file           Compiler.h
*   @implements     Compiler.h_Artifact
*   @version 0.9.0
*
*   @brief   AUTOSAR BaseNXP - SWS Compiler abstraction
*   @details The file Compiler.h provides macros for the encapsulation of definitions and
*            declarations.
*            This file contains sample code only. It is not part of the production code deliverables
*
*   @addtogroup BASENXP_COMPONENT
*   @{
*/

/**
* @requirements COMPILER047
*/
#ifndef COMPILER_H
#define COMPILER_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Compiler_Cfg.h"
#include "CompilerDefinition.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief  Parameters that shall be published within the compiler abstraction header file and also in
          the module's description file.
@{
*/
#define COMPILER_VENDOR_ID                      43
#define COMPILER_AR_RELEASE_MAJOR_VERSION       4
#define COMPILER_AR_RELEASE_MINOR_VERSION       7
#define COMPILER_AR_RELEASE_REVISION_VERSION    0
#define COMPILER_SW_MAJOR_VERSION               0
#define COMPILER_SW_MINOR_VERSION               9
#define COMPILER_SW_PATCH_VERSION               0
/**@}*/
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
* @brief The memory class AUTOMATIC shall be provided as empty definition, used for the declaration
*        of local pointers.
*/
#define AUTOMATIC

/**
* @brief The memory class TYPEDEF shall be provided as empty definition. This memory class shall be
*        used within type definitions, where no memory qualifier can be specified. This can be
*        necessary for defining pointer types, with e.g. P2VAR, where the macros require two
*        parameters. First parameter can be specified in the type definition (distance to the memory
*        location referenced by the pointer), but the second one (memory allocation of the pointer
*        itself) cannot be defined at this time. Hence memory class TYPEDEF shall be applied.
*/
#define TYPEDEF

/**
* @brief The compiler abstraction shall provide the NULL_PTR define with a void pointer to zero
*        definition.
*/
#define NULL_PTR ((void *)0)

/**************************************** Green Hills *********************************************/
#ifdef _GREENHILLS_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE              __inline

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static __inline

    /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC      __interrupt
    
    /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASM_KEYWORD  __asm

    /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASMV_KEYWORD  __asm volatile

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align)
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) __attribute__(( aligned(size) )) v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()
    /**
    * @brief Compiler abstraction for the packed qualifier
    */
    #define PACKED __packed
    
#endif /* #ifdef _GREENHILLS_C_S32ZE_ */

/**************************************** Wind River Diab *****************************************/
#ifdef _DIABDATA_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE              inline __attribute__((always_inline))

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static inline __attribute__((always_inline))

    /**
    * @brief Compiler abstraction for specifying an interrupt handler. Diab version 7 and above use clang
    */
#ifdef __clang__ 
    #define INTERRUPT_FUNC      __attribute__((interrupt))
#else
    #define INTERRUPT_FUNC      __interrupt__
#endif /* __clang__*/

    /**
    * @brief Compiler abstraction for the asm keyword.
    */
    #define ASM_KEYWORD  __asm
    
    /**
    * @brief Compiler abstraction for the asm keyword.
    */
    #define ASMV_KEYWORD  __asm volatile

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align)
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) __attribute__(( aligned(size) )) v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()
    /**
     * @brief Compiler abstraction for the packed qualifier
     */
    #define PACKED __attribute__((packed))
    
#endif /* #ifdef _DIABDATA_C_S32ZE_ */

/*************************************** CodeWarrior **********************************************/
#ifdef _CODEWARRIOR_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE              inline

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static inline

     /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC      __declspec(interrupt nowarn)
 
    /**
    * @brief Compiler abstraction for the asm keyword.
    */
    #define ASM_KEYWORD  asm

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align)
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) v __attribute__(( aligned(size) ));
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()    
    /**
    * @brief Compiler abstraction for the packed qualifier
    */
    #define PACKED __packed

#endif /* #ifdef _CODEWARRIOR_C_S32ZE_ */

/*************************************** Cosmic ***************************************************/
#ifdef _COSMIC_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE @inline

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static @inline

    /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC @interrupt
    
    /**
    * @brief Compiler abstraction for the asm keyword.
    */
    #define ASM_KEYWORD  _asm

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align) \#pragma section [sec_name ## align]
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP() \#pragma section []
    
#endif /* #ifdef _COSMIC_C_S32ZE_ */
/*************************************** HighTec **********************************************/
#ifdef _HITECH_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE              __inline

/**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
*/
    #define LOCAL_INLINE            static __inline

    /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC      __attribute__((interrupt));
    
    /**
    * @brief Compiler abstraction for the asm keyword.
    */
    #define ASM_KEYWORD  __asm

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align)
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) __attribute__(( aligned(size) )) v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()
    
#endif /* #ifdef _HITECH_C_S32ZE_ */

/**************************************** Linaro *********************************************/
#ifdef _LINARO_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE                  inline __attribute__((always_inline))

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static inline __attribute__((always_inline))

    /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC

    /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASM_KEYWORD  __asm__
    /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASMV_KEYWORD  __asm__ volatile

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align)
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) __attribute__(( aligned(size) )) v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()    
    /**
     * @brief Compiler abstraction for the packed qualifier
     */
    #define PACKED __attribute__((__packed__))
    
#endif /* #ifdef _LINARO_C_S32ZE_ */
/**************************************** DS5 *************************************************/
#ifdef _ARM_DS5_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE              __inline

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static __inline

    /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC
        /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASM_KEYWORD  __asm

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align)
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size) __align(size) v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()
    /**
     * @brief Compiler abstraction for the packed qualifier
     */
    #define PACKED __packed
    
#endif /* #ifdef _ARM_DS5_C_S32ZE_ */

/**************************************** IAR *************************************************/
#ifdef _IAR_C_S32ZE_
    /* Prototypes for intrinsic functions */
    /**
    * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword
    *        inline.
    */
    #define INLINE              inline __attribute__((always_inline))

    /**
    * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the
    *       keyword inline in functions with "static" scope
    */
    #define LOCAL_INLINE            static inline __attribute__((always_inline))

    /**
    * @brief Compiler abstraction for specifying an interrupt handler.
    */
    #define INTERRUPT_FUNC
    
        /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASM_KEYWORD  __asm
    /**
    * @brief Compiler abstraction for the asm keyword.
    */    
    #define ASMV_KEYWORD  __asm volatile

    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_START(sec_name, align) 
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define VAR_ALIGN(v, size)  _Pragma(MCAL_PUT_IN_QUOTES1(data_alignment=size)) \
                                v;
    /**
    * @brief Compiler abstraction for the data alignment
    */
    #define ALIGNED_VARS_STOP()   
   /**
    * @brief Compiler abstraction for the packed qualifier
    */
    #define PACKED __packed
    
#endif /* #ifdef _IAR_C_S32ZE_ */


/**
* @brief The compiler abstraction shall define the FUNC macro for the declaration and definition of
*        functions, that ensures correct syntax of function declarations as required by a specific
*        compiler.
*/
#define FUNC(rettype, memclass) rettype

/**
* @brief The compiler abstraction shall define the P2VAR macro for the declaration and definition of
*        pointers in RAM, pointing to variables.
*/
#define P2VAR(ptrtype, memclass, ptrclass) ptrtype *

/**
* @brief The compiler abstraction shall define the P2CONST macro for the declaration and definition
*        of pointers in RAM pointing to constants.
*/
#define P2CONST(ptrtype, memclass, ptrclass) const ptrtype *

/**
* @brief The compiler abstraction shall define the CONSTP2VAR macro for the declaration and
*        definition of constant pointers accessing variables.
*/
#define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype * const

/**
* @brief The compiler abstraction shall define the CONSTP2CONST macro for the declaration and
*        definition of constant pointers accessing constants.
*/
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype * const

/**
* @brief The compiler abstraction shall define the P2FUNC macro for the type definition of pointers
*        to functions.
*/
#define P2FUNC(rettype, ptrclass, fctname) rettype (*fctname)

/**
* @brief The compiler abstraction shall define the CONST macro for the declaration and definition of
*        constants.
*/
#define CONST(consttype, memclass) const consttype

/**
* @brief The compiler abstraction shall define the VAR macro for the declaration and definition of
*        variables.
*/
#define VAR(vartype, memclass) vartype


/**
* @brief The compiler abstraction for const pointer to function.
*/
#define CONSTP2FUNC(rettype, ptrclass, fctname) rettype (* const fctname)


/**
* @brief The compiler abstraction shall define the FUNC_P2CONST macro for the declaration and 
* definition of functions returning a pointer to a constant
*/
#define FUNC_P2CONST(rettype, ptrclass, memclass) const ptrclass rettype * memclass

/**
* @brief The compiler abstraction shall define the FUNC_P2VAR macro for the declaration and 
* definition of functions returning a pointer to a variable.
*/
#define FUNC_P2VAR(rettype, ptrclass, memclass) ptrclass rettype * memclass
 
/**
 * @brief Compiler abstraction for allocating variables to nocache section
 */
#ifdef CONFIG_NOCACHE_MEMORY
#ifndef STRINGIFY
#define STRINGIFY(x) #x
#endif /* STRINGIFY */
#define VAR_SEC_NOCACHE(name) __attribute__((section(".nocache." STRINGIFY(name))))
#else
#define VAR_SEC_NOCACHE(name)
#endif /* CONFIG_NOCACHE_MEMORY */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* #ifndef COMPILER_H */

/** @} */
