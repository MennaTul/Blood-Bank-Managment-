/********************************************************************************
** Form generated from reading UI file 'RecipientProfile.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPIENTPROFILE_H
#define UI_RECIPIENTPROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecipientProfileClass
{
public:
    QWidget *centralWidget;
    QLabel *pack;
    QPushButton *delete_2;
    QLabel *femalephoto;
    QLabel *name;
    QPushButton *save;
    QLineEdit *name_2;
    QLineEdit *mail;
    QLineEdit *age;
    QLineEdit *id;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *pass;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *blood;
    QRadioButton *f;
    QRadioButton *m;
    QPushButton *back;
    QLabel *label_2;
    QLabel *malephoto;
    QLineEdit *doctor;
    QLineEdit *hospital;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RecipientProfileClass)
    {
        if (RecipientProfileClass->objectName().isEmpty())
            RecipientProfileClass->setObjectName("RecipientProfileClass");
        RecipientProfileClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Normal, QIcon::Off);
        RecipientProfileClass->setWindowIcon(icon);
        RecipientProfileClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(RecipientProfileClass);
        centralWidget->setObjectName("centralWidget");
        pack = new QLabel(centralWidget);
        pack->setObjectName("pack");
        pack->setGeometry(QRect(0, 0, 921, 561));
        pack->setStyleSheet(QString::fromUtf8("background-image:url(:/RecipientReg/bloodd.jpg);"));
        pack->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/profile.jpg")));
        pack->setScaledContents(true);
        delete_2 = new QPushButton(centralWidget);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(110, 490, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        delete_2->setFont(font);
        delete_2->setCursor(QCursor(Qt::PointingHandCursor));
        delete_2->setStyleSheet(QString::fromUtf8("background-color:rgb(240, 240, 240);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:25px;\n"
"color: rgb(220, 3, 6);\n"
"font: 700 8pt \"Arial\";"));
        delete_2->setCheckable(false);
        delete_2->setAutoDefault(false);
        delete_2->setFlat(false);
        femalephoto = new QLabel(centralWidget);
        femalephoto->setObjectName("femalephoto");
        femalephoto->setGeometry(QRect(220, 70, 80, 80));
        femalephoto->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/\342\200\224Pngtree\342\200\224includes set of avatars icons_8537422 (1).png)"));
        name = new QLabel(centralWidget);
        name->setObjectName("name");
        name->setGeometry(QRect(160, 145, 201, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        name->setFont(font1);
        name->setAlignment(Qt::AlignCenter);
        save = new QPushButton(centralWidget);
        save->setObjectName("save");
        save->setGeometry(QRect(270, 490, 141, 51));
        save->setFont(font);
        save->setCursor(QCursor(Qt::PointingHandCursor));
        save->setStyleSheet(QString::fromUtf8("background-color:rgb(207, 1, 4);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(207, 1, 4);\n"
"border-radius:25px;\n"
"color: white;\n"
"font: 700 8pt \"Arial\";"));
        save->setCheckable(false);
        save->setAutoDefault(false);
        save->setFlat(false);
        name_2 = new QLineEdit(centralWidget);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(110, 210, 130, 31));
        name_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        mail = new QLineEdit(centralWidget);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(280, 210, 130, 31));
        mail->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        age = new QLineEdit(centralWidget);
        age->setObjectName("age");
        age->setGeometry(QRect(110, 270, 130, 31));
        age->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        id = new QLineEdit(centralWidget);
        id->setObjectName("id");
        id->setGeometry(QRect(280, 270, 130, 31));
        id->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 190, 61, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 190, 51, 20));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 240, 71, 31));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 240, 41, 31));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 300, 111, 31));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);
        pass = new QLineEdit(centralWidget);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(110, 330, 130, 31));
        pass->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        pass->setEchoMode(QLineEdit::Password);
        pass->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(90, 299, 101, 31));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(280, 360, 121, 31));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(100, 365, 71, 21));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);
        blood = new QComboBox(centralWidget);
        blood->addItem(QString());
        blood->addItem(QString());
        blood->addItem(QString());
        blood->addItem(QString());
        blood->addItem(QString());
        blood->addItem(QString());
        blood->addItem(QString());
        blood->addItem(QString());
        blood->setObjectName("blood");
        blood->setGeometry(QRect(280, 330, 130, 29));
        f = new QRadioButton(centralWidget);
        f->setObjectName("f");
        f->setGeometry(QRect(110, 390, 61, 20));
        m = new QRadioButton(centralWidget);
        m->setObjectName("m");
        m->setGeometry(QRect(180, 390, 61, 20));
        back = new QPushButton(centralWidget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 510, 20, 31));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/pngwing.com (57).png);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 540, 71, 20));
        QFont font3;
        font3.setPointSize(7);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(132, 132, 132)"));
        malephoto = new QLabel(centralWidget);
        malephoto->setObjectName("malephoto");
        malephoto->setGeometry(QRect(220, 70, 80, 80));
        malephoto->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/\342\200\224Pngtree\342\200\224includes set of avatars icons_8537422 (2).png)"));
        doctor = new QLineEdit(centralWidget);
        doctor->setObjectName("doctor");
        doctor->setGeometry(QRect(280, 390, 130, 31));
        doctor->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        doctor->setEchoMode(QLineEdit::Password);
        doctor->setCursorMoveStyle(Qt::LogicalMoveStyle);
        hospital = new QLineEdit(centralWidget);
        hospital->setObjectName("hospital");
        hospital->setGeometry(QRect(110, 440, 130, 31));
        hospital->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:0.5px;\n"
"border-color: rgb(147, 147, 147);\n"
"border-radius:5px;\n"
"\n"
"font: 700 8pt \"Arial\";"));
        hospital->setEchoMode(QLineEdit::Password);
        hospital->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(80, 400, 121, 41));
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignCenter);
        RecipientProfileClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RecipientProfileClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        RecipientProfileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RecipientProfileClass);
        mainToolBar->setObjectName("mainToolBar");
        RecipientProfileClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RecipientProfileClass);
        statusBar->setObjectName("statusBar");
        RecipientProfileClass->setStatusBar(statusBar);

        retranslateUi(RecipientProfileClass);

        delete_2->setDefault(false);
        save->setDefault(false);


        QMetaObject::connectSlotsByName(RecipientProfileClass);
    } // setupUi

    void retranslateUi(QMainWindow *RecipientProfileClass)
    {
        RecipientProfileClass->setWindowTitle(QCoreApplication::translate("RecipientProfileClass", "Blood Bank Management System", nullptr));
        pack->setText(QString());
#if QT_CONFIG(tooltip)
        delete_2->setToolTip(QCoreApplication::translate("RecipientProfileClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_2->setText(QCoreApplication::translate("RecipientProfileClass", "Delete Account", nullptr));
        femalephoto->setText(QString());
        name->setText(QCoreApplication::translate("RecipientProfileClass", "Name", nullptr));
#if QT_CONFIG(tooltip)
        save->setToolTip(QCoreApplication::translate("RecipientProfileClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        save->setText(QCoreApplication::translate("RecipientProfileClass", "Save Changes", nullptr));
        label_3->setText(QCoreApplication::translate("RecipientProfileClass", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("RecipientProfileClass", "Mail", nullptr));
        label_5->setText(QCoreApplication::translate("RecipientProfileClass", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("RecipientProfileClass", "ID", nullptr));
        label_7->setText(QCoreApplication::translate("RecipientProfileClass", "Blood Type", nullptr));
        label_8->setText(QCoreApplication::translate("RecipientProfileClass", "Password", nullptr));
        label_9->setText(QCoreApplication::translate("RecipientProfileClass", "Doctor Of The Case", nullptr));
        label_10->setText(QCoreApplication::translate("RecipientProfileClass", "Gender", nullptr));
        blood->setItemText(0, QCoreApplication::translate("RecipientProfileClass", "A+", nullptr));
        blood->setItemText(1, QCoreApplication::translate("RecipientProfileClass", "A-", nullptr));
        blood->setItemText(2, QCoreApplication::translate("RecipientProfileClass", "B+", nullptr));
        blood->setItemText(3, QCoreApplication::translate("RecipientProfileClass", "B-", nullptr));
        blood->setItemText(4, QCoreApplication::translate("RecipientProfileClass", "O+", nullptr));
        blood->setItemText(5, QCoreApplication::translate("RecipientProfileClass", "O-", nullptr));
        blood->setItemText(6, QCoreApplication::translate("RecipientProfileClass", "AB+", nullptr));
        blood->setItemText(7, QCoreApplication::translate("RecipientProfileClass", "AB-", nullptr));

        f->setText(QCoreApplication::translate("RecipientProfileClass", "Female", nullptr));
        m->setText(QCoreApplication::translate("RecipientProfileClass", "Male", nullptr));
        back->setText(QString());
        label_2->setText(QCoreApplication::translate("RecipientProfileClass", "Previous Page", nullptr));
        malephoto->setText(QString());
        label_11->setText(QCoreApplication::translate("RecipientProfileClass", "Hospital", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipientProfileClass: public Ui_RecipientProfileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPIENTPROFILE_H
