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

#ifndef	_ServiceChange_H_
#define	_ServiceChange_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CaseIdentity.h"
#include "IAPSystemIdentity.h"
#include "TimeStamp.h"
#include "SubscriberIdentity.h"
#include "ServerIdentity.h"
#include "ChangesAttempted.h"
#include "ResultofChangeAttempt.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IPAddress;

/* ServiceChange */
typedef struct ServiceChange {
	CaseIdentity_t	 caseId;
	IAPSystemIdentity_t	 iAPSystemId;
	TimeStamp_t	 timestamp;
	SubscriberIdentity_t	 subscriber;
	SubscriberIdentity_t	*primaryAccountSubscriber	/* OPTIONAL */;
	struct IPAddress	*interceptSubjectIPAddress	/* OPTIONAL */;
	ServerIdentity_t	*serverIdentity	/* OPTIONAL */;
	ChangesAttempted_t	 changesAttempted;
	ResultofChangeAttempt_t	 resultofChangeAttempt;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServiceChange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceChange;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IPAddress.h"

#endif	/* _ServiceChange_H_ */