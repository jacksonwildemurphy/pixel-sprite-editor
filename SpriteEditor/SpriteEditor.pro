#-------------------------------------------------
#
# Project created by QtCreator 2016-03-24T15:30:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpriteEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    model.cpp \
    sprite.cpp \
    image.cpp \
    layer.cpp \
    vector.cpp \
    pen.cpp \
    eraser.cpp \
    bucket.cpp \
    gifexport.cpp \
    spritegraphicsview.cpp

HEADERS  += mainwindow.h \
    model.h \
    sprite.h \
    tool.h \
    image.h \
    layer.h \
    vector.h \
    pen.h \
    eraser.h \
    bucket.h \
    gifexport.h \
    spritegraphicsview.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

unix:!macx: LIBS += -L$$PWD/../../../../../../../../usr/lib64/ -lMagick++ -lMagickCore

INCLUDEPATH += $$PWD/../../../../../../../../usr/include/ImageMagick
DEPENDPATH += $$PWD/../../../../../../../../usr/include/ImageMagick

unix:!macx: LIBS += -L$$PWD/../../../../../../lib64/ -lMagick++ -lMagickCore

INCLUDEPATH += $$PWD/../../../../../../usr/include
DEPENDPATH += $$PWD/../../../../../../usr/include
