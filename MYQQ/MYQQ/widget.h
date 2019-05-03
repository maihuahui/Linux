#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QUdpSocket;

namespace Ui {
class Widget;
}
enum MsgType{Msg, UsrEnter, UsrLeft, FileName, Refuse};
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0,QString usrname = "忆梦如澜");
    ~Widget();

protected:
    void usrEnter(QString usrname,QString ipaddr);
    void usrLeft(QString usrname,QString time);
    void sndMsg(MsgType type, QString srvaddr="");

    QString getIP();
    QString getUsr();
    QString getMsg();

private:
    Ui::Widget *ui;
    QUdpSocket *udpSocket;
    qint16 port;
    QString uName;


private slots:
    void processPendingDatagrams();
    void on_sendBtn_clicked();
};

#endif // WIDGET_H
