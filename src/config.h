/* eXtended Login Shell
 * (c) 2011 Michał Siejak
 *
 * See COPYING file for license details.
 */

#ifndef __XLSH_CONFIG_H
#define __XLSH_CONFIG_H

// Tweak parameters to suit your needs before compiling.

#define XLSH_EXEC      "./.xsession"
#define XLSH_PROMPT    "%s (%s)> "
#define XLSH_TMPDIR    "/tmp"
#define XLSH_SHELLS    "/etc/shells"
#define XLSH_PATH      "/bin:/usr/bin:/usr/local/bin"
#define XLSH_REBOOT    "/sbin/shutdown -r now"
#define XLSH_HALT      "/sbin/shutdown -h now"

#define XLSHD_TMPDIR   XLSH_TMPDIR
#define XLSHD_SHELL    "/bin/sh"
#define XLSHD_PIDFILE  "/var/run/xlshd.pid"
#define XLSHD_XSERVER  "/usr/bin/X"
#define XLSHD_XOPTIONS "-nolisten tcp -noreset"
#define XLSHD_XDISPLAY ":0"
#define XLSHD_XLSHRC   "/etc/xlsh/xlshrc"
#define XLSHD_XWAIT    1
#define XLSHD_XRETRY   2

#endif