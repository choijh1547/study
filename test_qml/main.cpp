#include "test.hpp"

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QGuiApplication>

#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Test test;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("test", &test);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();
}
