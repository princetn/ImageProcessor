/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoadButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *FlipButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *GrayButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AvgPixButton;
    QGraphicsView *Display;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(728, 565);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(6, 10, 721, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, 10, -1);
        LoadButton = new QPushButton(verticalLayoutWidget);
        LoadButton->setObjectName(QStringLiteral("LoadButton"));
        LoadButton->setToolTipDuration(10);

        horizontalLayout->addWidget(LoadButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        FlipButton = new QPushButton(verticalLayoutWidget);
        FlipButton->setObjectName(QStringLiteral("FlipButton"));

        horizontalLayout->addWidget(FlipButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        GrayButton = new QPushButton(verticalLayoutWidget);
        GrayButton->setObjectName(QStringLiteral("GrayButton"));

        horizontalLayout->addWidget(GrayButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        AvgPixButton = new QPushButton(verticalLayoutWidget);
        AvgPixButton->setObjectName(QStringLiteral("AvgPixButton"));

        horizontalLayout->addWidget(AvgPixButton);


        verticalLayout->addLayout(horizontalLayout);

        Display = new QGraphicsView(verticalLayoutWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(Display);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Image processor", 0));
#ifndef QT_NO_TOOLTIP
        LoadButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        LoadButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        LoadButton->setText(QApplication::translate("MainWindow", "Load", 0));
#ifndef QT_NO_TOOLTIP
        FlipButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FlipButton->setText(QApplication::translate("MainWindow", "Flip", 0));
#ifndef QT_NO_TOOLTIP
        GrayButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GrayButton->setText(QApplication::translate("MainWindow", "Gray", 0));
        AvgPixButton->setText(QApplication::translate("MainWindow", "Average", 0));
#ifndef QT_NO_TOOLTIP
        Display->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
