#include <iostream>
#include <QGuiApplication>
#include "udpsender.h"

using namespace std;

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);
    UdpSender udpSender;
    udpSender.run();
    cout << "Hello World!" << endl;

    return app.exec();
}
