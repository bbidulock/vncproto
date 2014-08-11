/* Copyright (C) 2002-2005 RealVNC Ltd.  All Rights Reserved.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
 * USA.
 */

#ifndef _VNCPROTO_H_
#define _VNCPROTO_H_

#include <X11/extensions/vnc.h>

#define X_VncExtSetParam 0

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtSetParam */
  CARD16 length B16;
  CARD8 paramLen;
  CARD8 pad0;
  CARD16 pad1 B16;
} xVncExtSetParamReq;
#define sz_xVncExtSetParamReq 8

typedef struct {
 BYTE type; /* X_Reply */
 BYTE success;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD32 pad0 B32;
 CARD32 pad1 B32;
 CARD32 pad2 B32;
 CARD32 pad3 B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
} xVncExtSetParamReply;
#define sz_xVncExtSetParamReply 32


#define X_VncExtGetParam 1

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtGetParam */
  CARD16 length B16;
  CARD8 paramLen;
  CARD8 pad0;
  CARD16 pad1 B16;
} xVncExtGetParamReq;
#define sz_xVncExtGetParamReq 8

typedef struct {
 BYTE type; /* X_Reply */
 BYTE success;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD16 valueLen B16;
 CARD16 pad0 B16;
 CARD32 pad1 B32;
 CARD32 pad2 B32;
 CARD32 pad3 B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
} xVncExtGetParamReply;
#define sz_xVncExtGetParamReply 32


#define X_VncExtGetParamDesc 2

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtGetParamDesc */
  CARD16 length B16;
  CARD8 paramLen;
  CARD8 pad0;
  CARD16 pad1 B16;
} xVncExtGetParamDescReq;
#define sz_xVncExtGetParamDescReq 8

typedef struct {
 BYTE type; /* X_Reply */
 BYTE success;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD16 descLen B16;
 CARD16 pad0 B16;
 CARD32 pad1 B32;
 CARD32 pad2 B32;
 CARD32 pad3 B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
} xVncExtGetParamDescReply;
#define sz_xVncExtGetParamDescReply 32


#define X_VncExtListParams 3

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtListParams */
  CARD16 length B16;
} xVncExtListParamsReq;
#define sz_xVncExtListParamsReq 4

typedef struct {
 BYTE type; /* X_Reply */
 BYTE pad0;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD16 nParams B16;
 CARD16 pad1 B16;
 CARD32 pad2 B32;
 CARD32 pad3 B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
 CARD32 pad6 B32;
} xVncExtListParamsReply;
#define sz_xVncExtListParamsReply 32


#define X_VncExtSetServerCutText 4

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtSetServerCutText */
  CARD16 length B16;
  CARD32 textLen B32;
} xVncExtSetServerCutTextReq;
#define sz_xVncExtSetServerCutTextReq 8


#define X_VncExtGetClientCutText 5

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtGetClientCutText */
  CARD16 length B16;
} xVncExtGetClientCutTextReq;
#define sz_xVncExtGetClientCutTextReq 4

typedef struct {
 BYTE type; /* X_Reply */
 BYTE pad0;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD32 textLen B32;
 CARD32 pad1 B32;
 CARD32 pad2 B32;
 CARD32 pad3 B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
} xVncExtGetClientCutTextReply;
#define sz_xVncExtGetClientCutTextReply 32


#define X_VncExtSelectInput 6

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtSelectInput */
  CARD16 length B16;
  CARD32 window B32;
  CARD32 mask B32;
} xVncExtSelectInputReq;
#define sz_xVncExtSelectInputReq 12


#define X_VncExtConnect 7

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtConnect */
  CARD16 length B16;
  CARD8 strLen;
  CARD8 pad0;
  CARD16 pad1 B16;
} xVncExtConnectReq;
#define sz_xVncExtConnectReq 8

typedef struct {
 BYTE type; /* X_Reply */
 BYTE success;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD32 pad0 B32;
 CARD32 pad1 B32;
 CARD32 pad2 B32;
 CARD32 pad3 B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
} xVncExtConnectReply;
#define sz_xVncExtConnectReply 32


#define X_VncExtGetQueryConnect 8

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtGetQueryConnect */
  CARD16 length B16;
} xVncExtGetQueryConnectReq;
#define sz_xVncExtGetQueryConnectReq 4

typedef struct {
 BYTE type; /* X_Reply */
 BYTE pad0;
 CARD16 sequenceNumber B16;
 CARD32 length B32;
 CARD32 addrLen B32;
 CARD32 userLen B32;
 CARD32 timeout B32;
 CARD32 opaqueId B32;
 CARD32 pad4 B32;
 CARD32 pad5 B32;
} xVncExtGetQueryConnectReply;
#define sz_xVncExtGetQueryConnectReply 32


#define X_VncExtApproveConnect 9

typedef struct {
  CARD8 reqType;       /* always VncExtReqCode */
  CARD8 vncExtReqType; /* always VncExtApproveConnect */
  CARD16 length B16;
  CARD8 approve;
  CARD8 pad0;
  CARD16 pad1;
  CARD32 opaqueId B32;
} xVncExtApproveConnectReq;
#define sz_xVncExtApproveConnectReq 12



typedef struct {
  BYTE type;    /* always eventBase + VncExtClientCutTextNotify */
  BYTE pad0;
  CARD16 sequenceNumber B16;
  CARD32 window B32;
  CARD32 time B32;
  CARD32 pad1 B32;
  CARD32 pad2 B32;
  CARD32 pad3 B32;
  CARD32 pad4 B32;
  CARD32 pad5 B32;
} xVncExtClientCutTextNotifyEvent;
#define sz_xVncExtClientCutTextNotifyEvent 32

typedef struct {
  BYTE type;    /* always eventBase + VncExtSelectionChangeNotify */
  BYTE pad0;
  CARD16 sequenceNumber B16;
  CARD32 window B32;
  CARD32 selection B32;
  CARD32 pad1 B32;
  CARD32 pad2 B32;
  CARD32 pad3 B32;
  CARD32 pad4 B32;
  CARD32 pad5 B32;
} xVncExtSelectionChangeNotifyEvent;
#define sz_xVncExtSelectionChangeNotifyEvent 32

typedef struct {
  BYTE type;    /* always eventBase + VncExtQueryConnectNotify */
  BYTE pad0;
  CARD16 sequenceNumber B16;
  CARD32 window B32;
  CARD32 pad6 B32;
  CARD32 pad1 B32;
  CARD32 pad2 B32;
  CARD32 pad3 B32;
  CARD32 pad4 B32;
  CARD32 pad5 B32;
} xVncExtQueryConnectNotifyEvent;
#define sz_xVncExtQueryConnectNotifyEvent 32

#endif /* _VNCPROTO_H_ */
