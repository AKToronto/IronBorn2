/* flyvideo.h - Keytable for flyvideo Remote Controller
 *
 * keymap imported from ir-keymaps.c
 *
 * Copyright (c) 2010 by Mauro Carvalho Chehab <mchehab@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <media/rc-map.h>
#include <linux/module.h>

static struct rc_map_table flyvideo[] = {
	{ 0x0f, KEY_0 },
	{ 0x03, KEY_1 },
	{ 0x04, KEY_2 },
	{ 0x05, KEY_3 },
	{ 0x07, KEY_4 },
	{ 0x08, KEY_5 },
	{ 0x09, KEY_6 },
	{ 0x0b, KEY_7 },
	{ 0x0c, KEY_8 },
	{ 0x0d, KEY_9 },

	{ 0x0e, KEY_MODE },	
	{ 0x11, KEY_VIDEO },	
	{ 0x15, KEY_AUDIO },	
	{ 0x00, KEY_POWER },	
	{ 0x18, KEY_TUNER },	
	{ 0x02, KEY_ZOOM },	
	{ 0x1a, KEY_LANGUAGE },	
	{ 0x1b, KEY_MUTE },	
	{ 0x14, KEY_VOLUMEUP },	
	{ 0x17, KEY_VOLUMEDOWN },
	{ 0x12, KEY_CHANNELUP },
	{ 0x13, KEY_CHANNELDOWN },
	{ 0x06, KEY_AGAIN },	
	{ 0x10, KEY_ENTER },	

	{ 0x19, KEY_BACK },	
	{ 0x1f, KEY_FORWARD },	
	{ 0x0a, KEY_ANGLE },	
};

static struct rc_map_list flyvideo_map = {
	.map = {
		.scan    = flyvideo,
		.size    = ARRAY_SIZE(flyvideo),
		.rc_type = RC_TYPE_UNKNOWN,	
		.name    = RC_MAP_FLYVIDEO,
	}
};

static int __init init_rc_map_flyvideo(void)
{
	return rc_map_register(&flyvideo_map);
}

static void __exit exit_rc_map_flyvideo(void)
{
	rc_map_unregister(&flyvideo_map);
}

module_init(init_rc_map_flyvideo)
module_exit(exit_rc_map_flyvideo)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
