/*!
*******************************************************************************
**
** \file      gh_spi0.h
**
** \brief     Master interface and supports up to 6 external SPI slave devices(0,1,4,5,6,7). SSI/SPI.
**
**            Copyright:   2012 - 2013 (C) GoKe Microelectronics ShangHai Branch
**
** \attention THIS SAMPLE CODE IS PROVIDED AS IS. GOKE MICROELECTRONICS
**            ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR
**            OMMISSIONS.
**
** \note      Do not modify this file as it is generated automatically.
**
******************************************************************************/
#ifndef _GH_SPI0_H
#define _GH_SPI0_H

#ifdef __LINUX__
#include "reg4linux.h"
#else
#define FIO_ADDRESS(block,address) (address)
#define FIO_MOFFSET(block,moffset) (moffset)
#endif

#ifndef __LINUX__
#include "gtypes.h" /* global type definitions */
#include "gh_lib_cfg.h" /* configuration */
#endif

#define GH_SPI0_ENABLE_DEBUG_PRINT   0
#ifdef __LINUX__
#define GH_SPI0_DEBUG_PRINT_FUNCTION printk
#else
#define GH_SPI0_DEBUG_PRINT_FUNCTION printf
#endif
#ifndef __LINUX__
#if GH_SPI0_ENABLE_DEBUG_PRINT
#include <stdio.h>
#endif
#endif

/* check configuration */
#ifndef GH_INLINE_LEVEL
  #error "GH_INLINE_LEVEL is not defined!"
#endif
#if GH_INLINE_LEVEL > 2
  #error "GH_INLINE_LEVEL must be set 0, 1 or 2!"
#endif
#ifndef GH_INLINE
  #error "GH_INLINE is not defined!"
#endif

/* disable inlining for debugging */
#ifdef DEBUG
  #undef GH_INLINE_LEVEL
  #define GH_INLINE_LEVEL 0
#endif

/*----------------------------------------------------------------------------*/
/* registers                                                                  */
/*----------------------------------------------------------------------------*/
#define REG_SPI0_CTRLR0                                     FIO_ADDRESS(SPI0,0xA0008000) /* read/write */
#define REG_SPI0_CTRLR1                                     FIO_ADDRESS(SPI0,0xA0008004) /* read/write */
#define REG_SPI0_SSIENR                                     FIO_ADDRESS(SPI0,0xA0008008) /* read/write */
#define REG_SPI0_SER                                        FIO_ADDRESS(SPI0,0xA0008010) /* read/write */
#define REG_SPI0_BAUDR                                      FIO_ADDRESS(SPI0,0xA0008014) /* read/write */
#define REG_SPI0_TXFTLR                                     FIO_ADDRESS(SPI0,0xA0008018) /* read/write */
#define REG_SPI0_RXFTLR                                     FIO_ADDRESS(SPI0,0xA000801C) /* read/write */
#define REG_SPI0_TXFLR                                      FIO_ADDRESS(SPI0,0xA0008020) /* read/write */
#define REG_SPI0_RXFLR                                      FIO_ADDRESS(SPI0,0xA0008024) /* read/write */
#define REG_SPI0_SR                                         FIO_ADDRESS(SPI0,0xA0008028) /* read */
#define REG_SPI0_IMR                                        FIO_ADDRESS(SPI0,0xA000802C) /* read/write */
#define REG_SPI0_ISR                                        FIO_ADDRESS(SPI0,0xA0008030) /* read */
#define REG_SPI0_RISR                                       FIO_ADDRESS(SPI0,0xA0008034) /* read */
#define REG_SPI0_TXOICR                                     FIO_ADDRESS(SPI0,0xA0008038) /* read */
#define REG_SPI0_RXOICR                                     FIO_ADDRESS(SPI0,0xA000803C) /* read */
#define REG_SPI0_RXUICR                                     FIO_ADDRESS(SPI0,0xA0008040) /* read */
#define REG_SPI0_MSTICR                                     FIO_ADDRESS(SPI0,0xA0008044) /* read */
#define REG_SPI0_ICR                                        FIO_ADDRESS(SPI0,0xA0008048) /* read */
#define REG_SPI0_IDR                                        FIO_ADDRESS(SPI0,0xA0008058) /* read */
#define REG_SPI0_DR                                         FIO_ADDRESS(SPI0,0xA0008060) /* read */
#define REG_SPI0_DW                                         FIO_ADDRESS(SPI0,0xA0008060) /* write */

/*----------------------------------------------------------------------------*/
/* bit group structures                                                       */
/*----------------------------------------------------------------------------*/
typedef union { /* SPI0_CTRLR0 */
    U32 all;
    struct {
        U32 dfs                         : 4;
        U32 frf                         : 2;
        U32 scph                        : 1;
        U32 scpol                       : 1;
        U32 tmod                        : 2;
        U32 slv_oe                      : 1;
        U32 srl                         : 1;
        U32 cfs                         : 4;
        U32                             : 16;
    } bitc;
} GH_SPI0_CTRLR0_S;

typedef union { /* SPI0_CTRLR1 */
    U32 all;
    struct {
        U32 ndf                         : 16;
        U32                             : 16;
    } bitc;
} GH_SPI0_CTRLR1_S;

typedef union { /* SPI0_SSIENR */
    U32 all;
    struct {
        U32 ssi_enb                     : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_SSIENR_S;

typedef union { /* SPI0_SER */
    U32 all;
    struct {
        U32 ser_l                       : 2;
        U32                             : 2;
        U32 ser_h                       : 4;
        U32                             : 24;
    } bitc;
} GH_SPI0_SER_S;

typedef union { /* SPI0_BAUDR */
    U32 all;
    struct {
        U32 sckdv                       : 16;
        U32                             : 16;
    } bitc;
} GH_SPI0_BAUDR_S;

typedef union { /* SPI0_TXFTLR */
    U32 all;
    struct {
        U32 tft                         : 4;
        U32                             : 28;
    } bitc;
} GH_SPI0_TXFTLR_S;

typedef union { /* SPI0_RXFTLR */
    U32 all;
    struct {
        U32 rft                         : 4;
        U32                             : 28;
    } bitc;
} GH_SPI0_RXFTLR_S;

typedef union { /* SPI0_TXFLR */
    U32 all;
    struct {
        U32 txtfl                       : 5;
        U32                             : 27;
    } bitc;
} GH_SPI0_TXFLR_S;

typedef union { /* SPI0_RXFLR */
    U32 all;
    struct {
        U32 rxtfl                       : 5;
        U32                             : 27;
    } bitc;
} GH_SPI0_RXFLR_S;

typedef union { /* SPI0_SR */
    U32 all;
    struct {
        U32 busy                        : 1;
        U32 tfnf                        : 1;
        U32 tfe                         : 1;
        U32 rfne                        : 1;
        U32 rff                         : 1;
        U32 txe                         : 1;
        U32 dcol                        : 1;
        U32                             : 25;
    } bitc;
} GH_SPI0_SR_S;

typedef union { /* SPI0_IMR */
    U32 all;
    struct {
        U32 txeim                       : 1;
        U32 txoim                       : 1;
        U32 rxuim                       : 1;
        U32 rxoim                       : 1;
        U32 rxfim                       : 1;
        U32 mstim                       : 1;
        U32                             : 26;
    } bitc;
} GH_SPI0_IMR_S;

typedef union { /* SPI0_ISR */
    U32 all;
    struct {
        U32 txeis                       : 1;
        U32 txois                       : 1;
        U32 rxuis                       : 1;
        U32 rxois                       : 1;
        U32 rxfis                       : 1;
        U32 mstis                       : 1;
        U32                             : 26;
    } bitc;
} GH_SPI0_ISR_S;

typedef union { /* SPI0_RISR */
    U32 all;
    struct {
        U32 txeir                       : 1;
        U32 txoir                       : 1;
        U32 rxuir                       : 1;
        U32 rxoir                       : 1;
        U32 rxfir                       : 1;
        U32 mstir                       : 1;
        U32                             : 26;
    } bitc;
} GH_SPI0_RISR_S;

typedef union { /* SPI0_TXOICR */
    U32 all;
    struct {
        U32 txoicr                      : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_TXOICR_S;

typedef union { /* SPI0_RXOICR */
    U32 all;
    struct {
        U32 rxoicr                      : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_RXOICR_S;

typedef union { /* SPI0_RXUICR */
    U32 all;
    struct {
        U32 rxuicr                      : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_RXUICR_S;

typedef union { /* SPI0_MSTICR */
    U32 all;
    struct {
        U32 msticr                      : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_MSTICR_S;

typedef union { /* SPI0_ICR */
    U32 all;
    struct {
        U32 icr                         : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_ICR_S;

typedef union { /* SPI0_IDR */
    U32 all;
    struct {
        U32 id                          : 1;
        U32                             : 31;
    } bitc;
} GH_SPI0_IDR_S;

typedef union { /* SPI0_DR */
    U32 all;
    struct {
        U32 dr                          : 16;
        U32                             : 16;
    } bitc;
} GH_SPI0_DR_S;

typedef union { /* SPI0_DW */
    U32 all;
    struct {
        U32 dw                          : 16;
        U32                             : 16;
    } bitc;
} GH_SPI0_DW_S;


/*----------------------------------------------------------------------------*/
/* mirror variables                                                           */
/*----------------------------------------------------------------------------*/
extern GH_SPI0_DW_S                            m_spi0_dw;

#ifdef __cplusplus
extern "C" {
#endif

/*----------------------------------------------------------------------------*/
/* register SPI0_CTRLR0 (read/write)                                          */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0(U32 data);
/*! \brief Reads the register 'SPI0_CTRLR0'. */
U32  GH_SPI0_get_CTRLR0(void);
/*! \brief Writes the bit group 'DFS' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_DFS(U8 data);
/*! \brief Reads the bit group 'DFS' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_DFS(void);
/*! \brief Writes the bit group 'FRF' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_FRF(U8 data);
/*! \brief Reads the bit group 'FRF' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_FRF(void);
/*! \brief Writes the bit group 'SCPH' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_SCPH(U8 data);
/*! \brief Reads the bit group 'SCPH' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_SCPH(void);
/*! \brief Writes the bit group 'SCPOL' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_SCPOL(U8 data);
/*! \brief Reads the bit group 'SCPOL' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_SCPOL(void);
/*! \brief Writes the bit group 'TMOD' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_TMOD(U8 data);
/*! \brief Reads the bit group 'TMOD' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_TMOD(void);
/*! \brief Writes the bit group 'SLV_OE' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_SLV_OE(U8 data);
/*! \brief Reads the bit group 'SLV_OE' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_SLV_OE(void);
/*! \brief Writes the bit group 'SRL' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_SRL(U8 data);
/*! \brief Reads the bit group 'SRL' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_SRL(void);
/*! \brief Writes the bit group 'CFS' of register 'SPI0_CTRLR0'. */
void GH_SPI0_set_CTRLR0_CFS(U8 data);
/*! \brief Reads the bit group 'CFS' of register 'SPI0_CTRLR0'. */
U8   GH_SPI0_get_CTRLR0_CFS(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_CTRLR0(U32 data)
{
    *(volatile U32 *)REG_SPI0_CTRLR0 = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_CTRLR0(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_CTRLR0_DFS(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.dfs = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_DFS] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_DFS(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_DFS] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.dfs;
}
GH_INLINE void GH_SPI0_set_CTRLR0_FRF(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.frf = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_FRF] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_FRF(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_FRF] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.frf;
}
GH_INLINE void GH_SPI0_set_CTRLR0_SCPH(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.scph = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_SCPH] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_SCPH(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_SCPH] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.scph;
}
GH_INLINE void GH_SPI0_set_CTRLR0_SCPOL(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.scpol = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_SCPOL] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_SCPOL(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_SCPOL] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.scpol;
}
GH_INLINE void GH_SPI0_set_CTRLR0_TMOD(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.tmod = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_TMOD] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_TMOD(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_TMOD] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.tmod;
}
GH_INLINE void GH_SPI0_set_CTRLR0_SLV_OE(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.slv_oe = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_SLV_OE] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_SLV_OE(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_SLV_OE] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.slv_oe;
}
GH_INLINE void GH_SPI0_set_CTRLR0_SRL(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.srl = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_SRL] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_SRL(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_SRL] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.srl;
}
GH_INLINE void GH_SPI0_set_CTRLR0_CFS(U8 data)
{
    GH_SPI0_CTRLR0_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR0;
    d.bitc.cfs = data;
    *(volatile U32 *)REG_SPI0_CTRLR0 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR0_CFS] <-- 0x%08x\n",
                        REG_SPI0_CTRLR0,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_CTRLR0_CFS(void)
{
    GH_SPI0_CTRLR0_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR0);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR0_CFS] --> 0x%08x\n",
                        REG_SPI0_CTRLR0,value);
    #endif
    return tmp_value.bitc.cfs;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_CTRLR1 (read/write)                                          */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_CTRLR1'. */
void GH_SPI0_set_CTRLR1(U32 data);
/*! \brief Reads the register 'SPI0_CTRLR1'. */
U32  GH_SPI0_get_CTRLR1(void);
/*! \brief Writes the bit group 'NDF' of register 'SPI0_CTRLR1'. */
void GH_SPI0_set_CTRLR1_NDF(U16 data);
/*! \brief Reads the bit group 'NDF' of register 'SPI0_CTRLR1'. */
U16  GH_SPI0_get_CTRLR1_NDF(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_CTRLR1(U32 data)
{
    *(volatile U32 *)REG_SPI0_CTRLR1 = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR1] <-- 0x%08x\n",
                        REG_SPI0_CTRLR1,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_CTRLR1(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR1);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR1] --> 0x%08x\n",
                        REG_SPI0_CTRLR1,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_CTRLR1_NDF(U16 data)
{
    GH_SPI0_CTRLR1_S d;
    d.all = *(volatile U32 *)REG_SPI0_CTRLR1;
    d.bitc.ndf = data;
    *(volatile U32 *)REG_SPI0_CTRLR1 = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_CTRLR1_NDF] <-- 0x%08x\n",
                        REG_SPI0_CTRLR1,d.all,d.all);
    #endif
}
GH_INLINE U16  GH_SPI0_get_CTRLR1_NDF(void)
{
    GH_SPI0_CTRLR1_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_CTRLR1);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_CTRLR1_NDF] --> 0x%08x\n",
                        REG_SPI0_CTRLR1,value);
    #endif
    return tmp_value.bitc.ndf;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_SSIENR (read/write)                                          */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_SSIENR'. */
void GH_SPI0_set_SSIENR(U32 data);
/*! \brief Reads the register 'SPI0_SSIENR'. */
U32  GH_SPI0_get_SSIENR(void);
/*! \brief Writes the bit group 'ssi_enb' of register 'SPI0_SSIENR'. */
void GH_SPI0_set_SSIENR_ssi_enb(U8 data);
/*! \brief Reads the bit group 'ssi_enb' of register 'SPI0_SSIENR'. */
U8   GH_SPI0_get_SSIENR_ssi_enb(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_SSIENR(U32 data)
{
    *(volatile U32 *)REG_SPI0_SSIENR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_SSIENR] <-- 0x%08x\n",
                        REG_SPI0_SSIENR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_SSIENR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_SSIENR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SSIENR] --> 0x%08x\n",
                        REG_SPI0_SSIENR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_SSIENR_ssi_enb(U8 data)
{
    GH_SPI0_SSIENR_S d;
    d.all = *(volatile U32 *)REG_SPI0_SSIENR;
    d.bitc.ssi_enb = data;
    *(volatile U32 *)REG_SPI0_SSIENR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_SSIENR_ssi_enb] <-- 0x%08x\n",
                        REG_SPI0_SSIENR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_SSIENR_ssi_enb(void)
{
    GH_SPI0_SSIENR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SSIENR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SSIENR_ssi_enb] --> 0x%08x\n",
                        REG_SPI0_SSIENR,value);
    #endif
    return tmp_value.bitc.ssi_enb;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_SER (read/write)                                             */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_SER'. */
void GH_SPI0_set_SER(U32 data);
/*! \brief Reads the register 'SPI0_SER'. */
U32  GH_SPI0_get_SER(void);
/*! \brief Writes the bit group 'SER_L' of register 'SPI0_SER'. */
void GH_SPI0_set_SER_SER_L(U8 data);
/*! \brief Reads the bit group 'SER_L' of register 'SPI0_SER'. */
U8   GH_SPI0_get_SER_SER_L(void);
/*! \brief Writes the bit group 'SER_H' of register 'SPI0_SER'. */
void GH_SPI0_set_SER_SER_H(U8 data);
/*! \brief Reads the bit group 'SER_H' of register 'SPI0_SER'. */
U8   GH_SPI0_get_SER_SER_H(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_SER(U32 data)
{
    *(volatile U32 *)REG_SPI0_SER = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_SER] <-- 0x%08x\n",
                        REG_SPI0_SER,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_SER(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_SER);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SER] --> 0x%08x\n",
                        REG_SPI0_SER,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_SER_SER_L(U8 data)
{
    GH_SPI0_SER_S d;
    d.all = *(volatile U32 *)REG_SPI0_SER;
    d.bitc.ser_l = data;
    *(volatile U32 *)REG_SPI0_SER = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_SER_SER_L] <-- 0x%08x\n",
                        REG_SPI0_SER,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_SER_SER_L(void)
{
    GH_SPI0_SER_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SER);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SER_SER_L] --> 0x%08x\n",
                        REG_SPI0_SER,value);
    #endif
    return tmp_value.bitc.ser_l;
}
GH_INLINE void GH_SPI0_set_SER_SER_H(U8 data)
{
    GH_SPI0_SER_S d;
    d.all = *(volatile U32 *)REG_SPI0_SER;
    d.bitc.ser_h = data;
    *(volatile U32 *)REG_SPI0_SER = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_SER_SER_H] <-- 0x%08x\n",
                        REG_SPI0_SER,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_SER_SER_H(void)
{
    GH_SPI0_SER_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SER);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SER_SER_H] --> 0x%08x\n",
                        REG_SPI0_SER,value);
    #endif
    return tmp_value.bitc.ser_h;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_BAUDR (read/write)                                           */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_BAUDR'. */
void GH_SPI0_set_BAUDR(U32 data);
/*! \brief Reads the register 'SPI0_BAUDR'. */
U32  GH_SPI0_get_BAUDR(void);
/*! \brief Writes the bit group 'SCKDV' of register 'SPI0_BAUDR'. */
void GH_SPI0_set_BAUDR_SCKDV(U16 data);
/*! \brief Reads the bit group 'SCKDV' of register 'SPI0_BAUDR'. */
U16  GH_SPI0_get_BAUDR_SCKDV(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_BAUDR(U32 data)
{
    *(volatile U32 *)REG_SPI0_BAUDR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_BAUDR] <-- 0x%08x\n",
                        REG_SPI0_BAUDR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_BAUDR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_BAUDR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_BAUDR] --> 0x%08x\n",
                        REG_SPI0_BAUDR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_BAUDR_SCKDV(U16 data)
{
    GH_SPI0_BAUDR_S d;
    d.all = *(volatile U32 *)REG_SPI0_BAUDR;
    d.bitc.sckdv = data;
    *(volatile U32 *)REG_SPI0_BAUDR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_BAUDR_SCKDV] <-- 0x%08x\n",
                        REG_SPI0_BAUDR,d.all,d.all);
    #endif
}
GH_INLINE U16  GH_SPI0_get_BAUDR_SCKDV(void)
{
    GH_SPI0_BAUDR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_BAUDR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_BAUDR_SCKDV] --> 0x%08x\n",
                        REG_SPI0_BAUDR,value);
    #endif
    return tmp_value.bitc.sckdv;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_TXFTLR (read/write)                                          */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_TXFTLR'. */
void GH_SPI0_set_TXFTLR(U32 data);
/*! \brief Reads the register 'SPI0_TXFTLR'. */
U32  GH_SPI0_get_TXFTLR(void);
/*! \brief Writes the bit group 'TFT' of register 'SPI0_TXFTLR'. */
void GH_SPI0_set_TXFTLR_TFT(U8 data);
/*! \brief Reads the bit group 'TFT' of register 'SPI0_TXFTLR'. */
U8   GH_SPI0_get_TXFTLR_TFT(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_TXFTLR(U32 data)
{
    *(volatile U32 *)REG_SPI0_TXFTLR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_TXFTLR] <-- 0x%08x\n",
                        REG_SPI0_TXFTLR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_TXFTLR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_TXFTLR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_TXFTLR] --> 0x%08x\n",
                        REG_SPI0_TXFTLR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_TXFTLR_TFT(U8 data)
{
    GH_SPI0_TXFTLR_S d;
    d.all = *(volatile U32 *)REG_SPI0_TXFTLR;
    d.bitc.tft = data;
    *(volatile U32 *)REG_SPI0_TXFTLR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_TXFTLR_TFT] <-- 0x%08x\n",
                        REG_SPI0_TXFTLR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_TXFTLR_TFT(void)
{
    GH_SPI0_TXFTLR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_TXFTLR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_TXFTLR_TFT] --> 0x%08x\n",
                        REG_SPI0_TXFTLR,value);
    #endif
    return tmp_value.bitc.tft;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_RXFTLR (read/write)                                          */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_RXFTLR'. */
void GH_SPI0_set_RXFTLR(U32 data);
/*! \brief Reads the register 'SPI0_RXFTLR'. */
U32  GH_SPI0_get_RXFTLR(void);
/*! \brief Writes the bit group 'RFT' of register 'SPI0_RXFTLR'. */
void GH_SPI0_set_RXFTLR_RFT(U8 data);
/*! \brief Reads the bit group 'RFT' of register 'SPI0_RXFTLR'. */
U8   GH_SPI0_get_RXFTLR_RFT(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_RXFTLR(U32 data)
{
    *(volatile U32 *)REG_SPI0_RXFTLR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_RXFTLR] <-- 0x%08x\n",
                        REG_SPI0_RXFTLR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_RXFTLR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_RXFTLR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXFTLR] --> 0x%08x\n",
                        REG_SPI0_RXFTLR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_RXFTLR_RFT(U8 data)
{
    GH_SPI0_RXFTLR_S d;
    d.all = *(volatile U32 *)REG_SPI0_RXFTLR;
    d.bitc.rft = data;
    *(volatile U32 *)REG_SPI0_RXFTLR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_RXFTLR_RFT] <-- 0x%08x\n",
                        REG_SPI0_RXFTLR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_RXFTLR_RFT(void)
{
    GH_SPI0_RXFTLR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RXFTLR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXFTLR_RFT] --> 0x%08x\n",
                        REG_SPI0_RXFTLR,value);
    #endif
    return tmp_value.bitc.rft;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_TXFLR (read/write)                                           */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_TXFLR'. */
void GH_SPI0_set_TXFLR(U32 data);
/*! \brief Reads the register 'SPI0_TXFLR'. */
U32  GH_SPI0_get_TXFLR(void);
/*! \brief Writes the bit group 'TXTFL' of register 'SPI0_TXFLR'. */
void GH_SPI0_set_TXFLR_TXTFL(U8 data);
/*! \brief Reads the bit group 'TXTFL' of register 'SPI0_TXFLR'. */
U8   GH_SPI0_get_TXFLR_TXTFL(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_TXFLR(U32 data)
{
    *(volatile U32 *)REG_SPI0_TXFLR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_TXFLR] <-- 0x%08x\n",
                        REG_SPI0_TXFLR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_TXFLR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_TXFLR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_TXFLR] --> 0x%08x\n",
                        REG_SPI0_TXFLR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_TXFLR_TXTFL(U8 data)
{
    GH_SPI0_TXFLR_S d;
    d.all = *(volatile U32 *)REG_SPI0_TXFLR;
    d.bitc.txtfl = data;
    *(volatile U32 *)REG_SPI0_TXFLR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_TXFLR_TXTFL] <-- 0x%08x\n",
                        REG_SPI0_TXFLR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_TXFLR_TXTFL(void)
{
    GH_SPI0_TXFLR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_TXFLR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_TXFLR_TXTFL] --> 0x%08x\n",
                        REG_SPI0_TXFLR,value);
    #endif
    return tmp_value.bitc.txtfl;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_RXFLR (read/write)                                           */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_RXFLR'. */
void GH_SPI0_set_RXFLR(U32 data);
/*! \brief Reads the register 'SPI0_RXFLR'. */
U32  GH_SPI0_get_RXFLR(void);
/*! \brief Writes the bit group 'RXTFL' of register 'SPI0_RXFLR'. */
void GH_SPI0_set_RXFLR_RXTFL(U8 data);
/*! \brief Reads the bit group 'RXTFL' of register 'SPI0_RXFLR'. */
U8   GH_SPI0_get_RXFLR_RXTFL(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_RXFLR(U32 data)
{
    *(volatile U32 *)REG_SPI0_RXFLR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_RXFLR] <-- 0x%08x\n",
                        REG_SPI0_RXFLR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_RXFLR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_RXFLR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXFLR] --> 0x%08x\n",
                        REG_SPI0_RXFLR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_RXFLR_RXTFL(U8 data)
{
    GH_SPI0_RXFLR_S d;
    d.all = *(volatile U32 *)REG_SPI0_RXFLR;
    d.bitc.rxtfl = data;
    *(volatile U32 *)REG_SPI0_RXFLR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_RXFLR_RXTFL] <-- 0x%08x\n",
                        REG_SPI0_RXFLR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_RXFLR_RXTFL(void)
{
    GH_SPI0_RXFLR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RXFLR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXFLR_RXTFL] --> 0x%08x\n",
                        REG_SPI0_RXFLR,value);
    #endif
    return tmp_value.bitc.rxtfl;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_SR (read)                                                    */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_SR'. */
U32  GH_SPI0_get_SR(void);
/*! \brief Reads the bit group 'BUSY' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_BUSY(void);
/*! \brief Reads the bit group 'TFNF' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_TFNF(void);
/*! \brief Reads the bit group 'TFE' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_TFE(void);
/*! \brief Reads the bit group 'RFNE' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_RFNE(void);
/*! \brief Reads the bit group 'RFF' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_RFF(void);
/*! \brief Reads the bit group 'TXE' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_TXE(void);
/*! \brief Reads the bit group 'DCOL' of register 'SPI0_SR'. */
U8   GH_SPI0_get_SR_DCOL(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_SR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_SR_BUSY(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_BUSY] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.busy;
}
GH_INLINE U8   GH_SPI0_get_SR_TFNF(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_TFNF] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.tfnf;
}
GH_INLINE U8   GH_SPI0_get_SR_TFE(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_TFE] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.tfe;
}
GH_INLINE U8   GH_SPI0_get_SR_RFNE(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_RFNE] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.rfne;
}
GH_INLINE U8   GH_SPI0_get_SR_RFF(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_RFF] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.rff;
}
GH_INLINE U8   GH_SPI0_get_SR_TXE(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_TXE] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.txe;
}
GH_INLINE U8   GH_SPI0_get_SR_DCOL(void)
{
    GH_SPI0_SR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_SR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_SR_DCOL] --> 0x%08x\n",
                        REG_SPI0_SR,value);
    #endif
    return tmp_value.bitc.dcol;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_IMR (read/write)                                             */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Writes the register 'SPI0_IMR'. */
void GH_SPI0_set_IMR(U32 data);
/*! \brief Reads the register 'SPI0_IMR'. */
U32  GH_SPI0_get_IMR(void);
/*! \brief Writes the bit group 'TXEIM' of register 'SPI0_IMR'. */
void GH_SPI0_set_IMR_TXEIM(U8 data);
/*! \brief Reads the bit group 'TXEIM' of register 'SPI0_IMR'. */
U8   GH_SPI0_get_IMR_TXEIM(void);
/*! \brief Writes the bit group 'TXOIM' of register 'SPI0_IMR'. */
void GH_SPI0_set_IMR_TXOIM(U8 data);
/*! \brief Reads the bit group 'TXOIM' of register 'SPI0_IMR'. */
U8   GH_SPI0_get_IMR_TXOIM(void);
/*! \brief Writes the bit group 'RXUIM' of register 'SPI0_IMR'. */
void GH_SPI0_set_IMR_RXUIM(U8 data);
/*! \brief Reads the bit group 'RXUIM' of register 'SPI0_IMR'. */
U8   GH_SPI0_get_IMR_RXUIM(void);
/*! \brief Writes the bit group 'RXOIM' of register 'SPI0_IMR'. */
void GH_SPI0_set_IMR_RXOIM(U8 data);
/*! \brief Reads the bit group 'RXOIM' of register 'SPI0_IMR'. */
U8   GH_SPI0_get_IMR_RXOIM(void);
/*! \brief Writes the bit group 'RXFIM' of register 'SPI0_IMR'. */
void GH_SPI0_set_IMR_RXFIM(U8 data);
/*! \brief Reads the bit group 'RXFIM' of register 'SPI0_IMR'. */
U8   GH_SPI0_get_IMR_RXFIM(void);
/*! \brief Writes the bit group 'MSTIM' of register 'SPI0_IMR'. */
void GH_SPI0_set_IMR_MSTIM(U8 data);
/*! \brief Reads the bit group 'MSTIM' of register 'SPI0_IMR'. */
U8   GH_SPI0_get_IMR_MSTIM(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE void GH_SPI0_set_IMR(U32 data)
{
    *(volatile U32 *)REG_SPI0_IMR = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR] <-- 0x%08x\n",
                        REG_SPI0_IMR,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_get_IMR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return value;
}
GH_INLINE void GH_SPI0_set_IMR_TXEIM(U8 data)
{
    GH_SPI0_IMR_S d;
    d.all = *(volatile U32 *)REG_SPI0_IMR;
    d.bitc.txeim = data;
    *(volatile U32 *)REG_SPI0_IMR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR_TXEIM] <-- 0x%08x\n",
                        REG_SPI0_IMR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_IMR_TXEIM(void)
{
    GH_SPI0_IMR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR_TXEIM] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return tmp_value.bitc.txeim;
}
GH_INLINE void GH_SPI0_set_IMR_TXOIM(U8 data)
{
    GH_SPI0_IMR_S d;
    d.all = *(volatile U32 *)REG_SPI0_IMR;
    d.bitc.txoim = data;
    *(volatile U32 *)REG_SPI0_IMR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR_TXOIM] <-- 0x%08x\n",
                        REG_SPI0_IMR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_IMR_TXOIM(void)
{
    GH_SPI0_IMR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR_TXOIM] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return tmp_value.bitc.txoim;
}
GH_INLINE void GH_SPI0_set_IMR_RXUIM(U8 data)
{
    GH_SPI0_IMR_S d;
    d.all = *(volatile U32 *)REG_SPI0_IMR;
    d.bitc.rxuim = data;
    *(volatile U32 *)REG_SPI0_IMR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR_RXUIM] <-- 0x%08x\n",
                        REG_SPI0_IMR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_IMR_RXUIM(void)
{
    GH_SPI0_IMR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR_RXUIM] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return tmp_value.bitc.rxuim;
}
GH_INLINE void GH_SPI0_set_IMR_RXOIM(U8 data)
{
    GH_SPI0_IMR_S d;
    d.all = *(volatile U32 *)REG_SPI0_IMR;
    d.bitc.rxoim = data;
    *(volatile U32 *)REG_SPI0_IMR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR_RXOIM] <-- 0x%08x\n",
                        REG_SPI0_IMR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_IMR_RXOIM(void)
{
    GH_SPI0_IMR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR_RXOIM] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return tmp_value.bitc.rxoim;
}
GH_INLINE void GH_SPI0_set_IMR_RXFIM(U8 data)
{
    GH_SPI0_IMR_S d;
    d.all = *(volatile U32 *)REG_SPI0_IMR;
    d.bitc.rxfim = data;
    *(volatile U32 *)REG_SPI0_IMR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR_RXFIM] <-- 0x%08x\n",
                        REG_SPI0_IMR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_IMR_RXFIM(void)
{
    GH_SPI0_IMR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR_RXFIM] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return tmp_value.bitc.rxfim;
}
GH_INLINE void GH_SPI0_set_IMR_MSTIM(U8 data)
{
    GH_SPI0_IMR_S d;
    d.all = *(volatile U32 *)REG_SPI0_IMR;
    d.bitc.mstim = data;
    *(volatile U32 *)REG_SPI0_IMR = d.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_IMR_MSTIM] <-- 0x%08x\n",
                        REG_SPI0_IMR,d.all,d.all);
    #endif
}
GH_INLINE U8   GH_SPI0_get_IMR_MSTIM(void)
{
    GH_SPI0_IMR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IMR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IMR_MSTIM] --> 0x%08x\n",
                        REG_SPI0_IMR,value);
    #endif
    return tmp_value.bitc.mstim;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_ISR (read)                                                   */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_ISR'. */
U32  GH_SPI0_get_ISR(void);
/*! \brief Reads the bit group 'TXEIS' of register 'SPI0_ISR'. */
U8   GH_SPI0_get_ISR_TXEIS(void);
/*! \brief Reads the bit group 'TXOIS' of register 'SPI0_ISR'. */
U8   GH_SPI0_get_ISR_TXOIS(void);
/*! \brief Reads the bit group 'RXUIS' of register 'SPI0_ISR'. */
U8   GH_SPI0_get_ISR_RXUIS(void);
/*! \brief Reads the bit group 'RXOIS' of register 'SPI0_ISR'. */
U8   GH_SPI0_get_ISR_RXOIS(void);
/*! \brief Reads the bit group 'RXFIS' of register 'SPI0_ISR'. */
U8   GH_SPI0_get_ISR_RXFIS(void);
/*! \brief Reads the bit group 'MSTIS' of register 'SPI0_ISR'. */
U8   GH_SPI0_get_ISR_MSTIS(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_ISR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_ISR_TXEIS(void)
{
    GH_SPI0_ISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR_TXEIS] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return tmp_value.bitc.txeis;
}
GH_INLINE U8   GH_SPI0_get_ISR_TXOIS(void)
{
    GH_SPI0_ISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR_TXOIS] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return tmp_value.bitc.txois;
}
GH_INLINE U8   GH_SPI0_get_ISR_RXUIS(void)
{
    GH_SPI0_ISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR_RXUIS] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return tmp_value.bitc.rxuis;
}
GH_INLINE U8   GH_SPI0_get_ISR_RXOIS(void)
{
    GH_SPI0_ISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR_RXOIS] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return tmp_value.bitc.rxois;
}
GH_INLINE U8   GH_SPI0_get_ISR_RXFIS(void)
{
    GH_SPI0_ISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR_RXFIS] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return tmp_value.bitc.rxfis;
}
GH_INLINE U8   GH_SPI0_get_ISR_MSTIS(void)
{
    GH_SPI0_ISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ISR_MSTIS] --> 0x%08x\n",
                        REG_SPI0_ISR,value);
    #endif
    return tmp_value.bitc.mstis;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_RISR (read)                                                  */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_RISR'. */
U32  GH_SPI0_get_RISR(void);
/*! \brief Reads the bit group 'TXEIR' of register 'SPI0_RISR'. */
U8   GH_SPI0_get_RISR_TXEIR(void);
/*! \brief Reads the bit group 'TXOIR' of register 'SPI0_RISR'. */
U8   GH_SPI0_get_RISR_TXOIR(void);
/*! \brief Reads the bit group 'RXUIR' of register 'SPI0_RISR'. */
U8   GH_SPI0_get_RISR_RXUIR(void);
/*! \brief Reads the bit group 'RXOIR' of register 'SPI0_RISR'. */
U8   GH_SPI0_get_RISR_RXOIR(void);
/*! \brief Reads the bit group 'RXFIR' of register 'SPI0_RISR'. */
U8   GH_SPI0_get_RISR_RXFIR(void);
/*! \brief Reads the bit group 'MSTIR' of register 'SPI0_RISR'. */
U8   GH_SPI0_get_RISR_MSTIR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_RISR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_RISR_TXEIR(void)
{
    GH_SPI0_RISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR_TXEIR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return tmp_value.bitc.txeir;
}
GH_INLINE U8   GH_SPI0_get_RISR_TXOIR(void)
{
    GH_SPI0_RISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR_TXOIR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return tmp_value.bitc.txoir;
}
GH_INLINE U8   GH_SPI0_get_RISR_RXUIR(void)
{
    GH_SPI0_RISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR_RXUIR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return tmp_value.bitc.rxuir;
}
GH_INLINE U8   GH_SPI0_get_RISR_RXOIR(void)
{
    GH_SPI0_RISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR_RXOIR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return tmp_value.bitc.rxoir;
}
GH_INLINE U8   GH_SPI0_get_RISR_RXFIR(void)
{
    GH_SPI0_RISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR_RXFIR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return tmp_value.bitc.rxfir;
}
GH_INLINE U8   GH_SPI0_get_RISR_MSTIR(void)
{
    GH_SPI0_RISR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RISR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RISR_MSTIR] --> 0x%08x\n",
                        REG_SPI0_RISR,value);
    #endif
    return tmp_value.bitc.mstir;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_TXOICR (read)                                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_TXOICR'. */
U32  GH_SPI0_get_TXOICR(void);
/*! \brief Reads the bit group 'TXOICR' of register 'SPI0_TXOICR'. */
U8   GH_SPI0_get_TXOICR_TXOICR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_TXOICR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_TXOICR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_TXOICR] --> 0x%08x\n",
                        REG_SPI0_TXOICR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_TXOICR_TXOICR(void)
{
    GH_SPI0_TXOICR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_TXOICR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_TXOICR_TXOICR] --> 0x%08x\n",
                        REG_SPI0_TXOICR,value);
    #endif
    return tmp_value.bitc.txoicr;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_RXOICR (read)                                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_RXOICR'. */
U32  GH_SPI0_get_RXOICR(void);
/*! \brief Reads the bit group 'RXOICR' of register 'SPI0_RXOICR'. */
U8   GH_SPI0_get_RXOICR_RXOICR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_RXOICR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_RXOICR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXOICR] --> 0x%08x\n",
                        REG_SPI0_RXOICR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_RXOICR_RXOICR(void)
{
    GH_SPI0_RXOICR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RXOICR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXOICR_RXOICR] --> 0x%08x\n",
                        REG_SPI0_RXOICR,value);
    #endif
    return tmp_value.bitc.rxoicr;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_RXUICR (read)                                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_RXUICR'. */
U32  GH_SPI0_get_RXUICR(void);
/*! \brief Reads the bit group 'RXUICR' of register 'SPI0_RXUICR'. */
U8   GH_SPI0_get_RXUICR_RXUICR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_RXUICR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_RXUICR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXUICR] --> 0x%08x\n",
                        REG_SPI0_RXUICR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_RXUICR_RXUICR(void)
{
    GH_SPI0_RXUICR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_RXUICR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_RXUICR_RXUICR] --> 0x%08x\n",
                        REG_SPI0_RXUICR,value);
    #endif
    return tmp_value.bitc.rxuicr;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_MSTICR (read)                                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_MSTICR'. */
U32  GH_SPI0_get_MSTICR(void);
/*! \brief Reads the bit group 'MSTICR' of register 'SPI0_MSTICR'. */
U8   GH_SPI0_get_MSTICR_MSTICR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_MSTICR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_MSTICR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_MSTICR] --> 0x%08x\n",
                        REG_SPI0_MSTICR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_MSTICR_MSTICR(void)
{
    GH_SPI0_MSTICR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_MSTICR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_MSTICR_MSTICR] --> 0x%08x\n",
                        REG_SPI0_MSTICR,value);
    #endif
    return tmp_value.bitc.msticr;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_ICR (read)                                                   */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_ICR'. */
U32  GH_SPI0_get_ICR(void);
/*! \brief Reads the bit group 'ICR' of register 'SPI0_ICR'. */
U8   GH_SPI0_get_ICR_ICR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_ICR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_ICR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ICR] --> 0x%08x\n",
                        REG_SPI0_ICR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_ICR_ICR(void)
{
    GH_SPI0_ICR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_ICR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_ICR_ICR] --> 0x%08x\n",
                        REG_SPI0_ICR,value);
    #endif
    return tmp_value.bitc.icr;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_IDR (read)                                                   */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_IDR'. */
U32  GH_SPI0_get_IDR(void);
/*! \brief Reads the bit group 'ID' of register 'SPI0_IDR'. */
U8   GH_SPI0_get_IDR_ID(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_IDR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_IDR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IDR] --> 0x%08x\n",
                        REG_SPI0_IDR,value);
    #endif
    return value;
}
GH_INLINE U8   GH_SPI0_get_IDR_ID(void)
{
    GH_SPI0_IDR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_IDR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_IDR_ID] --> 0x%08x\n",
                        REG_SPI0_IDR,value);
    #endif
    return tmp_value.bitc.id;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_DR (read)                                                    */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
/*! \brief Reads the register 'SPI0_DR'. */
U32  GH_SPI0_get_DR(void);
/*! \brief Reads the bit group 'DR' of register 'SPI0_DR'. */
U16  GH_SPI0_get_DR_DR(void);
#else /* GH_INLINE_LEVEL == 0 */
GH_INLINE U32  GH_SPI0_get_DR(void)
{
    U32 value = (*(volatile U32 *)REG_SPI0_DR);

    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_DR] --> 0x%08x\n",
                        REG_SPI0_DR,value);
    #endif
    return value;
}
GH_INLINE U16  GH_SPI0_get_DR_DR(void)
{
    GH_SPI0_DR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_SPI0_DR);

    tmp_value.all = value;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_SPI0_get_DR_DR] --> 0x%08x\n",
                        REG_SPI0_DR,value);
    #endif
    return tmp_value.bitc.dr;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register SPI0_DW (write)                                                   */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL < 2
/*! \brief Writes the register 'SPI0_DW'. */
void GH_SPI0_set_DW(U32 data);
/*! \brief Reads the mirror variable of the register 'SPI0_DW'. */
U32  GH_SPI0_getm_DW(void);
/*! \brief Writes the bit group 'DW' of register 'SPI0_DW'. */
void GH_SPI0_set_DW_DW(U16 data);
/*! \brief Reads the bit group 'DW' from the mirror variable of register 'SPI0_DW'. */
U16  GH_SPI0_getm_DW_DW(void);
#else /* GH_INLINE_LEVEL < 2 */
GH_INLINE void GH_SPI0_set_DW(U32 data)
{
    m_spi0_dw.all = data;
    *(volatile U32 *)REG_SPI0_DW = data;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_DW] <-- 0x%08x\n",
                        REG_SPI0_DW,data,data);
    #endif
}
GH_INLINE U32  GH_SPI0_getm_DW(void)
{
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "[GH_SPI0_getm_DW] --> 0x%08x\n",
                        m_spi0_dw.all);
    #endif
    return m_spi0_dw.all;
}
GH_INLINE void GH_SPI0_set_DW_DW(U16 data)
{
    m_spi0_dw.bitc.dw = data;
    *(volatile U32 *)REG_SPI0_DW = m_spi0_dw.all;
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_SPI0_set_DW_DW] <-- 0x%08x\n",
                        REG_SPI0_DW,m_spi0_dw.all,m_spi0_dw.all);
    #endif
}
GH_INLINE U16  GH_SPI0_getm_DW_DW(void)
{
    #if GH_SPI0_ENABLE_DEBUG_PRINT
    GH_SPI0_DEBUG_PRINT_FUNCTION( "[GH_SPI0_getm_DW_DW] --> 0x%08x\n",
                        m_spi0_dw.bitc.dw);
    #endif
    return m_spi0_dw.bitc.dw;
}
#endif /* GH_INLINE_LEVEL < 2 */

/*----------------------------------------------------------------------------*/
/* init function                                                              */
/*----------------------------------------------------------------------------*/
/*! \brief Initialises the registers and mirror variables. */
void GH_SPI0_init(void);

#ifdef __cplusplus
}
#endif

#endif /* _GH_SPI0_H */

/*----------------------------------------------------------------------------*/
/* end of file                                                                */
/*----------------------------------------------------------------------------*/

