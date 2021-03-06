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
 * From ASN.1 module "T1S1-LAES-VoP-Abstract-Syntax-Module"
 * 	found in "T1S1-LAES-VoP-Abstract-Syntax-Module.asn"
 * 	`asn1c -funnamed-unions -findirect-choice -fbless-SIZE -fcompound-names -fnative-types`
 */

#include <asn_internal.h>

#include "LaesMessage.h"

static asn_TYPE_member_t asn_MBR_LaesMessage_1[] = {
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, answer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Answer,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"answer"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, ccClose),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCClose,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ccClose"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, ccOpen),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCOpen,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ccOpen"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, change),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Change,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"change"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, origination),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Origination,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"origination"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaesMessage, null_6),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"null-6"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, redirection),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Redirection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"redirection"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, release),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Release,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, servingSystem),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingSystem,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servingSystem"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, termAttempt),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TerminationAttempt,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"termAttempt"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, connTest),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnectionTest,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"connTest"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, confPartyChange),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfPartyChange,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"confPartyChange"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, connection),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Connection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"connection"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, connectionBreak),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnectionBreak,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"connectionBreak"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, dialedDgtExtrn),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DialedDigitExtraction,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dialedDgtExtrn"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, networkSignal),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NetworkSignal,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"networkSignal"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, subjectSignal),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubjectSignal,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subjectSignal"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, directSignalReporting),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DirectSignalReporting,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"directSignalReporting"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, mediaAndAddressReporting),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MediaAndAddressReporting,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mediaAndAddressReporting"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, ccChange),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCChange,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ccChange"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, ccUnavailable),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCUnavailable,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ccUnavailable"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, surveillanceStatus),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SurveillanceStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"surveillanceStatus"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, featureManagement),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeatureManagement,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"featureManagement"
		},
	{ ATF_POINTER, 0, offsetof(struct LaesMessage, uuContent),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UUContent,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"uuContent"
		},
};
static asn_TYPE_tag2member_t asn_MAP_LaesMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* answer at 24 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* ccClose at 25 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* ccOpen at 26 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* change at 27 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* origination at 28 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* null-6 at 29 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 }, /* redirection at 30 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 7, 0, 0 }, /* release at 31 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 8, 0, 0 }, /* servingSystem at 32 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 9, 0, 0 }, /* termAttempt at 33 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 10, 0, 0 }, /* connTest at 34 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 11, 0, 0 }, /* confPartyChange at 35 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 12, 0, 0 }, /* connection at 36 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 13, 0, 0 }, /* connectionBreak at 37 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 14, 0, 0 }, /* dialedDgtExtrn at 38 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 15, 0, 0 }, /* networkSignal at 39 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 16, 0, 0 }, /* subjectSignal at 40 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 17, 0, 0 }, /* directSignalReporting at 41 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 18, 0, 0 }, /* mediaAndAddressReporting at 42 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 19, 0, 0 }, /* ccChange at 43 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 20, 0, 0 }, /* ccUnavailable at 44 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 21, 0, 0 }, /* surveillanceStatus at 45 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 22, 0, 0 }, /* featureManagement at 46 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 23, 0, 0 } /* uuContent at 48 */
};
static asn_CHOICE_specifics_t asn_SPC_LaesMessage_specs_1 = {
	sizeof(struct LaesMessage),
	offsetof(struct LaesMessage, _asn_ctx),
	offsetof(struct LaesMessage, present),
	sizeof(((struct LaesMessage *)0)->present),
	asn_MAP_LaesMessage_tag2el_1,
	24,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LaesMessage = {
	"LaesMessage",
	"LaesMessage",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_LaesMessage_1,
	24,	/* Elements count */
	&asn_SPC_LaesMessage_specs_1	/* Additional specs */
};

