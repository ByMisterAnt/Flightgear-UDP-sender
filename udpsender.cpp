#include "udpsender.h"


UdpSender::UdpSender(QObject *parent) : QObject(parent)
{
    udpSocketSend = new QUdpSocket(this);
    udpSocketSend->bind(QHostAddress::LocalHost,4900);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &UdpSender::run);
    timer->start(10);
}

void UdpSender::send()
{
    vec[0] += 0.001;
    vec[1] += 0.001;
    QByteArray datagram = QByteArray::fromRawData(
            reinterpret_cast<const char*>(vec.constData()),
            sizeof(double) * vec.size()
        );
    
    udpSocketSend->writeDatagram(datagram, QHostAddress::LocalHost, 4900);

}
