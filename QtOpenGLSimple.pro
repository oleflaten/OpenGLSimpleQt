#QT += opengl
QT += gui

QMAKE_CXXFLAGS += -std=c++11

SOURCES += \
    main.cpp \
    openglwindow.cpp \
    trianglewindow.cpp

HEADERS += \
    trianglewindow.h \
    openglwindow.h

DISTFILES += \
    fragmentshader.glsl \
    vertexshader.glsl
