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
 * From ASN.1 module "IAS-LAES-CmII-Optional-Messages-Abstract-Syntax-Module"
 * 	found in "IAS-LAES-CmII-Optional-Messages-Abstract-Syntax-Module.asn"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "VPNSecurityEstablishment.h"

static asn_TYPE_member_t asn_MBR_VPNSecurityEstablishment_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, caseId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CaseIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"caseId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, iAPSystemId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IAPSystemIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iAPSystemId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, timestamp),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timestamp"
		},
	{ ATF_POINTER, 3, offsetof(struct VPNSecurityEstablishment, sessionID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SessionIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sessionID"
		},
	{ ATF_POINTER, 2, offsetof(struct VPNSecurityEstablishment, subscriber),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubscriberIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subscriber"
		},
	{ ATF_POINTER, 1, offsetof(struct VPNSecurityEstablishment, accessSessionIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessSessionIPAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, vpnSecurityAssociation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNSecurityAssociationIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vpnSecurityAssociation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, vpnSecurityAssociationProtocols),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNSecurityAssociationProtocols,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vpnSecurityAssociationProtocols"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, localVPNEndpointIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"localVPNEndpointIPAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, remoteVPNEndpointIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"remoteVPNEndpointIPAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, localVPNEncryptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocalVPNEncryptionAlgorithms,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"localVPNEncryptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, remoteVPNEncryptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RemoteVPNEncryptionAlgorithms,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"remoteVPNEncryptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, localVPNEncryptionKeys),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNEncryptionKeys,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"localVPNEncryptionKeys"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VPNSecurityEstablishment, remoteVPNEncryptionKeys),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNEncryptionKeys,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"remoteVPNEncryptionKeys"
		},
};
static ber_tlv_tag_t asn_DEF_VPNSecurityEstablishment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VPNSecurityEstablishment_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* caseId at 40 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iAPSystemId at 41 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timestamp at 42 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sessionID at 43 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subscriber at 44 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* accessSessionIPAddress at 45 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* vpnSecurityAssociation at 46 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* vpnSecurityAssociationProtocols at 47 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* localVPNEndpointIPAddress at 48 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* remoteVPNEndpointIPAddress at 49 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* localVPNEncryptionAlgorithms at 50 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* remoteVPNEncryptionAlgorithms at 51 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* localVPNEncryptionKeys at 52 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* remoteVPNEncryptionKeys at 54 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VPNSecurityEstablishment_specs_1 = {
	sizeof(struct VPNSecurityEstablishment),
	offsetof(struct VPNSecurityEstablishment, _asn_ctx),
	asn_MAP_VPNSecurityEstablishment_tag2el_1,
	14,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VPNSecurityEstablishment = {
	"VPNSecurityEstablishment",
	"VPNSecurityEstablishment",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VPNSecurityEstablishment_tags_1,
	sizeof(asn_DEF_VPNSecurityEstablishment_tags_1)
		/sizeof(asn_DEF_VPNSecurityEstablishment_tags_1[0]), /* 1 */
	asn_DEF_VPNSecurityEstablishment_tags_1,	/* Same as above */
	sizeof(asn_DEF_VPNSecurityEstablishment_tags_1)
		/sizeof(asn_DEF_VPNSecurityEstablishment_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VPNSecurityEstablishment_1,
	14,	/* Elements count */
	&asn_SPC_VPNSecurityEstablishment_specs_1	/* Additional specs */
};
