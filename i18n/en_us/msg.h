#define CTR_MSG_LANG_CODE "en_us"
#define CTR_MSG_WELCOME   "Citrine Programming Language EN/US\n"
#define CTR_MSG_COPYRIGHT "Written by Gabor de Mooij © copyright 2018, Licensed BSD.\n"
#define CTR_MSG_USAGE_G   "Not enough arguments. Usage: ctr -g file1.h file2.h"
#define CTR_MSG_USAGE_T   "Not enough arguments. Usage: ctr -t d.dict program.ctr"
#define CTR_ERR_LEX       "%s on line: %d. \n"
#define CTR_ERR_TOKBUFF   "Token Buffer Exausted. Tokens may not exceed 255 bytes"
#define CTR_ERR_OOM       "Out of memory."
#define CTR_ERR_SYNTAX    "Parse error, unexpected %s ( %s: %d )\n"
#define CTR_ERR_LONG      "Message too long.\n"
#define CTR_ERR_EXP_COLON "Expected colon.\n"
#define CTR_ERR_EXP_MSG   "Expected message.\n"
#define CTR_ERR_EXP_PCLS  "Expected ).\n"
#define CTR_ERR_EXP_DOT   "Expected a dot (.).\n"
#define CTR_ERR_EXP_KEY   "Key should always be followed by a property name!\n"
#define CTR_ERR_EXP_VAR   "Pointing hand should always be followed by variable!\n"
#define CTR_ERR_EXP_RCP   "Expected a message recipient.\n"
#define CTR_ERR_EXP_MSG2  "Recipient cannot be followed by colon.\n"
#define CTR_ERR_INV_LAS   "Invalid left-hand assignment.\n"
#define CTR_ERR_EXP_BLK   "Expected block."
#define CTR_ERR_EXP_ARR   "Expected list."
#define CTR_ERR_EXP_NUM   "Expected number."
#define CTR_ERR_EXP_STR   "Expected string."
#define CTR_ERR_DIVZERO   "Division by zero."
#define CTR_ERR_BOUNDS    "Index out of bounds."
#define CTR_ERR_REGEX     "Could not compile regular expression."
#define CTR_ERR_SIPHKEY   "Key must be exactly 16 bytes long."
#define CTR_SYM_OBJECT    "[Object]"
#define CTR_SYM_BLOCK     "[Block]"
#define CTR_SYM_FILE      "[File (no path)]"
#define CTR_ERR_OPEN      "Unable to open: %s."
#define CTR_ERR_DELETE    "Unable to delete."
#define CTR_ERR_FOPENED   "File has already been opened."
#define CTR_ERR_SEEK      "Seek failed."
#define CTR_ERR_LOCK      "Unable to lock."
#define CTR_ERR_RET       "Invalid return expression.\n"
#define CTR_ERR_SEND      "Cannot send message to receiver of type: %d \n"
#define CTR_ERR_KEYINX    "Key index exhausted."
#define CTR_ERR_ANOMALY   "Detected message level anomaly.\n"
#define CTR_ERR_UNCAUGHT  "Uncatched error has occurred.\n"
#define CTR_ERR_NODE      "Runtime Error. Invalid parse node: %d %s \n"
#define CTR_ERR_MISSING   "Missing parse node\n"
#define CTR_ERR_FOPEN     "Error while opening the file.\n"
#define CTR_ERR_RNUM      "Must return a number."
#define CTR_ERR_RSTR      "Must return a string."
#define CTR_ERR_RBOOL     "Must return a boolean."
#define CTR_ERR_NESTING   "Too many nested calls."
#define CTR_ERR_KNF       "Key not found: "
#define CTR_ERR_ASSIGN    "Cannot assign to undefined variable: "
#define CTR_ERR_EXEC      "Unable to execute command."
#define CTR_MSG_DSC_FILE  "file"
#define CTR_MSG_DSC_FLDR  "folder"
#define CTR_MSG_DSC_SLNK  "symbolic link"
#define CTR_MSG_DSC_CDEV  "character device"
#define CTR_MSG_DSC_BDEV  "block device"
#define CTR_MSG_DSC_SOCK  "socket"
#define CTR_MSG_DSC_NPIP  "named pipe"
#define CTR_MSG_DSC_OTHR  "other"
#define CTR_MSG_DSC_TYPE  "type"
#define CTR_TERR_LMISMAT  "Language mismatch."
#define CTR_TERR_LONG     "Translation error, message too long."
#define CTR_TERR_DICT     "Error opening dictionary."
#define CTR_TERR_KMISMAT  "Error: key mismatch %s %s on line %d\n"
#define CTR_TERR_ELONG    "Dictionary entry too long."
#define CTR_TERR_AMWORD   "Ambigious word in dictionary: %s."
#define CTR_TERR_AMTRANS  "Ambigious translation in dictionary: %s."
#define CTR_TERR_TMISMAT  "Keyword/Binary mismatch:"
#define CTR_TERR_BUFF     "Unable to copy translation to buffer."
#define CTR_TERR_WARN     "Warning: Not translated: "
#define CTR_TERR_TOK      "Token length exceeds maximum buffer size."
#define CTR_TERR_PART     "Part of keyword message token exceeds buffer limit."
#define CTR_MSG_ERROR     "Error."
#define CTR_MERR_OOM      "Out of memory. Failed to allocate %lu bytes.\n"
#define CTR_MERR_MALLOC   "Out of memory. Failed to allocate %lu bytes (malloc failed). \n"
#define CTR_MERR_POOL     "Unable to allocate memory pool.\n"
