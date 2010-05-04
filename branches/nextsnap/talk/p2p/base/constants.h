/*
 * libjingle
 * Copyright 2004--2005, Google Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *  3. The name of the author may not be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef TALK_P2P_BASE_CONSTANTS_H__
#define TALK_P2P_BASE_CONSTANTS_H__

#include <string>
#include "talk/xmllite/qname.h"

// This file contains constants related to signaling that are used in various
// classes in this directory.

namespace cricket {

extern const std::string NS_EMPTY;
extern const std::string NS_GOOGLE_SESSION;
#ifdef FEATURE_ENABLE_VOICEMAIL
extern const std::string NS_GOOGLE_VOICEMAIL;
#endif
extern const std::string NS_GOOGLE_PHONE;
extern const std::string NS_GOOGLE_VIDEO;

extern const buzz::QName QN_SESSION;

extern const buzz::QName QN_REDIRECT_TARGET;
extern const buzz::QName QN_REDIRECT_COOKIE;
extern const buzz::QName QN_REDIRECT_REGARDING;
#ifdef FEATURE_ENABLE_VOICEMAIL
extern const buzz::QName QN_VOICEMAIL_REGARDING;
#endif

extern const buzz::QName QN_INITIATOR;

extern const buzz::QName QN_PHONE_DESCRIPTION;
extern const buzz::QName QN_PHONE_PAYLOADTYPE;
extern const buzz::QName QN_PHONE_PAYLOADTYPE_ID;
extern const buzz::QName QN_PHONE_PAYLOADTYPE_NAME;
extern const buzz::QName QN_PHONE_PAYLOADTYPE_RATE;
extern const buzz::QName QN_PHONE_PAYLOADTYPE_BITRATE;
extern const buzz::QName QN_PHONE_PAYLOADTYPE_CHANNELS;
extern const buzz::QName QN_PHONE_SRCID;

extern const buzz::QName QN_VIDEO_DESCRIPTION;
extern const buzz::QName QN_VIDEO_PAYLOADTYPE;
extern const buzz::QName QN_VIDEO_PAYLOADTYPE_ID;
extern const buzz::QName QN_VIDEO_PAYLOADTYPE_NAME;
extern const buzz::QName QN_VIDEO_PAYLOADTYPE_WIDTH;
extern const buzz::QName QN_VIDEO_PAYLOADTYPE_HEIGHT;
extern const buzz::QName QN_VIDEO_PAYLOADTYPE_FRAMERATE;
extern const buzz::QName QN_VIDEO_SRCID;
extern const buzz::QName QN_VIDEO_BANDWIDTH;

extern const buzz::QName QN_ADDRESS;
extern const buzz::QName QN_PORT;
extern const buzz::QName QN_NETWORK;
extern const buzz::QName QN_GENERATION;
extern const buzz::QName QN_USERNAME;
extern const buzz::QName QN_PASSWORD;
extern const buzz::QName QN_PREFERENCE;
extern const buzz::QName QN_PROTOCOL;

// Legacy transport messages
extern const buzz::QName kQnLegacyCandidate;

}  // namespace cricket

#endif  // TALK_P2P_BASE_CONSTANTS_H__
