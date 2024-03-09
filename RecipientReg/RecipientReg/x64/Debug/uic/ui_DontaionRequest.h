/********************************************************************************
** Form generated from reading UI file 'DontaionRequest.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONTAIONREQUEST_H
#define UI_DONTAIONREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DontaionRequestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DontaionRequestClass)
    {
        if (DontaionRequestClass->objectName().isEmpty())
            DontaionRequestClass->setObjectName("DontaionRequestClass");
        DontaionRequestClass->resize(600, 400);
        menuBar = new QMenuBar(DontaionRequestClass);
        menuBar->setObjectName("menuBar");
        DontaionRequestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DontaionRequestClass);
        mainToolBar->setObjectName("mainToolBar");
        DontaionRequestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DontaionRequestClass);
        centralWidget->setObjectName("centralWidget");
        DontaionRequestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DontaionRequestClass);
        statusBar->setObjectName("statusBar");
        DontaionRequestClass->setStatusBar(statusBar);

        retranslateUi(DontaionRequestClass);

        QMetaObject::connectSlotsByName(DontaionRequestClass);
    } // setupUi

    void retranslateUi(QMainWindow *DontaionRequestClass)
    {
        DontaionRequestClass->setWindowTitle(QCoreApplication::translate("DontaionRequestClass", "DontaionRequest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DontaionRequestClass: public Ui_DontaionRequestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONTAIONREQUEST_H
