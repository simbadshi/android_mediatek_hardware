/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */


{RIL_UNSOL_NEIGHBORING_CELL_INFO, responseStrings, WAKE_PARTIAL},   //0 in alps/hardware/ril/include/telephony/ril.h
{RIL_UNSOL_NETWORK_INFO, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_CALL_FORWARDING, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_CRSS_NOTIFICATION,responseCrssN, WAKE_PARTIAL},
{RIL_UNSOL_CALL_PROGRESS_INFO, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_PHB_READY_NOTIFICATION,responseInts, WAKE_PARTIAL},
{RIL_UNSOL_SPEECH_INFO, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_SIM_INSERTED_STATUS,responseInts, WAKE_PARTIAL},
{RIL_UNSOL_RADIO_TEMPORARILY_UNAVAILABLE, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_ME_SMS_STORAGE_FULL, responseVoid, WAKE_PARTIAL},
{RIL_UNSOL_SMS_READY_NOTIFICATION, responseVoid, WAKE_PARTIAL},     //10 in alps/hardware/ril/include/telephony/ril.h
{RIL_UNSOL_SCRI_RESULT, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_VT_STATUS_INFO, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_VT_RING_INFO, responseVoid, WAKE_PARTIAL},
{RIL_UNSOL_INCOMING_CALL_INDICATION, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_SIM_MISSING,responseInts, WAKE_PARTIAL},
{RIL_UNSOL_GPRS_DETACH, responseVoid, WAKE_PARTIAL},
//MTK-START [mtk04070][111213][ALPS00093395] ATCI for unsolicited response
{RIL_UNSOL_ATCI_RESPONSE, responseString, WAKE_PARTIAL},
//MTK-END [mtk04070][111213][ALPS00093395] ATCI for unsolicited response
{RIL_UNSOL_SIM_RECOVERY,responseInts, WAKE_PARTIAL},
{RIL_UNSOL_VIRTUAL_SIM_ON,responseInts, WAKE_PARTIAL},
{RIL_UNSOL_VIRTUAL_SIM_OFF,responseInts, WAKE_PARTIAL},
{RIL_UNSOL_INVALID_SIM, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_RESPONSE_PS_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
{RIL_UNSOL_RESPONSE_ACMT, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_EF_CSP_PLMN_MODE_BIT, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_IMEI_LOCK, responseVoid, WAKE_PARTIAL}, 
{RIL_UNSOL_RESPONSE_MMRR_STATUS_CHANGED, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_SIM_PLUG_OUT, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_SIM_PLUG_IN, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_RESPONSE_ETWS_NOTIFICATION, responseEtwsNotification, WAKE_PARTIAL},
{RIL_UNSOL_RESPONSE_PLMN_CHANGED, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_RESPONSE_REGISTRATION_SUSPENDED, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_STK_EVDL_CALL, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_DATA_PACKETS_FLUSH, responseInts, WAKE_PARTIAL},//Add for Modem indication of RB release.
{RIL_UNSOL_CIPHER_INDICATION, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_FEMTOCELL_INFO, responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_CNAP,responseStrings, WAKE_PARTIAL},
{RIL_UNSOL_STK_SETUP_MENU_RESET, responseVoid, WAKE_PARTIAL},
{RIL_UNSOL_APPLICATION_SESSION_ID_CHANGED, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_ECONF_SRVCC_INDICATION, responseInts, WAKE_PARTIAL},
{RIL_UNSOL_PSDM_DECISION_CHANGED, responseInts, WAKE_PARTIAL},//[MMDC]
{RIL_UNSOL_SPECIAL_BAND_CHANGED, responseInts, WAKE_PARTIAL},