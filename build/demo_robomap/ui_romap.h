/********************************************************************************
** Form generated from reading UI file 'romap.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMAP_H
#define UI_ROMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoMap
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_display;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_quit;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *RoMap)
    {
        if (RoMap->objectName().isEmpty())
            RoMap->setObjectName(QStringLiteral("RoMap"));
        RoMap->resize(768, 517);
        groupBox = new QGroupBox(RoMap);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 40, 581, 381));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(41, 61, 461, 291));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_display = new QPushButton(widget);
        btn_display->setObjectName(QStringLiteral("btn_display"));

        horizontalLayout->addWidget(btn_display);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_quit = new QPushButton(widget);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));

        horizontalLayout->addWidget(btn_quit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 7);

        retranslateUi(RoMap);

        QMetaObject::connectSlotsByName(RoMap);
    } // setupUi

    void retranslateUi(QWidget *RoMap)
    {
        RoMap->setWindowTitle(QApplication::translate("RoMap", "Form", 0));
        groupBox->setTitle(QApplication::translate("RoMap", "GroupBox", 0));
        btn_display->setText(QApplication::translate("RoMap", "display", 0));
        btn_quit->setText(QApplication::translate("RoMap", "quit", 0));
    } // retranslateUi

};

namespace Ui {
    class RoMap: public Ui_RoMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMAP_H
