QT += core
QT -= gui

CONFIG += c++11

TARGET = JsonDataBrowser
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

LIBS += -lboost_system -lboost_chrono -lboost_thread -lboost_timer

SOURCES += main.cpp \
    $$PWD/json_data_browser/json_parser/json_parser.cpp \
    $$PWD/json_data_browser/data_manager/data_manager.cpp \
    $$PWD/json_data_browser/json_data_browser.cpp

HEADERS += \
    $$PWD/json_data_browser/json_parser/json_parser.hpp \
    $$PWD/json_data_browser/data_manager/data_manager.hpp \
    $$PWD/json_data_browser/json_data_browser.hpp

DISTFILES += \
    sample.json
