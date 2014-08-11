SUBDIRS = specs

vncdir = $(includedir)/X11/extensions
vnc_HEADERS = \
	vnc.h \
	vncproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = vncproto.pc

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
