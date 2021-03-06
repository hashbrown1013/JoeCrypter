#ifndef _NCRYPT_H
#define _NCRYPT_H

/* Cryptographic API definitions */

#if defined(WIN32_DEFAULT_LIBS)
#pragma comment(lib, "ncrypt.lib")
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef WINAPI
#define WINAPI __stdcall
#endif

#ifndef __SECSTATUS_DEFINED__
typedef LONG SECURITY_STATUS;
#define __SECSTATUS_DEFINED__
#endif

#include <bcrypt.h>

#define MS_KEY_STORAGE_PROVIDER  L"Microsoft Software Key Storage Provider"
#define MS_SMART_CARD_KEY_STORAGE_PROVIDER  L"Microsoft Smart Card Key Storage Provider"

#define NCRYPT_RSA_ALGORITHM  BCRYPT_RSA_ALGORITHM
#define NCRYPT_RSA_SIGN_ALGORITHM  BCRYPT_RSA_SIGN_ALGORITHM
#define NCRYPT_DH_ALGORITHM  BCRYPT_DH_ALGORITHM
#define NCRYPT_DSA_ALGORITHM  BCRYPT_DSA_ALGORITHM
#define NCRYPT_MD2_ALGORITHM  BCRYPT_MD2_ALGORITHM
#define NCRYPT_MD4_ALGORITHM  BCRYPT_MD4_ALGORITHM
#define NCRYPT_MD5_ALGORITHM  BCRYPT_MD5_ALGORITHM
#define NCRYPT_SHA1_ALGORITHM  BCRYPT_SHA1_ALGORITHM
#define NCRYPT_SHA256_ALGORITHM  BCRYPT_SHA256_ALGORITHM
#define NCRYPT_SHA384_ALGORITHM  BCRYPT_SHA384_ALGORITHM
#define NCRYPT_SHA512_ALGORITHM  BCRYPT_SHA512_ALGORITHM
#define NCRYPT_ECDSA_P256_ALGORITHM  BCRYPT_ECDSA_P256_ALGORITHM
#define NCRYPT_ECDSA_P384_ALGORITHM  BCRYPT_ECDSA_P384_ALGORITHM
#define NCRYPT_ECDSA_P521_ALGORITHM  BCRYPT_ECDSA_P521_ALGORITHM
#define NCRYPT_ECDH_P256_ALGORITHM  BCRYPT_ECDH_P256_ALGORITHM
#define NCRYPT_ECDH_P384_ALGORITHM  BCRYPT_ECDH_P384_ALGORITHM
#define NCRYPT_ECDH_P521_ALGORITHM  BCRYPT_ECDH_P521_ALGORITHM

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_AES_ALGORITHM  BCRYPT_AES_ALGORITHM
#define NCRYPT_RC2_ALGORITHM  BCRYPT_RC2_ALGORITHM
#define NCRYPT_3DES_ALGORITHM  BCRYPT_3DES_ALGORITHM
#define NCRYPT_DES_ALGORITHM  BCRYPT_DES_ALGORITHM
#define NCRYPT_DESX_ALGORITHM  BCRYPT_DESX_ALGORITHM
#define NCRYPT_3DES_112_ALGORITHM  BCRYPT_3DES_112_ALGORITHM

#define NCRYPT_SP800108_CTR_HMAC_ALGORITHM  BCRYPT_SP800108_CTR_HMAC_ALGORITHM
#define NCRYPT_SP80056A_CONCAT_ALGORITHM  BCRYPT_SP80056A_CONCAT_ALGORITHM
#define NCRYPT_PBKDF2_ALGORITHM  BCRYPT_PBKDF2_ALGORITHM
#define NCRYPT_CAPI_KDF_ALGORITHM  BCRYPT_CAPI_KDF_ALGORITHM
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPT_KEY_STORAGE_ALGORITHM  L"KEY_STORAGE"

#define NCRYPT_CIPHER_INTERFACE  BCRYPT_CIPHER_INTERFACE
#define NCRYPT_HASH_INTERFACE  BCRYPT_HASH_INTERFACE
#define NCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE  BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE
#define NCRYPT_SECRET_AGREEMENT_INTERFACE  BCRYPT_SECRET_AGREEMENT_INTERFACE
#define NCRYPT_SIGNATURE_INTERFACE  BCRYPT_SIGNATURE_INTERFACE
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_KEY_DERIVATION_INTERFACE  BCRYPT_KEY_DERIVATION_INTERFACE
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPT_KEY_STORAGE_INTERFACE  0x00010001
#define NCRYPT_SCHANNEL_INTERFACE  0x00010002
#define NCRYPT_SCHANNEL_SIGNATURE_INTERFACE  0x00010003
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_KEY_PROTECTION_INTERFACE  0x00010004
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPT_RSA_ALGORITHM_GROUP  NCRYPT_RSA_ALGORITHM
#define NCRYPT_DH_ALGORITHM_GROUP  NCRYPT_DH_ALGORITHM
#define NCRYPT_DSA_ALGORITHM_GROUP  NCRYPT_DSA_ALGORITHM
#define NCRYPT_ECDSA_ALGORITHM_GROUP  L"ECDSA"
#define NCRYPT_ECDH_ALGORITHM_GROUP  L"ECDH"

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_AES_ALGORITHM_GROUP  NCRYPT_AES_ALGORITHM
#define NCRYPT_RC2_ALGORITHM_GROUP  NCRYPT_RC2_ALGORITHM
#define NCRYPT_DES_ALGORITHM_GROUP  L"DES"
#define NCRYPT_KEY_DERIVATION_GROUP  L"KEY_DERIVATION"
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPTBUFFER_VERSION  0

#define NCRYPTBUFFER_EMPTY  0
#define NCRYPTBUFFER_DATA  1
#define NCRYPTBUFFER_SSL_CLIENT_RANDOM  20
#define NCRYPTBUFFER_SSL_SERVER_RANDOM  21
#define NCRYPTBUFFER_SSL_HIGHEST_VERSION  22
#define NCRYPTBUFFER_SSL_CLEAR_KEY  23
#define NCRYPTBUFFER_SSL_KEY_ARG_DATA  24

#define NCRYPTBUFFER_PKCS_OID  40
#define NCRYPTBUFFER_PKCS_ALG_OID  41
#define NCRYPTBUFFER_PKCS_ALG_PARAM  42
#define NCRYPTBUFFER_PKCS_ALG_ID  43
#define NCRYPTBUFFER_PKCS_ATTRS  44
#define NCRYPTBUFFER_PKCS_KEY_NAME  45
#define NCRYPTBUFFER_PKCS_SECRET  46

#define NCRYPTBUFFER_CERT_BLOB  47

#define NCRYPT_NO_PADDING_FLAG  0x00000001
#define NCRYPT_PAD_PKCS1_FLAG  0x00000002
#define NCRYPT_PAD_OAEP_FLAG  0x00000004
#define NCRYPT_PAD_PSS_FLAG  0x00000008
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_PAD_CIPHER_FLAG  0x00000010
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPT_REGISTER_NOTIFY_FLAG  0x00000001
#define NCRYPT_UNREGISTER_NOTIFY_FLAG  0x00000002
#define NCRYPT_NO_KEY_VALIDATION  BCRYPT_NO_KEY_VALIDATION
#define NCRYPT_MACHINE_KEY_FLAG  0x00000020
#define NCRYPT_SILENT_FLAG  0x00000040
#define NCRYPT_OVERWRITE_KEY_FLAG  0x00000080
#define NCRYPT_WRITE_KEY_TO_LEGACY_STORE_FLAG  0x00000200
#define NCRYPT_DO_NOT_FINALIZE_FLAG  0x00000400
#define NCRYPT_EXPORT_LEGACY_FLAG  0x00000800
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
#define NCRYPT_IGNORE_DEVICE_STATE_FLAG  0x00001000
#endif /* NTDDI_VERSION >= NTDDI_WINBLUE */
#define NCRYPT_PERSIST_ONLY_FLAG  0x40000000
#define NCRYPT_PERSIST_FLAG  0x80000000

#define NCRYPT_CIPHER_OPERATION  BCRYPT_CIPHER_OPERATION
#define NCRYPT_HASH_OPERATION  BCRYPT_HASH_OPERATION
#define NCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION  BCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION
#define NCRYPT_SECRET_AGREEMENT_OPERATION  BCRYPT_SECRET_AGREEMENT_OPERATION
#define NCRYPT_SIGNATURE_OPERATION  BCRYPT_SIGNATURE_OPERATION
#define NCRYPT_RNG_OPERATION  BCRYPT_RNG_OPERATION
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_KEY_DERIVATION_OPERATION  BCRYPT_KEY_DERIVATION_OPERATION
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPT_MACHINE_KEY_FLAG  0x00000020

#define NCRYPT_MACHINE_KEY_FLAG  0x00000020
#define NCRYPT_SILENT_FLAG  0x00000040

#define NCRYPT_MACHINE_KEY_FLAG  0x00000020
#define NCRYPT_OVERWRITE_KEY_FLAG  0x00000080

/* Standard property names */
#define NCRYPT_NAME_PROPERTY  L"Name"
#define NCRYPT_UNIQUE_NAME_PROPERTY  L"Unique Name"
#define NCRYPT_ALGORITHM_PROPERTY  L"Algorithm Name"
#define NCRYPT_LENGTH_PROPERTY  L"Length"
#define NCRYPT_LENGTHS_PROPERTY  L"Lengths"
#define NCRYPT_BLOCK_LENGTH_PROPERTY  L"Block Length"
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_CHAINING_MODE_PROPERTY  L"Chaining Mode"
#define NCRYPT_AUTH_TAG_LENGTH  L"AuthTagLength"
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */
#define NCRYPT_UI_POLICY_PROPERTY  L"UI Policy"
#define NCRYPT_EXPORT_POLICY_PROPERTY  L"Export Policy"
#define NCRYPT_WINDOW_HANDLE_PROPERTY  L"HWND Handle"
#define NCRYPT_USE_CONTEXT_PROPERTY  L"Use Context"
#define NCRYPT_IMPL_TYPE_PROPERTY  L"Impl Type"
#define NCRYPT_KEY_USAGE_PROPERTY  L"Key Usage"
#define NCRYPT_KEY_TYPE_PROPERTY  L"Key Type"
#define NCRYPT_VERSION_PROPERTY  L"Version"
#define NCRYPT_SECURITY_DESCR_SUPPORT_PROPERTY  L"Security Descr Support"
#define NCRYPT_SECURITY_DESCR_PROPERTY  L"Security Descr"
#define NCRYPT_USE_COUNT_ENABLED_PROPERTY  L"Enabled Use Count"
#define NCRYPT_USE_COUNT_PROPERTY  L"Use Count"
#define NCRYPT_LAST_MODIFIED_PROPERTY  L"Modified"
#define NCRYPT_MAX_NAME_LENGTH_PROPERTY  L"Max Name Length"
#define NCRYPT_ALGORITHM_GROUP_PROPERTY  L"Algorithm Group"
#define NCRYPT_DH_PARAMETERS_PROPERTY  BCRYPT_DH_PARAMETERS
#define NCRYPT_PROVIDER_HANDLE_PROPERTY  L"Provider Handle"
#define NCRYPT_PIN_PROPERTY  L"SmartCardPin"
#define NCRYPT_READER_PROPERTY  L"SmartCardReader"
#define NCRYPT_SMARTCARD_GUID_PROPERTY  L"SmartCardGuid"
#define NCRYPT_CERTIFICATE_PROPERTY  L"SmartCardKeyCertificate"
#define NCRYPT_PIN_PROMPT_PROPERTY  L"SmartCardPinPrompt"
#define NCRYPT_USER_CERTSTORE_PROPERTY  L"SmartCardUserCertStore"
#define NCRYPT_ROOT_CERTSTORE_PROPERTY  L"SmartcardRootCertStore"
#define NCRYPT_SECURE_PIN_PROPERTY  L"SmartCardSecurePin"
#define NCRYPT_ASSOCIATED_ECDH_KEY  L"SmartCardAssociatedECDHKey"
#define NCRYPT_SCARD_PIN_ID  L"SmartCardPinId"
#define NCRYPT_SCARD_PIN_INFO  L"SmartCardPinInfo"

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NCRYPT_READER_ICON_PROPERTY  L"SmartCardReaderIcon"
#define NCRYPT_KDF_SECRET_VALUE  L"KDFKeySecret" 

#define NCRYPT_PCP_PLATFORM_TYPE_PROPERTY  L"PCP_PLATFORM_TYPE"
#define NCRYPT_PCP_PROVIDER_VERSION_PROPERTY  L"PCP_PROVIDER_VERSION"
#define NCRYPT_PCP_EKPUB_PROPERTY  L"PCP_EKPUB"
#define NCRYPT_PCP_EKCERT_PROPERTY  L"PCP_EKCERT"
#define NCRYPT_PCP_EKNVCERT_PROPERTY  L"PCP_EKNVCERT"
#define NCRYPT_PCP_SRKPUB_PROPERTY  L"PCP_SRKPUB"
#define NCRYPT_PCP_PCRTABLE_PROPERTY  L"PCP_PCRTABLE"
#define NCRYPT_PCP_CHANGEPASSWORD_PROPERTY  L"PCP_CHANGEPASSWORD"
#define NCRYPT_PCP_PASSWORD_REQUIRED_PROPERTY  L"PCP_PASSWORD_REQUIRED"
#define NCRYPT_PCP_USAGEAUTH_PROPERTY  L"PCP_USAGEAUTH"
#define NCRYPT_PCP_MIGRATIONPASSWORD_PROPERTY  L"PCP_MIGRATIONPASSWORD"
#define NCRYPT_PCP_EXPORT_ALLOWED_PROPERTY  L"PCP_EXPORT_ALLOWED"
#define NCRYPT_PCP_STORAGEPARENT_PROPERTY  L"PCP_STORAGEPARENT"
#define NCRYPT_PCP_PROVIDERHANDLE_PROPERTY  L"PCP_PROVIDERMHANDLE"
#define NCRYPT_PCP_PLATFORMHANDLE_PROPERTY  L"PCP_PLATFORMHANDLE"
#define NCRYPT_PCP_PLATFORM_BINDING_PCRMASK_PROPERTY  L"PCP_PLATFORM_BINDING_PCRMASK"
#define NCRYPT_PCP_PLATFORM_BINDING_PCRDIGESTLIST_PROPERTY  L"PCP_PLATFORM_BINDING_PCRDIGESTLIST"
#define NCRYPT_PCP_PLATFORM_BINDING_PCRDIGEST_PROPERTY  L"PCP_PLATFORM_BINDING_PCRDIGEST"
#define NCRYPT_PCP_KEY_USAGE_POLICY_PROPERTY  L"PCP_KEY_USAGE_POLICY"
#define NCRYPT_PCP_TPM12_IDBINDING_PROPERTY  L"PCP_TPM12_IDBINDING"
#define NCRYPT_PCP_TPM12_IDBINDING_DYNAMIC_PROPERTY  L"PCP_TPM12_IDBINDING_DYNAMIC"
#define NCRYPT_PCP_TPM12_IDACTIVATION_PROPERTY  L"PCP_TPM12_IDACTIVATION"
#define NCRYPT_PCP_KEYATTESTATION_PROPERTY  L"PCP_TPM12_KEYATTESTATION"
#define NCRYPT_PCP_ALTERNATE_KEY_STORAGE_LOCATION_PROPERTY  L"PCP_ALTERNATE_KEY_STORAGE_LOCATION"

#define NCRYPT_TPM12_PROVIDER  0x00010000
#define NCRYPT_PCP_SIGNATURE_KEY  0x00000001
#define NCRYPT_PCP_ENCRYPTION_KEY  0x00000002
#define NCRYPT_PCP_GENERIC_KEY  (NCRYPT_PCP_SIGNATURE_KEY|NCRYPT_PCP_ENCRYPTION_KEY)
#define NCRYPT_PCP_STORAGE_KEY  0x00000004
#define NCRYPT_PCP_IDENTITY_KEY  0x00000008

#define NCRYPT_INITIALIZATION_VECTOR  BCRYPT_INITIALIZATION_VECTOR
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define NCRYPT_MAX_PROPERTY_NAME  64

#define NCRYPT_MAX_PROPERTY_DATA  0x100000

#define NCRYPT_ALLOW_EXPORT_FLAG  0x00000001
#define NCRYPT_ALLOW_PLAINTEXT_EXPORT_FLAG  0x00000002
#define NCRYPT_ALLOW_ARCHIVING_FLAG  0x00000004
#define NCRYPT_ALLOW_PLAINTEXT_ARCHIVING_FLAG  0x00000008

#define NCRYPT_IMPL_HARDWARE_FLAG  0x00000001
#define NCRYPT_IMPL_SOFTWARE_FLAG  0x00000002
#define NCRYPT_IMPL_REMOVABLE_FLAG  0x00000008
#define NCRYPT_IMPL_HARDWARE_RNG_FLAG  0x00000010

#define NCRYPT_ALLOW_DECRYPT_FLAG  0x00000001
#define NCRYPT_ALLOW_SIGNING_FLAG  0x00000002
#define NCRYPT_ALLOW_KEY_AGREEMENT_FLAG  0x00000004
#define NCRYPT_ALLOW_ALL_USAGES  0x00ffffff

#define NCRYPT_UI_PROTECT_KEY_FLAG  0x00000001
#define NCRYPT_UI_FORCE_HIGH_PROTECTION_FLAG  0x00000002
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
#define NCRYPT_UI_FINGERPRINT_PROTECTION_FLAG  0x00000004
#define NCRYPT_UI_APPCONTAINER_ACCESS_MEDIUM_FLAG  0x00000008
#endif /* NTDDI_VERSION >= NTDDI_WINBLUE */

#define NCRYPT_PERSIST_ONLY_FLAG  0x40000000

#define NCRYPT_PERSIST_FLAG  0x80000000
#define NCRYPT_PERSIST_ONLY_FLAG  0x40000000

#define NCRYPT_WRITE_KEY_TO_LEGACY_STORE_FLAG  0x00000200

#define NCRYPT_PKCS7_ENVELOPE_BLOB  L"PKCS7_ENVELOPE"
#define NCRYPT_PKCS8_PRIVATE_KEY_BLOB  L"PKCS8_PRIVATEKEY"
#define NCRYPT_OPAQUETRANSPORT_BLOB  L"OpaqueTransport"

#define NCRYPT_MACHINE_KEY_FLAG  0x00000020
#define NCRYPT_DO_NOT_FINALIZE_FLAG  0x00000400
#define NCRYPT_EXPORT_LEGACY_FLAG  0x00000800

#define NCRYPT_REGISTER_NOTIFY_FLAG  0x00000001
#define NCRYPT_UNREGISTER_NOTIFY_FLAG  0x00000002
#define NCRYPT_MACHINE_KEY_FLAG  0x00000020

#define NCRYPT_KEY_STORAGE_INTERFACE_VERSION BCRYPT_MAKE_INTERFACE_VERSION(1,0)

typedef BCryptBuffer NCryptBuffer;
typedef BCryptBuffer *PNCryptBuffer;
typedef BCryptBufferDesc NCryptBufferDesc;
typedef BCryptBufferDesc *PNCryptBufferDesc;

typedef ULONG_PTR NCRYPT_HANDLE;
typedef ULONG_PTR NCRYPT_PROV_HANDLE;
typedef ULONG_PTR NCRYPT_KEY_HANDLE;
typedef ULONG_PTR NCRYPT_HASH_HANDLE;
typedef ULONG_PTR NCRYPT_SECRET_HANDLE;

typedef struct _NCryptAlgorithmName {
    LPWSTR pszName;
    DWORD dwClass;
    DWORD dwAlgOperations;
    DWORD dwFlags;
} NCryptAlgorithmName;

typedef struct NCryptKeyName {
    LPWSTR pszName;
    LPWSTR pszAlgid;
    DWORD dwLegacyKeySpec;
    DWORD dwFlags;
} NCryptKeyName;

typedef struct NCryptProviderName {
    LPWSTR pszName;
    LPWSTR pszComment;
} NCryptProviderName;

typedef struct __NCRYPT_UI_POLICY_BLOB {
    DWORD dwVersion;
    DWORD dwFlags;
    DWORD cbCreationTitle;
    DWORD cbFriendlyName;
    DWORD cbDescription;
} NCRYPT_UI_POLICY_BLOB;

typedef struct __NCRYPT_UI_POLICY {
    DWORD dwVersion;
    DWORD dwFlags;
    LPCWSTR pszCreationTitle;
    LPCWSTR pszFriendlyName;
    LPCWSTR pszDescription;
} NCRYPT_UI_POLICY;

typedef struct __NCRYPT_SUPPORTED_LENGTHS {
    DWORD dwMinLength;
    DWORD dwMaxLength;
    DWORD dwIncrement;
    DWORD dwDefaultLength;
} NCRYPT_SUPPORTED_LENGTHS;

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define NCRYPT_CIPHER_NO_PADDING_FLAG  0x00000000
#define NCRYPT_CIPHER_BLOCK_PADDING_FLAG  0x00000001
#define NCRYPT_CIPHER_OTHER_PADDING_FLAG  0x00000002

typedef struct _NCRYPT_CIPHER_PADDING_INFO {
    ULONG cbSize;
    DWORD dwFlags;
    PUCHAR pbIV;
    ULONG cbIV;
    PUCHAR pbOtherInfo;
    ULONG cbOtherInfo;
} NCRYPT_CIPHER_PADDING_INFO, *PNCRYPT_CIPHER_PADDING_INFO;

#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

#define NCRYPT_PLATFORM_ATTEST_MAGIC  0x44504150

typedef struct _NCRYPT_PLATFORM_ATTEST_PADDING_INFO {
    ULONG magic;
    ULONG pcrMask;
} NCRYPT_PLATFORM_ATTEST_PADDING_INFO;

#define NCRYPT_KEY_ATTEST_MAGIC  0x4450414b

typedef struct _NCRYPT_KEY_ATTEST_PADDING_INFO {
    ULONG magic;
    PUCHAR pbKeyBlob;
    ULONG cbKeyBlob;
    PUCHAR pbKeyAuth;
    ULONG cbKeyAuth;
} NCRYPT_KEY_ATTEST_PADDING_INFO;

#endif /* NTDDI_VERSION >= NTDDI_WINBLUE */

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define NCRYPT_CIPHER_KEY_BLOB_MAGIC  0x52485043
#define NCRYPT_PROTECTED_KEY_BLOB_MAGIC  0x4B545250

#define NCRYPT_CIPHER_KEY_BLOB  L"CipherKeyBlob"
#define NCRYPT_PROTECTED_KEY_BLOB  L"ProtectedKeyBlob"

typedef struct _NCRYPT_KEY_BLOB_HEADER {
    ULONG cbSize;
    ULONG dwMagic;
    ULONG cbAlgName;
    ULONG cbKeyData;
} NCRYPT_KEY_BLOB_HEADER, *PNCRYPT_KEY_BLOB_HEADER;

#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

SECURITY_STATUS WINAPI NCryptOpenStorageProvider(NCRYPT_PROV_HANDLE *, LPCWSTR, DWORD);
SECURITY_STATUS WINAPI NCryptEnumAlgorithms(NCRYPT_PROV_HANDLE, DWORD, DWORD *, NCryptAlgorithmName **, DWORD);
SECURITY_STATUS WINAPI NCryptIsAlgSupported(NCRYPT_PROV_HANDLE, LPCWSTR, DWORD);
SECURITY_STATUS WINAPI NCryptEnumKeys(NCRYPT_PROV_HANDLE, LPCWSTR, NCryptKeyName **, PVOID *, DWORD);
SECURITY_STATUS WINAPI NCryptEnumStorageProviders(DWORD *, NCryptProviderName **, DWORD);
SECURITY_STATUS WINAPI NCryptFreeBuffer(PVOID);
SECURITY_STATUS WINAPI NCryptOpenKey(NCRYPT_PROV_HANDLE, NCRYPT_KEY_HANDLE *, LPCWSTR, DWORD, DWORD);
SECURITY_STATUS WINAPI NCryptCreatePersistedKey(NCRYPT_PROV_HANDLE, NCRYPT_KEY_HANDLE *, LPCWSTR, LPCWSTR, DWORD, DWORD);
SECURITY_STATUS WINAPI NCryptGetProperty(NCRYPT_HANDLE, LPCWSTR, PBYTE, DWORD, DWORD *, DWORD);
SECURITY_STATUS WINAPI NCryptSetProperty(NCRYPT_HANDLE, LPCWSTR, PBYTE, DWORD, DWORD);
SECURITY_STATUS WINAPI NCryptFinalizeKey(NCRYPT_KEY_HANDLE, DWORD);
SECURITY_STATUS WINAPI NCryptEncrypt(NCRYPT_KEY_HANDLE, PBYTE, DWORD, VOID *, PBYTE, DWORD, DWORD *, DWORD);
SECURITY_STATUS WINAPI NCryptDecrypt(NCRYPT_KEY_HANDLE, PBYTE, DWORD, VOID *, PBYTE, DWORD, DWORD *, DWORD);
SECURITY_STATUS WINAPI NCryptImportKey(NCRYPT_PROV_HANDLE, NCRYPT_KEY_HANDLE, LPCWSTR, NCryptBufferDesc *, NCRYPT_KEY_HANDLE *, PBYTE, DWORD, DWORD);
SECURITY_STATUS WINAPI NCryptExportKey(NCRYPT_KEY_HANDLE, NCRYPT_KEY_HANDLE, LPCWSTR, NCryptBufferDesc *, PBYTE, DWORD, DWORD *, DWORD);
SECURITY_STATUS WINAPI NCryptSignHash(NCRYPT_KEY_HANDLE, VOID *, PBYTE, DWORD, PBYTE, DWORD, DWORD *, DWORD);
SECURITY_STATUS WINAPI NCryptVerifySignature(NCRYPT_KEY_HANDLE, VOID *, PBYTE, DWORD, PBYTE, DWORD, DWORD);
SECURITY_STATUS WINAPI NCryptDeleteKey(NCRYPT_KEY_HANDLE, DWORD);
SECURITY_STATUS WINAPI NCryptFreeObject(NCRYPT_HANDLE);
BOOL WINAPI NCryptIsKeyHandle(NCRYPT_KEY_HANDLE);
SECURITY_STATUS WINAPI NCryptTranslateHandle(NCRYPT_PROV_HANDLE *, NCRYPT_KEY_HANDLE *, HCRYPTPROV, HCRYPTKEY, DWORD, DWORD);
SECURITY_STATUS WINAPI NCryptNotifyChangeKey(NCRYPT_PROV_HANDLE, HANDLE *, DWORD);
SECURITY_STATUS WINAPI NCryptSecretAgreement(NCRYPT_KEY_HANDLE, NCRYPT_KEY_HANDLE, NCRYPT_SECRET_HANDLE *, DWORD);
SECURITY_STATUS WINAPI NCryptDeriveKey(NCRYPT_SECRET_HANDLE, LPCWSTR, NCryptBufferDesc *, PBYTE, DWORD, DWORD *, ULONG);
#if (NTDDI_VERSION >= NTDDI_WIN8)
SECURITY_STATUS WINAPI NCryptKeyDerivation(NCRYPT_KEY_HANDLE, NCryptBufferDesc *, PUCHAR, DWORD, DWORD *, ULONG);
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#ifdef __cplusplus
}
#endif

#endif /* _NCRYPT_H */
