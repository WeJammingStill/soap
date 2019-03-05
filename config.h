/* See LICENSE file for copyright and license details. */

static const Pair pairs[] = {
	/* regex                  action */
	{ "\.(jpg|png|tiff)$",    "sxiv.sh %s 2>/dev/null"        },
	{ "\.gif$",               "mpv --loop %s 2>/dev/null" },
	{ "\.mp3$",               "termite -e mpv %s" },
	{ "^(http://|https://)?(www\.)?(youtube.com/watch\?|youtu\.be/)", "mpv %s 2>/dev/null" }
};
