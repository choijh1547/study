#include <QCoreApplication>

#include "json_data_browser/json_data_browser.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    JsonDataBrowser * json_data_browser = new JsonDataBrowser();
    json_data_browser->init();


    return a.exec();
}
