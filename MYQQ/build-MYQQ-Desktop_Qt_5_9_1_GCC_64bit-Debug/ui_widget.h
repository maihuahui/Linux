/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *msgBrowser;
    QTextEdit *msgTxtEdit;
    QTableWidget *usrTblWidget;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QPushButton *sendBtn;
    QLabel *usrNumLbl;
    QPushButton *exitBtn;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *sendTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(730, 450);
        msgBrowser = new QTextBrowser(Widget);
        msgBrowser->setObjectName(QStringLiteral("msgBrowser"));
        msgBrowser->setGeometry(QRect(20, 10, 521, 181));
        msgTxtEdit = new QTextEdit(Widget);
        msgTxtEdit->setObjectName(QStringLiteral("msgTxtEdit"));
        msgTxtEdit->setGeometry(QRect(10, 270, 531, 81));
        usrTblWidget = new QTableWidget(Widget);
        if (usrTblWidget->columnCount() < 2)
            usrTblWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        usrTblWidget->setObjectName(QStringLiteral("usrTblWidget"));
        usrTblWidget->setGeometry(QRect(580, 20, 131, 321));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        usrTblWidget->setShowGrid(false);
        fontCbx = new QFontComboBox(Widget);
        fontCbx->setObjectName(QStringLiteral("fontCbx"));
        fontCbx->setGeometry(QRect(10, 220, 200, 26));
        fontCbx->setCurrentIndex(39);
        sizeCbx = new QComboBox(Widget);
        sizeCbx->setObjectName(QStringLiteral("sizeCbx"));
        sizeCbx->setGeometry(QRect(220, 220, 50, 26));
        sendBtn = new QPushButton(Widget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(30, 360, 80, 26));
        usrNumLbl = new QLabel(Widget);
        usrNumLbl->setObjectName(QStringLiteral("usrNumLbl"));
        usrNumLbl->setGeometry(QRect(340, 370, 54, 18));
        exitBtn = new QPushButton(Widget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(600, 360, 80, 26));
        boldTBtn = new QToolButton(Widget);
        boldTBtn->setObjectName(QStringLiteral("boldTBtn"));
        boldTBtn->setGeometry(QRect(290, 220, 33, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setIconSize(QSize(20, 20));
        italicTBtn = new QToolButton(Widget);
        italicTBtn->setObjectName(QStringLiteral("italicTBtn"));
        italicTBtn->setGeometry(QRect(330, 220, 33, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setIconSize(QSize(20, 20));
        underlineTBtn = new QToolButton(Widget);
        underlineTBtn->setObjectName(QStringLiteral("underlineTBtn"));
        underlineTBtn->setGeometry(QRect(370, 220, 33, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setIconSize(QSize(20, 20));
        colorTBtn = new QToolButton(Widget);
        colorTBtn->setObjectName(QStringLiteral("colorTBtn"));
        colorTBtn->setGeometry(QRect(410, 220, 33, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon3);
        colorTBtn->setIconSize(QSize(20, 20));
        sendTBtn = new QToolButton(Widget);
        sendTBtn->setObjectName(QStringLiteral("sendTBtn"));
        sendTBtn->setGeometry(QRect(450, 220, 33, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendTBtn->setIcon(icon4);
        sendTBtn->setIconSize(QSize(20, 20));
        saveTBtn = new QToolButton(Widget);
        saveTBtn->setObjectName(QStringLiteral("saveTBtn"));
        saveTBtn->setGeometry(QRect(490, 220, 33, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon5);
        saveTBtn->setIconSize(QSize(20, 20));
        clearTBtn = new QToolButton(Widget);
        clearTBtn->setObjectName(QStringLiteral("clearTBtn"));
        clearTBtn->setGeometry(QRect(530, 220, 33, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon6);
        clearTBtn->setIconSize(QSize(20, 20));

        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = usrTblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", Q_NULLPTR));
        sizeCbx->clear();
        sizeCbx->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", Q_NULLPTR)
         << QApplication::translate("Widget", "9", Q_NULLPTR)
         << QApplication::translate("Widget", "10", Q_NULLPTR)
         << QApplication::translate("Widget", "11", Q_NULLPTR)
         << QApplication::translate("Widget", "12", Q_NULLPTR)
         << QApplication::translate("Widget", "13", Q_NULLPTR)
         << QApplication::translate("Widget", "14", Q_NULLPTR)
         << QApplication::translate("Widget", "15", Q_NULLPTR)
         << QApplication::translate("Widget", "16", Q_NULLPTR)
         << QApplication::translate("Widget", "17", Q_NULLPTR)
         << QApplication::translate("Widget", "18", Q_NULLPTR)
         << QApplication::translate("Widget", "19", Q_NULLPTR)
         << QApplication::translate("Widget", "20", Q_NULLPTR)
         << QApplication::translate("Widget", "21", Q_NULLPTR)
         << QApplication::translate("Widget", "22", Q_NULLPTR)
        );
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        usrNumLbl->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        boldTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        italicTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        underlineTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        colorTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        sendTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        saveTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        clearTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
