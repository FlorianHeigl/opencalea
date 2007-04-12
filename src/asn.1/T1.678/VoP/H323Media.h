/*
 * This file is autogenerated by the ASN.1 compiler.
 * Copyright (c) 2003-2007 Lev Walkin <vlm@lionet.info>
 * See http://lionet.info/asn1c
 *
 * Source ASN.1 file is Copyright (c) by US CALEA, included
 * with permission (if included). <<< this depends on whether
 * or not you include the original ASN.1 file into OpenCALEA >>>
 *
 * This file is part of OpenCALEA suite (http://opencalea.org)
 * and is subject to OpenCALEA license (see COPYING file in the
 * root of the opencalea distribution).
 *
 * Copyright (c) 2007 Norman Brandinger <norm@goes.com>
 *
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "T1S1-LAES-VoP-Abstract-Syntax-Module"
 * 	found in "T1S1-LAES-VoP-Abstract-Syntax-Module.asn"
 * 	`asn1c -fnative-types`
 */

#ifndef	_H323Media_H_
#define	_H323Media_H_


#include <asn_application.h>

/* Including external dependencies */
#include "H323MediaParameterType.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* H323Media */
typedef struct H323Media {
	H323MediaParameterType_t	 h323MediaParameterType;
	OCTET_STRING_t	 h323MediaParameter;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} H323Media_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_H323Media;

#ifdef __cplusplus
}
#endif

#endif	/* _H323Media_H_ */