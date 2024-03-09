/********************************************************************************
** Form generated from reading UI file 'DonorInterface.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONORINTERFACE_H
#define UI_DONORINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonorInterfaceClass
{
public:
    QWidget *centralWidget;
    QLabel *name;
    QPushButton *pushButton;
    QPushButton *accountF;
    QLabel *user;
    QPushButton *logout;
    QPushButton *accountM;
    QFrame *frame;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DonorInterfaceClass)
    {
        if (DonorInterfaceClass->objectName().isEmpty())
            DonorInterfaceClass->setObjectName("DonorInterfaceClass");
        DonorInterfaceClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Normal, QIcon::Off);
        DonorInterfaceClass->setWindowIcon(icon);
        DonorInterfaceClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(DonorInterfaceClass);
        centralWidget->setObjectName("centralWidget");
        name = new QLabel(centralWidget);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 0, 921, 561));
        name->setStyleSheet(QString::fromUtf8("background-image:url(:/RecipientReg/bloodd.jpg);"));
        name->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/first \342\200\223 1.jpg")));
        name->setScaledContents(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 340, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(240, 240, 240);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:25px;\n"
"color: rgb(220, 3, 6);\n"
"font: 700 8pt \"Arial\";"));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        accountF = new QPushButton(centralWidget);
        accountF->setObjectName("accountF");
        accountF->setGeometry(QRect(580, 10, 35, 30));
        QFont font1;
        font1.setPointSize(7);
        accountF->setFont(font1);
        accountF->setCursor(QCursor(Qt::PointingHandCursor));
        accountF->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/\342\200\224Pngtree\342\200\224includes set of avatars icons_8537422 (1).png);"));
        user = new QLabel(centralWidget);
        user->setObjectName("user");
        user->setGeometry(QRect(560, 30, 81, 31));
        QFont font2;
        font2.setBold(true);
        user->setFont(font2);
        user->setAlignment(Qt::AlignCenter);
        logout = new QPushButton(centralWidget);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(640, 10, 71, 31));
        logout->setFont(font);
        logout->setCursor(QCursor(Qt::PointingHandCursor));
        logout->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-style:solid;\n"
"border-width:0px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:9px;\n"
"color: white;\n"
"font: 700 8pt \"Arial\";"));
        logout->setCheckable(false);
        logout->setAutoDefault(false);
        logout->setFlat(false);
        accountM = new QPushButton(centralWidget);
        accountM->setObjectName("accountM");
        accountM->setGeometry(QRect(580, 10, 35, 31));
        accountM->setFont(font1);
        accountM->setCursor(QCursor(Qt::PointingHandCursor));
        accountM->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/\342\200\224Pngtree\342\200\224includes set of avatars icons_8537422 (2).png)"));
        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(280, 150, 381, 211));
        frame->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/donate.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 120, 91, 31));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/Rectanglered.png);\n"
"color:white"));
        DonorInterfaceClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DonorInterfaceClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        DonorInterfaceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DonorInterfaceClass);
        mainToolBar->setObjectName("mainToolBar");
        DonorInterfaceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DonorInterfaceClass);
        statusBar->setObjectName("statusBar");
        DonorInterfaceClass->setStatusBar(statusBar);

        retranslateUi(DonorInterfaceClass);

        pushButton->setDefault(false);
        logout->setDefault(false);


        QMetaObject::connectSlotsByName(DonorInterfaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *DonorInterfaceClass)
    {
        DonorInterfaceClass->setWindowTitle(QCoreApplication::translate("DonorInterfaceClass", "Blood Bank Management System", nullptr));
        name->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("DonorInterfaceClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("DonorInterfaceClass", "Donation Request", nullptr));
        accountF->setText(QString());
        user->setText(QCoreApplication::translate("DonorInterfaceClass", "name", nullptr));
#if QT_CONFIG(tooltip)
        logout->setToolTip(QCoreApplication::translate("DonorInterfaceClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        logout->setText(QCoreApplication::translate("DonorInterfaceClass", "Log Out", nullptr));
        accountM->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("DonorInterfaceClass", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonorInterfaceClass: public Ui_DonorInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONORINTERFACE_H
