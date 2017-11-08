QT += core
QT -= gui

CONFIG += c++11

TARGET = JsonDataBrowser
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

LIBS += -lboost_system -lboost_chrono -lboost_thread -lboost_timer

CONFIG(release, debug|release) {
    message( "release" )
    *-arm-*|*-oe-*  {
        message("arm!!")
        DESTDIR = release/arm
    }else{
        message("x86!!")
        DESTDIR = release/x86
    }
    DEFINES += __RELEASE__
}

CONFIG(debug, debug|release) {
    message( "debug" )
    *-arm-*|*-oe-*  {
        message("arm!!")
        DESTDIR = debug/arm
    }else{
        message("x86!!")
        DESTDIR = debug/x86
    }
    DEFINES += __DEBUG__
    QMAKE_CXXFLAGS += -g
}

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR     = $$DESTDIR/.moc
RCC_DIR     = $$DESTDIR/.qrc
UI_DIR      = $$DESTDIR/.ui



# Install path
*-arm-*|*-oe-*  {
   target.path = deploy/arm
   additional_files.path = ./debug/arm
}else{
   target.path = deploy/x86
   additional_files.path = ./debug/x86
}

INSTALLS += target

additional_files.files = sample.json
INSTALLS +=additional_files

SOURCES += main.cpp \
    $$PWD/json_data_browser/json_parser/json_parser.cpp \
    $$PWD/json_data_browser/data_manager/data_manager.cpp \
    $$PWD/json_data_browser/json_data_browser.cpp \
    json_data_browser/item_manager/item_manager.cpp \
    json_data_browser/item_manager/json_item.cpp
    $$PWD/json_data_browser/item_manager

HEADERS += \
    $$PWD/json_data_browser/json_parser/json_parser.hpp \
    $$PWD/json_data_browser/data_manager/data_manager.hpp \
    $$PWD/json_data_browser/json_data_browser.hpp \
    json_data_browser/item_manager/item_manager.hpp \
    json_data_browser/item_manager/json_item.hpp

DISTFILES += \
    sample.json
