/***************************************************************************//**
* \file cy_crypto_core_ecc_domain_params.c
* \version 2.20
*
* \brief
*  This file provides constant and parameters for the API for the ECC
*  in the Crypto driver.
*
********************************************************************************
* Copyright 2016-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/


#include "cy_crypto_core_ecc.h"
#include "cy_syslib.h"

const cy_stc_crypto_ecc_dp_type eccDomainParams[];


/*******************************************************************************
* Function Name: Cy_Crypto_Core_ECC_GetCurveParams
****************************************************************************//**
*
* .
*
* \param curveID
* See \ref cy_en_crypto_ecc_curve_id_t.
*
* \return status code. See \ref cy_stc_crypto_ecc_dp_type.
*
*******************************************************************************/
cy_stc_crypto_ecc_dp_type *Cy_Crypto_Core_ECC_GetCurveParams(cy_en_crypto_ecc_curve_id_t curveId)
{
    cy_stc_crypto_ecc_dp_type *result = NULL;

    if ((curveId > CY_CRYPTO_ECC_ECP_NONE) && (curveId < CY_CRYPTO_ECC_ECP_CURVES_CNT))
    {
        result = (cy_stc_crypto_ecc_dp_type *)&eccDomainParams[curveId];
    }

    return result;
}

/* P192 CURVE PARAMETERS */
CY_ALIGN(4) const uint8_t eccP192Polynomial[CY_CRYPTO_ECC_P192_BYTE_SIZE] =
{
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

CY_ALIGN(4) const uint8_t eccP192PolyBarrett[CY_CRYPTO_ECC_P192_BYTE_SIZE + 1u] =
{  /* pre-calculated */
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x01
};
CY_ALIGN(4) const uint8_t eccP192Order[CY_CRYPTO_ECC_P192_BYTE_SIZE] =
{
    0x31, 0x28, 0xD2, 0xB4, 0xB1, 0xC9, 0x6B, 0x14,
    0x36, 0xF8, 0xDE, 0x99, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

/* barrett_o: "1000000000000000000000000662107c9eb94364e4b2dd7cf" */
CY_ALIGN(4) const uint8_t eccP192OrderBarrett[CY_CRYPTO_ECC_P192_BYTE_SIZE + 1u] =
{   /* pre-calculated */
    0xcf, 0xd7, 0x2d, 0x4b, 0x4e, 0x36, 0x94, 0xeb,
    0xc9, 0x07, 0x21, 0x66, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01
};

/* base point x: "188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF1012" */
CY_ALIGN(4) const uint8_t eccP192BasePointX[CY_CRYPTO_ECC_P192_BYTE_SIZE] =
{
    0x12, 0x10, 0xff, 0x82, 0xfd, 0x0a, 0xff, 0xf4,
    0x00, 0x88, 0xa1, 0x43, 0xeb, 0x20, 0xbf, 0x7c,
    0xf6, 0x90, 0x30, 0xb0, 0x0e, 0xa8, 0x8d, 0x18
};

/* base point y: "07192B95FFC8DA78631011ED6B24CDD573F977A11E794811" */
CY_ALIGN(4) const uint8_t eccP192BasePointY[CY_CRYPTO_ECC_P192_BYTE_SIZE] =
{
    0x11, 0x48, 0x79, 0x1e, 0xa1, 0x77, 0xf9, 0x73,
    0xd5, 0xcd, 0x24, 0x6b, 0xed, 0x11, 0x10, 0x63,
    0x78, 0xda, 0xc8, 0xff, 0x95, 0x2b, 0x19, 0x07
};

/* P224 CURVE PARAMETERS */
CY_ALIGN(4) const uint8_t eccP224Polynomial[CY_CRYPTO_ECC_P224_BYTE_SIZE] =
{
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff
};

CY_ALIGN(4) const uint8_t eccP224PolyBarrett[CY_CRYPTO_ECC_P224_BYTE_SIZE + 1u] =
{  /* pre-calculated */
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01
};

CY_ALIGN(4) const uint8_t eccP224Order[CY_CRYPTO_ECC_P224_BYTE_SIZE] =
{
    0x3D, 0x2A, 0x5C, 0x5C, 0x45, 0x29, 0xDD, 0x13,
    0x3E, 0xF0, 0xB8, 0xE0, 0xA2, 0x16, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF
};
/* barrett_o: "10000000000000000000000000000e95d1f470fc1ec22d6baa3a3d5c3" */
CY_ALIGN(4) const uint8_t eccP224OrderBarrett[CY_CRYPTO_ECC_P224_BYTE_SIZE + 1u] =
{   /* pre-calculated */
    0xc3, 0xd5, 0xa3, 0xa3, 0xba, 0xd6, 0x22, 0xec,
    0xc1, 0x0f, 0x47, 0x1f, 0x5d, 0xe9, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01
};

/* Gx - base point x: "B70E0CBD6BB4BF7F321390B94A03C1D356C21122343280D6115C1D21" */
CY_ALIGN(4) const uint8_t eccP224BasePointX[CY_CRYPTO_ECC_P224_BYTE_SIZE] =
{
    0x21, 0x1d, 0x5c, 0x11, 0xd6, 0x80, 0x32, 0x34,
    0x22, 0x11, 0xc2, 0x56, 0xd3, 0xc1, 0x03, 0x4a,
    0xb9, 0x90, 0x13, 0x32, 0x7f, 0xbf, 0xb4, 0x6b,
    0xbd, 0x0c, 0x0e, 0xb7
};

/* Gy - base point y: "BD376388B5F723FB4C22DFE6CD4375A05A07476444D5819985007E34" */
CY_ALIGN(4) const uint8_t eccP224BasePointY[CY_CRYPTO_ECC_P224_BYTE_SIZE] =
{
    0x34, 0x7e, 0x00, 0x85, 0x99, 0x81, 0xd5, 0x44,
    0x64, 0x47, 0x07, 0x5a, 0xa0, 0x75, 0x43, 0xcd,
    0xe6, 0xdf, 0x22, 0x4c, 0xfb, 0x23, 0xf7, 0xb5,
    0x88, 0x63, 0x37, 0xbd
};


/* P256 CURVE PARAMETERS */
/* prime: "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF" */
CY_ALIGN(4) const uint8_t eccP256Polynomial[CY_CRYPTO_ECC_P256_BYTE_SIZE] =
{
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff
};

/* barrett_p: "100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003" */
CY_ALIGN(4) const uint8_t eccP256PolyBarrett[CY_CRYPTO_ECC_P256_BYTE_SIZE + 1u] =
{  /* pre-calculated! */
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff,
   0xfe, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
   0x01
};

/* order: "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551" */
CY_ALIGN(4) const uint8_t eccP256Order[CY_CRYPTO_ECC_P256_BYTE_SIZE] =
{
    0x51, 0x25, 0x63, 0xfc, 0xc2, 0xca, 0xb9, 0xf3,
    0x84, 0x9e, 0x17, 0xa7, 0xad, 0xfa, 0xe6, 0xbc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff
};

/* barrett_o: 100000000fffffffffffffffeffffffff43190552df1a6c21012ffd85eedf9bfe" */
CY_ALIGN(4) const uint8_t eccP256OrderBarrett[CY_CRYPTO_ECC_P256_BYTE_SIZE + 1u] =
{   /* pre-calculated */
    0xfe, 0x9b, 0xdf, 0xee, 0x85, 0xfd, 0x2f, 0x01,
    0x21, 0x6c, 0x1a, 0xdf, 0x52, 0x05, 0x19, 0x43,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x01
};

/* base point x: "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296" */
CY_ALIGN(4) const uint8_t eccP256BasePointX[CY_CRYPTO_ECC_P256_BYTE_SIZE] =
{
    0x96, 0xc2, 0x98, 0xd8, 0x45, 0x39, 0xa1, 0xf4,
    0xa0, 0x33, 0xeb, 0x2d, 0x81, 0x7d, 0x03, 0x77,
    0xf2, 0x40, 0xa4, 0x63, 0xe5, 0xe6, 0xbc, 0xf8,
    0x47, 0x42, 0x2c, 0xe1, 0xf2, 0xd1, 0x17, 0x6b
};

/* base point y: "4FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5" */
CY_ALIGN(4) const uint8_t eccP256BasePointY[CY_CRYPTO_ECC_P256_BYTE_SIZE] =
{
    0xf5, 0x51, 0xbf, 0x37, 0x68, 0x40, 0xb6, 0xcb,
    0xce, 0x5e, 0x31, 0x6b, 0x57, 0x33, 0xce, 0x2b,
    0x16, 0x9e, 0x0f, 0x7c, 0x4a, 0xeb, 0xe7, 0x8e,
    0x9b, 0x7f, 0x1a, 0xfe, 0xe2, 0x42, 0xe3, 0x4f,
};

/* prime: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFF" */
CY_ALIGN(4) const uint8_t eccP384Polynomial[CY_CRYPTO_ECC_P384_BYTE_SIZE] =
{
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

/* barrett_p: "1000000000000000000000000000000000000000000000000000000000000000100000000ffffffffffffffff00000001" */
CY_ALIGN(4) const uint8_t eccP384PolyBarrett[CY_CRYPTO_ECC_P384_BYTE_SIZE + 1u] =
{   /* pre-calculated */
    0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01
};

/* order: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC7634D81F4372DDF581A0DB248B0A77AECEC196ACCC52973" */
CY_ALIGN(4) const uint8_t eccP384Order[CY_CRYPTO_ECC_P384_BYTE_SIZE] =
{
    0x73, 0x29, 0xC5, 0xCC, 0x6A, 0x19, 0xEC, 0xEC,
    0x7A, 0xA7, 0xB0, 0x48, 0xB2, 0x0D, 0x1A, 0x58,
    0xDF, 0x2D, 0x37, 0xF4, 0x81, 0x4D, 0x63, 0xC7,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

/* barrett_o: "1000000000000000000000000000000000000000000000000389cb27e0bc8d220a7e5f24db74f58851313e695333ad68d" */
CY_ALIGN(4) const uint8_t eccP384OrderBarrett[CY_CRYPTO_ECC_P384_BYTE_SIZE + 1u] =
{   /* pre-calculated */
    0x8d, 0xd6, 0x3a, 0x33, 0x95, 0xe6, 0x13, 0x13,
    0x85, 0x58, 0x4f, 0xb7, 0x4d, 0xf2, 0xe5, 0xa7,
    0x20, 0xd2, 0xc8, 0x0b, 0x7e, 0xb2, 0x9c, 0x38,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01
};

/* base point x: "AA87CA22BE8B05378EB1C71EF320AD746E1D3B628BA79B9859F741E082542A385502F25DBF55296C3A545E3872760AB7" */
CY_ALIGN(4) const uint8_t eccP384BasePointX[CY_CRYPTO_ECC_P384_BYTE_SIZE] =
{
    0xb7, 0x0a, 0x76, 0x72, 0x38, 0x5e, 0x54, 0x3a,
    0x6c, 0x29, 0x55, 0xbf, 0x5d, 0xf2, 0x02, 0x55,
    0x38, 0x2a, 0x54, 0x82, 0xe0, 0x41, 0xf7, 0x59,
    0x98, 0x9b, 0xa7, 0x8b, 0x62, 0x3b, 0x1d, 0x6e,
    0x74, 0xad, 0x20, 0xf3, 0x1e, 0xc7, 0xb1, 0x8e,
    0x37, 0x05, 0x8b, 0xbe, 0x22, 0xca, 0x87, 0xaa
};

/* base point y: "3617DE4A96262C6F5D9E98BF9292DC29F8F41DBD289A147CE9DA3113B5F0B8C00A60B1CE1D7E819D7A431D7C90EA0E5F" */
CY_ALIGN(4) const uint8_t eccP384BasePointY[CY_CRYPTO_ECC_P384_BYTE_SIZE] =
{
    0x5f, 0x0e, 0xea, 0x90, 0x7c, 0x1d, 0x43, 0x7a,
    0x9d, 0x81, 0x7e, 0x1d, 0xce, 0xb1, 0x60, 0x0a,
    0xc0, 0xb8, 0xf0, 0xb5, 0x13, 0x31, 0xda, 0xe9,
    0x7c, 0x14, 0x9a, 0x28, 0xbd, 0x1d, 0xf4, 0xf8,
    0x29, 0xdc, 0x92, 0x92, 0xbf, 0x98, 0x9e, 0x5d,
    0x6f, 0x2c, 0x26, 0x96, 0x4a, 0xde, 0x17, 0x36
};

CY_ALIGN(4) const uint8_t eccP521Polynomial[CY_CRYPTO_ECC_P521_BYTE_SIZE] =
{
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0x01
};

CY_ALIGN(4) const uint8_t eccP521PolyBarrett[CY_CRYPTO_ECC_P521_BYTE_SIZE] =
{  /* pre-calculated */
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x02
};

CY_ALIGN(4) const uint8_t eccP521Order[CY_CRYPTO_ECC_P521_BYTE_SIZE] =
{
    0x09, 0x64, 0x38, 0x91, 0x1E, 0xB7, 0x6F, 0xBB,
    0xAE, 0x47, 0x9C, 0x89, 0xB8, 0xC9, 0xB5, 0x3B,
    0xD0, 0xA5, 0x09, 0xF7, 0x48, 0x01, 0xCC, 0x7F,
    0x6B, 0x96, 0x2F, 0xBF, 0x83, 0x87, 0x86, 0x51,
    0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x01
};

/* barrett_o: "2000000000000000000000000000000000000000000000000000000000000000005ae79787c40d069948033feb708f65a2fc44a36477663b851449048e16ec79bf7" */
CY_ALIGN(4) const uint8_t eccP521OrderBarrett[CY_CRYPTO_ECC_P521_BYTE_SIZE] =
{   /* pre-calculated */
    0xf7, 0x9b, 0xc7, 0x6e, 0xe1, 0x48, 0x90, 0x44,
    0x51, 0xb8, 0x63, 0x76, 0x47, 0x36, 0x4a, 0xc4,
    0x2f, 0x5a, 0xf6, 0x08, 0xb7, 0xfe, 0x33, 0x80,
    0x94, 0x69, 0xd0, 0x40, 0x7c, 0x78, 0x79, 0xae,
    0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02
};

/* base point x: "00C6858E06B70404E9CD9E3ECB662395B4429C648139053FB521F828AF606B4D3DBAA14B5E77EFE75928FE1DC127A2FFA8DE3348B3C1856A429BF97E7E31C2E5BD66" */
CY_ALIGN(4) const uint8_t eccP521BasePointX[CY_CRYPTO_ECC_P521_BYTE_SIZE] =
{
    0x66, 0xbd, 0xe5, 0xc2, 0x31, 0x7e, 0x7e, 0xf9,
    0x9b, 0x42, 0x6a, 0x85, 0xc1, 0xb3, 0x48, 0x33,
    0xde, 0xa8, 0xff, 0xa2, 0x27, 0xc1, 0x1d, 0xfe,
    0x28, 0x59, 0xe7, 0xef, 0x77, 0x5e, 0x4b, 0xa1,
    0xba, 0x3d, 0x4d, 0x6b, 0x60, 0xaf, 0x28, 0xf8,
    0x21, 0xb5, 0x3f, 0x05, 0x39, 0x81, 0x64, 0x9c,
    0x42, 0xb4, 0x95, 0x23, 0x66, 0xcb, 0x3e, 0x9e,
    0xcd, 0xe9, 0x04, 0x04, 0xb7, 0x06, 0x8e, 0x85,
    0xc6, 0x00
};

/* base point y: "011839296A789A3BC0045C8A5FB42C7D1BD998F54449579B446817AFBD17273E662C97EE72995EF42640C550B9013FAD0761353C7086A272C24088BE94769FD16650" */
CY_ALIGN(4) const uint8_t eccP521BasePointY[CY_CRYPTO_ECC_P521_BYTE_SIZE] =
{
    0x50, 0x66, 0xd1, 0x9f, 0x76, 0x94, 0xbe, 0x88,
    0x40, 0xc2, 0x72, 0xa2, 0x86, 0x70, 0x3c, 0x35,
    0x61, 0x07, 0xad, 0x3f, 0x01, 0xb9, 0x50, 0xc5,
    0x40, 0x26, 0xf4, 0x5e, 0x99, 0x72, 0xee, 0x97,
    0x2c, 0x66, 0x3e, 0x27, 0x17, 0xbd, 0xaf, 0x17,
    0x68, 0x44, 0x9b, 0x57, 0x49, 0x44, 0xf5, 0x98,
    0xd9, 0x1b, 0x7d, 0x2c, 0xb4, 0x5f, 0x8a, 0x5c,
    0x04, 0xc0, 0x3b, 0x9a, 0x78, 0x6a, 0x29, 0x39,
    0x18, 0x01
};

const cy_stc_crypto_ecc_dp_type eccDomainParams[] =
{
    {
        CY_CRYPTO_ECC_ECP_NONE,
        0,
        NULL,
        CY_CRYPTO_NIST_P_CURVE_SPECIFIC_RED_ALG,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    },
    {
        CY_CRYPTO_ECC_ECP_SECP192R1,
        CY_CRYPTO_ECC_P192_SIZE,
        "NIST P-192",
        CY_CRYPTO_NIST_P_CURVE_SPECIFIC_RED_ALG,
        /* prime: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF" */
        eccP192Polynomial,
        /* barrett_p: "1000000000000000000000000000000010000000000000001" */
        eccP192PolyBarrett,
        /* order: "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22831" */
        eccP192Order,
        /* barrett_o: "1000000000000000000000000662107c9eb94364e4b2dd7cf" */
        eccP192OrderBarrett,
        /* base point x: "188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF1012" */
        eccP192BasePointX,
        /* base point y: "07192B95FFC8DA78631011ED6B24CDD573F977A11E794811" */
        eccP192BasePointY
    },
    {
        CY_CRYPTO_ECC_ECP_SECP224R1,
        CY_CRYPTO_ECC_P224_SIZE,
        "NIST P-224",
        CY_CRYPTO_NIST_P_CURVE_SPECIFIC_RED_ALG,
        /* prime: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000000001" */
        eccP224Polynomial,
        /* barrett_p: "100000000000000000000000000000000ffffffffffffffffffffffff" */
        eccP224PolyBarrett,
        /* order: "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3D" */
        eccP224Order,
        /* barrett_o: "10000000000000000000000000000e95d1f470fc1ec22d6baa3a3d5c3" */
        eccP224OrderBarrett,
        /* Gx - base point x: "B70E0CBD6BB4BF7F321390B94A03C1D356C21122343280D6115C1D21" */
        eccP224BasePointX,
        /* Gy - base point y: "BD376388B5F723FB4C22DFE6CD4375A05A07476444D5819985007E34" */
        eccP224BasePointY
    },
    {
        CY_CRYPTO_ECC_ECP_SECP256R1,
        CY_CRYPTO_ECC_P256_SIZE,
        "NIST P-256",
        CY_CRYPTO_NIST_P_BARRETT_RED_ALG,
        /* prime: "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF" */
        eccP256Polynomial,
        /* barrett_p: "100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003" */
        eccP256PolyBarrett,
        /* order: "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551" */
        eccP256Order,
        /* barrett_o: "100000000fffffffffffffffeffffffff43190552df1a6c21012ffd85eedf9bfe" */
        eccP256OrderBarrett,
        /* Gx - base point x: "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296" */
        eccP256BasePointX,
        /* Gy - base point y: "4FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5" */
        eccP256BasePointY
    },
    {
        CY_CRYPTO_ECC_ECP_SECP384R1,
        CY_CRYPTO_ECC_P384_SIZE,
        "NIST P-384",
        CY_CRYPTO_NIST_P_BARRETT_RED_ALG,
        /* prime: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFF" */
        eccP384Polynomial,
        /* barrett_p: "1000000000000000000000000000000000000000000000000000000000000000100000000ffffffffffffffff00000001" */
        eccP384PolyBarrett,
        /* order: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC7634D81F4372DDF581A0DB248B0A77AECEC196ACCC52973" */
        eccP384Order,
        /* barrett_o: "1000000000000000000000000000000000000000000000000389cb27e0bc8d220a7e5f24db74f58851313e695333ad68d" */
        eccP384OrderBarrett,
        /* base point x: "AA87CA22BE8B05378EB1C71EF320AD746E1D3B628BA79B9859F741E082542A385502F25DBF55296C3A545E3872760AB7" */
        eccP384BasePointX,
        /* base point y: "3617DE4A96262C6F5D9E98BF9292DC29F8F41DBD289A147CE9DA3113B5F0B8C00A60B1CE1D7E819D7A431D7C90EA0E5F" */
        eccP384BasePointY
    },
    {
        CY_CRYPTO_ECC_ECP_SECP521R1,
        CY_CRYPTO_ECC_P521_SIZE,
        "NIST P-521",
        /* Currently driver uses CY_CRYPTO_NIST_P_BARRETT_RED_ALG algorithm instead of
            curve specific CY_CRYPTO_NIST_P_CURVE_SPECIFIC_RED_ALG */
        CY_CRYPTO_NIST_P_BARRETT_RED_ALG,
        /* prime: "1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" */
        eccP521Polynomial,
        /* barrett_p: "20000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001" */
        eccP521PolyBarrett,
        /* order: "1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA51868783BF2F966B7FCC0148F709A5D03BB5C9B8899C47AEBB6FB71E91386409" */
        eccP521Order,
        /* barrett_o: "2000000000000000000000000000000000000000000000000000000000000000005ae79787c40d069948033feb708f65a2fc44a36477663b851449048e16ec79bf7" */
        eccP521OrderBarrett,
        /* base point x: "0C6858E06B70404E9CD9E3ECB662395B4429C648139053FB521F828AF606B4D3DBAA14B5E77EFE75928FE1DC127A2FFA8DE3348B3C1856A429BF97E7E31C2E5BD66" */
        eccP521BasePointX,
        /* base point y: "11839296A789A3BC0045C8A5FB42C7D1BD998F54449579B446817AFBD17273E662C97EE72995EF42640C550B9013FAD0761353C7086A272C24088BE94769FD16650" */
        eccP521BasePointY
    }
};


/* [] END OF FILE */
