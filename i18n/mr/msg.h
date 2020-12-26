#define CTR_MSG_LANG_CODE "mr"
#define CTR_MSG_WELCOME   "Citrine/MR\n"
#define CTR_MSG_COPYRIGHT "Gabor de Mooij ©, Licensed BSD\n"
#define CTR_MSG_USAGE_G   "पुरेसे वितर्क नाहीत वापर:: ctr -g file1.h file2.h"
#define CTR_MSG_USAGE_T   "पुरेसे वितर्क नाहीत वापर:: ctr -t d.dict program.ctr"
#define CTR_ERR_LEX        " %s  ओळीवर: %d "
#define CTR_ERR_TOKBUFF    "टोकन बफर निलंबित टोकन 255 बाइटपेक्षा जास्त असू शकत नाहीत"
#define CTR_ERR_OOM        "लक्षात राहिले नाही"
#define CTR_ERR_SYNTAX     "विश्लेषित त्रुटी अनपेक्षित %s  ( %s : %d )"
#define CTR_ERR_LONG       "संदेश खूप लांब आहे"
#define CTR_ERR_EXP_COLON "अपेक्षित [:].\n"
#define CTR_ERR_EXP_MSG "अपेक्षित [संदेशः__].\n"
#define CTR_ERR_EXP_PCLS  "अपेक्षित [)].\n"
#define CTR_ERR_EXP_DOT    "अपेक्षित ओळीचा शेवट"
#define CTR_ERR_EXP_KEY    "की नेहमी प्रॉपर्टीच्या नावानेच पाळली पाहिजे!"
#define CTR_ERR_EXP_VAR    "पॉइंटिंग हात नेहमीच चल नंतर असावा!"
#define CTR_ERR_EXP_RCP    "संदेश प्राप्तकर्त्याची अपेक्षा आहे"
#define CTR_ERR_EXP_MSG2   "प्राप्तकर्त्यास कोलन पाठविता येत नाही"
#define CTR_ERR_INV_LAS    "अवैध डावीकडील असाइनमेंट"
#define CTR_ERR_EXP_BLK   "अपेक्षित [कोड]."
#define CTR_ERR_EXP_ARR   "अपेक्षित [यादी]."
#define CTR_ERR_EXP_NUM   "अपेक्षित [संख्या]."
#define CTR_ERR_EXP_STR   "अपेक्षित [स्ट्रिंग]."
#define CTR_ERR_DIVZERO    "शुन्याने भागणे"
#define CTR_ERR_BOUNDS     "मर्यादा बाहेर निर्देशांक"
#define CTR_ERR_REGEX      "नियमित अभिव्यक्ति संकलित करू शकत नाही"
#define CTR_ERR_SIPHKEY    "की नक्की 16 बाइट लांबीची असणे आवश्यक आहे"
#define CTR_SYM_OBJECT    "[Object]"
#define CTR_SYM_BLOCK     "[Block]"
#define CTR_SYM_FILE      "[File (no path)]"
#define CTR_ERR_OPEN       "उघडण्यात अक्षम: %s "
#define CTR_ERR_DELETE     "हटविण्यात अक्षम"
#define CTR_ERR_FOPENED    "फाईल आधीच उघडली गेली आहे"
#define CTR_ERR_SEEK       "शोध अयशस्वी"
#define CTR_ERR_LOCK       "लॉक करण्यास अक्षम"
#define CTR_ERR_RET        "अवैध रिटर्न एक्सप्रेशन"
#define CTR_ERR_SEND       "प्रकाराच्या प्राप्तकर्त्यास संदेश पाठवू शकत नाही: %d "
#define CTR_ERR_KEYINX     "की अनुक्रमणिका संपली"
#define CTR_ERR_ANOMALY    "संदेश पातळी विसंगती आढळली"
#define CTR_ERR_UNCAUGHT   "अनचेच त्रुटी आली"
#define CTR_ERR_NODE       "रनटाइम त्रुटी अवैध पार्स नोड: %d  %s "
#define CTR_ERR_MISSING    "पार्स नोड गहाळ आहे"
#define CTR_ERR_FOPEN      "फाईल उघडताना त्रुटी"
#define CTR_ERR_RNUM  "परत पाहिजे [संख्या].\n"
#define CTR_ERR_RSTR  "परत पाहिजे [स्ट्रिंग].\n"
#define CTR_ERR_RBOOL "परत पाहिजे [बुलियन].\n"
#define CTR_ERR_NESTING    "बर्‍याच नेस्टेड कॉल"
#define CTR_ERR_KNF        "की आढळली नाही:"
#define CTR_ERR_ASSIGN     "अपरिभाषित व्हेरिएबलला नियुक्त करू शकत नाही:"
#define CTR_ERR_EXEC       "कमांड कार्यान्वित करण्यात अक्षम"
#define CTR_MSG_DSC_FILE  "फाइल"
#define CTR_MSG_DSC_FLDR  "फोल्डर"
#define CTR_MSG_DSC_SLNK  "symbolic link"
#define CTR_MSG_DSC_CDEV  "character device"
#define CTR_MSG_DSC_BDEV  "block device"
#define CTR_MSG_DSC_SOCK  "socket"
#define CTR_MSG_DSC_NPIP  "named pipe"
#define CTR_MSG_DSC_OTHR  "other"
#define CTR_MSG_DSC_TYPE  "type"
#define CTR_TERR_LMISMAT  "Language mismatch."
#define CTR_TERR_LONG     "Translation error, message too long."
#define CTR_TERR_DICT     "शब्दकोश उघडताना त्रुटी."
#define CTR_TERR_KMISMAT  "Error: key mismatch %s %s on line %d\n"
#define CTR_TERR_ELONG    "शब्दकोष प्रविष्टी खूप मोठी आहे."
#define CTR_TERR_AMWORD   "Ambiguous word in dictionary: %s."
#define CTR_TERR_AMTRANS  "Ambiguous translation in dictionary: %s."
#define CTR_TERR_TMISMAT  "Keyword/Binary mismatch:"
#define CTR_TERR_BUFF     "Unable to copy translation to buffer."
#define CTR_TERR_WARN     "Warning: Not translated: "
#define CTR_TERR_TOK      "Token length exceeds maximum buffer size."
#define CTR_TERR_PART      "कीवर्ड संदेश टोकनचा काही भाग बफर मर्यादेपेक्षा जास्त आहे"
#define CTR_TERR_COLONS   "Different no. of colons."
#define CTR_MSG_ERROR      "त्रुटी"
#define CTR_MERR_OOM      "लक्षात राहिले नाही  %lu  बाइटचे वाटप करण्यात अयशस्वी\n"
#define CTR_MERR_MALLOC   "लक्षात राहिले नाही  %lu  बाइटचे वाटप करण्यात अयशस्वी (malloc). \n"
#define CTR_MERR_POOL     "Unable to allocate memory pool.\n"
#define CTR_STDDATEFRMT   "%Y-%m-%d %H:%M:%S"
#define CTR_STDTIMEZONE   "UTC"