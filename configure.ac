AC_PREREQ([2.69])
AC_INIT([VncProto], [1.3.1], [https://github.com/bbidulock/VncProto/issues], [vncproto])
AC_REVISION([1.3.1])
AM_INIT_AUTOMAKE([foreign dist-bzip2])
AM_MAINTAINER_MODE

# Require xorg-macros minimum of 1.12 for Dockbook external references
m4_ifndef([XORG_MACROS_VERSION],
	  [m4_fatal([must install xorg-macros 1.12 or later before running autoconf/autogen])])
XORG_MACROS_VERSION(1.12)
XORG_DEFAULT_OPTIONS
XORG_ENABLE_SPECS
XORG_WITH_XMLTO(0.0.22)
XORG_WITH_FOP
XORG_WITH_XSLTPROC
XORG_CHECK_SGML_DOCTOOLS(1.8)

AC_OUTPUT([Makefile
	   specs/Makefile
	   vncproto.pc])
