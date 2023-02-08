#ifndef UDPSENDER_H
#define UDPSENDER_H
#include <QHostAddress>
#include <QUdpSocket>
#include <QByteArray>
#include <QVector>
#include <QAbstractSocket>
#include <QString>
#include <QTimer>


class UdpSender: public QObject
{
    Q_OBJECT

public:
    UdpSender(QObject *parent = 0);

    void run();

private:
    QUdpSocket *udpSocketSend;
    QUdpSocket *udpSocketGet;

    QString m_ip  ;
    quint16 m_port;

    QTimer *timer;

    QVector<double> vec = {11, 0.2, 2500, 10, 10, 10};
};

#endif // UDPSENDER_H
