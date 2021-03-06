#ifndef _CkEmail_H
#define _CkEmail_H
#include "Chilkat_C.h"

HCkEmail CkEmail_Create(void);
void CkEmail_Dispose(HCkEmail handle);
void CkEmail_getBody(HCkEmail handle, HCkString retval);
void CkEmail_putBody(HCkEmail handle, const char *newVal);
void CkEmail_getBounceAddress(HCkEmail handle, HCkString retval);
void CkEmail_putBounceAddress(HCkEmail handle, const char *newVal);
void CkEmail_getCharset(HCkEmail handle, HCkString retval);
void CkEmail_putCharset(HCkEmail handle, const char *newVal);
BOOL CkEmail_getDecrypted(HCkEmail handle);
void CkEmail_getEmailDate(HCkEmail handle, SYSTEMTIME *retval);
void CkEmail_putEmailDate(HCkEmail handle, SYSTEMTIME *newVal);
void CkEmail_getEncryptedBy(HCkEmail handle, HCkString retval);
void CkEmail_getFileDistList(HCkEmail handle, HCkString retval);
void CkEmail_putFileDistList(HCkEmail handle, const char *newVal);
void CkEmail_getFrom(HCkEmail handle, HCkString retval);
void CkEmail_putFrom(HCkEmail handle, const char *newVal);
void CkEmail_getFromAddress(HCkEmail handle, HCkString retval);
void CkEmail_putFromAddress(HCkEmail handle, const char *newVal);
void CkEmail_getFromName(HCkEmail handle, HCkString retval);
void CkEmail_putFromName(HCkEmail handle, const char *newVal);
void CkEmail_getHeader(HCkEmail handle, HCkString retval);
void CkEmail_getLanguage(HCkEmail handle, HCkString retval);
void CkEmail_getLastErrorHtml(HCkEmail handle, HCkString retval);
void CkEmail_getLastErrorText(HCkEmail handle, HCkString retval);
void CkEmail_getLastErrorXml(HCkEmail handle, HCkString retval);
void CkEmail_getLocalDate(HCkEmail handle, SYSTEMTIME *retval);
void CkEmail_putLocalDate(HCkEmail handle, SYSTEMTIME *newVal);
void CkEmail_getMailer(HCkEmail handle, HCkString retval);
void CkEmail_putMailer(HCkEmail handle, const char *newVal);
long CkEmail_getNumAlternatives(HCkEmail handle);
long CkEmail_getNumAttachedMessages(HCkEmail handle);
long CkEmail_getNumAttachments(HCkEmail handle);
long CkEmail_getNumBcc(HCkEmail handle);
long CkEmail_getNumCC(HCkEmail handle);
long CkEmail_getNumHeaderFields(HCkEmail handle);
long CkEmail_getNumRelatedItems(HCkEmail handle);
long CkEmail_getNumReplacePatterns(HCkEmail handle);
long CkEmail_getNumTo(HCkEmail handle);
BOOL CkEmail_getOverwriteExisting(HCkEmail handle);
void CkEmail_putOverwriteExisting(HCkEmail handle, BOOL newVal);
BOOL CkEmail_getReceivedEncrypted(HCkEmail handle);
BOOL CkEmail_getReceivedSigned(HCkEmail handle);
void CkEmail_getReplyTo(HCkEmail handle, HCkString retval);
void CkEmail_putReplyTo(HCkEmail handle, const char *newVal);
BOOL CkEmail_getReturnReceipt(HCkEmail handle);
void CkEmail_putReturnReceipt(HCkEmail handle, BOOL newVal);
BOOL CkEmail_getSendEncrypted(HCkEmail handle);
void CkEmail_putSendEncrypted(HCkEmail handle, BOOL newVal);
BOOL CkEmail_getSendSigned(HCkEmail handle);
void CkEmail_putSendSigned(HCkEmail handle, BOOL newVal);
BOOL CkEmail_getSignaturesValid(HCkEmail handle);
void CkEmail_getSignedBy(HCkEmail handle, HCkString retval);
long CkEmail_getSize(HCkEmail handle);
void CkEmail_getSubject(HCkEmail handle, HCkString retval);
void CkEmail_putSubject(HCkEmail handle, const char *newVal);
void CkEmail_getUidl(HCkEmail handle, HCkString retval);
BOOL CkEmail_getUtf8(HCkEmail handle);
void CkEmail_putUtf8(HCkEmail handle, BOOL newVal);
void CkEmail_AddAttachmentHeader(HCkEmail handle, int index, const char *fieldName, const char *fieldValue);
BOOL CkEmail_AddBcc(HCkEmail handle, const char *friendlyName, const char *emailAddress);
BOOL CkEmail_AddCC(HCkEmail handle, const char *friendlyName, const char *emailAddress);
BOOL CkEmail_AddDataAttachment(HCkEmail handle, const char *fileName, const unsigned char *data, unsigned long dataLen);
BOOL CkEmail_AddDataAttachment2(HCkEmail handle, const char *fileName, HCkByteData content, const char *contentType);
BOOL CkEmail_AddFileAttachment(HCkEmail handle, const char *fileName, HCkString strContentType);
BOOL CkEmail_AddFileAttachment2(HCkEmail handle, const char *fileName, const char *contentType);
void CkEmail_AddHeaderField(HCkEmail handle, const char *fieldName, const char *fieldValue);
BOOL CkEmail_AddHtmlAlternativeBody(HCkEmail handle, const char *body);
BOOL CkEmail_AddMultipleBcc(HCkEmail handle, const char *commaSeparatedAddresses);
BOOL CkEmail_AddMultipleCC(HCkEmail handle, const char *commaSeparatedAddresses);
BOOL CkEmail_AddMultipleTo(HCkEmail handle, const char *commaSeparatedAddresses);
BOOL CkEmail_AddPlainTextAlternativeBody(HCkEmail handle, const char *body);
BOOL CkEmail_AddRelatedData(HCkEmail handle, const char *nameInHtml, const unsigned char *data, unsigned long dataLen, HCkString strContentId);
void CkEmail_AddRelatedData2(HCkEmail handle, const unsigned char *data, unsigned long dataLen, const char *fileNameInHtml);
BOOL CkEmail_AddRelatedFile(HCkEmail handle, const char *fileName, HCkString strContentID);
BOOL CkEmail_AddRelatedFile2(HCkEmail handle, const char *fileNameOnDisk, const char *filenameInHtml);
BOOL CkEmail_AddRelatedString(HCkEmail handle, const char *nameInHtml, const char *str, const char *charset, HCkString cid);
void CkEmail_AddRelatedString2(HCkEmail handle, const char *str, const char *charset, const char *filenameInHtml);
BOOL CkEmail_AddStringAttachment(HCkEmail handle, const char *fileName, const char *str);
BOOL CkEmail_AddStringAttachment2(HCkEmail handle, const char *fileName, const char *str, const char *charset);
BOOL CkEmail_AddTo(HCkEmail handle, const char *friendlyName, const char *emailAddress);
BOOL CkEmail_AesDecrypt(HCkEmail handle, const char *password);
BOOL CkEmail_AesEncrypt(HCkEmail handle, const char *password);
void CkEmail_AppendToBody(HCkEmail handle, const char *str);
BOOL CkEmail_AspUnpack(HCkEmail handle, const char *prefix, const char *saveDir, const char *urlPath, BOOL cleanFiles);
BOOL CkEmail_AspUnpack2(HCkEmail handle, const char *prefix, const char *saveDir, const char *urlPath, BOOL cleanFiles, HCkByteData outHtml);
BOOL CkEmail_AttachMessage(HCkEmail handle, HCkByteData mimeBytes);
BOOL CkEmail_BEncodeBytes(HCkEmail handle, const unsigned char *data, unsigned long dataLen, const char *charset, HCkString encodedStr);
BOOL CkEmail_BEncodeString(HCkEmail handle, const char *str, const char *charset, HCkString encodedStr);
void CkEmail_ClearBcc(HCkEmail handle);
void CkEmail_ClearCC(HCkEmail handle);
void CkEmail_ClearTo(HCkEmail handle);
HCkEmail CkEmail_Clone(HCkEmail handle);
BOOL CkEmail_ComputeGlobalKey(HCkEmail handle, const char *encoding, BOOL bFold, HCkString outStr);
HCkEmail CkEmail_CreateForward(HCkEmail handle);
HCkEmail CkEmail_CreateReply(HCkEmail handle);
BOOL CkEmail_CreateTempMht(HCkEmail handle, const char *inFilename, HCkString tempMhtFilenameInOut);
void CkEmail_DropAttachments(HCkEmail handle);
void CkEmail_DropRelatedItem(HCkEmail handle, long index);
void CkEmail_DropRelatedItems(HCkEmail handle);
BOOL CkEmail_DropSingleAttachment(HCkEmail handle, long index);
void CkEmail_GenerateFilename(HCkEmail handle, HCkString strFilename);
BOOL CkEmail_GetAltHeaderField(HCkEmail handle, int index, const char *fieldName, HCkString outStr);
BOOL CkEmail_GetAlternativeBody(HCkEmail handle, long index, HCkString strBody);
BOOL CkEmail_GetAlternativeContentType(HCkEmail handle, long index, HCkString strContentType);
HCkEmail CkEmail_GetAttachedMessage(HCkEmail handle, long index);
BOOL CkEmail_GetAttachedMessageFilename(HCkEmail handle, int index, HCkString outStr);
BOOL CkEmail_GetAttachmentContentID(HCkEmail handle, long index, HCkString strContentID);
BOOL CkEmail_GetAttachmentContentType(HCkEmail handle, long index, HCkString strContentType);
BOOL CkEmail_GetAttachmentData(HCkEmail handle, long index, HCkByteData buffer);
BOOL CkEmail_GetAttachmentFilename(HCkEmail handle, long index, HCkString strFilename);
BOOL CkEmail_GetAttachmentHeader(HCkEmail handle, long index, const char *fieldName, HCkString fieldValue);
long CkEmail_GetAttachmentSize(HCkEmail handle, long index);
BOOL CkEmail_GetAttachmentString(HCkEmail handle, long index, const char *charset, HCkString str);
BOOL CkEmail_GetAttachmentStringCrLf(HCkEmail handle, long index, const char *charset, HCkString strData);
BOOL CkEmail_GetBcc(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetBccAddr(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetBccName(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetCC(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetCcAddr(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetCcName(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetDeliveryStatusInfo(HCkEmail handle, const char *fieldName, HCkString fieldValue);
HCkStringArray CkEmail_GetDsnFinalRecipients(HCkEmail handle);
HCkCert CkEmail_GetEncryptCert(HCkEmail handle);
HCkCert CkEmail_GetEncryptedByCert(HCkEmail handle);
BOOL CkEmail_GetFileContent(HCkEmail handle, const char *filename, HCkByteData bData);
BOOL CkEmail_GetHeaderField(HCkEmail handle, const char *fieldName, HCkString strFieldData);
BOOL CkEmail_GetHeaderFieldName(HCkEmail handle, long index, HCkString strFieldName);
BOOL CkEmail_GetHeaderFieldValue(HCkEmail handle, long index, HCkString strFieldValue);
BOOL CkEmail_GetHtmlBody(HCkEmail handle, HCkString strBody);
int CkEmail_GetImapUid(HCkEmail handle);
void CkEmail_GetLinkedDomains(HCkEmail handle, HCkStringArray array);
BOOL CkEmail_GetMbHeaderField(HCkEmail handle, const char *fieldName, HCkByteData fieldData);
BOOL CkEmail_GetMbHeaderField2(HCkEmail handle, const char *charset, const char *fieldName, HCkByteData fieldData);
BOOL CkEmail_GetMbHtmlBody(HCkEmail handle, const char *charset, HCkByteData data);
BOOL CkEmail_GetMbPlainTextBody(HCkEmail handle, const char *charset, HCkByteData data);
void CkEmail_GetMime(HCkEmail handle, HCkString strMime);
void CkEmail_GetMimeBinary(HCkEmail handle, HCkByteData outBytes);
HCkMime CkEmail_GetMimeObject(HCkEmail handle);
BOOL CkEmail_GetPlainTextBody(HCkEmail handle, HCkString strBody);
BOOL CkEmail_GetRelatedContentID(HCkEmail handle, long index, HCkString strContentID);
BOOL CkEmail_GetRelatedContentLocation(HCkEmail handle, int index, HCkString outStr);
BOOL CkEmail_GetRelatedContentType(HCkEmail handle, long index, HCkString strContentType);
BOOL CkEmail_GetRelatedData(HCkEmail handle, long index, HCkByteData buffer);
BOOL CkEmail_GetRelatedFilename(HCkEmail handle, long index, HCkString strFilename);
BOOL CkEmail_GetRelatedString(HCkEmail handle, long index, const char *charset, HCkString strData);
BOOL CkEmail_GetRelatedStringCrLf(HCkEmail handle, long index, const char *charset, HCkString str);
BOOL CkEmail_GetReplacePattern(HCkEmail handle, long index, HCkString strPattern);
BOOL CkEmail_GetReplaceString(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetReplaceString2(HCkEmail handle, const char *pattern, HCkString str);
HCkCert CkEmail_GetSignedByCert(HCkEmail handle);
HCkCert CkEmail_GetSigningCert(HCkEmail handle);
BOOL CkEmail_GetTo(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetToAddr(HCkEmail handle, long index, HCkString str);
BOOL CkEmail_GetToName(HCkEmail handle, long index, HCkString str);
void CkEmail_GetXml(HCkEmail handle, HCkString strXml);
BOOL CkEmail_HasHeaderMatching(HCkEmail handle, const char *fieldName, const char *valuePattern, BOOL caseInsensitive);
BOOL CkEmail_HasHtmlBody(HCkEmail handle);
BOOL CkEmail_HasPlainTextBody(HCkEmail handle);
BOOL CkEmail_IsMultipartReport(HCkEmail handle);
BOOL CkEmail_LoadEml(HCkEmail handle, const char *mimeFilename);
BOOL CkEmail_LoadXml(HCkEmail handle, const char *xmlFilename);
BOOL CkEmail_LoadXmlString(HCkEmail handle, const char *xmlStr);
BOOL CkEmail_QEncodeBytes(HCkEmail handle, const unsigned char *data, unsigned long dataLen, const char *charset, HCkString encodedStr);
BOOL CkEmail_QEncodeString(HCkEmail handle, const char *str, const char *charset, HCkString encodedStr);
void CkEmail_RemoveAttachedMessage(HCkEmail handle, long index);
void CkEmail_RemoveAttachedMessages(HCkEmail handle);
void CkEmail_RemoveAttachmentPaths(HCkEmail handle);
void CkEmail_RemoveHeaderField(HCkEmail handle, const char *fieldName);
BOOL CkEmail_SaveAllAttachments(HCkEmail handle, const char *directory);
BOOL CkEmail_SaveAttachedFile(HCkEmail handle, long index, const char *directory);
BOOL CkEmail_SaveEml(HCkEmail handle, const char *filename);
BOOL CkEmail_SaveLastError(HCkEmail handle, const char *filename);
BOOL CkEmail_SaveRelatedItem(HCkEmail handle, long index, const char *directory);
BOOL CkEmail_SaveXml(HCkEmail handle, const char *filename);
BOOL CkEmail_SetAttachmentCharset(HCkEmail handle, int index, const char *charset);
BOOL CkEmail_SetAttachmentFilename(HCkEmail handle, long index, const char *filename);
BOOL CkEmail_SetCSP(HCkEmail handle, HCkCSP csp);
BOOL CkEmail_SetEncryptCert(HCkEmail handle, HCkCert cert);
BOOL CkEmail_SetFromMimeObject(HCkEmail handle, HCkMime mime);
BOOL CkEmail_SetFromMimeText(HCkEmail handle, const char *mimeText);
BOOL CkEmail_SetFromMimeText2(HCkEmail handle, const char *mimeText, int numBytes);
BOOL CkEmail_SetFromXmlText(HCkEmail handle, const char *xmlStr);
void CkEmail_SetHtmlBody(HCkEmail handle, const char *html);
BOOL CkEmail_SetMbHtmlBody(HCkEmail handle, const char *charset, const unsigned char *data, unsigned long dataLen);
BOOL CkEmail_SetMbPlainTextBody(HCkEmail handle, const char *charset, const unsigned char *data, unsigned long dataLen);
BOOL CkEmail_SetReplacePattern(HCkEmail handle, const char *pattern, const char *replaceString);
BOOL CkEmail_SetSigningCert(HCkEmail handle, HCkCert cert);
BOOL CkEmail_SetSigningCert2(HCkEmail handle, HCkCert cert, HCkPrivateKey key);
void CkEmail_SetTextBody(HCkEmail handle, const char *bodyText, const char *contentType);
BOOL CkEmail_UidlEquals(HCkEmail handle, HCkEmail e);
void CkEmail_UnSpamify(HCkEmail handle);
BOOL CkEmail_UnlockComponent(HCkEmail handle, const char *unlockCode);
BOOL CkEmail_UnpackHtml(HCkEmail handle, const char *unpackDir, const char *htmlFilename, const char *partsSubdir);
BOOL CkEmail_UnzipAttachments(HCkEmail handle);
BOOL CkEmail_ZipAttachments(HCkEmail handle, const char *zipFilename);
const char *CkEmail_addFileAttachment(HCkEmail handle, const char *fileName);
const char *CkEmail_addRelatedFile(HCkEmail handle, const char *fileName);
const char *CkEmail_addRelatedString(HCkEmail handle, const char *nameInHtml, const char *str, const char *charset);
const char *CkEmail_bEncodeBytes(HCkEmail handle, const unsigned char *data, unsigned long dataLen, const char *charset);
const char *CkEmail_bEncodeString(HCkEmail handle, const char *str, const char *charset);
const char *CkEmail_body(HCkEmail handle);
const char *CkEmail_bounceAddress(HCkEmail handle);
const char *CkEmail_charset(HCkEmail handle);
const char *CkEmail_ck_from(HCkEmail handle);
const char *CkEmail_computeGlobalKey(HCkEmail handle, const char *encoding, BOOL bFold);
const char *CkEmail_createTempMht(HCkEmail handle, const char *inFilename);
const char *CkEmail_encryptedBy(HCkEmail handle);
const char *CkEmail_fileDistList(HCkEmail handle);
const char *CkEmail_fromAddress(HCkEmail handle);
const char *CkEmail_fromName(HCkEmail handle);
const char *CkEmail_generateFilename(HCkEmail handle);
const char *CkEmail_getAltHeaderField(HCkEmail handle, int index, const char *fieldName);
const char *CkEmail_getAlternativeBody(HCkEmail handle, long index);
const char *CkEmail_getAlternativeContentType(HCkEmail handle, long index);
const char *CkEmail_getAttachedMessageFilename(HCkEmail handle, int index);
const char *CkEmail_getAttachmentContentID(HCkEmail handle, long index);
const char *CkEmail_getAttachmentContentType(HCkEmail handle, long index);
const char *CkEmail_getAttachmentFilename(HCkEmail handle, long index);
const char *CkEmail_getAttachmentHeader(HCkEmail handle, long index, const char *fieldName);
const char *CkEmail_getAttachmentString(HCkEmail handle, long index, const char *charset);
const char *CkEmail_getAttachmentStringCrLf(HCkEmail handle, long index, const char *charset);
const char *CkEmail_getBcc(HCkEmail handle, long index);
const char *CkEmail_getBccAddr(HCkEmail handle, long index);
const char *CkEmail_getBccName(HCkEmail handle, long index);
const char *CkEmail_getCC(HCkEmail handle, long index);
const char *CkEmail_getCcAddr(HCkEmail handle, long index);
const char *CkEmail_getCcName(HCkEmail handle, long index);
const char *CkEmail_getDeliveryStatusInfo(HCkEmail handle, const char *fieldName);
const char *CkEmail_getHeaderField(HCkEmail handle, const char *fieldName);
const char *CkEmail_getHeaderFieldName(HCkEmail handle, long index);
const char *CkEmail_getHeaderFieldValue(HCkEmail handle, long index);
const char *CkEmail_getHtmlBody(HCkEmail handle);
const char *CkEmail_getMime(HCkEmail handle);
const char *CkEmail_getPlainTextBody(HCkEmail handle);
const char *CkEmail_getRelatedContentID(HCkEmail handle, long index);
const char *CkEmail_getRelatedContentLocation(HCkEmail handle, int index);
const char *CkEmail_getRelatedContentType(HCkEmail handle, long index);
const char *CkEmail_getRelatedFilename(HCkEmail handle, long index);
const char *CkEmail_getRelatedString(HCkEmail handle, long index, const char *charset);
const char *CkEmail_getRelatedStringCrLf(HCkEmail handle, long index, const char *charset);
const char *CkEmail_getReplacePattern(HCkEmail handle, long index);
const char *CkEmail_getReplaceString(HCkEmail handle, long index);
const char *CkEmail_getReplaceString2(HCkEmail handle, const char *pattern);
const char *CkEmail_getTo(HCkEmail handle, long index);
const char *CkEmail_getToAddr(HCkEmail handle, long index);
const char *CkEmail_getToName(HCkEmail handle, long index);
const char *CkEmail_getXml(HCkEmail handle);
const char *CkEmail_header(HCkEmail handle);
const char *CkEmail_language(HCkEmail handle);
const char *CkEmail_lastErrorHtml(HCkEmail handle);
const char *CkEmail_lastErrorText(HCkEmail handle);
const char *CkEmail_lastErrorXml(HCkEmail handle);
const char *CkEmail_mailer(HCkEmail handle);
const char *CkEmail_qEncodeBytes(HCkEmail handle, const unsigned char *data, unsigned long dataLen, const char *charset);
const char *CkEmail_qEncodeString(HCkEmail handle, const char *str, const char *charset);
const char *CkEmail_replyTo(HCkEmail handle);
const char *CkEmail_signedBy(HCkEmail handle);
const char *CkEmail_subject(HCkEmail handle);
const char *CkEmail_uidl(HCkEmail handle);
#endif
