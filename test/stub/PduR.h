/**
 * @file PduR.h
 * @author Guillaume Sottas
 * @date 15/01/2018
 */

#ifndef PDUR_H
#define PDUR_H

#ifdef __cplusplus

extern "C"
{

#endif /* ifdef __cplusplus */

#ifndef COMSTACK_TYPES_H
#include "ComStack_Types.h"
#endif /* #ifndef COMSTACK_TYPES_H */

extern void PduR_CanTpRxIndication(PduIdType rxPduId, Std_ReturnType result);

extern void PduR_CanTpTxConfirmation(PduIdType txPduId, Std_ReturnType result);

extern BufReq_ReturnType PduR_CanTpCopyRxData(PduIdType rxPduId,
                                              const PduInfoType *pPduInfo,
                                              PduLengthType *pBuffer);

extern BufReq_ReturnType PduR_CanTpCopyTxData(PduIdType txPduId,
                                              const PduInfoType *pPduInfo,
                                              const RetryInfoType *pRetryInfo,
                                              PduLengthType *pAvailableData);

extern BufReq_ReturnType PduR_CanTpStartOfReception(PduIdType pduId,
                                                    const PduInfoType *pPduInfo,
                                                    PduLengthType tpSduLength,
                                                    PduLengthType *pBufferSize);

#ifdef __cplusplus

}

#endif /* ifdef __cplusplus */

#endif /* define PDUR_H */
