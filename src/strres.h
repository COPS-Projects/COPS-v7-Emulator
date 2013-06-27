/**
 * ****** Faith Emulator - Closed Source ******
 * Copyright (C) 2012 - 2013 Jean-Philippe Boivin
 *
 * Please read the WARNING, DISCLAIMER and PATENTS
 * sections in the LICENSE file.
 */

#ifndef _FAITH_EMULATOR_STRRES_H
#define _FAITH_EMULATOR_STRRES_H

#include "common.h"
#include <QtCore/QCoreApplication>

#define STR_CREATOR_INFO                    "Faith Emulator by CptSky..."
#define STR_BUILD_INFO                      "Build for " TARGET_SYSTEM " (" TARGET_ARCH "), using Qt " QT_VERSION_STR ", the " __TIMESTAMP__

#define	STR_SYSTEM_NAME                     "SYSTEM"
#define STR_ALLUSERS_NAME                   "ALLUSERS"
#define	STR_REPLY_OK                        "ANSWER_OK"
#define	STR_REPLY_AGAIN                     "ANSWER_AGAIN"
#define STR_REPLY_NEW_ROLE                  "NEW_ROLE"


#define STR_EMBED_SUCC                      "Ç¶Èë³É¹¦£¡"
#define STR_EMBED_FAIL                      "Ç¶ÈëÊ§°Ü£¡"
#define STR_UPEQUIPLEVEL_FAIL_NOTYPE		"¡ï Éý¼¶×°±¸µÈ¼¶Ê§°Ü£¡Ã»ÓÐ¶ÔÓ¦µÄÉè±¸£¡¡ï"
#define STR_UPEQUIPLEVEL_FAIL				"¡ï Éý¼¶×°±¸µÈ¼¶Ê§°Ü£¡¡ï"
#define STR_UPEQUIPLEVEL_SUCC				"¡ï Éý¼¶×°±¸µÈ¼¶³É¹¦£¡¡ï"

#define STR_UPEQUIPLEVE_SUCC                "¡ï Éý¼¶×°±¸µÄµÈ¼¶³É¹¦£¬¹§Ï²Äã£¡Ï£Íû¼ÌÐøÅ¬Á¦£¡¡ï"
#define STR_UPEQUIPLEVE_FAIL				"¡ï Éý¼¶×°±¸µÄµÈ¼¶Ê§°Ü£¬Õâ´ÎÄãµÄÔËÆø²»ÊÇºÜºÃ£¬ÇëÔÙ½ÓÔÙÀ÷£¡¡ï"

#define STR_GEMSKILL_FORGE_SUCCESS			"¡ï ×´Ì¬¹¥»÷Àà±¦Ê¯´òÔì³É¹¦£¬¹§Ï²Äã£¡¼ÌÐøÅ¬Á¦°¡£¡¡ï"

#define STR_QUALITY_UPGRADE_SUCCESS         "¡ï Éý¼¶×°±¸Æ·ÖÊ³É¹¦£¬¹§Ï²Äã£¡¼ÌÐøÅ¬Á¦°¡£¡¡ï"
#define STR_QUALITY_UPGRADE_FAILED          "¡ï Éý¼¶×°±¸Æ·ÖÊÊ§°Ü£¬Õâ´ÎÄãµÄÔËÆø²»ÊÇºÜºÃ£¬ÇëÔÙ½ÓÔÙÀ÷£¡¡ï"
#define STR_QUALITY_UPGRADE_MAXLEVEL        "¡ï Éý¼¶×°±¸Æ·ÖÊÊ§°Ü£¬ÄãµÄ×°±¸ÒÑ¾­ÊÇ×î¸ßÆ·ÖÊÁË£¡¡ï"


#define STR_ITEM_CHANGETYPE_FAILED          "¡ï Éý¼¶×°±¸Æ·ÖÊÊ§°Ü£¬Ã»ÓÐ¶ÔÓ¦µÄÀàÐÍ£¡¡ï"
#define STR_ITEM_CHANGEADDITION_FAILED      "¡ï ×·¼Ó×°±¸ÊôÐÔÊ§°Ü£¬Ã»ÓÐ¶ÔÓ¦µÄÀàÐÍ ¡ï"

#define STR_SYN_CANNOT_UPMEMBERLEVEL        "Éý¼¶°ïÅÉ³ÉÔ±µÈ¼¶Ê§°Ü£¬ÄãµÄÌõ¼þ»¹²»·ûºÏ£¡"
#define STR_SYN_SUCCESS_UPMEMBERLEVEL        "Éý¼¶°ïÅÉ³ÉÔ±µÈ¼¶³É¹¦£¬Ï£ÍûÔÙ½ÓÔÙÀ÷£¡"

#define STR_SYN_APPLYATTACKSYN_SUCCESS        "ÉêÇë¹¥´ò¸Ã³ÇÊÐ³É¹¦£¬ÇëÈýÈÕºóÀ´¹¥³Ç£¡"
#define STR_SYN_APPLYATTACKSYN_FAIL          "ÉêÇë¹¥´ò¸Ã³ÇÊÐ³É¹¦Ê§°Ü£¬¸óÏÂµÄ°ïÅÉÌõ¼þ²»·ûºÏ£¡"
#define STR_SYN_APPLYATTACKSYN_HASBEENAPPLIED "ÉêÇë¹¥´ò¸Ã³ÇÊÐ³É¹¦Ê§°Ü£¬ÒÑ¾­ÓÐÈËÉêÇë¹¥´òÁË£¡"

#define STR_SYN_APPLYKICKOUT_MEMBER         "ÒÑ¾­Ïò°ïÖ÷·¢³ö¿ª³ýÇëÇó£¡"

#define STR_SYN_SETSUBLEADER_NOPROFFER		"²»ÄÜÉèÖÃ£¬¹±Ï×¶È²»×ã£¡"
#define STR_SYN_APPLY_JOIN_FAILED			"ÇëÕÒÍÅ³¤»ò¸±ÍÅ³¤¼ÓÈë£¡"
#define STR_SYN_NOTENOUGH_PROFFER_LEAVE		"ÄúµÄ¾üÍÅ¹±Ï×¶ÈÐ¡ÓÚ%d£¬²»ÔÊÐíÍËÍÅ£¡"
#define STR_SYN_LEAVE_s						"%s ÍË³öÁË¾üÍÅ£¡"

#define STR_ACTION_USER_FLYTOMAINMAP_ERROR	"Ö÷µØÍ¼²»´æÔÚ£¬»Ø³Ç¾íÎÞ·¨Ê¹ÓÃ£¡"
#define STR_ACTION_IDENT_SUCC				"¼ø¶¨³É¹¦£¡"
#define STR_ACTION_IDENT_FAIL				"¼ø¶¨Ê§°Ü£¡"
#define STR_ACTION_IDENT_FAIL_DISAPPEAR		"¼ø¶¨Ê§°Ü£¬ÎïÆ·ÒÑËð»µ£¡"

#define STR_SYN_SETDRESS_SUCC				"ÉèÖÃ°ïÅÉ·þ×°³É¹¦£¡"
#define STR_SYN_PUTONDESS_ERR				"±ØÐëÊÇÍÅ³¤²ÅÄÜÏÂ´©°ïÅÉ·þ×°µÄÃüÁî£¡"
#define STR_SYN_CREATESUBSUB_ERR			"²»·ûºÏÌõ¼þ»ò·Ö¶ÓÒÑ¾­ÂúÁË£¡"
#define STR_SYN_DEMISE_SUCC					"Äú½«ÍÅ³¤Ö°Î»ìøÈÃ¸øÁË%s"
#define STR_SYN_DEMISE_CON					"¹§Ï²Äú³ÉÎªÁË%s¾üÍÅÍÅ³¤"
#define STR_SYN_DEMISE_PROMPT				"%s³öÈÎ%s¾üÍÅÍÅ³¤Ò»Ö°"
#define STR_SYN_SETSUBLEADER_ERR			"%sµÈ¼¶²»×ã»ò¶Ô¾üÍÅµÄ¹±Ï×²»¹»£¬²»ÄÜ³öÈÎ¸ÃÖ°Îñ¡£"

#define STR_SYN_SETSUBLEADER_SUCC			"Äú²á·âÁË%sÎª%s·ÖÍÅ¸±ÍÅ³¤Ò»Ö°"
#define STR_SYN_SETSUBLEADER_CON			"¹§Ï²Äú³ÉÎªÁË%s·ÖÍÅ¸±ÍÅ³¤"
#define STR_SYN_SETSUBLEADER_PROMPT			"%s³öÈÎ%s·ÖÍÅ¸±ÍÅ³¤Ò»Ö°"

#define STR_SYN_SETSUBSUBLEADER_SUCC		"Äú²á·âÁË%sÎª%s·Ö¶Ó¶Ó³¤Ò»Ö°"
#define STR_SYN_SETSUBSUBLEADER_CON			"¹§Ï²Äú³ÉÎªÁË%s·Ö¶Ó¶Ó³¤"
#define STR_SYN_SETSUBSUBLEADER_PROMPT		"%s³öÈÎ%s·Ö¶Ó¶Ó³¤Ò»Ö°"
#define STR_SYN_CREATE_SUBSUBSYN_ERROR		"´´½¨·Ö¶Ó£¬±ØÐëÊÇ·ÖÍÅµÄÍÅ³¤£¡"

#define STR_IDENT_NORMAL                    "¼ø¶¨³É¹¦£¬µÃµ½%s"
#define STR_IDENT_QUALITY_ONE               "¼ø¶¨³É¹¦£¬µÃµ½Á¼Æ· %s"
#define STR_IDENT_QUALITY_TWO               "¼ø¶¨³É¹¦£¬µÃµ½ÉÏÆ· %s"
#define STR_IDENT_QUALITY_THREE             "¼ø¶¨³É¹¦£¬µÃµ½¾«Æ· %s"
#define STR_IDENT_QUALITY_FOUR              "¼ø¶¨³É¹¦£¬µÃµ½¼«Æ· %s"

//ÁÄÌìÊÒ
#define STR_CHATROOM_NAME								"ÁÄÌìÊÒ%d"
#define STR_CHATROOM_CANNOT_INMOREROOM					"²»ÄÜÍ¬Ê±½øÈë¶à¸öÁÄÌìÊÒ£¡"
#define STR_CHATROOM_CANNOT_INMOREROOM_FORNOMONEY		"½ðÇ®²»¹»£¬²»ÄÜ½øÈëÁÄÌìÊÒ£¡"
#define STR_CHATROOM_WELCOME							"%s£¬»¶Ó­¸óÏÂ¹âÁÙ %s ÁÄÌìÊÒ£¬±¾ÁÄÌìÊÇ¹ÜÀíÔ±Îª%s"
#define STR_CHATROOM_LEAVE								"%s Àë¿ªÁË %s ÁÄÌìÊÒ£¡"
#define STR_CHATROOM_CANAPPLYMANAGER					"¹ÜÀíÔ±%sÔÚ¹æ¶¨Ê±¼äÄÚÃ»ÓÐÉÏÏß¡£ÔÊÐíÍæ¼ÒÉêÇë³ÉÎª¹ÜÀíÔ±£¡"
#define STR_CHATROOM_MEMBERFULL							"±¾ÁÄÌìÊÒÈËÔ±ÒÑ¾­ÂúÁË£¡"
#define STR_CHATROOM_ROOMFEE_MODIFY						"µ±Ç°ÁÄÌìÊÒ·ÑÓÃÒÑ¾­¸ü¸Ä£¬Îª%d½ð±Ò"

#define STR_DROPITEM_PROMPT				"Äú¶ªÆúÁË%s £¡"
#define STR_NOTIFYFRIEND_USERLEAVEMAP	"%sÀë¿ªÓÎÏ·£¡"
#define STR_NOTIFYFRIEND_USERENTERMAP	"%s½øÈëÓÎÏ·£¡"
//---jinggy---2004-11-19--Ê¥Õ½---end
#define	STR_DOUBLE_MANTLE_FLAG		"´ËÍÅ±êÒÑ¾­ÓÐÈËÊ¹ÓÃ¹ýÁË£¬ÇëÖØÐÂÑ¡ÔñÍÅ±ê¡£"
#define	STR_SETLOCK					"setlock"
#define	STR_UNLOCK					"unlock"
#define	STR_CLEARLOCK				"clearlock"
#define	STR_SETLOCK_HELP			"ÉèÖÃ¡°±£»¤Ëø¡±ÃÜÂëÖ®Ç°²»ÄÜÓÐ¾ÉµÄÃÜÂë£¬ÃÜÂë±ØÐëÎª 6 ~ 9 Î»ÕûÊý£¬²»ÄÜÊ¹ÓÃ×ÖÄ¸»ò·ûºÅ£¬Ò²²»ÄÜÊ¹ÓÃ¹ýÓÚ¼òµ¥µÄÃÜÂë¡£Ê¹ÓÃ·½·¨£º/setlock ÃÜÂë"
#define	STR_UNLOCK_HELP				"ÁÙÊ±´ò¿ª¡°±£»¤Ëø¡±£¬ÏÂÏß»á×Ô¶¯¼ÓËø¡£Ê¹ÓÃ·½·¨£º/unlock ÃÜÂë"
#define	STR_CLEARLOCK_HELP			"ÓÀ¾ÃÇå³ý¡°±£»¤Ëø¡±ÃÜÂë¡£Ê¹ÓÃ·½·¨£º/clearlock ¾ÉÃÜÂë"
#define	STR_SETLOCK_OK				"ÒÑÉèÖÃ¡°±£»¤Ëø¡±µÄÃÜÂë¡£¿ÉÊ¹ÓÃ¡°/unlock ÃÜÂë¡±ÁÙÊ±´ò¿ª±£»¤Ëø£¬Ò²¿ÉÊ¹ÓÃ¡°/clearlock ¾ÉÃÜÂë¡±ÓÀ¾ÃÇå³ý±£»¤Ëø¡£"
#define	STR_SETLOCK_FAIL			"ÉèÖÃ¡°±£»¤Ëø¡±Ê§°Ü! ÉèÃÜÂëÖ®Ç°²»ÄÜÓÐ¾ÉµÄÃÜÂë£¬ÃÜÂë±ØÐëÎª 6 ~ 9 Î»ÕûÊý£¬²»ÄÜÊ¹ÓÃ×ÖÄ¸»ò·ûºÅ£¬Ò²²»ÄÜÊ¹ÓÃ¹ýÓÚ¼òµ¥µÄÃÜÂë¡£"
#define	STR_UNLOCK_OK				"ÒÑ´ò¿ª¡°±£»¤Ëø¡±£¬ÏÂÏßºó»á×Ô¶¯¼ÓËø¡£"
#define	STR_CLEARLOCK_OK			"ÒÑÓÀ¾ÃÇå³ý¡°±£»¤Ëø¡±£¬¸ÃÕÊºÅ²»ÔÙÊÜµ½¡°±£»¤Ëø¡±µÄ±£»¤¡£ÈçÐèÖØÐÂÉèÖÃ±£»¤Ëø£¬ÇëÊ¹ÓÃ¡°/setlock ÃÜÂë¡±¡£"
#define	STR_LOCKKEY_DENY			"ÇëÏÈ´ò¿ª¡°±£»¤Ëø¡±¡£Ê¹ÓÃ·½·¨£º/unlock ÃÜÂë"
#define STR_SUPER_ATK_ADD			"¼¼ÄÜÆô¶¯£º%dÃëÄÚ¹¥»÷Á¦Ôö¼Ó%d¡£"
#define STR_SUPER_DEF_ADD			"¼¼ÄÜÆô¶¯£º%dÃëÄÚ·ÀÓùÁ¦Ôö¼Ó%d¡£"
#define STR_SUPER_MATK_ADD			"¼¼ÄÜÆô¶¯£º%dÃëÄÚÄ§·¨¹¥»÷Á¦Ôö¼Ó%d¡£"
#define STR_SUPER_MDEF_ADD			"¼¼ÄÜÆô¶¯£º%dÃëÄÚÄ§·¨·ÀÓùÁ¦Ôö¼Ó%d¡£"
#define	STRING_BET_WIN				"%sºì¹âÂúÃæ£¬Ë«Ã¼´ø²Ê£¬Íæ÷»×ÓÓ®ÁË%d½ð±Ò£¡"
#define	STR_AWARD_VIRTUE_su			"%sµÃµ½¹¦µÂÖµ%u¡£"
#define	STR_SYNDICATE_LEADER		"ÆïÊ¿ÍÅÍÅ³¤"
#define	STR_SYNDICATE_LEADER2		"ÆïÊ¿ÍÅ¸±ÍÅ³¤"
#define	STR_SYNDICATE_LEADER3		"½üÎÀÍÅÍÅ³¤"
#define	STR_SYNDICATE_LEADER4		"½üÎÀÍÅ¸±ÍÅ³¤"
#define	STR_SYNDICATE_LEADER5		"½üÎÀÍÅ´úÍÅ³¤"
#define	STR_SYNDICATE_MEMBER		"ÆïÊ¿"
#define	STR_ERROR					"´íÎó"
#define	STR_DELETE_FAILED			"É¾³ýÊ§°Ü!"
#define	STR_YOUR_CANNOT_WALK		"Äú²»ÄÜ×ß£¡"
#define	STR_TOP_LIST_dsd			"µÚ%dÃû£º%s(%d)"
#define	STR_INC_MOUNT_INTIMACY		"ÄúµÄ×øÆïµÄÇ×ÃÜ¶ÈÔö¼ÓÁË¡£"
#define	STR_DEC_MOUNT_INTIMACY		"ÄúµÄ×øÆïµÄÇ×ÃÜ¶ÈÏÂ½µÁË¡£"
#define	STR_KICKOUT_ALL_AFTER		"¿ªÊ¼´¦Àíkickoutall£¬·þÎñÆ÷½ûÖ¹µÇÂ¼¡£%dÃëÖ®ºó£¬ËùÓÐÍæ¼ÒÍË³ö¡£"
#define	STR_KICKOUT_ALL				"¿ªÊ¼´¦Àíkickoutall£¬·þÎñÆ÷½ûÖ¹µÇÂ¼£¬ËùÓÐÍæ¼ÒÍË³öÖÐ . . ."
#define	STR_LOGIN_ANOTHER			"ÓÐÈËÕýÔÚµÇÂ½´ËÕÊºÅ¡£"
#define	STR_LOGIN_AGAIN				"´ËÕÊºÅÒÑ¾­ÓÐÈËµÇÂ½¡£"
#define	STR_KO_LIST_TITLE			"Ãû´Î  ÐÕÃû           ÊýÁ¿"
#define	STR_TEAM_MONEY_s			"¼ñÇ®¿ª¹Ø %s"
#define	STR_TEAM_ITEM_s				"¼ñÎïÆ·¿ª¹Ø %s"
#define STR_TEAM_GEM_s				"¼ñ±¦Ê¯¿ª¹Ø %s"
#define	STR_OPEN					"¿ª"
#define	STR_CLOSE					"¹Ø"
#define STR_NOT_DISCARDABLE			"´ËÎïÆ·²»ÄÜ¶ªÆú¡£"
#define STR_NOT_SELL_ENABLE			"´ËÎïÆ·²»ÄÜ³öÊÛ¡£"
#define STR_NEXT_PAGE				"ÏÂÒ»Ò³"
#define STR_CLOSE_BUTTON			"¹Ø±Õ"
#define STR_TOO_LOWER_SYN_MONEY		"ÆïÊ¿ÍÅ»ù½ð²»×ã£¬¸Ã¹¦ÄÜÒÑ¹Ø±Õ¡£"
#define STR_SYN_AMOUNT_LIMIT        "ÆïÊ¿ÍÅÈËÔ±²»×ã£¬¼´½«±»Ç¿ÖÆ½âÉ¢£¬Çë¾¡¿ì²¹³äÈËÔ±"
#define STR_SYN_MONEY_LIMIT         "ÆïÊ¿ÍÅ×Ê½ð²»×ã£¬¼´½«±»Ç¿ÖÆ½âÉ¢£¬Çë¾¡¿ì²¹³ä×Ê½ð"
#define	STR_APPLY_ALLY_FAILED		"Ë«·½±ØÐëÊÇÆïÊ¿ÍÅÍÅ³¤!"
#define STR_HITRATE_ADD				"¼¼ÄÜÆô¶¯£º%dÃëÄÚÃüÖÐÂÊÔö¼Ó%d±¶¡£"
#define STR_DEFENCE_ADD				"¼¼ÄÜÆô¶¯£º%dÃëÄÚ·ÀÓùÁ¦Ôö¼Ó%d±¶¡£"
#define STR_ATTACK_ADD				"¼¼ÄÜÆô¶¯£º%dÃëÄÚ¹¥»÷Á¦Ôö¼Ó%d±¶¡£"
#define STR_HITRATE_ADD2			"¼¼ÄÜÆô¶¯£º%dÃëÄÚÃüÖÐÂÊÔö¼Ó%d¡£"
#define STR_DEFENCE_ADD2			"¼¼ÄÜÆô¶¯£º%dÃëÄÚ·ÀÓùÁ¦Ôö¼Ó%d¡£"
#define STR_ATTACK_ADD2				"¼¼ÄÜÆô¶¯£º%dÃëÄÚ¹¥»÷Á¦Ôö¼Ó%d¡£"
#define EXPLOST_PAYBY_SYNFUND		"ÆïÊ¿ÍÅ»ù½ðµÖÏû¾­ÑéËðÊ§%u¡£"
#define MALE_MATE_LOGIN				"ÄúµÄÏÈÉúÀ´ÁË"
#define FEMALE_MATE_LOGIN			"ÄúµÄ·òÈËÀ´ÁË"
#define NOMATE_NAME					"ÎÞ"
#define TITILE_NONE					"ÎÞ"
#define SYNNAME_NONE				"ÎÞ"
#define	ACTIONSTR_NONE				"ÎÞ"
#define	STR_DESTROY_SYNDICATE_SOON	"¹óÆïÊ¿ÍÅÒòÆïÊ¿ÍÅ»ù½ðºÄ¾¡£¬¼´½«±»ÏµÍ³Ç¿ÐÐ½âÉ¢¡£Çë¼°Ê±²¹³äÆïÊ¿ÍÅ»ù½ð¡£"
#define	STR_TARGET_OFFLINE			"¶Ô·½²»ÔÚÏß¡£"
#define	STR_SYNDICATE_COMBINESUB_ss	"ÆïÊ¿ÍÅ %s ±» % ÍÌ²¢ÁË¡£"
#define	STR_NEXTEQP_OVERLEV			"ÏÂÒ»¸öµÈ¼¶µÄ×°±¸ÒÑ¾­³¬³ö¸óÏÂµ±Ç°µÈ¼¶£¡"
#define	STR_BOOTH_BUY_sds			"%s »¨ÁË %d ½ð±Ò¹ºÂòÄãµÄ%s¡£"
#define	STR_DISABLE_LAY_SYNTRANS	"¸ÃµØÍ¼½ûÖ¹·ÅÖÃ´ËÀàNPC!"
#define	STR_ITEM_LEV_TOO_HIGH		"×°±¸ÐèÇóµÈ¼¶Ì«¸ß!"
#define	STR_TEAM_HUNT				"%s×ö¶ñ¶à¶Ë£¬ÖÕÓÚ±»ÒÔ%sÎªÊ×µÄ¼©²¶¶ÓÎé×¥»ñ!"
#define	STR_FOND_WANTED				"·¢ÏÖÐüÉÍÄ¿±ê¡¾%s¡¿£¡"
#define	STR_FOND_POLICEWANTED		"·¢ÏÖ¹Ù·½ÐüÉÍÄ¿±ê¡¾%s¡¿£¡"
#define	STR_CANT_STORAGE			"¸ÃÎïÆ·²»ÄÜ´æ·Å!"
#define	STR_SYN_FULL				"´íÎó£ºÆïÊ¿ÍÅÈËÊýÒÑÂú!"
#define	STR_JOIN_SYN_FAILED			"´íÎó£º¼ÓÈëÊ§°Ü!"
#define	STR_INVALID_PET_NAME		"´íÎó£º²»ÔÊÐíµÄÃû×Ö!"
#define STR_JOIN_SYN_s				"¹§Ï²Äú³ÉÎª %s ¾üÍÅÍÅÔ±¡£"
#define	STR_KICKOUT_MEMBER_s		"%s±»¿ª³ý³öÁË%s¾üÍÅ¡£"
#define	STR_KICKOUT_ME_s			"Äã±»%s´ÓÆïÊ¿ÍÅÖÐ¿ª³ý¡£"
#define STR_SYN_ALLY_s				"¹§Ï² %s ¾üÍÅÓë %s ¾üÍÅ½áÎªÐÖµÜ¾üÍÅ¡£"
#define STR_SYN_CLEAR_ALLY1_s		"Óë %s ¾üÍÅ½â³ýÃËÓÑÖ®Ô¼¡£"
#define STR_SYN_CLEAR_ALLY2_s		"%s ¾üÍÅÓëÄúµÄ¾üÍÅ½â³ýÃËÓÑÖ®Ô¼£¡"
#define STR_SYN_ENEMY_s				"%s ¾üÍÅ½«ÄúµÄ¾üÍÅÁÐÎªµÐ¶Ô¾üÍÅ¡£"
#define STR_SYN_CLEAR_ENEMY_s		"%s ¾üÍÅ½«ÓëÄúµÄ¾üÍÅ½â³ýµÐ¶Ô×´Ì¬¡£"
#define	STR_NO_BONUS				"±§Ç¸£¬Ã»ÓÐ½±Æ·»òÕß½±Æ· »ò Ã»ÓÐ¾­¹ýÁì½±ÍøÒ³È·ÈÏ¡£"
#define	STR_WARNING_CRASH			"×¢Òâ£º´ËÃüÁîÖ»ÓÃÓÚ±¾µØ²âÊÔ£¬·ñÔò¿ÉÄÜµ¼ÖÂ·þÎñÆ÷±ÀÀ£!"
#define	STR_CAN_STAND				"Ä¿±êµã²»ÄÜÂä½Å!"
#define	STR_SET_MAX_PLAYERS_u		"×î´óÔÊÐíµÇÂ¼ÈËÊý¸ÄÎª: %u"
#define	STR_SHOW_PLAYERS_uu			"µ±Ç°ÔÚÏß:%u, ×î´óÔÚÏß:%u"
#define	STR_ARRESTMENT_PK_MODE		"²¶É±PKÄ£Ê½£¬Äã¿ÉÒÔ¹¥»÷¹ÖÎïºÍºÚÃû¡¢À¶ÃûÍæ¼Ò£¬²»»áÉËº¦µ½ÆäËüÈË¡£"
#define STR_SYNDICATE_PK_MODE       "ÆïÊ¿ÍÅPKÄ£Ê½£¬Äã¿ÉÒÔPKËùÓÐ³ý±¾ÍÅ¼°Í¬ÃËÆïÊ¿ÍÅÖ®ÍâµÄÍæ¼Ò¡£"
#define	STR_TEAM_PK_MODE			"×é¶ÓPKÄ£Ê½£¬Äã¿ÉÒÔ¹¥»÷¹ÖÎïºÍÆäËüÈË£¬²»»áÉËº¦µ½×Ô¼ººÍ¶ÓÓÑ¡£"
#define	STR_SAFE_PK_MODE			"°²È«PKÄ£Ê½£¬ÄãÖ»ÄÜ¹¥»÷¹ÖÎï£¬²»»áÉËº¦µ½ÆäËüÈÎºÎÍæ¼Ò¡£"
#define	STR_FREE_PK_MODE			"×ÔÓÉPKÄ£Ê½£¬Äã¿ÉÒÔ¹¥»÷ÈÎºÎÈË¡£"
#define	STR_NEED_PICK				"±ØÐëÒª×°±¸³úÍ·²ÅÄÜÍÚ¿ó¡£"
#define	STR_SYNDICATE_DESTROY_s		"%s º¬Àá½âÉ¢ÁË %s ¾üÍÅ¡£"
#define	STR_SYNDICATE_CREATE_ss		"¹§Ï² %s ÆïÊ¿ÍÅ´´½¨%s³É¹¦¡£ "
#define	STR_SYN_LEADER_LOSE_uss		"ÆïÊ¿ÍÅ[%u][%s]ÆïÊ¿ÍÅ³¤Ê§×Ù£¬Íæ¼Ò[%s]ÔÝ´úÆïÊ¿ÍÅ³¤Ö®Ö°¡£"
#define	STR_DONATE_ssd				"%s ¾èÔù %u ½ð±Ò£¬ÓÃÓÚ¾üÍÅµÄ½¨Éè£¡"
#define	STR_SYN_WAR_END				"³Ç±¤¹¥·ÀÕ½½áÊø!"
#define	STR_SYN_WAR_START			"³Ç±¤¹¥·ÀÕ½¿ªÊ¼!"
#define	STR_GOT_WIN_s				"%s»ñµÃÊ¤Àû!"
#define	STR_ERROR_DUPLICATE_NAME	"´íÎó£ºÈËÎïÒÑ´æÔÚ!"
#define	STR_ERROR_ILLEGAL_NAME		"´íÎó£º½ÇÉ«Ãû²»ºÏ·¨!"
#define	STR_ERROR_ILLEGAL_NAME2		"´íÎó£ºÃû×Ö²»ºÏ·¨!"
#define	STR_ERROR_ILLEGAL_PASSWORD	"´íÎó£ºÃÜÂë²»ºÏ·¨!"
#define	STR_ERROR_ILLEGAL_ACCOUNT	"´íÎó£ºÕÊºÅÃû²»ºÏ·¨!"
#define	STR_ERROR_SERVER_FULL		"´íÎó£º·þÎñÆ÷ÈËÊýÒÑÂú£¬ÇëÉÔºóÖØÐÂµÇÂ¼!"
#define	STR_ERROR_LOWER_VERSION		"´íÎó£º°æ±¾ºÅ´íÎó£¬Çë¸üÐÂ¿Í»§¶Ë!"
#define	STR_ERROR_VERSION			"´íÎó£º°æ±¾ºÅ´íÎó!"
#define	STR_FEW_FEE_NOTIFY			"ÄúµÄ°üÔÂ¿¨½«ÓÚ %s µ½ÆÚ£¬Çë¼°Ê±³äÖµ¡£"
#define	STR_ACCOUNT_NOFEE			"ÄúµÄÕÊºÅ»¹Ã»ÓÐ³äÖµ¡£"
#define	STR_LOGIN_ISP_FAIL			"µÇÂ¼µ½ISP¼Æ·ÑÏµÍ³Ê§°Ü¡£Ä¿Ç°ÕýÔÚÊ¹ÓÃÄú×Ô¼ºµÄÕÊºÅ½øÐÐ¼Æ·Ñ¡£"
#define	STR_FEETYPE_KNOWN			"¼Æ·ÑÀàÐÍ£ºÎ´Öª¡£"
#define	STR_FEETYPE_HOUR			"¼Æ·ÑÀàÐÍ£ºÐ¡Ê±¿¨£¬Ê£ÓàÐ¡Ê±Êý£º%d.%d¡£"
#define	STR_FEETYPE_MONTH			"¼Æ·ÑÀàÐÍ£º°üÔÂ¿¨¡£µ½ÆÚÊ±¼ä£º%dÄê%dÔÂ%dÈÕ¡£"
#define	STR_FEETYPE_BARHOUR			"¼Æ·ÑÀàÐÍ£ºÍø°É¼Æµã¡£"
#define	STR_FEETYPE_BARMONTH		"¼Æ·ÑÀàÐÍ£ºÍø°ÉÔÂ¿¨¡£Ðí¿ÉÖ¤ÊýÁ¿%d¡£"
#define	STR_FEETYPE_ISP				"¼Æ·ÑÀàÐÍ£ºISP¼Æ·Ñ¡£"
#define	STR_FEETYPE_FREE			"¼Æ·ÑÀàÐÍ£ºÃâ·Ñ²âÊÔ¡£"
#define	STR_SHUTDOWN_NOTIFY			"·þÎñÆ÷Î¬»¤£¬Í£»úÈýÊ®·ÖÖÓ£»Çë´ó¼ÒÁ¢¼´ÏÂÏß£¬±ÜÃâÊý¾Ý¶ªÊ§¡£"
#define	STR_NONSUCH_TRADE_sssu		"[½»Ò×] ¼«Æ·½»Ò×£¬Íæ¼Ò[%s]¸øÍæ¼Ò[%s]ÎïÆ·[%s][%u]"
#define	STR_NOT_SO_MUCH_MONEY	    "ÄúÉíÉÏÃ»ÓÐÕâÃ´¶àÇ®£¡"
#define	STR_NOT_ENOUGH_MONEY	    "ÄãµÄÇ®²»×ã%d½ð±Ò!"
#define	STR_ATTACK_POLICE	        "¸óÏÂÉæÏÓÏ®¾¯£¬ÇëºÃ×ÔÎªÖ®£¬ÒÔÃâÈÇ»ðÉÏÉí¡£"
#define	STR_KILLING_EXPERIENCE	    "»ñ»÷É±¶îÍâ¾­Ñé%u¡£"
#define	STR_KILLING_EXPEX			"»ñµÍµÈ¼¶¶ÓÓÑ½±ÀøºÍ»÷É±¶îÍâ¾­Ñé%u¡£"
#define	STR_BAG_FULL	            "±³°üÒÑÂú!"
#define	STR_TRADE_SUCCEED	        "½»Ò×³É¹¦¡£"
#define	STR_TRADE_FAIL	            "½»Ò×Ê§°Ü!"
#define	STR_USE_ITEM	            "ÄúÓÃµôÁËÒ»¼þÎïÆ·¡£"
#define	STR_INVALID_GUILD_NAME		"ÆïÊ¿ÍÅÃû×Ö²»ºÏ·¨!"
#define	STR_GUILD_FUND_NOT_ENOUGH	"ÆïÊ¿ÍÅ»ù½ð²»×ã%u½ð±Ò!"
#define	STR_NOT_AUTHORIZED	        "ÄãÃ»ÓÐÕâ¸öÈ¨Á¦!"
#define	STR_ALLY_FULL	            "Í¬ÃË±íÒÑÂú!"
#define	STR_SYN_PLACE_FULL	        "¸Ã¾üÏÎÊýÁ¿ÒÑÂú!"
#define	STR_WANTED_ORDER	        "¿Û³ý¶¨½ð%u½ð±Ò£¬È¡µÃ%dºÅÐüÉÍµ¥£¬Ä¿±ê£º%s£¬ÉÍ½ð£º%u ½ð±Ò¡£"
#define	STR_WANTED_INFO				"¾Ý´«´ËÈË×î½üÔÚ¡¾%s¡¿Ò»´ø»î¶¯¡£"
#define	STR_INVALID_WANTED	        "´íÎóµÄÐüÉÍºÅ£¡"
#define	STR_MAX_BONUTY				"ÉÍ½ð×î´ó²»ÄÜ³¬¹ý%d½ð±Ò£¡"
#define	STR_MIN_BONUTY				"ÉÍ½ð×îÉÙ²»ÄÜµÍÓÚ%d½ð±Ò£¡"
#define	STR_SUPERADD_BONUTY			"ÐüÉÍ%uºÅÉÍ½ðÉÏÉýÎª%u½ð±Ò£¡"
#define	STR_LOWEST_SUPERADD_BONUTY	"×îµÍÌí¼ÓÐüÉÍ¶îÎª%u½ð±Ò£¡"
#define	STR_CANCEL_WANTED			"ÐüÉÍ%uºÅÒÑ¾­³·Ïú¡£"
#define	STR_NO_DISBAND	            "ÆïÊ¿ÍÅ½Ï´ó²»ÒË½âÉ¢£¬ÇëÑ¡ÔñìøÈÃ¡£"
#define	STR_PROTECTED_CODE	        "ÇëÏÈ´ò¿ª±£»¤Ëø¡£"
#define	STR_HIS_ALLY_FULL	        "¶Ô·½µÄÍ¬ÃË±íÒÑÂú!"
#define	STR_NOT_HERE	            "¸ÃÍæ¼Ò²»ÔÚ¸½½ü!"
#define	STR_CANNOT_RANK				"ÎÞ·¨ÉèÖÃ¾üÏÎ!"
#define	STR_NOT_ENOUGH_LEV			"ÄãµÄµÈ¼¶²»×ã%d¼¶!"
#define	STR_LEVEL_NOT_ENOUGH	    "%sµÈ¼¶²»×ã»ò¶Ô¾üÍÅµÄ¹±Ï×²»¹»£¬²»ÄÜ³öÈÎ¸ÃÖ°Îñ!"
#define	STR_INVALID_NAME	        "Ãû×Ö²»ºÏ·¨¡£"
#define	STR_INVALID_MSG	            "·Ç·¨ÏûÏ¢£¡"
#define	STR_MAGIC_FAILED            "Ä§·¨Ê¹ÓÃÊ§°Ü£¡"
#define	STR_CANNOT_DEPOSIT	        "´íÎó£º´ËÎïÆ·²»ÒË´æ·Å!"
#define	STR_FORBIDDEN_GUILD_NAME	"Äú²»ÄÜÊ¹ÓÃÕâ¸öÆïÊ¿ÍÅÃû¡£"
#define	STR_GUILD_INEXIST	        "¸ÃÆïÊ¿ÍÅ²»´æÔÚ¡£"
#define	STR_TEAM_EXPERIENCE	        "»ñµÃÁË½±Àø¾­Ñé%d"
#define	STR_TEAM_EXPEX				"»ñµÃ×é¶ÓºÍµÍµÈ¼¶¶ÓÓÑ½±Àø¾­Ñé%d"
#define	STR_LOST_EXPERIENCE	        "ÄãËðÊ§ÁË%dµã¾­ÑéÖµ!"
#define	STR_KILLING_TO_MUCH	        "É±ÈË¹ý¶à£¬½«ÊÜµ½ºìÃûµÄ³Í·£"
#define	STR_NOT_PK_MODE	            "µ±Ç°Ä£Ê½ÏÂ²»ÄÜ¹¥»÷¶Ô·½£¡"
#define	STR_NOT_PK_EXP	            "¾­ÑéÎª¸ºµÄÇé¿öÏÂ²»ÄÜPK¡£"
#define	STR_PK_FORBIDDEN	        "´Ë´¦½ûÖ¹Å¹¶·¡£"
#define	STR_MSG_SENT	   		    "ÁôÑÔ³É¹¦£¬¶Ô·½ÉÏÏßºó¾ÍÄÜ¿´µ½ÄãµÄÁôÑÔ¡£"
#define	STR_MSG_FAILED				"Ã¿¸öºÃÓÑÁôÑÔ¼ä¸ô²»ÄÜÉÙÓÚ%d·ÖÖÓ£¬ÁôÑÔÊ§°Ü¡£"
#define	STR_INVALID_COORDINATE	    "·Ç·¨×ø±ê¡£"
#define	STR_GONE	                "×ßÁË"
#define	STR_JUMPED	                "ÌøÁË"
#define	STR_CONNECTION_OFF	        "¿Í»§¶ËÍøÂçÁ¬½ÓÒì³££¬ÏµÍ³×Ô¶¯¹Ø±ÕÁ¬½Ó¡£"
#define	STR_WEAPON_SKILL_UP	        "¹§Ï²¸óÏÂÎäÆ÷ÊìÁ·¶ÈÉý¼¶£¡"
#define	STR_FULLBAG_NO_MORE	        "¸óÏÂÐÐÄÒÒÑÂú£¬ÎÞ·¨·ÅÈë¸ü¶àÎïÆ·¡£"
#define STR_ITEMBAG_FULL			"ÄúµÄÎïÆ·±³°ü¿Õ¼äÒÑÂú£¬²»ÄÜ·ÅÖÃ¸ü¶àµÄÎïÆ·¡£"
#define STR_GEMBAG_FULL				"ÄúµÄ±¦Ê¯±³°ü¿Õ¼äÒÑÂú£¬²»ÄÜ·ÅÖÃ¸ü¶àµÄÎïÆ·¡£"
#define	STR_HEAVEY_BAG	            "¸óÏÂÐÐÄÒ¹ýÖØ£¬ÎÞ·¨·ÅÈë¸ü¶àÎïÆ·¡£"
#define	STR_ITEM_NOT_FOUND	        "ÎïÆ·ÕÒ²»µ½!"
#define	STR_ITEM_INEXIST	        "ÎïÆ·²»´æÔÚ!"
#define	STR_MONEYBAG_FULL	        "ÄúµÄÇ®´üÒÑÂú!"
#define	STR_MAKE_ITEM_FAILED        "²úÉúµØÍ¼ÎïÆ·[%u]Ê§°Ü¡£"
#define	STR_MAKE_MONEY_FAILED	    "²úÉúµØÍ¼½ð±Ò[%d]Ê§°Ü¡£"
#define	STR_DAMAGED_REPAIR	        "%s¼´½«Ëð»µ£¬Çë¾¡¿ìÐÞ¸´£¬·ñÔò½«³¹µ×ÏûÊ§!"
#define	STR_DURABILITY_REPAIR	    "%sÄÍ¾Ã¶ÈÌ«µÍ£¬Çë¾¡¿ìÐÞ¸´£¬ÒÔÃâËðÉË¡£"
#define	STR_FAR_CANNOT_PICK	        "ÎïÆ·Ì«Ô¶£¬ÎÞ·¨Ê°È¡¡£"
#define	STR_FULL_CANNOT_PICK	    "ÎïÆ·À¸ÒÑÂú£¬ÎÞ·¨Ê°È¡ÎïÆ·¡£"
#define	STR_PICK_MONEY	            "¼ñµ½ %u ¸ö½ð±Ò¡£"
#define	STR_FAILED_GENERATE_ITEM	"²úÉúÎïÆ·Ê§°Ü¡£"
#define	STR_OTHERS_ITEM	            "±ðÈËµÄ´òµÄ¶«Î÷£¬ÔÝÊ±²»ÄÜÊ°È¡!"
#define	STR_GOT_ITEM	            "µÃµ½ÎïÆ·%s¡£"
#define	STR_GOT_IDENT_ITEM	        "µÃµ½Î´¼ø¶¨ÎïÆ·¡£"
#define	STR_DRAGONBALL	            "¸ÄÁ¼×°±¸¸¨ÖúÎïÆ·±ØÐëÊÇ¡¾ÁúÖé¡¿¡£"
#define	STR_REPAIR_THEN_IMPROVE	    "¸ÄÁ¼×°±¸±ØÐëÊÇÐÞ¸´ºÃµÄÎïÆ·¡£"
#define	STR_SUPERIOR_ALREADY	    "´Ë×°±¸ÒÑ¾­ÊÇ¼«Æ·ÁË¡£"
#define	STR_CONNOT_IMPROVE	        "¸Ã×°±¸ÎÞ·¨¸ÄÁ¼¡£"
#define	STR_METEOR	                "Éý¼¶×°±¸µÄ¸¨ÖúÎïÆ·±ØÐëÊÇ¡¾Á÷ÐÇ¡¿¡£"
#define	STR_REPAIR_THEN_UPGRADE	    "Éý¼¶×°±¸±ØÐëÊÇÐÞ¸´ºÃµÄÎïÆ·¡£"
#define	STR_UPGRADE_NOMORE	        "´Ë×°±¸ÎÞ·¨¼ÌÐøÉý¼¶£¡"
#define	STR_MINE_WITH_PECKER   	    "±ØÐëÒª×°±¸³úÍ·²ÅÄÜÍÚ¿ó¡£"
#define	STR_NO_MINE	                "´ËµØÃ»ÓÐ¿ó²Ø¡£"
#define	STR_GOLD_ORE	            "µÃµ½Ò»¸ö½ð¿óÊ¯£¡"
#define	STR_EUXENITE_ORE	        "µÃµ½Ò»¸öºÚÌú¿ó£¡"
#define	STR_IRON_ORE	            "µÃµ½Ò»¸öÌú¿óÊ¯£¡"
#define	STR_COPPER_ORE	            "µÃµ½Ò»¸öÍ­¿óÊ¯£¡"
#define	STR_SILVER_ORE	            "µÃµ½Ò»¸öÒø¿óÊ¯£¡"
#define	STR_GAIN_GEM	            "¹§Ï²»ñµÃÒ»¿Å±¦Ê¯£¡"
#define	STR_UNQUALIFIED	            "´íÎó£ºÌõ¼þ¼ì²éÊ§°Ü£¡"
#define	STR_DIE                     "You're dead !"
#define	STR_DONOT_GIVE_UP	        "¸óÏÂÉí¸ºÖØÈÎ£¬Ôõ¿É×Ô±©×ÔÆú£¿"
#define	STR_CANNOT_JUMP	            "Äú²»ÄÜÌø£¡"
#define	STR_CHEAT	                "[×÷±×]ÄãÒª·ÖÅäµÄµãÊý´óÓÚÓµÓÐµÄ¿É·ÖÅäµãÊý¡£"
#define	STR_FRIEND_LIST_FULL	    "ºÃÓÑÁÐ±íÒÑÂú¡£"
#define	STR_YOUR_FRIEND_ALREADY	    "¶Ô·½ÒÑ¾­ÊÇºÃÓÑÁË¡£"
#define	STR_MAKE_FRIEND_SENT        "ÒÑ¾­·¢ËÍ½áÎªºÃÓÑµÄÇëÇó"
#define	STR_NOT_YOUR_FRIEND	        "%s ²»ÊÇÄãµÄÅóÓÑ¡£"
#define	STR_NEVER_PROPOSED	        "%s Ã»ÓÐÏòÄãÇó¹ý»é¡£"
#define	STR_SINGLE	                "ÄúÉÐÎ´£¬ÈçºÎÄÜ¹»Àë»é"
#define	STR_NOT_YOUR_SPOUSE	        "%s ºÍÄú²¢·Ç·òÆÞ¹ØÏµ¡£"
#define	STR_NOT_ENOUGH_MANA	        "ÄúµÄÄ§Á¦²»×ã¡£"
#define	STR_UNABLE_USE_ITEM	        "ÎÞ·¨Ê¹ÓÃÎïÆ·!"
#define	STR_YOUR_BAG_FULL	        "ÎïÆ·À¸ÒÑÂú!"
#define	STR_SELFCARE			    "×Ô¹ËÉí·Ý¡£"
#define	STR_CAUTION					"Ð¡ÐÄÎªÃî¡£"
#define	STR_BALANCED			    "ÊÆ¾ùÁ¦µÐ¡£"
#define	STR_INVALID_AMOUNT	        "ÊýÁ¿´íÎó!"
#define	STR_REPAIR_FAILED	        "²»ÄÜÐÞÀí!"
#define	STR_REPAIR_NO_MONEY_d	    "ÐÞÀíÐèÒª»¨·Ñ%d¸ö½ð±Ò£¬½ð±Ò²»×ãÎÞ·¨ÐÞÀí£¡"
#define	STR_INVALID_TITLE	        "´íÎó£º¾üÏÎÃû²»ºÏ·¨!"
#define	STR_NOT_FROM_YOUR_GUILD	    "¶Ô·½²»ÊÇÄúÆïÊ¿ÍÅµÄ³ÉÔ±¡£"
#define	STR_ITEM_DAMAGED	        "¸ÃÎïÆ·Ëð»µÁË!"
#define	STR_CHANGE_NAME	            "ÄúÒÑ¾­¸üÃûÎª%s¡£"
#define	STR_INCREASE_MONEY	        "[ÄúµÄÇ®Ôö¼ÓÁË¡£]"
#define	STR_INCREASE_ITEM	        "[ÄúµÄÎïÆ·Ôö¼ÓÁË¡£]"
#define	STR_KICKOUTALL	            "¿ªÊ¼´¦Àíkickoutall£¬·þÎñÆ÷½ûÖ¹µÇÂ¼£¬ËùÓÐÍæ¼ÒÍË³öÖÐ . . ."
#define	STR_ACTION_SEEN	            "¿ÉÒÔÏÔÊ¾ACTIONÁË¡£"
#define	STR_ACTION_NOTSEEN	        "²»ÏÔÊ¾ACTIONÁË¡£"
#define	STR_NO_STOP	                "Ä¿±êµã²»ÄÜÂä½Å!"
#define	STR_LOCAL_TEST	            "×¢Òâ£º´ËÃüÁîÖ»ÓÃÓÚ±¾µØ²âÊÔ£¬·ñÔò¿ÉÄÜµ¼ÖÂ·þÎñÆ÷±ÀÀ£!"
#define	STR_ACTION_UPDATED	        "[ACTION ¸üÐÂÁË¡£]"
#define	STR_KICK_OUT_GUILD	        "%s ÒÑ¾­±»¿ª³ý³öÆïÊ¿ÍÅ£¡"
#define	STR_NO_PRIZE	            "±§Ç¸£¬Ã»ÓÐ½±Æ·»òÕß½±Æ· »ò Ã»ÓÐ¾­¹ýÁì½±ÍøÒ³È·ÈÏ¡£"
#define	STR_INVALID_CHARACTER	    "ÏûÏ¢ÖÐ°üº¬·Ç·¨×Ö·û!"
#define	STR_LOW_LEVEL	            "ÄãµÄµÈ¼¶Ì«µÍ!"
#define	STR_GM_NO_TEAM	            "¡¾GM¡¿²»ÄÜ½øÐÐ¶ÓÎé²Ù×÷¡£"
#define	STR_TEAMMATE_CANNOT_CREATE	"[¶ÓÎé]ÄúÒÑ¾­ÔÚ¶ÓÎéÖÐÁË£¬²»ÄÜ´´½¨ÐÂ¶ÓÎé¡£"
#define	STR_CREATE_TEAM_FAILED	    "[¶ÓÎé]Äú´´½¨¶ÓÎéÊ§°Ü¡£"
#define	STR_INTEAM_NOJOIN		    "[¶ÓÎé]ÄúÒÑ¾­ÓÐ¶ÓÎéÁË¡£²»ÄÜÉêÇë¼ÓÈëÐÂ¶ÓÎé¡£"
#define	STR_NO_APPLICANT		    "[¶ÓÎé]Ã»ÓÐÕÒµ½ÉêÇë¶ÔÏó¡£"
#define	STR_NO_TEAM					"[¶ÓÎé]ÄúËùÉêÇëµÄ¶ÔÏóÃ»ÓÐ´´½¨¶ÓÎé¡£"
#define	STR_FORBIDDEN_JOIN	        "[¶ÓÎé]¶Ô·½¶ÓÎé½ûÖ¹¼ÓÈëÁË¡£"
#define	STR_TEAM_FULL			    "[¶ÓÎé]ÄúµÄËùÉêÇëµÄ¶ÓÎéÈËÊýÒÑÂú¡£"
#define	STR_NO_CAPTAIN_CLOSE	    "[¶ÓÎé]ÉêÇë¶ÔÏó²»ÊÇ¶Ó³¤£¬ÇëÏò¶Ó³¤Ìá³öÉêÇë¡£"
#define	STR_JOIN_REQUEST_SENT	    "[¶ÓÎé]ÒÑ¾­·¢³ö¼ÓÈë¶ÓÎéÇëÇó¡£"
#define	STR_INVI_SENT			    "[¶ÓÎé]¼ÓÈë¶ÓÎéÉêÇëÒÑ¾­Ìá½»£¬ÇëµÈ´ý»ØÓ¦¡£"
#define	STR_NO_TEAM_TO_INVITE	    "[¶ÓÎé]ÄúÃ»ÓÐ¶ÓÎé£¬ÔõÄÜ½ÓÊÜ±ðÈË¼ÓÈë¶ÓÎé£¿"
#define	STR_NOT_CAPTAIN_INVITE	    "[¶ÓÎé]Äú²»ÊÇ¶Ó³¤£¬ÔõÄÜ½ÓÊÜ±ðÈË¼ÓÈë¶ÓÎé£¿"
#define	STR_YOUR_TEAM_FULL		    "[¶ÓÎé]ÄúµÄ¶ÓÎéÈËÊýÒÑÂú¡£"
#define	STR_APPLICANT_NOT_FOUND	    "[¶ÓÎé]Ã»ÓÐÕÒµ½·¢³öÉêÇëµÄÍæ¼Ò¡£"
#define	STR_HAVE_JOIN_TEAM	        "[¶ÓÎé]ÄúÒÑ¾­¼ÓÈë¶ÓÎéÁË£¬²»ÄÜÍ¬Ê±¼ÓÈëÁíÍâÒ»¸ö¡£"
#define	STR_NOT_TO_JOIN	            "[¶ÓÎé]¶Ô·½Ã»ÓÐ·¢³ö¼ÓÈëÉêÇë£¬Äú²»ÄÜ½ÓÊÜ¶Ô·½¡£"
#define	STR_NOTEAM_TO_INVITE	    "[¶ÓÎé]ÄúÃ»ÓÐ¶ÓÎé£¬ÔõÄÜÑûÇë±ðÈË¼ÓÈë¶ÓÎé£¿"
#define	STR_TEAM_CLOSED	            "[¶ÓÎé]Äú²»ÔÊÐíÆäËûÈË¼ÓÈë¶ÓÎé£¬²Ù×÷Ê§°Ü£¡"
#define	STR_NOT_CAPTAIN_ACCEPT	    "[¶ÓÎé]Äú²»ÊÇ¶Ó³¤£¬ÔõÄÜÑûÇë±ðÈË¼ÓÈë¶ÓÎé£¿"
#define	STR_INVITED_NOT_FOUND	    "[¶ÓÎé]Ã»ÓÐÕÒµ½ÒªÑûÇëµÄÍæ¼Ò¡£"
#define	STR_HAS_IN_TEAM	            "[¶ÓÎé]ÄúËùÑûÇëµÄ¶ÔÏóµÄÒÑ¾­ÓÐ¶ÓÎéÁË¡£"
#define	STR_INVITE_SENT				"[¶ÓÎé]ÒÑ¾­·¢³öÑûÇë¼ÓÈë¶ÓÎéÇëÇó¡£"
#define	STR_SENT_WAIT				"[¶ÓÎé]ÑûÇëÒÑ¾­·¢³ö£¬ÇëµÈ´ý¡£"
#define	STR_INTEAM_NOACCEPT			"[¶ÓÎé]ÄúÒÑ¾­ÓÐ¶ÓÎéÁË£¬²»ÄÜ½ÓÊÜÑûÇë¼ÓÈëÐÂ¶ÓÎé¡£"
#define	STR_INVITER_NOT_FOUND	    "[¶ÓÎé]Ã»ÓÐÕÒµ½ÑûÇëÕß¡£"
#define	STR_NOT_CREATE_TEAM		    "[¶ÓÎé]¶Ô·½»¹Ã»ÓÐ×é¶Ó¡£"
#define	STR_HIS_TEAM_FULL		    "[¶ÓÎé]¶Ô·½µÄ¶ÓÎéÒÑ¾­ÂúÔ±ÁË¡£"
#define	STR_NOT_BE_INVIITED	  	    "[¶ÓÎé]¶Ô·½Ã»ÓÐÏòÄú·¢³ö¼ÓÈë¶ÓÎéµÄÑûÇë£¬²Ù×÷Ê§°Ü¡£"
#define	STR_NO_TEAM_TO_LEAVE	    "[¶ÓÎé]Äú»¹²»ÊÇ¶ÓÔ±£¬²»ÄÜÍË³ö¶ÓÎé¡£"
#define	STR_NO_TEAM_TO_DISMISS	    "[¶ÓÎé]Äú»¹Ã»ÓÐ¶ÓÎé£¬²»ÄÜ½âÉ¢¶ÓÎé¡£"
#define	STR_NOT_CAPTAIN_DISMISS	    "[¶ÓÎé]Äú²»ÊÇ¶Ó³¤£¬²»ÄÜ½âÉ¢¶ÓÎé¡£"
#define STR_INVITED_IS_DEAD			"[¶ÓÎé]²»ÄÜÑûÇëÍöÁé×´Ì¬ÏÂÍæ¼Ò¼ÓÈë¶ÓÎé¡£"
#define STR_APPLIED_LEADER_DEAD		"[¶ÓÎé]²»ÄÜ¼ÓÈëÍöÁéµÄ¶ÓÎé¡£"
#define	STR_NO_TRADE_IN_BATTLE	    "´íÎó£ºÕ½¶·ÖÐ²»ÄÜÖ´ÐÐ½»Ò×Ö¸Áî£¡"
#define	STR_NO_TRADE_IN_TEAM	    "´íÎó£º×é¶Ó×´Ì¬²»ÄÜÖ´ÐÐ½»Ò×Ö¸Áî£¡"
#define	STR_NO_IN_TEAM				"[¶ÓÎé]ÄúÃ»ÓÐ¶ÓÎé¡£"
#define	STR_NO_TRADE_TARGET	        "[½»Ò×]Ã»ÓÐÕÒµ½½»Ò×¶ÔÏó¡£"
#define	STR_TARGET_TRADING	        "[½»Ò×]¶Ô·½ÕýÔÚ½»Ò×ÖÐ£¬ÇëÉÔºóÔÙÊÔ!"
#define	STR_TRADING_REQEST_SENT	    "[½»Ò×]ÒÑ¾­·¢³ö½»Ò×ÇëÇó¡£"
#define	STR_NOT_FOR_TRADE	        "´íÎó£º²»ÄÜ½»Ò×´ËÎïÆ·!"
#define	STR_CANNOT_GO				"Äú²»ÄÜ×ß£¡"
#define	STR_FREE_PK	                "×ÔÓÉPKÄ£Ê½£¬Äã¿ÉÒÔ¹¥»÷ÈÎºÎÈË¡£"
#define	STR_PEACE	                "°²È«PKÄ£Ê½£¬ÄãÖ»ÄÜ¹¥»÷¹ÖÎï£¬²»»áÉËº¦µ½ÆäËüÈÎºÎÍæ¼Ò¡£"
#define	STR_TEAM_PK	                "×é¶ÓPKÄ£Ê½£¬Äã¿ÉÒÔ¹¥»÷¹ÖÎïºÍÆäËüÈË£¬²»»áÉËº¦µ½×Ô¼ººÍ¶ÓÓÑ¡£"
#define	STR_JOIN_A_GUILD	        "%s ¼ÓÈëÁË°ïÅÉ¡£"
#define	STR_BONUS					"¹§Ï²»ñµÃ%u¸ö½±Æ·£¬ÇëÈ¥½»Ò×ÊÐ³¡Áì½±´¦Áì½±£¡"
#define	STR_TO_MAKE_FRIEND			"ÑªÓë»ðµÄÏ´ÀñÖ¤Ã÷ÁË¼á¹ÌµÄÓÑÒê£¬%s¶ÔÄã±¨ÒÔÐÅÈÎµÄÑÛÉñ£¬ÄãÊÇ·ñÔ¸Òâ½ÓÊÜ£¿"
#define	STR_MAKE_FRIEND				"%s¡¢%sì¦ÑªÎªÃË£¬ÐûÊÄ´Ó´Ë½«ÉúËÀÓë¹²£¬ÓÀ²»±³ÅÑ£¡"
#define	STR_BREAK_FRIEND			"%s ²»³Ý %s µÄÐÐ¾¶£¬´Ó´Ë¶Ï¾øºÃÓÑ¹ØÏµ£¬Á½²»Ïà¸É¡£"
#define	STR_MARRY					"%s ºÍ %s ÔÚÉñµÄÃæÇ°Á¢ÏÂÓÀ²»·ÖÀëµÄÊÄÑÔ£¬´Ó´Ë½áÎª·òÆÞ¡£"
#define	STR_DIVORCE					"%s ºÍ %s ¸ÐÇéÆÆÁÑ£¬Ðû²¼Àë»é£¡"
#define	STR_SYN_CONQUER				"¡¾%s¡¿¾­¹ý¼¤ÁÒµÄË»É±£¬ÖÕÓÚÓ®µÃÁËÕ½ÕùµÄÊ¤Àû"
#define	STR_POLICE_WANTED_ORDER		"½Ò°ñÈ·ÈÏ£º×·²¶Ä¿±ê%s£¬¾Ý´«´ËÈË×î½üÔÚ%sÒ»´ø³öÃ»¡£"
#define	STR_GOTO_JAIL				"%s É±ÈËÈçÂé£¬ÖÕÓÚÊ§ÊÖ±»ÇÜ£¬´òÈë´óÀÎ¡£"

#define STR_STUDENT_FULL			"Í½µÜÁÐ±íÒÑÂú¡£"
#define STR_YOUR_STUDENT_ALREADY	"¶Ô·½ÒÑ¾­ÊÇÄãµÄÍ½µÜÁË¡£"
#define STR_STUDENT_APPLY			"%s ÇëÇóÕÐÄãÎªÍ½µÜ¡£"
#define STR_STUDENT_APPLY_SENT		"ÕÐÊÕÍ½µÜµÄÇëÇóÒÑ·¢³ö¡£"
#define STR_HAVE_TEACHER_ALREADY	"¶Ô·½ÒÑ¾­ÓÐÊ¦¸µÁË¡£"
#define STR_TEACHER_APPLY			"%s ÇëÇó°ÝÄãÎªÊ¦¡£"
#define STR_TEACHER_APPLY_SENT		"°ÝÊ¦µÄÇëÇóÒÑ·¢³ö¡£"
#define STR_NO_STUDENT_APPLY		"¶Ô·½²¢Ã»ÓÐÒªÇóÕÐÄãÎªÍ½¡£"
#define STR_NO_TEACHER_APPLY		"¶Ô·½²¢Ã»ÓÐÇëÇó°ÝÄãÎªÊ¦¡£"
#define STR_MAKE_TEACHERSTUDENT		"%s Óë %s ½¨Á¢ÁËÊ¦Í½¹ØÏµ¡£"
#define STR_TEACHER_EXP				"»ñµÃµ¼Ê¦¾­Ñé %d¡£"
#define STR_NOT_ENOUGH_TUTOREXP		"µ¼Ê¦¾­Ñé²»×ã¡£"
#define STR_NOT_ENOUGH_TUTOREXP2	"¶Ô·½µ¼Ê¦¾­Ñé²»×ã£¬ÉêÇëÊ§°Ü¡£"
#define STR_HEIGHT_LEV				"ÄúµÄµÈ¼¶Ì«¸ß¡£"
#define STR_HEIGHT_LEV2				"¶Ô·½µÈ¼¶Ì«¸ß¡£"
#define STR_LOW_LEV2				"¶Ô·½µÈ¼¶Ì«µÍ£¬²»ÔÊÐíÏò¶Ô·½°ÝÊ¦¡£"
#define STR_STUDENT_FULL2			"¶Ô·½Í½µÜÃû¶îÒÑÂú£¬ÉêÇëÊ§°Ü¡£"
#define STR_TUTOR_NO_ONLINE         "´Ëµ¼Ê¦²»ÔÚÏß£¡"
#define STR_LEAVE_TEACHER			"ÄúÓë %s ½â³ýÁËÊ¦Í½¹ØÏµ¡£"
#define STR_LEAVE_TEACHER2			"%s ÓëÄã½â³ýÁËÊ¦Í½¹ØÏµ¡£"
#define STR_LEAVE_TEACHER3			"ÄúµÄÍ½µÜ %s ÓëÄú½áÊøÁËÊ¦Í½¹ØÏµ¡£"
#define STR_LEAVE_TEACHER4			"ÄúµÄÊ¦¸µ %s ÓëÄú½áÊøÁËÊ¦Í½¹ØÏµ¡£"

#define STR_MERCENARY_TASK_OK		"Ó¶±øÈÎÎñÌá½»³É¹¦£¡"
#define STR_INVALID_MERCENARYTASK	"´íÎó£º·Ç·¨Ó¶±øÈÎÎñ£¡"
#define STR_PUBLISH_ONE_TASK_ONLY	"´íÎó£ºÒ»´ÎÖ»ÄÜ·¢²¼Ò»ÌõÈÎÎñ£¡"
#define STR_DUPLICATE_TASK			"´íÎó£ºÒ»´ÎÖ»ÄÜ½ÓÒ»¸öÈÎÎñ£¡"
#define STR_TUTOR_REQUEST			"%s ÇëÇó°ÝÄãÎªÊ¦£¬Çë¾¡¿ì¸úËûÁªÏµ¡£"
#define STR_TUTOR_REQUEST_SEND   	"Èý·ÖÖÓÄÚµ¼Ê¦»á¸úÄúÁªÏµ£¬Èç¹ûÈý·ÖÖÓÄÚÃ»ÓÐÁªÏµ£¬Ôò¿ÉÁíÍâ°ÝÊ¦¡£"
#define STR_CANNOT_CANCEL_TASK		"´íÎó£ºÈÎÎñ²»ÄÜÈ¡Ïû£¡"
#define STR_ACCEPT_TASK_OK			"½ÓÈÎÎñ³É¹¦¡£"
#define STR_TAKE_PRIZE_OK			"³É¹¦ÁìÈ¡½±Æ·¡£"
#define STR_TASK_NOT_FINISHED_YET	"´íÎó£ºÈÎÎñ»¹Î´Íê³É¡£"
#define STR_CANCEL_TASK_OK			"ÈÎÎñ³É¹¦È¡Ïû¡£"
#define STR_CLOSE_TASK_OK			"ÈÎÎñ³É¹¦½áÊø¡£"
#define STR_TASK_FINISHED			"ÈÎÎñÍê³É¡£"
#define STR_LOW_MERCENARY_RANK		"´íÎó£ºÓ¶±øµÈ¼¶Ì«µÍ¡£"
#define STR_TASK_TIMEOUT			"Ó¶±øÈÎÎñ³¬Ê±£¬ÒÑ¾­×Ô¶¯È¡Ïû¡£"
#define STR_DUPLICATE_ANNOUNCE      "Ò»´ÎÖ»ÄÜ·¢Ò»¸ö¹«¸æ£¡"
#define STR_LOW_GRADE               "ÄãµÄµ¼Ê¦µÈ¼¶Ì«µÍ£¬²»ÄÜ·¢²¼¹«¸æ¡£"
#define STR_ANNOUNCE_SUCCEED        "·¢²¼¹«¸æ³É¹¦¡£"
#define STR_NO_ANNOUNCE             "ÄãÃ»ÓÐ·¢²¼¹«¸æ£¡"
#define STR_DELETE_ANNOUNCE         "³É¹¦É¾³ý¹«¸æ"
#define STR_ILLEGAL_TASK_ITEM		"ÎïÆ·²»·ûºÏÈÎÎñÒªÇó£¡"
#define STR_NOANY_ANNOUNCE          "µ±Ç°Ã»ÓÐµ¼Ê¦¹«¸æ·Ö²¼"
#define STR_CANNOT_ACCEPT_MYTASK	"´íÎó£º²»ÄÜ½Ó×Ô¼ºµÄÈÎÎñ£¡"
#define STR_EUDEMON_LOW_LEVEL		"´íÎó£º»ÃÊÞµÈ¼¶²»×ã%d¼¶£¡"
#define STR_EUDEMON_CANNOT_EVOLVE	"´íÎó£º»ÃÊÞ²»ÄÜ½ø»¯£¡"
#define STR_AVOID_DEATH				"×Ô¶¯Ê¹ÓÃ %s ±¦Ê¯£¬ÃâËÀÒ»´Î¡£"
#define STR_AUTO_USE_SCAPEGOAT		"×Ô¶¯Ê¹ÓÃ %s ±¦Ê¯£¬ÃâÊÜ³Í·£¡£"
#define STR_AUTO_USE_REBORN			"×Ô¶¯Ê¹ÓÃ %s ±¦Ê¯£¬Ô­µØ¸´»î¡£"
#define STR_AUTO_USE_ANTISTEAL		"×Ô¶¯Ê¹ÓÃ %s ±¦Ê¯£¬ÃâÊÜÍµµÁ¡£"
#define STR_AVOID_STEAL				"ÒÀ¿¿·´ÍµµÁ±¦Ê¯µÄ°ïÖú£¬Äã¶ã¹ýÁË%sµÄÍµÇÔ¡£"
#define STR_STOLEN					"Äã±»%sÍµ×ßÁË%s¡£"
#define STR_AUCTION_PACKAGE_FULL    "ÄãµÄÅÄÂô²Ö¿âÒÑÂú£¬ÇëÏÈÈ¡³öÀïÃæµÄÎïÆ·£¬ÔÙ¼ÓÈëÅÄÂôÎïÆ·"
#define STR_AUCTION_PACKAGE_FULL1   "ÄãµÄÅÄÂô²Ö¿âÒÑÂú£¬²»ÄÜ²Î¼Ó¾ºÅÄ¡£"
#define STR_AUCTION_LESS_MONEY      "ÄãÃ»ÓÐ×ã¹»µÄ½ðÇ®Ö§¸¶ÅÄÂôÓ¶½ð¡£"
#define STR_AUCTION_SYS_BID         "ÏÖÔÚÊÇÏµÍ³ÅÄÂôÊ±¼ä£¬Íæ¼ÒÅÄÂôÔÚÏµÍ³ÅÄÂô½áÊøºóÖØÐÂ¿ªÊ¼"
#define STR_AUCTION_BID_PACKAGE_FULL "²Ö¿âÒÑÂú£¬Çë´ýÓÐ¿ÕÎ»µÄÊ±ºòÔÙ·ÅÈë¾ºÅÄÎïÆ·"
#define STR_NOT_SHOUT               "ÎïÆ·ÒÑ¾­"
#define STR_SHOUT                   "Äú»¨ÁË%dÃ¶½ð±Ò²ÎÓë%sµÄ¾ºÅÄ¡£"
#define STR_AUCTION_JOIN_SUCCESS    "ÄãµÄÎïÆ·ÒÑ¾­·ÅÈë¾ºÅÄ²Ö¿âµÈ´ýÅÄÂô¡£ÔÚ¶ÓÁÐÖÐµÄÎ»ÖÃÎª%d"
#define STR_AUCTION_JOIN_ERROR      "·ÅÈëÎïÆ·´íÎó"
#define STR_AUCTION_CHECK_ERROR     "²é¿´ÎïÆ·´íÎó"
#define STR_SHOUT_PRICE_SELF_ERR    "×Ô¼ºµÄÎïÆ·²»ÄÜ²Î¼ÓÅÄÂô"
#define STR_AUCTION_NOT_ITEM        "µ±Ç°Ã»ÓÐÎïÆ·ÅÄÂô"
#define STR_AUCTION_MIN_VALUE       "ÅÄÂôÎïÆ·µÄµ×¼Û²»ÄÜÉÙÓÚ%dÃ¶½ð±Ò¡£"
#define STR_SPECIAL_GOODS_JOIN_ERR  "ÎïÆ·²»ÄÜÅÄÂô"		//"ÌØÊâÎïÆ·²»ÄÜÅÄÂô"
#define STR_AUCTION_SHOUTPRICE_LOW  "Äã³öµÄ¼Û±ØÐë¸ßÓÚÏÖÔÚµÄ×îµÍ³ö¼Û£¡£¡"
#define STR_AUCTION_BIDED           "Äú¾ºÅÄµÄÎïÆ·ÒÑÁ÷ÅÄ»ò±»ÈËÂò×ß¡£"
#define STR_AUCTION_BID_ERROR       "ÏµÍ³ÅÄÂô³ö´í"
#define STR_AUCTION_BID_FAIL        "ÅÄÂôÎïÆ·Ê§°Ü£¬ÎïÆ·ÒÑ·ÅÈëÅÄÂô²Ö¿â"
#define STR_AUCTION_BID             "%s£¬%s¿ª¼Û%dÃ¶½ð±Ò£¬µÚ%d´Î£¬»¹ÓÐÃ»ÓÐÈË¿ª¼Û?"
#define STR_AUCTION_BID_SUCCESS     "ÄãµÄÎïÆ·ÒÑ¾­ÅÄÂô³öÈ¥£¬»ñµÃ½ðÇ®:%d"
#define STR_AUCTION_SYS_JOIN_MORETIMES  "ÔÚÍ¬Ò»Ê±¼äÀï¿ªÊ¼¶à´ÎÏµÍ³ÅÄÂô"
#define STR_AUCTION_HAMMER          "¹§Ï² %s ÒÔ %d Ã¶½ð±ÒÂòµ½ %s¡£"
#define STR_AUCTION_NEW             "±¾ÂÖÅÄÂôÎïÆ·Îª%sµÄ%s£¬µ×¼ÛÎª%dÃ¶½ð±Ò£¬ÏÖÔÚ¿ªÊ¼¾ºÅÄ¡£"
#define STR_AUCTION_SYS_ITEM_INVALID "ÏµÍ³ÅÄÂô[%u]ÖÐ·¢ÏÖ·Ç·¨µÄitemtypeÖµ[%u]"
#define STR_EUDEMON_DEAD			"´íÎó£º»ÃÊÞÒÑËÀÍö¡£"
#define STR_TOOMUCH_MONEY_SAVED		"²Ö¿âÇ®Ì«¶àÁË£¬²»¿ÉÒÔÔÙ´æ¡£"
#define STR_TOOMUCH_MONEY			"ÄúÉíÉÏÇ®Ì«¶àÁË£¬²»¿ÉÒÔÔÙÊ°È¡¡£"
#define STR_TOOMUCH_MONEY_TO_DRAW	"ÄúÉíÉÏÇ®Ì«¶àÁË£¬²»¿ÉÒÔÔÙÈ¡¡£"
#define STR_NOT_ENOUGH_POTENTIAL	"ÄúµÄÇ±ÄÜÖµ²»×ã£¬ÎÞ·¨Ê¹ÓÃ½á½ç¡£"
#define STR_BOOTH_FULL				"ÄúµÄÌ¯Î»ÒÑÂú£¬²»ÄÜÔÙ·ÅÖÃ¸ü¶àÎïÆ·¡£"
#define STR_TUTOR_LOGIN				"ÄúµÄÊ¦¸µ%sÀ´µ½ÁË¡¾Ä§Óò¡¿¡£"
#define STR_TUTOR_LOGOUT			"ÄúµÄÊ¦¸µ%sÀë¿ªÁË¡¾Ä§Óò¡¿¡£"
#define STR_DROP_MONEY_SUCC			"Äú¶ªÆúÁË%d½ð±Ò¡£"
#define STR_DIE_DROP_MONEY			"ÄãÒÅÊ§ÁË%dÃ¶½ð±Ò¡£"
#define STR_TEAM_MAGIC				"%s ·¢¶¯¡£"
#define STR_TEAM_MAGIC2				"%s ·¢¶¯£¬Ð§¹ûÔö¼Ó%d%%¡£"
#define STR_TEAM_STATUS_POWER_INC	"½á½çÐ§¹ûÔö¼Ó%d%%¡£"
#define STR_TEAM_STATUS_POWER_DEC	"½á½çÐ§¹û½µµÍ%d%%¡£"
#define STR_TEAM_STATUS_DISAPPEAR	"½á½çÐ§¹ûÏûÊ§¡£"
#define STR_INCPK_REDNAME_PUNISH	"PKÖµ¼ÌÐøÔö¼Ó£¬½«»áÊÜµ½ºìÃûµÄ³Í·£¡£"
#define STR_INCPK_BLACKNAME_PUNISH	"PKÖµ¼ÌÐøÔö¼Ó£¬½«»áÊÜµ½ºÚÃûµÄ³Í·£¡£"
#define STR_INCPK_BLACKNAME_PUNISH2	"PKÖµ¼ÌÐøÔö¼Ó£¬½«»áÑÓ³¤ºÚÃû³Í·£µÄÊ±¼ä¡£"
#define STR_NOT_FOR_TASK_PRIZE		"´íÎó£º²»ÄÜ×÷ÎªÓ¶±øÈÎÎñ½±ÀøÎïÆ·¡£"
#define STR_EUDEMON_OVERLEVEL		"»ÃÊÞµÈ¼¶Ì«¸ß£¬ÄúÔÝÊ±ÎÞ·¨ÕÙ»½¡£"
#define STR_MAX_EUDEMONAMOUNT		"Äú×î¶àÖ»ÄÜÍ¬Ê±ÕÙ»½ %d Ö»»ÃÊÞ¡£"

#define STR_SYNWAR_ANNOUNCE			"%d-%d-%d 20:00:00 ¿ªÊ¼¹¥´ò°ïÅÉ %s¡£"
#define STR_SYNWAR_ANNOUNCE2		"%d-%d-%d 20:00:00 %s °ïÅÉ¿ªÊ¼¹¥´ò±¾°ïÅÉ¡£"





//cn_ddres.h É¾³ý²¿·Ö
#define	STR_WEAPON_SKILL_UPLEV		"¹§Ï²¸óÏÂÎäÆ÷ÊìÁ·¶ÈÓÖÉýÒ»¼¶¡£"
#define DRAGON_BALL_DROP			"±¦¹âÒ»ÉÁ£¬%s´Ó¹ÖÎïÉíÉÏ´ò³öÒ»¸öÁúÖé¡£"
#define	STR_SUPERMAN_BROADCAST_sddd	"%s ÎäÒÕ¾«Õ¿£¬ÔÚ±¬·¢Ê±¼äÄÚÉ±ËÀ%dÖ»¹ÖÎï£¬ÈÙµÇKOÅÅÐÐ°ñµÄµÚ%dÃû£¬½±ÀøKOÊ±¼ä%dÃë¡£"
#define	STR_DISPATCHXP_s			"%s Ò»ÉùÅ­ºð£¬Í¬¶ÓµÄÕ½ÓÑ¸ö¸ö¾«ÉñÒ»Õð£¬XPÖµÉÏÉý£¡"
#define	STR_NO_ENOUGH_POWER			"¸óÏÂµÄÄÚÁ¦²»×ã£¬²»ÄÜÇ§Àï´«Òô!"
#define	STR_NO_ENOUGH_LEVEL			"¸óÏÂµÄÐÞÐÐÌ«µÍ£¬²»ÄÜÇ§Àï´«Òô!"
#define	STR_CAN_NOT_TALK			"Äú±»µãÑ¨ÁË£¬ÎÞ·¨Ëµ»°!"
#define	STR_DIE_FORGIVE	            "ÈËËÀÈçµÆÃð£¬ºÎ¿à¾À²ø²»ÐÝ£¿"
#define	STR_DIE_STOP_ATTACK	        "ËÀÕßÎª´ó£¬½ûÖ¹±ÞÊ¬¡£"
#define	STR_NO_MANA_UNLOCK		    "ÄÚÁ¦²»×ã£¬²»ÄÜ³åÑ¨!"
#define	STR_NO_CULTIVATION		    "¸óÏÂÐÞÎªÌ«Ç³£¬³åÑ¨Ê§°Ü!"
#define	STR_NO_PK_VILLAGE	        "ÐÂÊÖ´å½ûÖ¹PK£¡"
#define	STR_VITAL_POINT_STRICKEN	"Äú±»µãÑ¨ÁË£¬ÎÞ·¨Ëµ»°!"
#define	STR_NO_LV_BROADCAST	        "¸óÏÂµÄÐÞÐÐÌ«µÍ£¬²»ÄÜÇ§Àï´«Òô!"
#define	STR_NO_MANA_BROADCAST	    "¸óÏÂµÄÄÚÁ¦²»×ã£¬²»ÄÜÇ§Àï´«Òô!"
//---------------------------------------------------------------------------

#endif // _FAITH_EMULATOR_STRRES_H
