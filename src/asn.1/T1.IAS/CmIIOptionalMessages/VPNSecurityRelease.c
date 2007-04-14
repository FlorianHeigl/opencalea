/*
 * Copyright (c) 2007 Norman Brandinger <norm@goes.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "IAS-LAES-CmII-Optional-Messages-Abstract-Syntax-Module"
 * 	found in "IAS-LAES-CmII-Optional-Messages-Abstract-Syntax-Module.asn"
 * 	`asn1c -funnamed-unions -findirect-choice -fbless-SIZE -fcompound-names`
 */

#include <asn_internal.h>

#include "VPNSecurityRelease.h"

static asn_TYPE_member_t asn_MBR_VPNSecurityRelease_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityRelease, caseId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CaseIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"caseId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityRelease, iAPSystemId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IAPSystemIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iAPSystemId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityRelease, timestamp),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timestamp"
		},
	{ ATF_POINTER, 3, offsetof(struct VPNSecurityRelease, sessionID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SessionIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sessionID"
		},
	{ ATF_POINTER, 2, offsetof(struct VPNSecurityRelease, subscriber),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubscriberIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subscriber"
		},
	{ ATF_POINTER, 1, offsetof(struct VPNSecurityRelease, accessSessionIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessSessionIPAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityRelease, vpnSecurityAssociation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNSecurityAssociationIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vpnSecurityAssociation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityRelease, vpnTerminationCause),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNTerminationCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vpnTerminationCause"
		},
};
static ber_tlv_tag_t asn_DEF_VPNSecurityRelease_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VPNSecurityRelease_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* caseId at 57 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iAPSystemId at 58 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timestamp at 59 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sessionID at 60 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subscriber at 61 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* accessSessionIPAddress at 62 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* vpnSecurityAssociation at 63 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* vpnTerminationCause at 65 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VPNSecurityRelease_specs_1 = {
	sizeof(struct VPNSecurityRelease),
	offsetof(struct VPNSecurityRelease, _asn_ctx),
	asn_MAP_VPNSecurityRelease_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VPNSecurityRelease = {
	"VPNSecurityRelease",
	"VPNSecurityRelease",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VPNSecurityRelease_tags_1,
	sizeof(asn_DEF_VPNSecurityRelease_tags_1)
		/sizeof(asn_DEF_VPNSecurityRelease_tags_1[0]), /* 1 */
	asn_DEF_VPNSecurityRelease_tags_1,	/* Same as above */
	sizeof(asn_DEF_VPNSecurityRelease_tags_1)
		/sizeof(asn_DEF_VPNSecurityRelease_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VPNSecurityRelease_1,
	8,	/* Elements count */
	&asn_SPC_VPNSecurityRelease_specs_1	/* Additional specs */
};

