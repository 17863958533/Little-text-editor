QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    qwmainwindow.cpp

HEADERS += \
    qwmainwindow.h

FORMS += \
    qwmainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc \
    res.qrc

#这里首先新建一个.rc文件，文件中写入“IDI_ICON   ICON    DISCARDABLE     "E:\\QtProject\\samp2_4\\icon\\20.ico"”，之后添加上这两行，就可以修改最终生成的exe的图标
RC_ICONS = E:\QtProject\samp2_4\icon\20.ico
RC_FILE = E:\QtProject\samp2_4\icon\icon.rc

