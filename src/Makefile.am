LIBS = $(ZAKFORMGDAEX_LIBS)

AM_CPPFLAGS = $(ZAKFORMGDAEX_CFLAGS) \
              -DLOCALEDIR=\"$(localedir)\" \
              -DG_LOG_DOMAIN=\"ZakFormGdaEx\"

lib_LTLIBRARIES = libzakformgdaex.la

libzakformgdaex_la_SOURCES = \
                             form.c

libzakformgdaex_la_LDFLAGS = -no-undefined

libzakformgdaex_include_HEADERS = \
                                  libzakformgdaex.h \
                                  form.h

libzakformgdaex_includedir = $(includedir)/libzakformgdaex
