QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addmember.cpp \
    allbooks.cpp \
    allmembers.cpp \
    issuebook.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    updatebook.cpp

HEADERS += \
    addbook.h \
    addmember.h \
    allbooks.h \
    allmembers.h \
    issuebook.h \
    login.h \
    mainwindow.h \
    updatebook.h

FORMS += \
    addbook.ui \
    addmember.ui \
    issuebook.ui \
    login.ui \
    mainwindow.ui \
    updatebook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
