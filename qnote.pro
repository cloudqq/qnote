HEADERS   = mainwindow.h

SOURCES = main.cpp \
		  mainwindow.cpp



target.path 		= qnote
sources.files 		= $$SOURCES $$HEADERS $$RESOURCES $$FORMS qnote.pro README
sources.path 		= qnote

INSTALLS += target sources

