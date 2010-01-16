#############################################################################
# Makefile for building: HeightMapColorizer
# Generated by qmake (2.01a) (Qt 4.5.3) on: Sat Jan 16 19:16:39 2010
# Project:  HeightMapColorizer.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile HeightMapColorizer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -march=native -O2 -fomit-frame-pointer -pipe -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -march=native -O2 -fomit-frame-pointer -pipe -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4 -I. -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/usr/lib64/qt4
LIBS          = $(SUBLIBS)  -L/usr/lib64/qt4 -lQtXml -L/usr/lib64 -L/usr/lib64/qt4 -pthread -pthread -lQtGui -L/usr/X11R6/lib -laudio -lXt -pthread -lpng -lfreetype -lSM -lICE -pthread -pthread -lXrender -lXrandr -lXinerama -lfontconfig -lXext -lX11 -lQtCore -lz -lm -pthread -lgthread-2.0 -lrt -lglib-2.0 -ldl -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		myTableWidget.cpp \
		gradient.cpp \
		xml_handlers.cpp moc_myTableWidget.cpp
OBJECTS       = main.o \
		myTableWidget.o \
		gradient.o \
		xml_handlers.o \
		moc_myTableWidget.o
DIST          = foo.xml \
		/usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		HeightMapColorizer.pro
QMAKE_TARGET  = HeightMapColorizer
DESTDIR       = 
TARGET        = HeightMapColorizer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_tableWidget.h ui_gradientSelector.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: HeightMapColorizer.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib64/qt4/libQtXml.prl \
		/usr/lib64/qt4/libQtCore.prl \
		/usr/lib64/qt4/libQtGui.prl
	$(QMAKE) -unix -o Makefile HeightMapColorizer.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib64/qt4/libQtXml.prl:
/usr/lib64/qt4/libQtCore.prl:
/usr/lib64/qt4/libQtGui.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile HeightMapColorizer.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/HeightMapColorizer1.0.0 || $(MKDIR) .tmp/HeightMapColorizer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/HeightMapColorizer1.0.0/ && $(COPY_FILE) --parents myTableWidget.h gradient.h .tmp/HeightMapColorizer1.0.0/ && $(COPY_FILE) --parents main.cpp myTableWidget.cpp gradient.cpp xml_handlers.cpp .tmp/HeightMapColorizer1.0.0/ && $(COPY_FILE) --parents tableWidget.ui gradientSelector.ui .tmp/HeightMapColorizer1.0.0/ && (cd `dirname .tmp/HeightMapColorizer1.0.0` && $(TAR) HeightMapColorizer1.0.0.tar HeightMapColorizer1.0.0 && $(COMPRESS) HeightMapColorizer1.0.0.tar) && $(MOVE) `dirname .tmp/HeightMapColorizer1.0.0`/HeightMapColorizer1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/HeightMapColorizer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_myTableWidget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_myTableWidget.cpp
moc_myTableWidget.cpp: ui_tableWidget.h \
		gradient.h \
		myTableWidget.h
	/usr/bin/moc $(DEFINES) $(INCPATH) myTableWidget.h -o moc_myTableWidget.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_tableWidget.h ui_gradientSelector.h
compiler_uic_clean:
	-$(DEL_FILE) ui_tableWidget.h ui_gradientSelector.h
ui_tableWidget.h: tableWidget.ui
	/usr/bin/uic tableWidget.ui -o ui_tableWidget.h

ui_gradientSelector.h: gradientSelector.ui
	/usr/bin/uic gradientSelector.ui -o ui_gradientSelector.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp myTableWidget.h \
		ui_tableWidget.h \
		gradient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

myTableWidget.o: myTableWidget.cpp myTableWidget.h \
		ui_tableWidget.h \
		gradient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o myTableWidget.o myTableWidget.cpp

gradient.o: gradient.cpp gradient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gradient.o gradient.cpp

xml_handlers.o: xml_handlers.cpp myTableWidget.h \
		ui_tableWidget.h \
		gradient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o xml_handlers.o xml_handlers.cpp

moc_myTableWidget.o: moc_myTableWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_myTableWidget.o moc_myTableWidget.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
