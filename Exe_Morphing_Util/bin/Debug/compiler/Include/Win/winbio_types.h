#ifndef _WINBIO_TYPES_H
#define _WINBIO_TYPES_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Biometric type definitions */

#if (NTDDI_VERSION >= NTDDI_VISTA)

#ifdef __cplusplus
extern "C"{
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2073)
#endif

#define WINBIO_MAX_STRING_LEN  256

#define WINBIO_ID_TYPE_NULL  ((WINBIO_IDENTITY_TYPE)0)
#define WINBIO_ID_TYPE_WILDCARD ((WINBIO_IDENTITY_TYPE)1)
#define WINBIO_ID_TYPE_GUID  ((WINBIO_IDENTITY_TYPE)2)
#define WINBIO_ID_TYPE_SID  ((WINBIO_IDENTITY_TYPE)3)

#define WINBIO_IDENTITY_WILDCARD  ((ULONG)0x25066282)

#define WINBIO_PROPERTY_TYPE_SESSION  ((WINBIO_PROPERTY_TYPE)1)
#define WINBIO_PROPERTY_TYPE_UNIT  ((WINBIO_PROPERTY_TYPE)2)
#define WINBIO_PROPERTY_TYPE_TEMPLATE  ((WINBIO_PROPERTY_TYPE)3)

#define WINBIO_PROPERTY_SAMPLE_HINT  ((WINBIO_PROPERTY_ID)1)

#define WINBIO_STANDARD_TYPE_MASK  ((WINBIO_BIOMETRIC_TYPE)0x00FFFFFF)

#define WINBIO_NO_TYPE_AVAILABLE  ((WINBIO_BIOMETRIC_TYPE)0x00000000)

#define WINBIO_TYPE_MULTIPLE  ((WINBIO_BIOMETRIC_TYPE)0x00000001)
#define WINBIO_TYPE_FACIAL_FEATURES  ((WINBIO_BIOMETRIC_TYPE)0x00000002)
#define WINBIO_TYPE_VOICE  ((WINBIO_BIOMETRIC_TYPE)0x00000004)
#define WINBIO_TYPE_FINGERPRINT  ((WINBIO_BIOMETRIC_TYPE)0x00000008)
#define WINBIO_TYPE_IRIS  ((WINBIO_BIOMETRIC_TYPE)0x00000010)
#define WINBIO_TYPE_RETINA  ((WINBIO_BIOMETRIC_TYPE)0x00000020)
#define WINBIO_TYPE_HAND_GEOMETRY  ((WINBIO_BIOMETRIC_TYPE)0x00000040)
#define WINBIO_TYPE_SIGNATURE_DYNAMICS  ((WINBIO_BIOMETRIC_TYPE)0x00000080)
#define WINBIO_TYPE_KEYSTROKE_DYNAMICS  ((WINBIO_BIOMETRIC_TYPE)0x00000100)
#define WINBIO_TYPE_LIP_MOVEMENT  ((WINBIO_BIOMETRIC_TYPE)0x00000200)
#define WINBIO_TYPE_THERMAL_FACE_IMAGE  ((WINBIO_BIOMETRIC_TYPE)0x00000400)
#define WINBIO_TYPE_THERMAL_HAND_IMAGE  ((WINBIO_BIOMETRIC_TYPE)0x00000800)
#define WINBIO_TYPE_GAIT  ((WINBIO_BIOMETRIC_TYPE)0x00001000)
#define WINBIO_TYPE_SCENT  ((WINBIO_BIOMETRIC_TYPE)0x00002000)
#define WINBIO_TYPE_DNA  ((WINBIO_BIOMETRIC_TYPE)0x00004000)
#define WINBIO_TYPE_EAR_SHAPE  ((WINBIO_BIOMETRIC_TYPE)0x00008000)
#define WINBIO_TYPE_FINGER_GEOMETRY  ((WINBIO_BIOMETRIC_TYPE)0x00010000)
#define WINBIO_TYPE_PALM_PRINT  ((WINBIO_BIOMETRIC_TYPE)0x00020000)
#define WINBIO_TYPE_VEIN_PATTERN  ((WINBIO_BIOMETRIC_TYPE)0x00040000)
#define WINBIO_TYPE_FOOT_PRINT  ((WINBIO_BIOMETRIC_TYPE)0x00080000)
#define WINBIO_TYPE_OTHER  ((WINBIO_BIOMETRIC_TYPE)0x40000000)
#define WINBIO_TYPE_PASSWORD  ((WINBIO_BIOMETRIC_TYPE)0x80000000)

#define WINBIO_TYPE_ANY  ((WINBIO_BIOMETRIC_TYPE)(WINBIO_STANDARD_TYPE_MASK|WINBIO_TYPE_OTHER|WINBIO_TYPE_PASSWORD))

#define WINBIO_SENSOR_SUBTYPE_UNKNOWN  ((WINBIO_BIOMETRIC_SENSOR_SUBTYPE)0x00000000)

#define WINBIO_FP_SENSOR_SUBTYPE_SWIPE  ((WINBIO_BIOMETRIC_SENSOR_SUBTYPE)0x00000001)
#define WINBIO_FP_SENSOR_SUBTYPE_TOUCH  ((WINBIO_BIOMETRIC_SENSOR_SUBTYPE)0x00000002)

#define WINBIO_CAPABILITY_SENSOR  ((WINBIO_CAPABILITIES)0x00000001)
#define WINBIO_CAPABILITY_MATCHING  ((WINBIO_CAPABILITIES)0x00000002)
#define WINBIO_CAPABILITY_DATABASE  ((WINBIO_CAPABILITIES)0x00000004)
#define WINBIO_CAPABILITY_PROCESSING  ((WINBIO_CAPABILITIES)0x00000008)
#define WINBIO_CAPABILITY_ENCRYPTION  ((WINBIO_CAPABILITIES)0x00000010)
#define WINBIO_CAPABILITY_NAVIGATION  ((WINBIO_CAPABILITIES)0x00000020)
#define WINBIO_CAPABILITY_INDICATOR  ((WINBIO_CAPABILITIES)0x00000040)

#define WINBIO_INDICATOR_ON  ((WINBIO_INDICATOR_STATUS)1)
#define WINBIO_INDICATOR_OFF  ((WINBIO_INDICATOR_STATUS)2)

#define WINBIO_SENSOR_UNKNOWN_MODE  ((WINBIO_SENSOR_MODE)0)
#define WINBIO_SENSOR_BASIC_MODE  ((WINBIO_SENSOR_MODE)1)
#define WINBIO_SENSOR_ADVANCED_MODE  ((WINBIO_SENSOR_MODE)2)
#define WINBIO_SENSOR_NAVIGATION_MODE  ((WINBIO_SENSOR_MODE)3)
#define WINBIO_SENSOR_SLEEP_MODE  ((WINBIO_SENSOR_MODE)4)

#define WINBIO_SUBTYPE_NO_INFORMATION  ((WINBIO_BIOMETRIC_SUBTYPE)0x00)
#define WINBIO_SUBTYPE_ANY  ((WINBIO_BIOMETRIC_SUBTYPE)0xFF)

#ifndef WINBIO_REJECT_DETAILS_DEFINED
#define WINBIO_REJECT_DETAILS_DEFINED

#define WINBIO_FP_TOO_HIGH  ((WINBIO_REJECT_DETAIL)1)
#define WINBIO_FP_TOO_LOW  ((WINBIO_REJECT_DETAIL)2)
#define WINBIO_FP_TOO_LEFT  ((WINBIO_REJECT_DETAIL)3)
#define WINBIO_FP_TOO_RIGHT  ((WINBIO_REJECT_DETAIL)4)
#define WINBIO_FP_TOO_FAST  ((WINBIO_REJECT_DETAIL)5)
#define WINBIO_FP_TOO_SLOW  ((WINBIO_REJECT_DETAIL)6)
#define WINBIO_FP_POOR_QUALITY  ((WINBIO_REJECT_DETAIL)7)
#define WINBIO_FP_TOO_SKEWED  ((WINBIO_REJECT_DETAIL)8)
#define WINBIO_FP_TOO_SHORT  ((WINBIO_REJECT_DETAIL)9)
#define WINBIO_FP_MERGE_FAILURE  ((WINBIO_REJECT_DETAIL)10)

#endif /* MIFFO */

#define WINBIO_BIR_ALIGN_SIZE  (8)
#define WINBIO_BIR_ALGIN_SIZE  WINBIO_BIR_ALIGN_SIZE

#define WINBIO_BIR_FIELD_SUBHEAD_COUNT  ((USHORT)0x0001)
#define WINBIO_BIR_FIELD_PRODUCT_ID  ((USHORT)0x0002)
#define WINBIO_BIR_FIELD_PATRON_ID  ((USHORT)0x0004)
#define WINBIO_BIR_FIELD_INDEX  ((USHORT)0x0008)

#define WINBIO_BIR_FIELD_CREATION_DATE  ((USHORT)0x0010)
#define WINBIO_BIR_FIELD_VALIDITY_PERIOD  ((USHORT)0x0020)
#define WINBIO_BIR_FIELD_BIOMETRIC_TYPE  ((USHORT)0x0040)
#define WINBIO_BIR_FIELD_BIOMETRIC_SUBTYPE  ((USHORT)0x0080)

#define WINBIO_BIR_FIELD_CBEFF_HEADER_VERSION  ((USHORT)0x0100)
#define WINBIO_BIR_FIELD_PATRON_HEADER_VERSION  ((USHORT)0x0200)
#define WINBIO_BIR_FIELD_BIOMETRIC_PURPOSE  ((USHORT)0x0400)
#define WINBIO_BIR_FIELD_BIOMETRIC_CONDITION  ((USHORT)0x0800)

#define WINBIO_BIR_FIELD_QUALITY  ((USHORT)0x1000)
#define WINBIO_BIR_FIELD_CREATOR  ((USHORT)0x2000)
#define WINBIO_BIR_FIELD_CHALLENGE  ((USHORT)0x4000)
#define WINBIO_BIR_FIELD_PAYLOAD  ((USHORT)0x8000)

#define WINBIO_BIR_FIELD_NEVER_VALID  (WINBIO_BIR_FIELD_SUBHEAD_COUNT|WINBIO_BIR_FIELD_PATRON_ID|WINBIO_BIR_FIELD_INDEX|WINBIO_BIR_FIELD_CHALLENGE|WINBIO_BIR_FIELD_PAYLOAD)

#define WINBIO_CBEFF_HEADER_VERSION  ((WINBIO_BIR_VERSION)0x11)
#define WINBIO_PATRON_HEADER_VERSION  ((WINBIO_BIR_VERSION)0x11)

#define WINBIO_DATA_FLAG_PRIVACY  ((UCHAR)0x02)
#define WINBIO_DATA_FLAG_INTEGRITY  ((UCHAR)0x01)
#define WINBIO_DATA_FLAG_SIGNED  ((UCHAR)0x04)

#define WINBIO_DATA_FLAG_RAW  ((UCHAR)0x20)
#define WINBIO_DATA_FLAG_INTERMEDIATE  ((UCHAR)0x40)
#define WINBIO_DATA_FLAG_PROCESSED  ((UCHAR)0x80)

#define WINBIO_DATA_FLAG_OPTION_MASK_PRESENT  ((UCHAR)0x08)

#define WINBIO_NO_PURPOSE_AVAILABLE  ((WINBIO_BIR_PURPOSE)0x00)
#define WINBIO_PURPOSE_VERIFY  ((WINBIO_BIR_PURPOSE)0x01)
#define WINBIO_PURPOSE_IDENTIFY  ((WINBIO_BIR_PURPOSE)0x02)
#define WINBIO_PURPOSE_ENROLL  ((WINBIO_BIR_PURPOSE)0x04)
#define WINBIO_PURPOSE_ENROLL_FOR_VERIFICATION  ((WINBIO_BIR_PURPOSE)0x08)
#define WINBIO_PURPOSE_ENROLL_FOR_IDENTIFICATION  ((WINBIO_BIR_PURPOSE)0x10)
#define WINBIO_PURPOSE_AUDIT  ((WINBIO_BIR_PURPOSE)0x80)

#define WINBIO_DATA_QUALITY_NOT_SET  ((WINBIO_BIR_QUALITY)-1)
#define WINBIO_DATA_QUALITY_NOT_SUPPORTED  ((WINBIO_BIR_QUALITY)-2)

#define WINBIO_NO_FORMAT_OWNER_AVAILABLE  ((USHORT)0)
#define WINBIO_NO_FORMAT_TYPE_AVAILABLE  ((USHORT)0)

#define WINBIO_ANSI_381_FORMAT_OWNER  ((USHORT)0x001B)
#define WINBIO_ANSI_381_FORMAT_TYPE  ((USHORT)0x0401)

#define WINBIO_ANSI_381_IMG_ACQ_LEVEL_10  ((USHORT)10)
#define WINBIO_ANSI_381_IMG_ACQ_LEVEL_20  ((USHORT)20)
#define WINBIO_ANSI_381_IMG_ACQ_LEVEL_30  ((USHORT)30)
#define WINBIO_ANSI_381_IMG_ACQ_LEVEL_31  ((USHORT)31)
#define WINBIO_ANSI_381_IMG_ACQ_LEVEL_40  ((USHORT)40)
#define WINBIO_ANSI_381_IMG_ACQ_LEVEL_41  ((USHORT)41)

#define WINBIO_ANSI_381_PIXELS_PER_INCH  ((UCHAR)0x01)
#define WINBIO_ANSI_381_PIXELS_PER_CM  ((UCHAR)0x02)

#define WINBIO_ANSI_381_IMG_UNCOMPRESSED  ((UCHAR)0)
#define WINBIO_ANSI_381_IMG_BIT_PACKED  ((UCHAR)1)
#define WINBIO_ANSI_381_IMG_COMPRESSED_WSQ  ((UCHAR)2)
#define WINBIO_ANSI_381_IMG_COMPRESSED_JPEG  ((UCHAR)3)
#define WINBIO_ANSI_381_IMG_COMPRESSED_JPEG2000  ((UCHAR)4)
#define WINBIO_ANSI_381_IMG_COMPRESSED_PNG  ((UCHAR)5)

#define WINBIO_ANSI_381_POS_UNKNOWN  ((WINBIO_BIOMETRIC_SUBTYPE)0)
#define WINBIO_ANSI_381_POS_RH_THUMB  ((WINBIO_BIOMETRIC_SUBTYPE)1)
#define WINBIO_ANSI_381_POS_RH_INDEX_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)2)
#define WINBIO_ANSI_381_POS_RH_MIDDLE_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)3)
#define WINBIO_ANSI_381_POS_RH_RING_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)4)
#define WINBIO_ANSI_381_POS_RH_LITTLE_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)5)
#define WINBIO_ANSI_381_POS_LH_THUMB  ((WINBIO_BIOMETRIC_SUBTYPE)6)
#define WINBIO_ANSI_381_POS_LH_INDEX_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)7)
#define WINBIO_ANSI_381_POS_LH_MIDDLE_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)8)
#define WINBIO_ANSI_381_POS_LH_RING_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)9)
#define WINBIO_ANSI_381_POS_LH_LITTLE_FINGER  ((WINBIO_BIOMETRIC_SUBTYPE)10)

#define WINBIO_ANSI_381_POS_RH_FOUR_FINGERS  ((WINBIO_BIOMETRIC_SUBTYPE)13)
#define WINBIO_ANSI_381_POS_LH_FOUR_FINGERS  ((WINBIO_BIOMETRIC_SUBTYPE)14)
#define WINBIO_ANSI_381_POS_TWO_THUMBS  ((WINBIO_BIOMETRIC_SUBTYPE)15)
#define WINBIO_ANSI_381_POS_UNKNOWN_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)20)
#define WINBIO_ANSI_381_POS_RH_FULL_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)21)
#define WINBIO_ANSI_381_POS_RH_WRITERS_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)22)
#define WINBIO_ANSI_381_POS_LH_FULL_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)23)
#define WINBIO_ANSI_381_POS_LH_WRITERS_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)24)
#define WINBIO_ANSI_381_POS_RH_LOWER_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)25)
#define WINBIO_ANSI_381_POS_RH_UPPER_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)26)
#define WINBIO_ANSI_381_POS_LH_LOWER_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)27)
#define WINBIO_ANSI_381_POS_LH_UPPER_PALM  ((WINBIO_BIOMETRIC_SUBTYPE)28)
#define WINBIO_ANSI_381_POS_RH_OTHER  ((WINBIO_BIOMETRIC_SUBTYPE)29)
#define WINBIO_ANSI_381_POS_LH_OTHER  ((WINBIO_BIOMETRIC_SUBTYPE)30)
#define WINBIO_ANSI_381_POS_RH_INTERDIGITAL  ((WINBIO_BIOMETRIC_SUBTYPE)31)
#define WINBIO_ANSI_381_POS_RH_THENAR  ((WINBIO_BIOMETRIC_SUBTYPE)32)
#define WINBIO_ANSI_381_POS_RH_HYPOTHENAR  ((WINBIO_BIOMETRIC_SUBTYPE)33)
#define WINBIO_ANSI_381_POS_LH_INTERDIGITAL  ((WINBIO_BIOMETRIC_SUBTYPE)34)
#define WINBIO_ANSI_381_POS_LH_THENAR  ((WINBIO_BIOMETRIC_SUBTYPE)35)
#define WINBIO_ANSI_381_POS_LH_HYPOTHENAR  ((WINBIO_BIOMETRIC_SUBTYPE)36)

#define WINBIO_ANSI_381_IMP_TYPE_LIVE_SCAN_PLAIN  ((UCHAR)0)
#define WINBIO_ANSI_381_IMP_TYPE_LIVE_SCAN_ROLLED  ((UCHAR)1)
#define WINBIO_ANSI_381_IMP_TYPE_NONLIVE_SCAN_PLAIN  ((UCHAR)2)
#define WINBIO_ANSI_381_IMP_TYPE_NONLIVE_SCAN_ROLLED  ((UCHAR)3)
#define WINBIO_ANSI_381_IMP_TYPE_LATENT  ((UCHAR)7)
#define WINBIO_ANSI_381_IMP_TYPE_SWIPE  ((UCHAR)8)
#define WINBIO_ANSI_381_IMP_TYPE_LIVE_SCAN_CONTACTLESS  ((UCHAR)9)

#define WINBIO_POOL_UNKNOWN  ((WINBIO_POOL_TYPE)0)
#define WINBIO_POOL_SYSTEM  ((WINBIO_POOL_TYPE)1)
#define WINBIO_POOL_PRIVATE  ((WINBIO_POOL_TYPE)2)
#define WINBIO_POOL_UNASSIGNED  ((WINBIO_POOL_TYPE)3)

#define BIO_UNIT_RAW  ((USHORT)0x0001)
#define BIO_UNIT_MAINTENANCE  ((USHORT)0x0002)
#define BIO_UNIT_OPEN_SESSION  ((USHORT)0x0004)
#define BIO_UNIT_EXTENDED_ACCESS  ((USHORT)0x0008)
#define BIO_UNIT_ENROLL  ((USHORT)0x0010)

#define WINBIO_FLAG_DEFAULT  ((WINBIO_SESSION_FLAGS)0x00000000)
#define WINBIO_FLAG_BASIC  ((WINBIO_SESSION_FLAGS)((WINBIO_SENSOR_BASIC_MODE & 0xFFFF)<<16))
#define WINBIO_FLAG_ADVANCED  ((WINBIO_SESSION_FLAGS)((WINBIO_SENSOR_ADVANCED_MODE & 0xFFFF)<<16))
#define WINBIO_FLAG_RAW  ((WINBIO_SESSION_FLAGS)BIO_UNIT_RAW)
#define WINBIO_FLAG_MAINTENANCE  ((WINBIO_SESSION_FLAGS)BIO_UNIT_MAINTENANCE)

#define WINBIO_DB_DEFAULT  ((GUID *)1)
#define WINBIO_DB_BOOTSTRAP  ((GUID *)2)
#define WINBIO_DB_ONCHIP  ((GUID *)3)

#define WINBIO_COMPONENT_SENSOR  ((WINBIO_COMPONENT)1)
#define WINBIO_COMPONENT_ENGINE  ((WINBIO_COMPONENT)2)
#define WINBIO_COMPONENT_STORAGE  ((WINBIO_COMPONENT)3)

#define WINBIO_EVENT_ERROR  ((WINBIO_EVENT_TYPE)0xFFFFFFFF)

#define WINBIO_EVENT_FP_UNCLAIMED  ((WINBIO_EVENT_TYPE)0x00000001)
#define WINBIO_EVENT_FP_UNCLAIMED_IDENTIFY  ((WINBIO_EVENT_TYPE)0x00000002)

#define WINBIO_DATABASE_TYPE_MASK  ((ULONG)0x0000FFFF)
#define WINBIO_DATABASE_TYPE_FILE  ((ULONG)0x00000001)
#define WINBIO_DATABASE_TYPE_DBMS  ((ULONG)0x00000002)
#define WINBIO_DATABASE_TYPE_ONCHIP  ((ULONG)0x00000003)
#define WINBIO_DATABASE_TYPE_SMARTCARD  ((ULONG)0x00000004)

#define WINBIO_DATABASE_FLAG_MASK  ((ULONG)0xFFFF0000)
#define WINBIO_DATABASE_FLAG_REMOVABLE  ((ULONG)0x00010000)
#define WINBIO_DATABASE_FLAG_REMOTE  ((ULONG)0x00020000)

#define WINBIO_FRAMEWORK_CHANGE_UNIT  ((WINBIO_FRAMEWORK_CHANGE_TYPE)0x00000001)

#define WINBIO_MAX_SAMPLE_BUFFER_SIZE  ((ULONG)0x7FFFFFFF)

#define WINBIO_OPERATION_NONE  ((WINBIO_OPERATION_TYPE)0)
#define WINBIO_OPERATION_OPEN  ((WINBIO_OPERATION_TYPE)1)
#define WINBIO_OPERATION_CLOSE  ((WINBIO_OPERATION_TYPE)2)
#define WINBIO_OPERATION_VERIFY  ((WINBIO_OPERATION_TYPE)3)
#define WINBIO_OPERATION_IDENTIFY  ((WINBIO_OPERATION_TYPE)4)
#define WINBIO_OPERATION_LOCATE_SENSOR  ((WINBIO_OPERATION_TYPE)5)
#define WINBIO_OPERATION_ENROLL_BEGIN  ((WINBIO_OPERATION_TYPE)6)
#define WINBIO_OPERATION_ENROLL_CAPTURE  ((WINBIO_OPERATION_TYPE)7)
#define WINBIO_OPERATION_ENROLL_COMMIT  ((WINBIO_OPERATION_TYPE)8)
#define WINBIO_OPERATION_ENROLL_DISCARD  ((WINBIO_OPERATION_TYPE)9)
#define WINBIO_OPERATION_ENUM_ENROLLMENTS  ((WINBIO_OPERATION_TYPE)10)
#define WINBIO_OPERATION_DELETE_TEMPLATE  ((WINBIO_OPERATION_TYPE)11)
#define WINBIO_OPERATION_CAPTURE_SAMPLE  ((WINBIO_OPERATION_TYPE)12)
#define WINBIO_OPERATION_GET_PROPERTY  ((WINBIO_OPERATION_TYPE)13)
#define WINBIO_OPERATION_SET_PROPERTY  ((WINBIO_OPERATION_TYPE)14)
#define WINBIO_OPERATION_GET_EVENT  ((WINBIO_OPERATION_TYPE)15)
#define WINBIO_OPERATION_LOCK_UNIT  ((WINBIO_OPERATION_TYPE)16)
#define WINBIO_OPERATION_UNLOCK_UNIT  ((WINBIO_OPERATION_TYPE)17)
#define WINBIO_OPERATION_CONTROL_UNIT  ((WINBIO_OPERATION_TYPE)18)
#define WINBIO_OPERATION_CONTROL_UNIT_PRIVILEGED  ((WINBIO_OPERATION_TYPE)19)

#define WINBIO_OPERATION_OPEN_FRAMEWORK  ((WINBIO_OPERATION_TYPE)20)
#define WINBIO_OPERATION_CLOSE_FRAMEWORK  ((WINBIO_OPERATION_TYPE)21)
#define WINBIO_OPERATION_ENUM_SERVICE_PROVIDERS  ((WINBIO_OPERATION_TYPE)22)
#define WINBIO_OPERATION_ENUM_BIOMETRIC_UNITS  ((WINBIO_OPERATION_TYPE)23)
#define WINBIO_OPERATION_ENUM_DATABASES  ((WINBIO_OPERATION_TYPE)24)
#define WINBIO_OPERATION_UNIT_ARRIVAL  ((WINBIO_OPERATION_TYPE)25)
#define WINBIO_OPERATION_UNIT_REMOVAL  ((WINBIO_OPERATION_TYPE)26)

#define WINBIO_SETTING_SOURCE_INVALID  ((WINBIO_SETTING_SOURCE_TYPE)0)
#define WINBIO_SETTING_SOURCE_DEFAULT  ((WINBIO_SETTING_SOURCE_TYPE)1)
#define WINBIO_SETTING_SOURCE_POLICY  ((WINBIO_SETTING_SOURCE_TYPE)2)
#define WINBIO_SETTING_SOURCE_LOCAL  ((WINBIO_SETTING_SOURCE_TYPE)3)

typedef ULONG WINBIO_UNIT_ID, *PWINBIO_UNIT_ID;
typedef ULONG WINBIO_SESSION_HANDLE, *PWINBIO_SESSION_HANDLE;
typedef WINBIO_SESSION_HANDLE WINBIO_FRAMEWORK_HANDLE, *PWINBIO_FRAMEWORK_HANDLE;

typedef GUID WINBIO_UUID, *PWINBIO_UUID;

typedef WCHAR WINBIO_STRING[WINBIO_MAX_STRING_LEN];
typedef WINBIO_STRING *PWINBIO_STRING;

typedef struct _WINBIO_VERSION {
    DWORD MajorVersion;
    DWORD MinorVersion;
} WINBIO_VERSION, *PWINBIO_VERSION;

typedef ULONG WINBIO_IDENTITY_TYPE, *PWINBIO_IDENTITY_TYPE;

typedef struct _WINBIO_IDENTITY {
    WINBIO_IDENTITY_TYPE Type;
    union {
        ULONG Null;
        ULONG Wildcard;
        GUID TemplateGuid;
        struct {
            ULONG Size;
            UCHAR Data[SECURITY_MAX_SID_SIZE];
        } AccountSid;
    } Value;
} WINBIO_IDENTITY;

typedef WINBIO_IDENTITY *PWINBIO_IDENTITY;

typedef ULONG32 WINBIO_PROPERTY_TYPE, *PWINBIO_PROPERTY_TYPE;

typedef ULONG32 WINBIO_PROPERTY_ID, *PWINBIO_PROPERTY_ID;

typedef ULONG32 WINBIO_BIOMETRIC_TYPE, *PWINBIO_BIOMETRIC_TYPE;

typedef ULONG WINBIO_BIOMETRIC_SENSOR_SUBTYPE, *PWINBIO_BIOMETRIC_SENSOR_SUBTYPE;

typedef ULONG WINBIO_CAPABILITIES, *PWINBIO_CAPABILITIES;

typedef DWORD WINBIO_INDICATOR_STATUS, *PWINBIO_INDICATOR_STATUS;

typedef ULONG WINBIO_SENSOR_MODE, *PWINBIO_SENSOR_MODE;

typedef UCHAR WINBIO_BIOMETRIC_SUBTYPE, *PWINBIO_BIOMETRIC_SUBTYPE;

typedef ULONG WINBIO_REJECT_DETAIL, *PWINBIO_REJECT_DETAIL;

typedef struct _WINBIO_BIR_DATA {
    ULONG Size;
    ULONG Offset;
} WINBIO_BIR_DATA;

typedef WINBIO_BIR_DATA *PWINBIO_BIR_DATA;

typedef struct _WINBIO_BIR {
    WINBIO_BIR_DATA HeaderBlock;
    WINBIO_BIR_DATA StandardDataBlock;
    WINBIO_BIR_DATA VendorDataBlock;
    WINBIO_BIR_DATA SignatureBlock;
} WINBIO_BIR;

typedef WINBIO_BIR *PWINBIO_BIR;

typedef UCHAR WINBIO_BIR_VERSION, *PWINBIO_BIR_VERSION;

typedef UCHAR WINBIO_BIR_DATA_FLAGS, *PWINBIO_BIR_DATA_FLAGS;

typedef UCHAR WINBIO_BIR_PURPOSE, *PWINBIO_BIR_PURPOSE;

typedef CHAR WINBIO_BIR_QUALITY, *PWINBIO_BIR_QUALITY;

typedef struct _WINBIO_REGISTERED_FORMAT {
    USHORT Owner;
    USHORT Type;
} WINBIO_REGISTERED_FORMAT, *PWINBIO_REGISTERED_FORMAT;

typedef struct _WINBIO_BIR_HEADER {
    USHORT ValidFields;
    WINBIO_BIR_VERSION HeaderVersion;
    WINBIO_BIR_VERSION PatronHeaderVersion;
    WINBIO_BIR_DATA_FLAGS DataFlags;
    WINBIO_BIOMETRIC_TYPE Type;
    WINBIO_BIOMETRIC_SUBTYPE Subtype;
    WINBIO_BIR_PURPOSE Purpose;
    WINBIO_BIR_QUALITY DataQuality;
    LARGE_INTEGER CreationDate;
    struct {
        LARGE_INTEGER BeginDate;
        LARGE_INTEGER EndDate;
    } ValidityPeriod;
    WINBIO_REGISTERED_FORMAT BiometricDataFormat;
    WINBIO_REGISTERED_FORMAT ProductId;
} WINBIO_BIR_HEADER;

typedef WINBIO_BIR_HEADER *PWINBIO_BIR_HEADER;

typedef struct _WINBIO_BDB_ANSI_381_HEADER {
    ULONG64 RecordLength;
    ULONG FormatIdentifier;
    ULONG VersionNumber;
    WINBIO_REGISTERED_FORMAT ProductId;
    USHORT CaptureDeviceId;
    USHORT ImageAcquisitionLevel;
    USHORT HorizontalScanResolution;
    USHORT VerticalScanResolution;
    USHORT HorizontalImageResolution;
    USHORT VerticalImageResolution;
    UCHAR ElementCount;
    UCHAR ScaleUnits;
    UCHAR PixelDepth;
    UCHAR ImageCompressionAlg;
    USHORT Reserved;
} WINBIO_BDB_ANSI_381_HEADER;

typedef WINBIO_BDB_ANSI_381_HEADER *PWINBIO_BDB_ANSI_381_HEADER;

typedef struct _WINBIO_BDB_ANSI_381_RECORD {
    ULONG BlockLength;
    USHORT HorizontalLineLength;
    USHORT VerticalLineLength;
    WINBIO_BIOMETRIC_SUBTYPE Position;
    UCHAR CountOfViews;
    UCHAR ViewNumber;
    UCHAR ImageQuality;
    UCHAR ImpressionType;
    UCHAR Reserved;
} WINBIO_BDB_ANSI_381_RECORD;

typedef WINBIO_BDB_ANSI_381_RECORD *PWINBIO_BDB_ANSI_381_RECORD;

typedef ULONG WINBIO_POOL_TYPE, *PWINBIO_POOL_TYPE;

typedef ULONG WINBIO_SESSION_FLAGS, *PWINBIO_SESSION_FLAGS;

typedef ULONG WINBIO_COMPONENT, *PWINBIO_COMPONENT;

typedef ULONG WINBIO_EVENT_TYPE, *PWINBIO_EVENT_TYPE;

typedef struct _WINBIO_EVENT {
    WINBIO_EVENT_TYPE Type;
    union {
        struct {
            WINBIO_UNIT_ID UnitId;
            WINBIO_REJECT_DETAIL RejectDetail;
        } Unclaimed;
        struct {
            WINBIO_UNIT_ID UnitId;
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            WINBIO_REJECT_DETAIL RejectDetail;
        } UnclaimedIdentify;
        struct {
            HRESULT ErrorCode;
        } Error;
    } Parameters;
} WINBIO_EVENT, *PWINBIO_EVENT;

typedef struct _WINBIO_BSP_SCHEMA {
    WINBIO_BIOMETRIC_TYPE BiometricFactor;
    WINBIO_UUID BspId;
    WINBIO_STRING Description;
    WINBIO_STRING Vendor;
    WINBIO_VERSION Version;
} WINBIO_BSP_SCHEMA, *PWINBIO_BSP_SCHEMA;

typedef struct _WINBIO_UNIT_SCHEMA {
    WINBIO_UNIT_ID UnitId;
    WINBIO_POOL_TYPE PoolType;
    WINBIO_BIOMETRIC_TYPE BiometricFactor;
    WINBIO_BIOMETRIC_SENSOR_SUBTYPE SensorSubType;
    WINBIO_CAPABILITIES Capabilities;
    WINBIO_STRING DeviceInstanceId;
    WINBIO_STRING Description;
    WINBIO_STRING Manufacturer;
    WINBIO_STRING Model;
    WINBIO_STRING SerialNumber;
    WINBIO_VERSION FirmwareVersion;
} WINBIO_UNIT_SCHEMA, *PWINBIO_UNIT_SCHEMA;

typedef struct _WINBIO_STORAGE_SCHEMA {
    WINBIO_BIOMETRIC_TYPE BiometricFactor;
    WINBIO_UUID DatabaseId;
    WINBIO_UUID DataFormat;
    ULONG Attributes;
    WINBIO_STRING FilePath;
    WINBIO_STRING ConnectionString;
} WINBIO_STORAGE_SCHEMA, *PWINBIO_STORAGE_SCHEMA;

typedef ULONG WINBIO_FRAMEWORK_CHANGE_TYPE, *PWINBIO_FRAMEWORK_CHANGE_TYPE;

typedef ULONG WINBIO_OPERATION_TYPE, *PWINBIO_OPERATION_TYPE;

#if (NTDDI_VERSION >= NTDDI_WIN9)
typedef ULONG64 WINBIO_PROTECTION_TICKET, *PWINBIO_PROTECTION_TICKET;

#define WINBIO_OPERATION_IDENTIFY_AND_RELEASE_TICKET    ((WINBIO_OPERATION_TYPE)27)
#define WINBIO_OPERATION_VERIFY_AND_RELEASE_TICKET      ((WINBIO_OPERATION_TYPE)28)

#endif /* NTDDI_VERSION >= NTDDI_WIN9 */

typedef enum _WINBIO_CREDENTIAL_TYPE {
    WINBIO_CREDENTIAL_PASSWORD = 0x00000001,
    WINBIO_CREDENTIAL_ALL = 0xffffffff,
} WINBIO_CREDENTIAL_TYPE;

typedef enum _WINBIO_CREDENTIAL_FORMAT {
    WINBIO_PASSWORD_GENERIC = 0x00000001,
    WINBIO_PASSWORD_PACKED = 0x00000002,
} WINBIO_CREDENTIAL_FORMAT;

typedef enum _WINBIO_CREDENTIAL_STATE {
    WINBIO_CREDENTIAL_NOT_SET = 0x00000001,
    WINBIO_CREDENTIAL_SET = 0x00000002,
} WINBIO_CREDENTIAL_STATE, *PWINBIO_CREDENTIAL_STATE;

typedef ULONG32 WINBIO_SETTING_SOURCE_TYPE, *PWINBIO_SETTING_SOURCE_TYPE;

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#ifdef __cplusplus
}
#endif

#endif /* NTDDI_VERSION >= NTDDI_WIN7 */

#endif /* _WINBIO_TYPES_H */
