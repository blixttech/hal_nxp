/*
 * Copyright 1997-2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*!
 * @file S32Z27_RXFIFO.h
 * @version 1.7
 * @date 2022-03-16
 * @brief Peripheral Access Layer for S32Z27_RXFIFO
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32Z27_RXFIFO_H_)  /* Check if memory map has not been already included */
#define S32Z27_RXFIFO_H_

#include "S32Z27_COMMON.h"

/* ----------------------------------------------------------------------------
   -- RXFIFO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RXFIFO_Peripheral_Access_Layer RXFIFO Peripheral Access Layer
 * @{
 */

/** RXFIFO - Size of Registers Arrays */
#define RXFIFO_RXFFPOINTERAR_COUNT                32u
#define RXFIFO_VCANACPTFLTAR_COUNT                16u
#define RXFIFO_SDUACPTFLTAR_COUNT                 16u
#define RXFIFO_ADDRACPTFLTAR_COUNT                32u
#define RXFIFO_IDACPTFLTAR_COUNT                  32u

/** RXFIFO - Register Layout Typedef */
typedef struct {
  __IO uint32_t RXFFCTR;                           /**< Receive FIFO Message Buffer Control, offset: 0x0 */
  __IO uint32_t RXFMBP[RXFIFO_RXFFPOINTERAR_COUNT]; /**< Receive FIFO Message Buffer Pointer, array offset: 0x4, array step: 0x4 */
  uint8_t RESERVED_0[116];
  __IO uint32_t SECAM;                             /**< SEC Acceptance Mask, offset: 0xF8 */
  __IO uint32_t SECAV;                             /**< SEC Acceptance Value, offset: 0xFC */
  __IO uint32_t AFCFG;                             /**< Acceptance Filter Configuration, offset: 0x100 */
  __IO uint32_t VAMRCFG;                           /**< VCAN Acceptance Mask or Range Configuration, offset: 0x104 */
  __IO uint32_t SAMRCFG;                           /**< SDU Acceptance Mask or Range Configuration, offset: 0x108 */
  __IO uint32_t AAMRCFG;                           /**< ADDR Acceptance Mask or Range Configuration, offset: 0x10C */
  __IO uint32_t ACPTIDMR;                          /**< ID Acceptance Mask or Range Configuration, offset: 0x110 */
  uint8_t RESERVED_1[16];
  __IO uint32_t VAFLT[RXFIFO_VCANACPTFLTAR_COUNT]; /**< VCAN Acceptance Filter, array offset: 0x124, array step: 0x4 */
  __IO uint32_t SAFLT[RXFIFO_SDUACPTFLTAR_COUNT];  /**< SDU Acceptance Filter, array offset: 0x164, array step: 0x4 */
  struct {                                         /* offset: 0x1A4, array step: 0x8 */
    __IO uint32_t AAFLTL;                            /**< ADDR Acceptance Filter Element Low, array offset: 0x1A4, array step: 0x8 */
    __IO uint32_t AAFLTH;                            /**< ADDR Acceptance Filter Element High, array offset: 0x1A8, array step: 0x8 */
  } ADDRACPTFLTAR[RXFIFO_ADDRACPTFLTAR_COUNT];
  struct {                                         /* offset: 0x2A4, array step: 0x8 */
    __IO uint32_t IDAFLTL;                           /**< ID Acceptance Filter Element Low, array offset: 0x2A4, array step: 0x8 */
    __IO uint32_t IDAFLTH;                           /**< ID Acceptance Filter Element High, array offset: 0x2A8, array step: 0x8 */
  } IDACPTFLTAR[RXFIFO_IDACPTFLTAR_COUNT];
} RXFIFO_Type, *RXFIFO_MemMapPtr;

/** Number of instances of the RXFIFO module. */
#define RXFIFO_INSTANCE_COUNT                    (2u)

/* RXFIFO - Peripheral instance base addresses */
/** Peripheral CANXL_0__RXFIFO base address */
#define IP_CANXL_0__RXFIFO_BASE                  (0x47423000u)
/** Peripheral CANXL_0__RXFIFO base pointer */
#define IP_CANXL_0__RXFIFO                       ((RXFIFO_Type *)IP_CANXL_0__RXFIFO_BASE)
/** Peripheral CANXL_1__RXFIFO base address */
#define IP_CANXL_1__RXFIFO_BASE                  (0x47523000u)
/** Peripheral CANXL_1__RXFIFO base pointer */
#define IP_CANXL_1__RXFIFO                       ((RXFIFO_Type *)IP_CANXL_1__RXFIFO_BASE)
/** Array initializer of RXFIFO peripheral base addresses */
#define IP_RXFIFO_BASE_ADDRS                     { IP_CANXL_0__RXFIFO_BASE, IP_CANXL_1__RXFIFO_BASE }
/** Array initializer of RXFIFO peripheral base pointers */
#define IP_RXFIFO_BASE_PTRS                      { IP_CANXL_0__RXFIFO, IP_CANXL_1__RXFIFO }

/* ----------------------------------------------------------------------------
   -- RXFIFO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RXFIFO_Register_Masks RXFIFO Register Masks
 * @{
 */

/*! @name RXFFCTR - Receive FIFO Message Buffer Control */
/*! @{ */

#define RXFIFO_RXFFCTR_MBSIZE_MASK               (0x7FFU)
#define RXFIFO_RXFFCTR_MBSIZE_SHIFT              (0U)
#define RXFIFO_RXFFCTR_MBSIZE_WIDTH              (11U)
#define RXFIFO_RXFFCTR_MBSIZE(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_RXFFCTR_MBSIZE_SHIFT)) & RXFIFO_RXFFCTR_MBSIZE_MASK)

#define RXFIFO_RXFFCTR_KEEPLST_MASK              (0x8000U)
#define RXFIFO_RXFFCTR_KEEPLST_SHIFT             (15U)
#define RXFIFO_RXFFCTR_KEEPLST_WIDTH             (1U)
#define RXFIFO_RXFFCTR_KEEPLST(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_RXFFCTR_KEEPLST_SHIFT)) & RXFIFO_RXFFCTR_KEEPLST_MASK)
/*! @} */

/*! @name RXFMBP - Receive FIFO Message Buffer Pointer */
/*! @{ */

#define RXFIFO_RXFMBP_RXPT_MASK                  (0xFFFFFFFFU)
#define RXFIFO_RXFMBP_RXPT_SHIFT                 (0U)
#define RXFIFO_RXFMBP_RXPT_WIDTH                 (32U)
#define RXFIFO_RXFMBP_RXPT(x)                    (((uint32_t)(((uint32_t)(x)) << RXFIFO_RXFMBP_RXPT_SHIFT)) & RXFIFO_RXFMBP_RXPT_MASK)
/*! @} */

/*! @name SECAM - SEC Acceptance Mask */
/*! @{ */

#define RXFIFO_SECAM_SECAM0_MASK                 (0x1U)
#define RXFIFO_SECAM_SECAM0_SHIFT                (0U)
#define RXFIFO_SECAM_SECAM0_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM0(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM0_SHIFT)) & RXFIFO_SECAM_SECAM0_MASK)

#define RXFIFO_SECAM_SECAM1_MASK                 (0x2U)
#define RXFIFO_SECAM_SECAM1_SHIFT                (1U)
#define RXFIFO_SECAM_SECAM1_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM1(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM1_SHIFT)) & RXFIFO_SECAM_SECAM1_MASK)

#define RXFIFO_SECAM_SECAM2_MASK                 (0x4U)
#define RXFIFO_SECAM_SECAM2_SHIFT                (2U)
#define RXFIFO_SECAM_SECAM2_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM2(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM2_SHIFT)) & RXFIFO_SECAM_SECAM2_MASK)

#define RXFIFO_SECAM_SECAM3_MASK                 (0x8U)
#define RXFIFO_SECAM_SECAM3_SHIFT                (3U)
#define RXFIFO_SECAM_SECAM3_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM3(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM3_SHIFT)) & RXFIFO_SECAM_SECAM3_MASK)

#define RXFIFO_SECAM_SECAM4_MASK                 (0x10U)
#define RXFIFO_SECAM_SECAM4_SHIFT                (4U)
#define RXFIFO_SECAM_SECAM4_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM4(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM4_SHIFT)) & RXFIFO_SECAM_SECAM4_MASK)

#define RXFIFO_SECAM_SECAM5_MASK                 (0x20U)
#define RXFIFO_SECAM_SECAM5_SHIFT                (5U)
#define RXFIFO_SECAM_SECAM5_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM5(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM5_SHIFT)) & RXFIFO_SECAM_SECAM5_MASK)

#define RXFIFO_SECAM_SECAM6_MASK                 (0x40U)
#define RXFIFO_SECAM_SECAM6_SHIFT                (6U)
#define RXFIFO_SECAM_SECAM6_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM6(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM6_SHIFT)) & RXFIFO_SECAM_SECAM6_MASK)

#define RXFIFO_SECAM_SECAM7_MASK                 (0x80U)
#define RXFIFO_SECAM_SECAM7_SHIFT                (7U)
#define RXFIFO_SECAM_SECAM7_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM7(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM7_SHIFT)) & RXFIFO_SECAM_SECAM7_MASK)

#define RXFIFO_SECAM_SECAM8_MASK                 (0x100U)
#define RXFIFO_SECAM_SECAM8_SHIFT                (8U)
#define RXFIFO_SECAM_SECAM8_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM8(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM8_SHIFT)) & RXFIFO_SECAM_SECAM8_MASK)

#define RXFIFO_SECAM_SECAM9_MASK                 (0x200U)
#define RXFIFO_SECAM_SECAM9_SHIFT                (9U)
#define RXFIFO_SECAM_SECAM9_WIDTH                (1U)
#define RXFIFO_SECAM_SECAM9(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM9_SHIFT)) & RXFIFO_SECAM_SECAM9_MASK)

#define RXFIFO_SECAM_SECAM10_MASK                (0x400U)
#define RXFIFO_SECAM_SECAM10_SHIFT               (10U)
#define RXFIFO_SECAM_SECAM10_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM10(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM10_SHIFT)) & RXFIFO_SECAM_SECAM10_MASK)

#define RXFIFO_SECAM_SECAM11_MASK                (0x800U)
#define RXFIFO_SECAM_SECAM11_SHIFT               (11U)
#define RXFIFO_SECAM_SECAM11_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM11(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM11_SHIFT)) & RXFIFO_SECAM_SECAM11_MASK)

#define RXFIFO_SECAM_SECAM12_MASK                (0x1000U)
#define RXFIFO_SECAM_SECAM12_SHIFT               (12U)
#define RXFIFO_SECAM_SECAM12_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM12(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM12_SHIFT)) & RXFIFO_SECAM_SECAM12_MASK)

#define RXFIFO_SECAM_SECAM13_MASK                (0x2000U)
#define RXFIFO_SECAM_SECAM13_SHIFT               (13U)
#define RXFIFO_SECAM_SECAM13_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM13(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM13_SHIFT)) & RXFIFO_SECAM_SECAM13_MASK)

#define RXFIFO_SECAM_SECAM14_MASK                (0x4000U)
#define RXFIFO_SECAM_SECAM14_SHIFT               (14U)
#define RXFIFO_SECAM_SECAM14_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM14(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM14_SHIFT)) & RXFIFO_SECAM_SECAM14_MASK)

#define RXFIFO_SECAM_SECAM15_MASK                (0x8000U)
#define RXFIFO_SECAM_SECAM15_SHIFT               (15U)
#define RXFIFO_SECAM_SECAM15_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM15(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM15_SHIFT)) & RXFIFO_SECAM_SECAM15_MASK)

#define RXFIFO_SECAM_SECAM16_MASK                (0x10000U)
#define RXFIFO_SECAM_SECAM16_SHIFT               (16U)
#define RXFIFO_SECAM_SECAM16_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM16(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM16_SHIFT)) & RXFIFO_SECAM_SECAM16_MASK)

#define RXFIFO_SECAM_SECAM17_MASK                (0x20000U)
#define RXFIFO_SECAM_SECAM17_SHIFT               (17U)
#define RXFIFO_SECAM_SECAM17_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM17(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM17_SHIFT)) & RXFIFO_SECAM_SECAM17_MASK)

#define RXFIFO_SECAM_SECAM18_MASK                (0x40000U)
#define RXFIFO_SECAM_SECAM18_SHIFT               (18U)
#define RXFIFO_SECAM_SECAM18_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM18(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM18_SHIFT)) & RXFIFO_SECAM_SECAM18_MASK)

#define RXFIFO_SECAM_SECAM19_MASK                (0x80000U)
#define RXFIFO_SECAM_SECAM19_SHIFT               (19U)
#define RXFIFO_SECAM_SECAM19_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM19(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM19_SHIFT)) & RXFIFO_SECAM_SECAM19_MASK)

#define RXFIFO_SECAM_SECAM20_MASK                (0x100000U)
#define RXFIFO_SECAM_SECAM20_SHIFT               (20U)
#define RXFIFO_SECAM_SECAM20_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM20(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM20_SHIFT)) & RXFIFO_SECAM_SECAM20_MASK)

#define RXFIFO_SECAM_SECAM21_MASK                (0x200000U)
#define RXFIFO_SECAM_SECAM21_SHIFT               (21U)
#define RXFIFO_SECAM_SECAM21_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM21(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM21_SHIFT)) & RXFIFO_SECAM_SECAM21_MASK)

#define RXFIFO_SECAM_SECAM22_MASK                (0x400000U)
#define RXFIFO_SECAM_SECAM22_SHIFT               (22U)
#define RXFIFO_SECAM_SECAM22_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM22(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM22_SHIFT)) & RXFIFO_SECAM_SECAM22_MASK)

#define RXFIFO_SECAM_SECAM23_MASK                (0x800000U)
#define RXFIFO_SECAM_SECAM23_SHIFT               (23U)
#define RXFIFO_SECAM_SECAM23_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM23(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM23_SHIFT)) & RXFIFO_SECAM_SECAM23_MASK)

#define RXFIFO_SECAM_SECAM24_MASK                (0x1000000U)
#define RXFIFO_SECAM_SECAM24_SHIFT               (24U)
#define RXFIFO_SECAM_SECAM24_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM24(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM24_SHIFT)) & RXFIFO_SECAM_SECAM24_MASK)

#define RXFIFO_SECAM_SECAM25_MASK                (0x2000000U)
#define RXFIFO_SECAM_SECAM25_SHIFT               (25U)
#define RXFIFO_SECAM_SECAM25_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM25(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM25_SHIFT)) & RXFIFO_SECAM_SECAM25_MASK)

#define RXFIFO_SECAM_SECAM26_MASK                (0x4000000U)
#define RXFIFO_SECAM_SECAM26_SHIFT               (26U)
#define RXFIFO_SECAM_SECAM26_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM26(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM26_SHIFT)) & RXFIFO_SECAM_SECAM26_MASK)

#define RXFIFO_SECAM_SECAM27_MASK                (0x8000000U)
#define RXFIFO_SECAM_SECAM27_SHIFT               (27U)
#define RXFIFO_SECAM_SECAM27_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM27(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM27_SHIFT)) & RXFIFO_SECAM_SECAM27_MASK)

#define RXFIFO_SECAM_SECAM28_MASK                (0x10000000U)
#define RXFIFO_SECAM_SECAM28_SHIFT               (28U)
#define RXFIFO_SECAM_SECAM28_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM28(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM28_SHIFT)) & RXFIFO_SECAM_SECAM28_MASK)

#define RXFIFO_SECAM_SECAM29_MASK                (0x20000000U)
#define RXFIFO_SECAM_SECAM29_SHIFT               (29U)
#define RXFIFO_SECAM_SECAM29_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM29(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM29_SHIFT)) & RXFIFO_SECAM_SECAM29_MASK)

#define RXFIFO_SECAM_SECAM30_MASK                (0x40000000U)
#define RXFIFO_SECAM_SECAM30_SHIFT               (30U)
#define RXFIFO_SECAM_SECAM30_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM30(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM30_SHIFT)) & RXFIFO_SECAM_SECAM30_MASK)

#define RXFIFO_SECAM_SECAM31_MASK                (0x80000000U)
#define RXFIFO_SECAM_SECAM31_SHIFT               (31U)
#define RXFIFO_SECAM_SECAM31_WIDTH               (1U)
#define RXFIFO_SECAM_SECAM31(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAM_SECAM31_SHIFT)) & RXFIFO_SECAM_SECAM31_MASK)
/*! @} */

/*! @name SECAV - SEC Acceptance Value */
/*! @{ */

#define RXFIFO_SECAV_SECAV0_MASK                 (0x1U)
#define RXFIFO_SECAV_SECAV0_SHIFT                (0U)
#define RXFIFO_SECAV_SECAV0_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV0(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV0_SHIFT)) & RXFIFO_SECAV_SECAV0_MASK)

#define RXFIFO_SECAV_SECAV1_MASK                 (0x2U)
#define RXFIFO_SECAV_SECAV1_SHIFT                (1U)
#define RXFIFO_SECAV_SECAV1_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV1(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV1_SHIFT)) & RXFIFO_SECAV_SECAV1_MASK)

#define RXFIFO_SECAV_SECAV2_MASK                 (0x4U)
#define RXFIFO_SECAV_SECAV2_SHIFT                (2U)
#define RXFIFO_SECAV_SECAV2_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV2(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV2_SHIFT)) & RXFIFO_SECAV_SECAV2_MASK)

#define RXFIFO_SECAV_SECAV3_MASK                 (0x8U)
#define RXFIFO_SECAV_SECAV3_SHIFT                (3U)
#define RXFIFO_SECAV_SECAV3_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV3(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV3_SHIFT)) & RXFIFO_SECAV_SECAV3_MASK)

#define RXFIFO_SECAV_SECAV4_MASK                 (0x10U)
#define RXFIFO_SECAV_SECAV4_SHIFT                (4U)
#define RXFIFO_SECAV_SECAV4_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV4(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV4_SHIFT)) & RXFIFO_SECAV_SECAV4_MASK)

#define RXFIFO_SECAV_SECAV5_MASK                 (0x20U)
#define RXFIFO_SECAV_SECAV5_SHIFT                (5U)
#define RXFIFO_SECAV_SECAV5_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV5(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV5_SHIFT)) & RXFIFO_SECAV_SECAV5_MASK)

#define RXFIFO_SECAV_SECAV6_MASK                 (0x40U)
#define RXFIFO_SECAV_SECAV6_SHIFT                (6U)
#define RXFIFO_SECAV_SECAV6_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV6(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV6_SHIFT)) & RXFIFO_SECAV_SECAV6_MASK)

#define RXFIFO_SECAV_SECAV7_MASK                 (0x80U)
#define RXFIFO_SECAV_SECAV7_SHIFT                (7U)
#define RXFIFO_SECAV_SECAV7_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV7(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV7_SHIFT)) & RXFIFO_SECAV_SECAV7_MASK)

#define RXFIFO_SECAV_SECAV8_MASK                 (0x100U)
#define RXFIFO_SECAV_SECAV8_SHIFT                (8U)
#define RXFIFO_SECAV_SECAV8_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV8(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV8_SHIFT)) & RXFIFO_SECAV_SECAV8_MASK)

#define RXFIFO_SECAV_SECAV9_MASK                 (0x200U)
#define RXFIFO_SECAV_SECAV9_SHIFT                (9U)
#define RXFIFO_SECAV_SECAV9_WIDTH                (1U)
#define RXFIFO_SECAV_SECAV9(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV9_SHIFT)) & RXFIFO_SECAV_SECAV9_MASK)

#define RXFIFO_SECAV_SECAV10_MASK                (0x400U)
#define RXFIFO_SECAV_SECAV10_SHIFT               (10U)
#define RXFIFO_SECAV_SECAV10_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV10(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV10_SHIFT)) & RXFIFO_SECAV_SECAV10_MASK)

#define RXFIFO_SECAV_SECAV11_MASK                (0x800U)
#define RXFIFO_SECAV_SECAV11_SHIFT               (11U)
#define RXFIFO_SECAV_SECAV11_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV11(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV11_SHIFT)) & RXFIFO_SECAV_SECAV11_MASK)

#define RXFIFO_SECAV_SECAV12_MASK                (0x1000U)
#define RXFIFO_SECAV_SECAV12_SHIFT               (12U)
#define RXFIFO_SECAV_SECAV12_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV12(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV12_SHIFT)) & RXFIFO_SECAV_SECAV12_MASK)

#define RXFIFO_SECAV_SECAV13_MASK                (0x2000U)
#define RXFIFO_SECAV_SECAV13_SHIFT               (13U)
#define RXFIFO_SECAV_SECAV13_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV13(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV13_SHIFT)) & RXFIFO_SECAV_SECAV13_MASK)

#define RXFIFO_SECAV_SECAV14_MASK                (0x4000U)
#define RXFIFO_SECAV_SECAV14_SHIFT               (14U)
#define RXFIFO_SECAV_SECAV14_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV14(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV14_SHIFT)) & RXFIFO_SECAV_SECAV14_MASK)

#define RXFIFO_SECAV_SECAV15_MASK                (0x8000U)
#define RXFIFO_SECAV_SECAV15_SHIFT               (15U)
#define RXFIFO_SECAV_SECAV15_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV15(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV15_SHIFT)) & RXFIFO_SECAV_SECAV15_MASK)

#define RXFIFO_SECAV_SECAV16_MASK                (0x10000U)
#define RXFIFO_SECAV_SECAV16_SHIFT               (16U)
#define RXFIFO_SECAV_SECAV16_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV16(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV16_SHIFT)) & RXFIFO_SECAV_SECAV16_MASK)

#define RXFIFO_SECAV_SECAV17_MASK                (0x20000U)
#define RXFIFO_SECAV_SECAV17_SHIFT               (17U)
#define RXFIFO_SECAV_SECAV17_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV17(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV17_SHIFT)) & RXFIFO_SECAV_SECAV17_MASK)

#define RXFIFO_SECAV_SECAV18_MASK                (0x40000U)
#define RXFIFO_SECAV_SECAV18_SHIFT               (18U)
#define RXFIFO_SECAV_SECAV18_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV18(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV18_SHIFT)) & RXFIFO_SECAV_SECAV18_MASK)

#define RXFIFO_SECAV_SECAV19_MASK                (0x80000U)
#define RXFIFO_SECAV_SECAV19_SHIFT               (19U)
#define RXFIFO_SECAV_SECAV19_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV19(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV19_SHIFT)) & RXFIFO_SECAV_SECAV19_MASK)

#define RXFIFO_SECAV_SECAV20_MASK                (0x100000U)
#define RXFIFO_SECAV_SECAV20_SHIFT               (20U)
#define RXFIFO_SECAV_SECAV20_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV20(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV20_SHIFT)) & RXFIFO_SECAV_SECAV20_MASK)

#define RXFIFO_SECAV_SECAV21_MASK                (0x200000U)
#define RXFIFO_SECAV_SECAV21_SHIFT               (21U)
#define RXFIFO_SECAV_SECAV21_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV21(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV21_SHIFT)) & RXFIFO_SECAV_SECAV21_MASK)

#define RXFIFO_SECAV_SECAV22_MASK                (0x400000U)
#define RXFIFO_SECAV_SECAV22_SHIFT               (22U)
#define RXFIFO_SECAV_SECAV22_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV22(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV22_SHIFT)) & RXFIFO_SECAV_SECAV22_MASK)

#define RXFIFO_SECAV_SECAV23_MASK                (0x800000U)
#define RXFIFO_SECAV_SECAV23_SHIFT               (23U)
#define RXFIFO_SECAV_SECAV23_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV23(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV23_SHIFT)) & RXFIFO_SECAV_SECAV23_MASK)

#define RXFIFO_SECAV_SECAV24_MASK                (0x1000000U)
#define RXFIFO_SECAV_SECAV24_SHIFT               (24U)
#define RXFIFO_SECAV_SECAV24_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV24(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV24_SHIFT)) & RXFIFO_SECAV_SECAV24_MASK)

#define RXFIFO_SECAV_SECAV25_MASK                (0x2000000U)
#define RXFIFO_SECAV_SECAV25_SHIFT               (25U)
#define RXFIFO_SECAV_SECAV25_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV25(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV25_SHIFT)) & RXFIFO_SECAV_SECAV25_MASK)

#define RXFIFO_SECAV_SECAV26_MASK                (0x4000000U)
#define RXFIFO_SECAV_SECAV26_SHIFT               (26U)
#define RXFIFO_SECAV_SECAV26_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV26(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV26_SHIFT)) & RXFIFO_SECAV_SECAV26_MASK)

#define RXFIFO_SECAV_SECAV27_MASK                (0x8000000U)
#define RXFIFO_SECAV_SECAV27_SHIFT               (27U)
#define RXFIFO_SECAV_SECAV27_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV27(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV27_SHIFT)) & RXFIFO_SECAV_SECAV27_MASK)

#define RXFIFO_SECAV_SECAV28_MASK                (0x10000000U)
#define RXFIFO_SECAV_SECAV28_SHIFT               (28U)
#define RXFIFO_SECAV_SECAV28_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV28(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV28_SHIFT)) & RXFIFO_SECAV_SECAV28_MASK)

#define RXFIFO_SECAV_SECAV29_MASK                (0x20000000U)
#define RXFIFO_SECAV_SECAV29_SHIFT               (29U)
#define RXFIFO_SECAV_SECAV29_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV29(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV29_SHIFT)) & RXFIFO_SECAV_SECAV29_MASK)

#define RXFIFO_SECAV_SECAV30_MASK                (0x40000000U)
#define RXFIFO_SECAV_SECAV30_SHIFT               (30U)
#define RXFIFO_SECAV_SECAV30_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV30(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV30_SHIFT)) & RXFIFO_SECAV_SECAV30_MASK)

#define RXFIFO_SECAV_SECAV31_MASK                (0x80000000U)
#define RXFIFO_SECAV_SECAV31_SHIFT               (31U)
#define RXFIFO_SECAV_SECAV31_WIDTH               (1U)
#define RXFIFO_SECAV_SECAV31(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_SECAV_SECAV31_SHIFT)) & RXFIFO_SECAV_SECAV31_MASK)
/*! @} */

/*! @name AFCFG - Acceptance Filter Configuration */
/*! @{ */

#define RXFIFO_AFCFG_ACPTVCAN_MASK               (0x1FU)
#define RXFIFO_AFCFG_ACPTVCAN_SHIFT              (0U)
#define RXFIFO_AFCFG_ACPTVCAN_WIDTH              (5U)
#define RXFIFO_AFCFG_ACPTVCAN(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_ACPTVCAN_SHIFT)) & RXFIFO_AFCFG_ACPTVCAN_MASK)

#define RXFIFO_AFCFG_AVCANEN_MASK                (0x80U)
#define RXFIFO_AFCFG_AVCANEN_SHIFT               (7U)
#define RXFIFO_AFCFG_AVCANEN_WIDTH               (1U)
#define RXFIFO_AFCFG_AVCANEN(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_AVCANEN_SHIFT)) & RXFIFO_AFCFG_AVCANEN_MASK)

#define RXFIFO_AFCFG_ACPTSDU_MASK                (0x1F00U)
#define RXFIFO_AFCFG_ACPTSDU_SHIFT               (8U)
#define RXFIFO_AFCFG_ACPTSDU_WIDTH               (5U)
#define RXFIFO_AFCFG_ACPTSDU(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_ACPTSDU_SHIFT)) & RXFIFO_AFCFG_ACPTSDU_MASK)

#define RXFIFO_AFCFG_ASDUEN_MASK                 (0x8000U)
#define RXFIFO_AFCFG_ASDUEN_SHIFT                (15U)
#define RXFIFO_AFCFG_ASDUEN_WIDTH                (1U)
#define RXFIFO_AFCFG_ASDUEN(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_ASDUEN_SHIFT)) & RXFIFO_AFCFG_ASDUEN_MASK)

#define RXFIFO_AFCFG_ACPTADDR_MASK               (0x1F0000U)
#define RXFIFO_AFCFG_ACPTADDR_SHIFT              (16U)
#define RXFIFO_AFCFG_ACPTADDR_WIDTH              (5U)
#define RXFIFO_AFCFG_ACPTADDR(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_ACPTADDR_SHIFT)) & RXFIFO_AFCFG_ACPTADDR_MASK)

#define RXFIFO_AFCFG_AADDREN_MASK                (0x800000U)
#define RXFIFO_AFCFG_AADDREN_SHIFT               (23U)
#define RXFIFO_AFCFG_AADDREN_WIDTH               (1U)
#define RXFIFO_AFCFG_AADDREN(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_AADDREN_SHIFT)) & RXFIFO_AFCFG_AADDREN_MASK)

#define RXFIFO_AFCFG_ACPTID_MASK                 (0x1F000000U)
#define RXFIFO_AFCFG_ACPTID_SHIFT                (24U)
#define RXFIFO_AFCFG_ACPTID_WIDTH                (5U)
#define RXFIFO_AFCFG_ACPTID(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_AFCFG_ACPTID_SHIFT)) & RXFIFO_AFCFG_ACPTID_MASK)
/*! @} */

/*! @name VAMRCFG - VCAN Acceptance Mask or Range Configuration */
/*! @{ */

#define RXFIFO_VAMRCFG_VMSK0R0_MASK              (0x1U)
#define RXFIFO_VAMRCFG_VMSK0R0_SHIFT             (0U)
#define RXFIFO_VAMRCFG_VMSK0R0_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R0(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R0_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R0_MASK)

#define RXFIFO_VAMRCFG_VMSK0R1_MASK              (0x2U)
#define RXFIFO_VAMRCFG_VMSK0R1_SHIFT             (1U)
#define RXFIFO_VAMRCFG_VMSK0R1_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R1(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R1_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R1_MASK)

#define RXFIFO_VAMRCFG_VMSK0R2_MASK              (0x4U)
#define RXFIFO_VAMRCFG_VMSK0R2_SHIFT             (2U)
#define RXFIFO_VAMRCFG_VMSK0R2_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R2(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R2_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R2_MASK)

#define RXFIFO_VAMRCFG_VMSK0R3_MASK              (0x8U)
#define RXFIFO_VAMRCFG_VMSK0R3_SHIFT             (3U)
#define RXFIFO_VAMRCFG_VMSK0R3_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R3(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R3_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R3_MASK)

#define RXFIFO_VAMRCFG_VMSK0R4_MASK              (0x10U)
#define RXFIFO_VAMRCFG_VMSK0R4_SHIFT             (4U)
#define RXFIFO_VAMRCFG_VMSK0R4_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R4(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R4_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R4_MASK)

#define RXFIFO_VAMRCFG_VMSK0R5_MASK              (0x20U)
#define RXFIFO_VAMRCFG_VMSK0R5_SHIFT             (5U)
#define RXFIFO_VAMRCFG_VMSK0R5_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R5(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R5_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R5_MASK)

#define RXFIFO_VAMRCFG_VMSK0R6_MASK              (0x40U)
#define RXFIFO_VAMRCFG_VMSK0R6_SHIFT             (6U)
#define RXFIFO_VAMRCFG_VMSK0R6_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R6(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R6_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R6_MASK)

#define RXFIFO_VAMRCFG_VMSK0R7_MASK              (0x80U)
#define RXFIFO_VAMRCFG_VMSK0R7_SHIFT             (7U)
#define RXFIFO_VAMRCFG_VMSK0R7_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R7(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R7_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R7_MASK)

#define RXFIFO_VAMRCFG_VMSK0R8_MASK              (0x100U)
#define RXFIFO_VAMRCFG_VMSK0R8_SHIFT             (8U)
#define RXFIFO_VAMRCFG_VMSK0R8_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R8(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R8_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R8_MASK)

#define RXFIFO_VAMRCFG_VMSK0R9_MASK              (0x200U)
#define RXFIFO_VAMRCFG_VMSK0R9_SHIFT             (9U)
#define RXFIFO_VAMRCFG_VMSK0R9_WIDTH             (1U)
#define RXFIFO_VAMRCFG_VMSK0R9(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R9_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R9_MASK)

#define RXFIFO_VAMRCFG_VMSK0R10_MASK             (0x400U)
#define RXFIFO_VAMRCFG_VMSK0R10_SHIFT            (10U)
#define RXFIFO_VAMRCFG_VMSK0R10_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R10(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R10_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R10_MASK)

#define RXFIFO_VAMRCFG_VMSK0R11_MASK             (0x800U)
#define RXFIFO_VAMRCFG_VMSK0R11_SHIFT            (11U)
#define RXFIFO_VAMRCFG_VMSK0R11_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R11(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R11_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R11_MASK)

#define RXFIFO_VAMRCFG_VMSK0R12_MASK             (0x1000U)
#define RXFIFO_VAMRCFG_VMSK0R12_SHIFT            (12U)
#define RXFIFO_VAMRCFG_VMSK0R12_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R12(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R12_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R12_MASK)

#define RXFIFO_VAMRCFG_VMSK0R13_MASK             (0x2000U)
#define RXFIFO_VAMRCFG_VMSK0R13_SHIFT            (13U)
#define RXFIFO_VAMRCFG_VMSK0R13_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R13(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R13_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R13_MASK)

#define RXFIFO_VAMRCFG_VMSK0R14_MASK             (0x4000U)
#define RXFIFO_VAMRCFG_VMSK0R14_SHIFT            (14U)
#define RXFIFO_VAMRCFG_VMSK0R14_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R14(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R14_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R14_MASK)

#define RXFIFO_VAMRCFG_VMSK0R15_MASK             (0x8000U)
#define RXFIFO_VAMRCFG_VMSK0R15_SHIFT            (15U)
#define RXFIFO_VAMRCFG_VMSK0R15_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R15(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R15_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R15_MASK)

#define RXFIFO_VAMRCFG_VMSK0R16_MASK             (0x10000U)
#define RXFIFO_VAMRCFG_VMSK0R16_SHIFT            (16U)
#define RXFIFO_VAMRCFG_VMSK0R16_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R16(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R16_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R16_MASK)

#define RXFIFO_VAMRCFG_VMSK0R17_MASK             (0x20000U)
#define RXFIFO_VAMRCFG_VMSK0R17_SHIFT            (17U)
#define RXFIFO_VAMRCFG_VMSK0R17_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R17(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R17_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R17_MASK)

#define RXFIFO_VAMRCFG_VMSK0R18_MASK             (0x40000U)
#define RXFIFO_VAMRCFG_VMSK0R18_SHIFT            (18U)
#define RXFIFO_VAMRCFG_VMSK0R18_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R18(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R18_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R18_MASK)

#define RXFIFO_VAMRCFG_VMSK0R19_MASK             (0x80000U)
#define RXFIFO_VAMRCFG_VMSK0R19_SHIFT            (19U)
#define RXFIFO_VAMRCFG_VMSK0R19_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R19(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R19_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R19_MASK)

#define RXFIFO_VAMRCFG_VMSK0R20_MASK             (0x100000U)
#define RXFIFO_VAMRCFG_VMSK0R20_SHIFT            (20U)
#define RXFIFO_VAMRCFG_VMSK0R20_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R20(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R20_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R20_MASK)

#define RXFIFO_VAMRCFG_VMSK0R21_MASK             (0x200000U)
#define RXFIFO_VAMRCFG_VMSK0R21_SHIFT            (21U)
#define RXFIFO_VAMRCFG_VMSK0R21_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R21(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R21_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R21_MASK)

#define RXFIFO_VAMRCFG_VMSK0R22_MASK             (0x400000U)
#define RXFIFO_VAMRCFG_VMSK0R22_SHIFT            (22U)
#define RXFIFO_VAMRCFG_VMSK0R22_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R22(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R22_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R22_MASK)

#define RXFIFO_VAMRCFG_VMSK0R23_MASK             (0x800000U)
#define RXFIFO_VAMRCFG_VMSK0R23_SHIFT            (23U)
#define RXFIFO_VAMRCFG_VMSK0R23_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R23(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R23_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R23_MASK)

#define RXFIFO_VAMRCFG_VMSK0R24_MASK             (0x1000000U)
#define RXFIFO_VAMRCFG_VMSK0R24_SHIFT            (24U)
#define RXFIFO_VAMRCFG_VMSK0R24_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R24(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R24_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R24_MASK)

#define RXFIFO_VAMRCFG_VMSK0R25_MASK             (0x2000000U)
#define RXFIFO_VAMRCFG_VMSK0R25_SHIFT            (25U)
#define RXFIFO_VAMRCFG_VMSK0R25_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R25(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R25_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R25_MASK)

#define RXFIFO_VAMRCFG_VMSK0R26_MASK             (0x4000000U)
#define RXFIFO_VAMRCFG_VMSK0R26_SHIFT            (26U)
#define RXFIFO_VAMRCFG_VMSK0R26_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R26(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R26_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R26_MASK)

#define RXFIFO_VAMRCFG_VMSK0R27_MASK             (0x8000000U)
#define RXFIFO_VAMRCFG_VMSK0R27_SHIFT            (27U)
#define RXFIFO_VAMRCFG_VMSK0R27_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R27(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R27_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R27_MASK)

#define RXFIFO_VAMRCFG_VMSK0R28_MASK             (0x10000000U)
#define RXFIFO_VAMRCFG_VMSK0R28_SHIFT            (28U)
#define RXFIFO_VAMRCFG_VMSK0R28_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R28(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R28_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R28_MASK)

#define RXFIFO_VAMRCFG_VMSK0R29_MASK             (0x20000000U)
#define RXFIFO_VAMRCFG_VMSK0R29_SHIFT            (29U)
#define RXFIFO_VAMRCFG_VMSK0R29_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R29(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R29_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R29_MASK)

#define RXFIFO_VAMRCFG_VMSK0R30_MASK             (0x40000000U)
#define RXFIFO_VAMRCFG_VMSK0R30_SHIFT            (30U)
#define RXFIFO_VAMRCFG_VMSK0R30_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R30(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R30_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R30_MASK)

#define RXFIFO_VAMRCFG_VMSK0R31_MASK             (0x80000000U)
#define RXFIFO_VAMRCFG_VMSK0R31_SHIFT            (31U)
#define RXFIFO_VAMRCFG_VMSK0R31_WIDTH            (1U)
#define RXFIFO_VAMRCFG_VMSK0R31(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAMRCFG_VMSK0R31_SHIFT)) & RXFIFO_VAMRCFG_VMSK0R31_MASK)
/*! @} */

/*! @name SAMRCFG - SDU Acceptance Mask or Range Configuration */
/*! @{ */

#define RXFIFO_SAMRCFG_SMSK0R0_MASK              (0x1U)
#define RXFIFO_SAMRCFG_SMSK0R0_SHIFT             (0U)
#define RXFIFO_SAMRCFG_SMSK0R0_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R0(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R0_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R0_MASK)

#define RXFIFO_SAMRCFG_SMSK0R1_MASK              (0x2U)
#define RXFIFO_SAMRCFG_SMSK0R1_SHIFT             (1U)
#define RXFIFO_SAMRCFG_SMSK0R1_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R1(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R1_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R1_MASK)

#define RXFIFO_SAMRCFG_SMSK0R2_MASK              (0x4U)
#define RXFIFO_SAMRCFG_SMSK0R2_SHIFT             (2U)
#define RXFIFO_SAMRCFG_SMSK0R2_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R2(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R2_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R2_MASK)

#define RXFIFO_SAMRCFG_SMSK0R3_MASK              (0x8U)
#define RXFIFO_SAMRCFG_SMSK0R3_SHIFT             (3U)
#define RXFIFO_SAMRCFG_SMSK0R3_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R3(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R3_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R3_MASK)

#define RXFIFO_SAMRCFG_SMSK0R4_MASK              (0x10U)
#define RXFIFO_SAMRCFG_SMSK0R4_SHIFT             (4U)
#define RXFIFO_SAMRCFG_SMSK0R4_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R4(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R4_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R4_MASK)

#define RXFIFO_SAMRCFG_SMSK0R5_MASK              (0x20U)
#define RXFIFO_SAMRCFG_SMSK0R5_SHIFT             (5U)
#define RXFIFO_SAMRCFG_SMSK0R5_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R5(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R5_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R5_MASK)

#define RXFIFO_SAMRCFG_SMSK0R6_MASK              (0x40U)
#define RXFIFO_SAMRCFG_SMSK0R6_SHIFT             (6U)
#define RXFIFO_SAMRCFG_SMSK0R6_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R6(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R6_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R6_MASK)

#define RXFIFO_SAMRCFG_SMSK0R7_MASK              (0x80U)
#define RXFIFO_SAMRCFG_SMSK0R7_SHIFT             (7U)
#define RXFIFO_SAMRCFG_SMSK0R7_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R7(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R7_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R7_MASK)

#define RXFIFO_SAMRCFG_SMSK0R8_MASK              (0x100U)
#define RXFIFO_SAMRCFG_SMSK0R8_SHIFT             (8U)
#define RXFIFO_SAMRCFG_SMSK0R8_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R8(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R8_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R8_MASK)

#define RXFIFO_SAMRCFG_SMSK0R9_MASK              (0x200U)
#define RXFIFO_SAMRCFG_SMSK0R9_SHIFT             (9U)
#define RXFIFO_SAMRCFG_SMSK0R9_WIDTH             (1U)
#define RXFIFO_SAMRCFG_SMSK0R9(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R9_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R9_MASK)

#define RXFIFO_SAMRCFG_SMSK0R10_MASK             (0x400U)
#define RXFIFO_SAMRCFG_SMSK0R10_SHIFT            (10U)
#define RXFIFO_SAMRCFG_SMSK0R10_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R10(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R10_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R10_MASK)

#define RXFIFO_SAMRCFG_SMSK0R11_MASK             (0x800U)
#define RXFIFO_SAMRCFG_SMSK0R11_SHIFT            (11U)
#define RXFIFO_SAMRCFG_SMSK0R11_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R11(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R11_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R11_MASK)

#define RXFIFO_SAMRCFG_SMSK0R12_MASK             (0x1000U)
#define RXFIFO_SAMRCFG_SMSK0R12_SHIFT            (12U)
#define RXFIFO_SAMRCFG_SMSK0R12_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R12(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R12_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R12_MASK)

#define RXFIFO_SAMRCFG_SMSK0R13_MASK             (0x2000U)
#define RXFIFO_SAMRCFG_SMSK0R13_SHIFT            (13U)
#define RXFIFO_SAMRCFG_SMSK0R13_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R13(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R13_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R13_MASK)

#define RXFIFO_SAMRCFG_SMSK0R14_MASK             (0x4000U)
#define RXFIFO_SAMRCFG_SMSK0R14_SHIFT            (14U)
#define RXFIFO_SAMRCFG_SMSK0R14_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R14(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R14_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R14_MASK)

#define RXFIFO_SAMRCFG_SMSK0R15_MASK             (0x8000U)
#define RXFIFO_SAMRCFG_SMSK0R15_SHIFT            (15U)
#define RXFIFO_SAMRCFG_SMSK0R15_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R15(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R15_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R15_MASK)

#define RXFIFO_SAMRCFG_SMSK0R16_MASK             (0x10000U)
#define RXFIFO_SAMRCFG_SMSK0R16_SHIFT            (16U)
#define RXFIFO_SAMRCFG_SMSK0R16_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R16(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R16_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R16_MASK)

#define RXFIFO_SAMRCFG_SMSK0R17_MASK             (0x20000U)
#define RXFIFO_SAMRCFG_SMSK0R17_SHIFT            (17U)
#define RXFIFO_SAMRCFG_SMSK0R17_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R17(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R17_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R17_MASK)

#define RXFIFO_SAMRCFG_SMSK0R18_MASK             (0x40000U)
#define RXFIFO_SAMRCFG_SMSK0R18_SHIFT            (18U)
#define RXFIFO_SAMRCFG_SMSK0R18_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R18(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R18_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R18_MASK)

#define RXFIFO_SAMRCFG_SMSK0R19_MASK             (0x80000U)
#define RXFIFO_SAMRCFG_SMSK0R19_SHIFT            (19U)
#define RXFIFO_SAMRCFG_SMSK0R19_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R19(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R19_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R19_MASK)

#define RXFIFO_SAMRCFG_SMSK0R20_MASK             (0x100000U)
#define RXFIFO_SAMRCFG_SMSK0R20_SHIFT            (20U)
#define RXFIFO_SAMRCFG_SMSK0R20_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R20(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R20_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R20_MASK)

#define RXFIFO_SAMRCFG_SMSK0R21_MASK             (0x200000U)
#define RXFIFO_SAMRCFG_SMSK0R21_SHIFT            (21U)
#define RXFIFO_SAMRCFG_SMSK0R21_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R21(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R21_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R21_MASK)

#define RXFIFO_SAMRCFG_SMSK0R22_MASK             (0x400000U)
#define RXFIFO_SAMRCFG_SMSK0R22_SHIFT            (22U)
#define RXFIFO_SAMRCFG_SMSK0R22_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R22(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R22_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R22_MASK)

#define RXFIFO_SAMRCFG_SMSK0R23_MASK             (0x800000U)
#define RXFIFO_SAMRCFG_SMSK0R23_SHIFT            (23U)
#define RXFIFO_SAMRCFG_SMSK0R23_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R23(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R23_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R23_MASK)

#define RXFIFO_SAMRCFG_SMSK0R24_MASK             (0x1000000U)
#define RXFIFO_SAMRCFG_SMSK0R24_SHIFT            (24U)
#define RXFIFO_SAMRCFG_SMSK0R24_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R24(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R24_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R24_MASK)

#define RXFIFO_SAMRCFG_SMSK0R25_MASK             (0x2000000U)
#define RXFIFO_SAMRCFG_SMSK0R25_SHIFT            (25U)
#define RXFIFO_SAMRCFG_SMSK0R25_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R25(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R25_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R25_MASK)

#define RXFIFO_SAMRCFG_SMSK0R26_MASK             (0x4000000U)
#define RXFIFO_SAMRCFG_SMSK0R26_SHIFT            (26U)
#define RXFIFO_SAMRCFG_SMSK0R26_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R26(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R26_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R26_MASK)

#define RXFIFO_SAMRCFG_SMSK0R27_MASK             (0x8000000U)
#define RXFIFO_SAMRCFG_SMSK0R27_SHIFT            (27U)
#define RXFIFO_SAMRCFG_SMSK0R27_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R27(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R27_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R27_MASK)

#define RXFIFO_SAMRCFG_SMSK0R28_MASK             (0x10000000U)
#define RXFIFO_SAMRCFG_SMSK0R28_SHIFT            (28U)
#define RXFIFO_SAMRCFG_SMSK0R28_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R28(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R28_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R28_MASK)

#define RXFIFO_SAMRCFG_SMSK0R29_MASK             (0x20000000U)
#define RXFIFO_SAMRCFG_SMSK0R29_SHIFT            (29U)
#define RXFIFO_SAMRCFG_SMSK0R29_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R29(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R29_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R29_MASK)

#define RXFIFO_SAMRCFG_SMSK0R30_MASK             (0x40000000U)
#define RXFIFO_SAMRCFG_SMSK0R30_SHIFT            (30U)
#define RXFIFO_SAMRCFG_SMSK0R30_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R30(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R30_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R30_MASK)

#define RXFIFO_SAMRCFG_SMSK0R31_MASK             (0x80000000U)
#define RXFIFO_SAMRCFG_SMSK0R31_SHIFT            (31U)
#define RXFIFO_SAMRCFG_SMSK0R31_WIDTH            (1U)
#define RXFIFO_SAMRCFG_SMSK0R31(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAMRCFG_SMSK0R31_SHIFT)) & RXFIFO_SAMRCFG_SMSK0R31_MASK)
/*! @} */

/*! @name AAMRCFG - ADDR Acceptance Mask or Range Configuration */
/*! @{ */

#define RXFIFO_AAMRCFG_AMSK0R0_MASK              (0x1U)
#define RXFIFO_AAMRCFG_AMSK0R0_SHIFT             (0U)
#define RXFIFO_AAMRCFG_AMSK0R0_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R0(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R0_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R0_MASK)

#define RXFIFO_AAMRCFG_AMSK0R1_MASK              (0x2U)
#define RXFIFO_AAMRCFG_AMSK0R1_SHIFT             (1U)
#define RXFIFO_AAMRCFG_AMSK0R1_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R1(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R1_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R1_MASK)

#define RXFIFO_AAMRCFG_AMSK0R2_MASK              (0x4U)
#define RXFIFO_AAMRCFG_AMSK0R2_SHIFT             (2U)
#define RXFIFO_AAMRCFG_AMSK0R2_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R2(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R2_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R2_MASK)

#define RXFIFO_AAMRCFG_AMSK0R3_MASK              (0x8U)
#define RXFIFO_AAMRCFG_AMSK0R3_SHIFT             (3U)
#define RXFIFO_AAMRCFG_AMSK0R3_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R3(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R3_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R3_MASK)

#define RXFIFO_AAMRCFG_AMSK0R4_MASK              (0x10U)
#define RXFIFO_AAMRCFG_AMSK0R4_SHIFT             (4U)
#define RXFIFO_AAMRCFG_AMSK0R4_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R4(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R4_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R4_MASK)

#define RXFIFO_AAMRCFG_AMSK0R5_MASK              (0x20U)
#define RXFIFO_AAMRCFG_AMSK0R5_SHIFT             (5U)
#define RXFIFO_AAMRCFG_AMSK0R5_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R5(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R5_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R5_MASK)

#define RXFIFO_AAMRCFG_AMSK0R6_MASK              (0x40U)
#define RXFIFO_AAMRCFG_AMSK0R6_SHIFT             (6U)
#define RXFIFO_AAMRCFG_AMSK0R6_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R6(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R6_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R6_MASK)

#define RXFIFO_AAMRCFG_AMSK0R7_MASK              (0x80U)
#define RXFIFO_AAMRCFG_AMSK0R7_SHIFT             (7U)
#define RXFIFO_AAMRCFG_AMSK0R7_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R7(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R7_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R7_MASK)

#define RXFIFO_AAMRCFG_AMSK0R8_MASK              (0x100U)
#define RXFIFO_AAMRCFG_AMSK0R8_SHIFT             (8U)
#define RXFIFO_AAMRCFG_AMSK0R8_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R8(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R8_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R8_MASK)

#define RXFIFO_AAMRCFG_AMSK0R9_MASK              (0x200U)
#define RXFIFO_AAMRCFG_AMSK0R9_SHIFT             (9U)
#define RXFIFO_AAMRCFG_AMSK0R9_WIDTH             (1U)
#define RXFIFO_AAMRCFG_AMSK0R9(x)                (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R9_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R9_MASK)

#define RXFIFO_AAMRCFG_AMSK0R10_MASK             (0x400U)
#define RXFIFO_AAMRCFG_AMSK0R10_SHIFT            (10U)
#define RXFIFO_AAMRCFG_AMSK0R10_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R10(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R10_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R10_MASK)

#define RXFIFO_AAMRCFG_AMSK0R11_MASK             (0x800U)
#define RXFIFO_AAMRCFG_AMSK0R11_SHIFT            (11U)
#define RXFIFO_AAMRCFG_AMSK0R11_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R11(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R11_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R11_MASK)

#define RXFIFO_AAMRCFG_AMSK0R12_MASK             (0x1000U)
#define RXFIFO_AAMRCFG_AMSK0R12_SHIFT            (12U)
#define RXFIFO_AAMRCFG_AMSK0R12_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R12(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R12_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R12_MASK)

#define RXFIFO_AAMRCFG_AMSK0R13_MASK             (0x2000U)
#define RXFIFO_AAMRCFG_AMSK0R13_SHIFT            (13U)
#define RXFIFO_AAMRCFG_AMSK0R13_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R13(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R13_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R13_MASK)

#define RXFIFO_AAMRCFG_AMSK0R14_MASK             (0x4000U)
#define RXFIFO_AAMRCFG_AMSK0R14_SHIFT            (14U)
#define RXFIFO_AAMRCFG_AMSK0R14_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R14(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R14_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R14_MASK)

#define RXFIFO_AAMRCFG_AMSK0R15_MASK             (0x8000U)
#define RXFIFO_AAMRCFG_AMSK0R15_SHIFT            (15U)
#define RXFIFO_AAMRCFG_AMSK0R15_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R15(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R15_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R15_MASK)

#define RXFIFO_AAMRCFG_AMSK0R16_MASK             (0x10000U)
#define RXFIFO_AAMRCFG_AMSK0R16_SHIFT            (16U)
#define RXFIFO_AAMRCFG_AMSK0R16_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R16(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R16_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R16_MASK)

#define RXFIFO_AAMRCFG_AMSK0R17_MASK             (0x20000U)
#define RXFIFO_AAMRCFG_AMSK0R17_SHIFT            (17U)
#define RXFIFO_AAMRCFG_AMSK0R17_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R17(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R17_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R17_MASK)

#define RXFIFO_AAMRCFG_AMSK0R18_MASK             (0x40000U)
#define RXFIFO_AAMRCFG_AMSK0R18_SHIFT            (18U)
#define RXFIFO_AAMRCFG_AMSK0R18_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R18(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R18_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R18_MASK)

#define RXFIFO_AAMRCFG_AMSK0R19_MASK             (0x80000U)
#define RXFIFO_AAMRCFG_AMSK0R19_SHIFT            (19U)
#define RXFIFO_AAMRCFG_AMSK0R19_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R19(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R19_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R19_MASK)

#define RXFIFO_AAMRCFG_AMSK0R20_MASK             (0x100000U)
#define RXFIFO_AAMRCFG_AMSK0R20_SHIFT            (20U)
#define RXFIFO_AAMRCFG_AMSK0R20_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R20(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R20_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R20_MASK)

#define RXFIFO_AAMRCFG_AMSK0R21_MASK             (0x200000U)
#define RXFIFO_AAMRCFG_AMSK0R21_SHIFT            (21U)
#define RXFIFO_AAMRCFG_AMSK0R21_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R21(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R21_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R21_MASK)

#define RXFIFO_AAMRCFG_AMSK0R22_MASK             (0x400000U)
#define RXFIFO_AAMRCFG_AMSK0R22_SHIFT            (22U)
#define RXFIFO_AAMRCFG_AMSK0R22_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R22(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R22_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R22_MASK)

#define RXFIFO_AAMRCFG_AMSK0R23_MASK             (0x800000U)
#define RXFIFO_AAMRCFG_AMSK0R23_SHIFT            (23U)
#define RXFIFO_AAMRCFG_AMSK0R23_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R23(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R23_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R23_MASK)

#define RXFIFO_AAMRCFG_AMSK0R24_MASK             (0x1000000U)
#define RXFIFO_AAMRCFG_AMSK0R24_SHIFT            (24U)
#define RXFIFO_AAMRCFG_AMSK0R24_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R24(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R24_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R24_MASK)

#define RXFIFO_AAMRCFG_AMSK0R25_MASK             (0x2000000U)
#define RXFIFO_AAMRCFG_AMSK0R25_SHIFT            (25U)
#define RXFIFO_AAMRCFG_AMSK0R25_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R25(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R25_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R25_MASK)

#define RXFIFO_AAMRCFG_AMSK0R26_MASK             (0x4000000U)
#define RXFIFO_AAMRCFG_AMSK0R26_SHIFT            (26U)
#define RXFIFO_AAMRCFG_AMSK0R26_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R26(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R26_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R26_MASK)

#define RXFIFO_AAMRCFG_AMSK0R27_MASK             (0x8000000U)
#define RXFIFO_AAMRCFG_AMSK0R27_SHIFT            (27U)
#define RXFIFO_AAMRCFG_AMSK0R27_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R27(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R27_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R27_MASK)

#define RXFIFO_AAMRCFG_AMSK0R28_MASK             (0x10000000U)
#define RXFIFO_AAMRCFG_AMSK0R28_SHIFT            (28U)
#define RXFIFO_AAMRCFG_AMSK0R28_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R28(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R28_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R28_MASK)

#define RXFIFO_AAMRCFG_AMSK0R29_MASK             (0x20000000U)
#define RXFIFO_AAMRCFG_AMSK0R29_SHIFT            (29U)
#define RXFIFO_AAMRCFG_AMSK0R29_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R29(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R29_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R29_MASK)

#define RXFIFO_AAMRCFG_AMSK0R30_MASK             (0x40000000U)
#define RXFIFO_AAMRCFG_AMSK0R30_SHIFT            (30U)
#define RXFIFO_AAMRCFG_AMSK0R30_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R30(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R30_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R30_MASK)

#define RXFIFO_AAMRCFG_AMSK0R31_MASK             (0x80000000U)
#define RXFIFO_AAMRCFG_AMSK0R31_SHIFT            (31U)
#define RXFIFO_AAMRCFG_AMSK0R31_WIDTH            (1U)
#define RXFIFO_AAMRCFG_AMSK0R31(x)               (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAMRCFG_AMSK0R31_SHIFT)) & RXFIFO_AAMRCFG_AMSK0R31_MASK)
/*! @} */

/*! @name ACPTIDMR - ID Acceptance Mask or Range Configuration */
/*! @{ */

#define RXFIFO_ACPTIDMR_IDAMSK0R0_MASK           (0x1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R0_SHIFT          (0U)
#define RXFIFO_ACPTIDMR_IDAMSK0R0_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R0(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R0_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R0_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R1_MASK           (0x2U)
#define RXFIFO_ACPTIDMR_IDAMSK0R1_SHIFT          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R1_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R1(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R1_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R1_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R2_MASK           (0x4U)
#define RXFIFO_ACPTIDMR_IDAMSK0R2_SHIFT          (2U)
#define RXFIFO_ACPTIDMR_IDAMSK0R2_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R2(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R2_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R2_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R3_MASK           (0x8U)
#define RXFIFO_ACPTIDMR_IDAMSK0R3_SHIFT          (3U)
#define RXFIFO_ACPTIDMR_IDAMSK0R3_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R3(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R3_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R3_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R4_MASK           (0x10U)
#define RXFIFO_ACPTIDMR_IDAMSK0R4_SHIFT          (4U)
#define RXFIFO_ACPTIDMR_IDAMSK0R4_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R4(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R4_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R4_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R5_MASK           (0x20U)
#define RXFIFO_ACPTIDMR_IDAMSK0R5_SHIFT          (5U)
#define RXFIFO_ACPTIDMR_IDAMSK0R5_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R5(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R5_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R5_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R6_MASK           (0x40U)
#define RXFIFO_ACPTIDMR_IDAMSK0R6_SHIFT          (6U)
#define RXFIFO_ACPTIDMR_IDAMSK0R6_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R6(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R6_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R6_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R7_MASK           (0x80U)
#define RXFIFO_ACPTIDMR_IDAMSK0R7_SHIFT          (7U)
#define RXFIFO_ACPTIDMR_IDAMSK0R7_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R7(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R7_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R7_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R8_MASK           (0x100U)
#define RXFIFO_ACPTIDMR_IDAMSK0R8_SHIFT          (8U)
#define RXFIFO_ACPTIDMR_IDAMSK0R8_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R8(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R8_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R8_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R9_MASK           (0x200U)
#define RXFIFO_ACPTIDMR_IDAMSK0R9_SHIFT          (9U)
#define RXFIFO_ACPTIDMR_IDAMSK0R9_WIDTH          (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R9(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R9_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R9_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R10_MASK          (0x400U)
#define RXFIFO_ACPTIDMR_IDAMSK0R10_SHIFT         (10U)
#define RXFIFO_ACPTIDMR_IDAMSK0R10_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R10(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R10_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R10_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R11_MASK          (0x800U)
#define RXFIFO_ACPTIDMR_IDAMSK0R11_SHIFT         (11U)
#define RXFIFO_ACPTIDMR_IDAMSK0R11_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R11(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R11_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R11_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R12_MASK          (0x1000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R12_SHIFT         (12U)
#define RXFIFO_ACPTIDMR_IDAMSK0R12_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R12(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R12_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R12_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R13_MASK          (0x2000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R13_SHIFT         (13U)
#define RXFIFO_ACPTIDMR_IDAMSK0R13_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R13(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R13_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R13_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R14_MASK          (0x4000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R14_SHIFT         (14U)
#define RXFIFO_ACPTIDMR_IDAMSK0R14_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R14(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R14_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R14_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R15_MASK          (0x8000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R15_SHIFT         (15U)
#define RXFIFO_ACPTIDMR_IDAMSK0R15_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R15(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R15_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R15_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R16_MASK          (0x10000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R16_SHIFT         (16U)
#define RXFIFO_ACPTIDMR_IDAMSK0R16_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R16(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R16_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R16_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R17_MASK          (0x20000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R17_SHIFT         (17U)
#define RXFIFO_ACPTIDMR_IDAMSK0R17_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R17(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R17_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R17_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R18_MASK          (0x40000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R18_SHIFT         (18U)
#define RXFIFO_ACPTIDMR_IDAMSK0R18_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R18(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R18_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R18_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R19_MASK          (0x80000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R19_SHIFT         (19U)
#define RXFIFO_ACPTIDMR_IDAMSK0R19_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R19(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R19_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R19_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R20_MASK          (0x100000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R20_SHIFT         (20U)
#define RXFIFO_ACPTIDMR_IDAMSK0R20_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R20(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R20_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R20_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R21_MASK          (0x200000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R21_SHIFT         (21U)
#define RXFIFO_ACPTIDMR_IDAMSK0R21_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R21(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R21_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R21_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R22_MASK          (0x400000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R22_SHIFT         (22U)
#define RXFIFO_ACPTIDMR_IDAMSK0R22_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R22(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R22_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R22_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R23_MASK          (0x800000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R23_SHIFT         (23U)
#define RXFIFO_ACPTIDMR_IDAMSK0R23_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R23(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R23_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R23_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R24_MASK          (0x1000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R24_SHIFT         (24U)
#define RXFIFO_ACPTIDMR_IDAMSK0R24_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R24(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R24_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R24_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R25_MASK          (0x2000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R25_SHIFT         (25U)
#define RXFIFO_ACPTIDMR_IDAMSK0R25_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R25(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R25_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R25_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R26_MASK          (0x4000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R26_SHIFT         (26U)
#define RXFIFO_ACPTIDMR_IDAMSK0R26_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R26(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R26_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R26_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R27_MASK          (0x8000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R27_SHIFT         (27U)
#define RXFIFO_ACPTIDMR_IDAMSK0R27_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R27(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R27_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R27_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R28_MASK          (0x10000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R28_SHIFT         (28U)
#define RXFIFO_ACPTIDMR_IDAMSK0R28_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R28(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R28_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R28_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R29_MASK          (0x20000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R29_SHIFT         (29U)
#define RXFIFO_ACPTIDMR_IDAMSK0R29_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R29(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R29_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R29_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R30_MASK          (0x40000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R30_SHIFT         (30U)
#define RXFIFO_ACPTIDMR_IDAMSK0R30_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R30(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R30_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R30_MASK)

#define RXFIFO_ACPTIDMR_IDAMSK0R31_MASK          (0x80000000U)
#define RXFIFO_ACPTIDMR_IDAMSK0R31_SHIFT         (31U)
#define RXFIFO_ACPTIDMR_IDAMSK0R31_WIDTH         (1U)
#define RXFIFO_ACPTIDMR_IDAMSK0R31(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_ACPTIDMR_IDAMSK0R31_SHIFT)) & RXFIFO_ACPTIDMR_IDAMSK0R31_MASK)
/*! @} */

/*! @name VAFLT - VCAN Acceptance Filter */
/*! @{ */

#define RXFIFO_VAFLT_VCANa_L_MASK                (0xFFU)
#define RXFIFO_VAFLT_VCANa_L_SHIFT               (0U)
#define RXFIFO_VAFLT_VCANa_L_WIDTH               (8U)
#define RXFIFO_VAFLT_VCANa_L(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAFLT_VCANa_L_SHIFT)) & RXFIFO_VAFLT_VCANa_L_MASK)

#define RXFIFO_VAFLT_VCANa_H_MASK                (0xFF00U)
#define RXFIFO_VAFLT_VCANa_H_SHIFT               (8U)
#define RXFIFO_VAFLT_VCANa_H_WIDTH               (8U)
#define RXFIFO_VAFLT_VCANa_H(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAFLT_VCANa_H_SHIFT)) & RXFIFO_VAFLT_VCANa_H_MASK)

#define RXFIFO_VAFLT_VCANb_L_MASK                (0xFF0000U)
#define RXFIFO_VAFLT_VCANb_L_SHIFT               (16U)
#define RXFIFO_VAFLT_VCANb_L_WIDTH               (8U)
#define RXFIFO_VAFLT_VCANb_L(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAFLT_VCANb_L_SHIFT)) & RXFIFO_VAFLT_VCANb_L_MASK)

#define RXFIFO_VAFLT_VCANb_H_MASK                (0xFF000000U)
#define RXFIFO_VAFLT_VCANb_H_SHIFT               (24U)
#define RXFIFO_VAFLT_VCANb_H_WIDTH               (8U)
#define RXFIFO_VAFLT_VCANb_H(x)                  (((uint32_t)(((uint32_t)(x)) << RXFIFO_VAFLT_VCANb_H_SHIFT)) & RXFIFO_VAFLT_VCANb_H_MASK)
/*! @} */

/*! @name SAFLT - SDU Acceptance Filter */
/*! @{ */

#define RXFIFO_SAFLT_SDUa_L_MASK                 (0xFFU)
#define RXFIFO_SAFLT_SDUa_L_SHIFT                (0U)
#define RXFIFO_SAFLT_SDUa_L_WIDTH                (8U)
#define RXFIFO_SAFLT_SDUa_L(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAFLT_SDUa_L_SHIFT)) & RXFIFO_SAFLT_SDUa_L_MASK)

#define RXFIFO_SAFLT_SDUa_H_MASK                 (0xFF00U)
#define RXFIFO_SAFLT_SDUa_H_SHIFT                (8U)
#define RXFIFO_SAFLT_SDUa_H_WIDTH                (8U)
#define RXFIFO_SAFLT_SDUa_H(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAFLT_SDUa_H_SHIFT)) & RXFIFO_SAFLT_SDUa_H_MASK)

#define RXFIFO_SAFLT_SDUb_L_MASK                 (0xFF0000U)
#define RXFIFO_SAFLT_SDUb_L_SHIFT                (16U)
#define RXFIFO_SAFLT_SDUb_L_WIDTH                (8U)
#define RXFIFO_SAFLT_SDUb_L(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAFLT_SDUb_L_SHIFT)) & RXFIFO_SAFLT_SDUb_L_MASK)

#define RXFIFO_SAFLT_SDUb_H_MASK                 (0xFF000000U)
#define RXFIFO_SAFLT_SDUb_H_SHIFT                (24U)
#define RXFIFO_SAFLT_SDUb_H_WIDTH                (8U)
#define RXFIFO_SAFLT_SDUb_H(x)                   (((uint32_t)(((uint32_t)(x)) << RXFIFO_SAFLT_SDUb_H_SHIFT)) & RXFIFO_SAFLT_SDUb_H_MASK)
/*! @} */

/*! @name AAFLTL - ADDR Acceptance Filter Element Low */
/*! @{ */

#define RXFIFO_AAFLTL_ADDRn_L_MASK               (0xFFFFFFFFU)
#define RXFIFO_AAFLTL_ADDRn_L_SHIFT              (0U)
#define RXFIFO_AAFLTL_ADDRn_L_WIDTH              (32U)
#define RXFIFO_AAFLTL_ADDRn_L(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAFLTL_ADDRn_L_SHIFT)) & RXFIFO_AAFLTL_ADDRn_L_MASK)
/*! @} */

/*! @name AAFLTH - ADDR Acceptance Filter Element High */
/*! @{ */

#define RXFIFO_AAFLTH_ADDRn_H_MASK               (0xFFFFFFFFU)
#define RXFIFO_AAFLTH_ADDRn_H_SHIFT              (0U)
#define RXFIFO_AAFLTH_ADDRn_H_WIDTH              (32U)
#define RXFIFO_AAFLTH_ADDRn_H(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_AAFLTH_ADDRn_H_SHIFT)) & RXFIFO_AAFLTH_ADDRn_H_MASK)
/*! @} */

/*! @name IDAFLTL - ID Acceptance Filter Element Low */
/*! @{ */

#define RXFIFO_IDAFLTL_IDEXTENDn_L_MASK          (0x3FFFFU)
#define RXFIFO_IDAFLTL_IDEXTENDn_L_SHIFT         (0U)
#define RXFIFO_IDAFLTL_IDEXTENDn_L_WIDTH         (18U)
#define RXFIFO_IDAFLTL_IDEXTENDn_L(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTL_IDEXTENDn_L_SHIFT)) & RXFIFO_IDAFLTL_IDEXTENDn_L_MASK)

#define RXFIFO_IDAFLTL_IDSTANDn_L_MASK           (0x1FFC0000U)
#define RXFIFO_IDAFLTL_IDSTANDn_L_SHIFT          (18U)
#define RXFIFO_IDAFLTL_IDSTANDn_L_WIDTH          (11U)
#define RXFIFO_IDAFLTL_IDSTANDn_L(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTL_IDSTANDn_L_SHIFT)) & RXFIFO_IDAFLTL_IDSTANDn_L_MASK)

#define RXFIFO_IDAFLTL_IDEn_L_MASK               (0x40000000U)
#define RXFIFO_IDAFLTL_IDEn_L_SHIFT              (30U)
#define RXFIFO_IDAFLTL_IDEn_L_WIDTH              (1U)
#define RXFIFO_IDAFLTL_IDEn_L(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTL_IDEn_L_SHIFT)) & RXFIFO_IDAFLTL_IDEn_L_MASK)

#define RXFIFO_IDAFLTL_RTRn_L_MASK               (0x80000000U)
#define RXFIFO_IDAFLTL_RTRn_L_SHIFT              (31U)
#define RXFIFO_IDAFLTL_RTRn_L_WIDTH              (1U)
#define RXFIFO_IDAFLTL_RTRn_L(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTL_RTRn_L_SHIFT)) & RXFIFO_IDAFLTL_RTRn_L_MASK)
/*! @} */

/*! @name IDAFLTH - ID Acceptance Filter Element High */
/*! @{ */

#define RXFIFO_IDAFLTH_IDEXTENDn_H_MASK          (0x3FFFFU)
#define RXFIFO_IDAFLTH_IDEXTENDn_H_SHIFT         (0U)
#define RXFIFO_IDAFLTH_IDEXTENDn_H_WIDTH         (18U)
#define RXFIFO_IDAFLTH_IDEXTENDn_H(x)            (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTH_IDEXTENDn_H_SHIFT)) & RXFIFO_IDAFLTH_IDEXTENDn_H_MASK)

#define RXFIFO_IDAFLTH_IDSTANDn_H_MASK           (0x1FFC0000U)
#define RXFIFO_IDAFLTH_IDSTANDn_H_SHIFT          (18U)
#define RXFIFO_IDAFLTH_IDSTANDn_H_WIDTH          (11U)
#define RXFIFO_IDAFLTH_IDSTANDn_H(x)             (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTH_IDSTANDn_H_SHIFT)) & RXFIFO_IDAFLTH_IDSTANDn_H_MASK)

#define RXFIFO_IDAFLTH_IDEn_H_MASK               (0x40000000U)
#define RXFIFO_IDAFLTH_IDEn_H_SHIFT              (30U)
#define RXFIFO_IDAFLTH_IDEn_H_WIDTH              (1U)
#define RXFIFO_IDAFLTH_IDEn_H(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTH_IDEn_H_SHIFT)) & RXFIFO_IDAFLTH_IDEn_H_MASK)

#define RXFIFO_IDAFLTH_RTRn_H_MASK               (0x80000000U)
#define RXFIFO_IDAFLTH_RTRn_H_SHIFT              (31U)
#define RXFIFO_IDAFLTH_RTRn_H_WIDTH              (1U)
#define RXFIFO_IDAFLTH_RTRn_H(x)                 (((uint32_t)(((uint32_t)(x)) << RXFIFO_IDAFLTH_RTRn_H_SHIFT)) & RXFIFO_IDAFLTH_RTRn_H_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group RXFIFO_Register_Masks */

/*!
 * @}
 */ /* end of group RXFIFO_Peripheral_Access_Layer */

#endif  /* #if !defined(S32Z27_RXFIFO_H_) */
