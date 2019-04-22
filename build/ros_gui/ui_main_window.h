/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_mode;
    QComboBox *comboBox_mode;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_19;
    QWidget *widget_map_1;
    QWidget *widget_map_2;
    QWidget *widget_map_3;
    QVBoxLayout *verticalLayout_render_1;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_17;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_22;
    QPushButton *pushButton_loadMap;
    QPushButton *pushButton_confirmStart;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_start;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_end;
    QGroupBox *groupBox_moduleState;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QGroupBox *groupBox_moduleData;
    QGridLayout *gridLayout_16;
    QVBoxLayout *verticalLayout_23;
    QListView *listView_console;
    QWidget *tab_2;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_startAll;
    QPushButton *pushButton_startPercep;
    QPushButton *pushButton_startLocal;
    QPushButton *pushButton_startSensor;
    QGroupBox *groupBox_layer;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBox_reference;
    QCheckBox *checkBox_obstacles;
    QCheckBox *checkBox_image;
    QCheckBox *checkBox_pointcloud;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_20;
    QHBoxLayout *horizontalLayout_14;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_18;
    QVBoxLayout *verticalLayout_27;
    QPushButton *pushButton_startAll_2;
    QPushButton *pushButton_startPercep_2;
    QPushButton *pushButton_startLocal_2;
    QPushButton *pushButton_startSensor_2;
    QGroupBox *groupBox_layer_2;
    QGridLayout *gridLayout_19;
    QVBoxLayout *verticalLayout_28;
    QCheckBox *checkBox_reference_2;
    QCheckBox *checkBox_obstacles_2;
    QCheckBox *checkBox_image_2;
    QCheckBox *checkBox_pointcloud_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_loadMap_2;
    QPushButton *pushButton_confirmStart_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_confirm_2;
    QPushButton *pushButton_cancel_2;
    QPushButton *pushButton_start_2;
    QPushButton *pushButton_pause_2;
    QPushButton *pushButton_end_2;
    QGroupBox *groupBox_moduleState_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_moduleData_2;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QListView *listView_console_2;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_15;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_17;
    QPushButton *pushButton_startMapping;
    QPushButton *pushButton_endMapping;
    QPushButton *pushButton_recording;
    QGroupBox *groupBox_moduleState_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_led;
    QGroupBox *groupBox_moduleData_3;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_18;
    QListView *listView_console_3;
    QWidget *tab_6;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_12;
    QPushButton *pushButton_startAll_3;
    QPushButton *pushButton_startPercep_3;
    QPushButton *pushButton_startLocal_3;
    QPushButton *pushButton_startSensor_3;
    QGroupBox *groupBox_layer_3;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *checkBox_reference_3;
    QCheckBox *checkBox_obstacles_3;
    QCheckBox *checkBox_image_3;
    QCheckBox *checkBox_pointcloud_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1370, 764);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(600, -1, 600, 0);
        label_mode = new QLabel(widget);
        label_mode->setObjectName(QStringLiteral("label_mode"));

        horizontalLayout_4->addWidget(label_mode);

        comboBox_mode = new QComboBox(widget);
        comboBox_mode->setObjectName(QStringLiteral("comboBox_mode"));

        horizontalLayout_4->addWidget(comboBox_mode);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        widget_map_1 = new QWidget(widget);
        widget_map_1->setObjectName(QStringLiteral("widget_map_1"));

        verticalLayout_19->addWidget(widget_map_1);

        widget_map_2 = new QWidget(widget);
        widget_map_2->setObjectName(QStringLiteral("widget_map_2"));

        verticalLayout_19->addWidget(widget_map_2);

        widget_map_3 = new QWidget(widget);
        widget_map_3->setObjectName(QStringLiteral("widget_map_3"));

        verticalLayout_19->addWidget(widget_map_3);


        horizontalLayout_10->addLayout(verticalLayout_19);

        verticalLayout_render_1 = new QVBoxLayout();
        verticalLayout_render_1->setObjectName(QStringLiteral("verticalLayout_render_1"));

        horizontalLayout_10->addLayout(verticalLayout_render_1);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 5);

        verticalLayout_4->addLayout(horizontalLayout_10);

        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setElideMode(Qt::ElideNone);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout_17 = new QGridLayout(tab_1);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        pushButton_loadMap = new QPushButton(tab_1);
        pushButton_loadMap->setObjectName(QStringLiteral("pushButton_loadMap"));

        verticalLayout_22->addWidget(pushButton_loadMap);

        pushButton_confirmStart = new QPushButton(tab_1);
        pushButton_confirmStart->setObjectName(QStringLiteral("pushButton_confirmStart"));

        verticalLayout_22->addWidget(pushButton_confirmStart);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_confirm = new QPushButton(tab_1);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));

        horizontalLayout_11->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(tab_1);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_11->addWidget(pushButton_cancel);


        verticalLayout_22->addLayout(horizontalLayout_11);

        pushButton_start = new QPushButton(tab_1);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));

        verticalLayout_22->addWidget(pushButton_start);

        pushButton_pause = new QPushButton(tab_1);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));

        verticalLayout_22->addWidget(pushButton_pause);

        pushButton_end = new QPushButton(tab_1);
        pushButton_end->setObjectName(QStringLiteral("pushButton_end"));

        verticalLayout_22->addWidget(pushButton_end);


        horizontalLayout_12->addLayout(verticalLayout_22);

        groupBox_moduleState = new QGroupBox(tab_1);
        groupBox_moduleState->setObjectName(QStringLiteral("groupBox_moduleState"));
        label = new QLabel(groupBox_moduleState);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 67, 17));
        label_2 = new QLabel(groupBox_moduleState);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 67, 17));
        label_3 = new QLabel(groupBox_moduleState);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 67, 17));
        label_5 = new QLabel(groupBox_moduleState);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 130, 67, 17));

        horizontalLayout_12->addWidget(groupBox_moduleState);

        groupBox_moduleData = new QGroupBox(tab_1);
        groupBox_moduleData->setObjectName(QStringLiteral("groupBox_moduleData"));
        gridLayout_16 = new QGridLayout(groupBox_moduleData);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        listView_console = new QListView(groupBox_moduleData);
        listView_console->setObjectName(QStringLiteral("listView_console"));

        verticalLayout_23->addWidget(listView_console);


        gridLayout_16->addLayout(verticalLayout_23, 0, 0, 1, 1);


        horizontalLayout_12->addWidget(groupBox_moduleData);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 3);
        horizontalLayout_12->setStretch(2, 3);

        gridLayout_17->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_9 = new QGridLayout(tab_2);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 800, -1);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_startAll = new QPushButton(groupBox);
        pushButton_startAll->setObjectName(QStringLiteral("pushButton_startAll"));

        verticalLayout_6->addWidget(pushButton_startAll);

        pushButton_startPercep = new QPushButton(groupBox);
        pushButton_startPercep->setObjectName(QStringLiteral("pushButton_startPercep"));

        verticalLayout_6->addWidget(pushButton_startPercep);

        pushButton_startLocal = new QPushButton(groupBox);
        pushButton_startLocal->setObjectName(QStringLiteral("pushButton_startLocal"));

        verticalLayout_6->addWidget(pushButton_startLocal);

        pushButton_startSensor = new QPushButton(groupBox);
        pushButton_startSensor->setObjectName(QStringLiteral("pushButton_startSensor"));

        verticalLayout_6->addWidget(pushButton_startSensor);


        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_layer = new QGroupBox(tab_2);
        groupBox_layer->setObjectName(QStringLiteral("groupBox_layer"));
        gridLayout_7 = new QGridLayout(groupBox_layer);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        checkBox_reference = new QCheckBox(groupBox_layer);
        checkBox_reference->setObjectName(QStringLiteral("checkBox_reference"));

        verticalLayout_7->addWidget(checkBox_reference);

        checkBox_obstacles = new QCheckBox(groupBox_layer);
        checkBox_obstacles->setObjectName(QStringLiteral("checkBox_obstacles"));

        verticalLayout_7->addWidget(checkBox_obstacles);

        checkBox_image = new QCheckBox(groupBox_layer);
        checkBox_image->setObjectName(QStringLiteral("checkBox_image"));

        verticalLayout_7->addWidget(checkBox_image);

        checkBox_pointcloud = new QCheckBox(groupBox_layer);
        checkBox_pointcloud->setObjectName(QStringLiteral("checkBox_pointcloud"));

        verticalLayout_7->addWidget(checkBox_pointcloud);


        gridLayout_7->addLayout(verticalLayout_7, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_layer);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        gridLayout_9->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_8->addWidget(tabWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tabWidget_2->setElideMode(Qt::ElideNone);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_20 = new QGridLayout(tab_4);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, -1, 800, -1);
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_18 = new QGridLayout(groupBox_2);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        pushButton_startAll_2 = new QPushButton(groupBox_2);
        pushButton_startAll_2->setObjectName(QStringLiteral("pushButton_startAll_2"));

        verticalLayout_27->addWidget(pushButton_startAll_2);

        pushButton_startPercep_2 = new QPushButton(groupBox_2);
        pushButton_startPercep_2->setObjectName(QStringLiteral("pushButton_startPercep_2"));

        verticalLayout_27->addWidget(pushButton_startPercep_2);

        pushButton_startLocal_2 = new QPushButton(groupBox_2);
        pushButton_startLocal_2->setObjectName(QStringLiteral("pushButton_startLocal_2"));

        verticalLayout_27->addWidget(pushButton_startLocal_2);

        pushButton_startSensor_2 = new QPushButton(groupBox_2);
        pushButton_startSensor_2->setObjectName(QStringLiteral("pushButton_startSensor_2"));

        verticalLayout_27->addWidget(pushButton_startSensor_2);


        gridLayout_18->addLayout(verticalLayout_27, 0, 0, 1, 1);


        horizontalLayout_14->addWidget(groupBox_2);

        groupBox_layer_2 = new QGroupBox(tab_4);
        groupBox_layer_2->setObjectName(QStringLiteral("groupBox_layer_2"));
        gridLayout_19 = new QGridLayout(groupBox_layer_2);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        checkBox_reference_2 = new QCheckBox(groupBox_layer_2);
        checkBox_reference_2->setObjectName(QStringLiteral("checkBox_reference_2"));

        verticalLayout_28->addWidget(checkBox_reference_2);

        checkBox_obstacles_2 = new QCheckBox(groupBox_layer_2);
        checkBox_obstacles_2->setObjectName(QStringLiteral("checkBox_obstacles_2"));

        verticalLayout_28->addWidget(checkBox_obstacles_2);

        checkBox_image_2 = new QCheckBox(groupBox_layer_2);
        checkBox_image_2->setObjectName(QStringLiteral("checkBox_image_2"));

        verticalLayout_28->addWidget(checkBox_image_2);

        checkBox_pointcloud_2 = new QCheckBox(groupBox_layer_2);
        checkBox_pointcloud_2->setObjectName(QStringLiteral("checkBox_pointcloud_2"));

        verticalLayout_28->addWidget(checkBox_pointcloud_2);


        gridLayout_19->addLayout(verticalLayout_28, 0, 0, 1, 1);


        horizontalLayout_14->addWidget(groupBox_layer_2);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);

        gridLayout_20->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_loadMap_2 = new QPushButton(tab_3);
        pushButton_loadMap_2->setObjectName(QStringLiteral("pushButton_loadMap_2"));

        verticalLayout->addWidget(pushButton_loadMap_2);

        pushButton_confirmStart_2 = new QPushButton(tab_3);
        pushButton_confirmStart_2->setObjectName(QStringLiteral("pushButton_confirmStart_2"));

        verticalLayout->addWidget(pushButton_confirmStart_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_confirm_2 = new QPushButton(tab_3);
        pushButton_confirm_2->setObjectName(QStringLiteral("pushButton_confirm_2"));

        horizontalLayout->addWidget(pushButton_confirm_2);

        pushButton_cancel_2 = new QPushButton(tab_3);
        pushButton_cancel_2->setObjectName(QStringLiteral("pushButton_cancel_2"));

        horizontalLayout->addWidget(pushButton_cancel_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_start_2 = new QPushButton(tab_3);
        pushButton_start_2->setObjectName(QStringLiteral("pushButton_start_2"));

        verticalLayout->addWidget(pushButton_start_2);

        pushButton_pause_2 = new QPushButton(tab_3);
        pushButton_pause_2->setObjectName(QStringLiteral("pushButton_pause_2"));

        verticalLayout->addWidget(pushButton_pause_2);

        pushButton_end_2 = new QPushButton(tab_3);
        pushButton_end_2->setObjectName(QStringLiteral("pushButton_end_2"));

        verticalLayout->addWidget(pushButton_end_2);


        horizontalLayout_2->addLayout(verticalLayout);

        groupBox_moduleState_2 = new QGroupBox(tab_3);
        groupBox_moduleState_2->setObjectName(QStringLiteral("groupBox_moduleState_2"));
        label_4 = new QLabel(groupBox_moduleState_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 40, 67, 17));
        label_6 = new QLabel(groupBox_moduleState_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 70, 67, 17));
        label_7 = new QLabel(groupBox_moduleState_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 100, 67, 17));
        label_8 = new QLabel(groupBox_moduleState_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 130, 67, 17));

        horizontalLayout_2->addWidget(groupBox_moduleState_2);

        groupBox_moduleData_2 = new QGroupBox(tab_3);
        groupBox_moduleData_2->setObjectName(QStringLiteral("groupBox_moduleData_2"));
        gridLayout_5 = new QGridLayout(groupBox_moduleData_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        listView_console_2 = new QListView(groupBox_moduleData_2);
        listView_console_2->setObjectName(QStringLiteral("listView_console_2"));

        verticalLayout_5->addWidget(listView_console_2);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_moduleData_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 3);

        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget_2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tabWidget_3 = new QTabWidget(page_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setTabPosition(QTabWidget::West);
        tabWidget_3->setTabShape(QTabWidget::Rounded);
        tabWidget_3->setElideMode(Qt::ElideNone);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_15 = new QGridLayout(tab_5);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        pushButton_startMapping = new QPushButton(tab_5);
        pushButton_startMapping->setObjectName(QStringLiteral("pushButton_startMapping"));

        verticalLayout_17->addWidget(pushButton_startMapping);

        pushButton_endMapping = new QPushButton(tab_5);
        pushButton_endMapping->setObjectName(QStringLiteral("pushButton_endMapping"));

        verticalLayout_17->addWidget(pushButton_endMapping);

        pushButton_recording = new QPushButton(tab_5);
        pushButton_recording->setObjectName(QStringLiteral("pushButton_recording"));

        verticalLayout_17->addWidget(pushButton_recording);


        horizontalLayout_9->addLayout(verticalLayout_17);

        groupBox_moduleState_3 = new QGroupBox(tab_5);
        groupBox_moduleState_3->setObjectName(QStringLiteral("groupBox_moduleState_3"));
        label_9 = new QLabel(groupBox_moduleState_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 40, 67, 17));
        label_10 = new QLabel(groupBox_moduleState_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 70, 67, 17));
        label_11 = new QLabel(groupBox_moduleState_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 100, 67, 17));
        label_12 = new QLabel(groupBox_moduleState_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 130, 67, 17));
        label_led = new QLabel(groupBox_moduleState_3);
        label_led->setObjectName(QStringLiteral("label_led"));
        label_led->setGeometry(QRect(70, 40, 81, 17));

        horizontalLayout_9->addWidget(groupBox_moduleState_3);

        groupBox_moduleData_3 = new QGroupBox(tab_5);
        groupBox_moduleData_3->setObjectName(QStringLiteral("groupBox_moduleData_3"));
        gridLayout_14 = new QGridLayout(groupBox_moduleData_3);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        listView_console_3 = new QListView(groupBox_moduleData_3);
        listView_console_3->setObjectName(QStringLiteral("listView_console_3"));

        verticalLayout_18->addWidget(listView_console_3);


        gridLayout_14->addLayout(verticalLayout_18, 0, 0, 1, 1);


        horizontalLayout_9->addWidget(groupBox_moduleData_3);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 3);
        horizontalLayout_9->setStretch(2, 3);

        gridLayout_15->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_13 = new QGridLayout(tab_6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 800, -1);
        groupBox_3 = new QGroupBox(tab_6);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_11 = new QGridLayout(groupBox_3);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        pushButton_startAll_3 = new QPushButton(groupBox_3);
        pushButton_startAll_3->setObjectName(QStringLiteral("pushButton_startAll_3"));

        verticalLayout_12->addWidget(pushButton_startAll_3);

        pushButton_startPercep_3 = new QPushButton(groupBox_3);
        pushButton_startPercep_3->setObjectName(QStringLiteral("pushButton_startPercep_3"));

        verticalLayout_12->addWidget(pushButton_startPercep_3);

        pushButton_startLocal_3 = new QPushButton(groupBox_3);
        pushButton_startLocal_3->setObjectName(QStringLiteral("pushButton_startLocal_3"));

        verticalLayout_12->addWidget(pushButton_startLocal_3);

        pushButton_startSensor_3 = new QPushButton(groupBox_3);
        pushButton_startSensor_3->setObjectName(QStringLiteral("pushButton_startSensor_3"));

        verticalLayout_12->addWidget(pushButton_startSensor_3);


        gridLayout_11->addLayout(verticalLayout_12, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_3);

        groupBox_layer_3 = new QGroupBox(tab_6);
        groupBox_layer_3->setObjectName(QStringLiteral("groupBox_layer_3"));
        gridLayout_12 = new QGridLayout(groupBox_layer_3);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        checkBox_reference_3 = new QCheckBox(groupBox_layer_3);
        checkBox_reference_3->setObjectName(QStringLiteral("checkBox_reference_3"));

        verticalLayout_13->addWidget(checkBox_reference_3);

        checkBox_obstacles_3 = new QCheckBox(groupBox_layer_3);
        checkBox_obstacles_3->setObjectName(QStringLiteral("checkBox_obstacles_3"));

        verticalLayout_13->addWidget(checkBox_obstacles_3);

        checkBox_image_3 = new QCheckBox(groupBox_layer_3);
        checkBox_image_3->setObjectName(QStringLiteral("checkBox_image_3"));

        verticalLayout_13->addWidget(checkBox_image_3);

        checkBox_pointcloud_3 = new QCheckBox(groupBox_layer_3);
        checkBox_pointcloud_3->setObjectName(QStringLiteral("checkBox_pointcloud_3"));

        verticalLayout_13->addWidget(checkBox_pointcloud_3);


        gridLayout_12->addLayout(verticalLayout_13, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_layer_3);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        gridLayout_13->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_6, QString());

        gridLayout_10->addWidget(tabWidget_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        verticalLayout_4->addWidget(stackedWidget);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 10);
        verticalLayout_4->setStretch(2, 1);

        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);


        hboxLayout->addWidget(widget);

        MainWindowDesign->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", 0));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0));
        label_mode->setText(QApplication::translate("MainWindowDesign", "\345\275\223\345\211\215\346\250\241\345\274\217", 0));
        comboBox_mode->clear();
        comboBox_mode->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "\345\257\274\350\210\252\346\250\241\345\274\217", 0)
         << QApplication::translate("MainWindowDesign", "\345\257\273\350\277\271\346\250\241\345\274\217", 0)
         << QApplication::translate("MainWindowDesign", "\345\273\272\345\233\276\346\250\241\345\274\217", 0)
        );
        pushButton_loadMap->setText(QApplication::translate("MainWindowDesign", "\345\212\240\350\275\275\345\234\260\345\233\276", 0));
        pushButton_confirmStart->setText(QApplication::translate("MainWindowDesign", "\347\241\256\345\256\232\350\265\267\345\247\213", 0));
        pushButton_confirm->setText(QApplication::translate("MainWindowDesign", "\347\241\256\345\256\232", 0));
        pushButton_cancel->setText(QApplication::translate("MainWindowDesign", "\345\217\226\346\266\210", 0));
        pushButton_start->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\220\257", 0));
        pushButton_pause->setText(QApplication::translate("MainWindowDesign", "\346\232\202\345\201\234", 0));
        pushButton_end->setText(QApplication::translate("MainWindowDesign", "\347\273\223\346\235\237", 0));
        groupBox_moduleState->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227 - \344\274\240\346\204\237\345\231\250\347\212\266\346\200\201", 0));
        label->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2271", 0));
        label_2->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2272", 0));
        label_3->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2273", 0));
        label_5->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2274", 0));
        groupBox_moduleData->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindowDesign", "\350\247\202\346\265\213\347\225\214\351\235\242", 0));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227\346\216\247\345\210\266", 0));
        pushButton_startAll->setText(QApplication::translate("MainWindowDesign", "\345\205\250\351\203\250\345\274\200\345\247\213", 0));
        pushButton_startPercep->setText(QApplication::translate("MainWindowDesign", "\346\204\237\347\237\245\346\250\241\345\235\227", 0));
        pushButton_startLocal->setText(QApplication::translate("MainWindowDesign", "\345\256\232\344\275\215\346\250\241\345\235\227", 0));
        pushButton_startSensor->setText(QApplication::translate("MainWindowDesign", "\344\274\240\346\204\237\345\231\250\346\250\241\345\235\227", 0));
        groupBox_layer->setTitle(QApplication::translate("MainWindowDesign", "\345\233\276\345\261\202", 0));
        checkBox_reference->setText(QApplication::translate("MainWindowDesign", "\345\217\202\350\200\203\347\272\277", 0));
        checkBox_obstacles->setText(QApplication::translate("MainWindowDesign", "\351\232\234\347\242\215\347\211\251", 0));
        checkBox_image->setText(QApplication::translate("MainWindowDesign", "\345\233\276\345\203\217", 0));
        checkBox_pointcloud->setText(QApplication::translate("MainWindowDesign", "\347\202\271\344\272\221", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDesign", "\346\216\247\345\210\266\347\225\214\351\235\242", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227\346\216\247\345\210\266", 0));
        pushButton_startAll_2->setText(QApplication::translate("MainWindowDesign", "\345\205\250\351\203\250\345\274\200\345\247\213", 0));
        pushButton_startPercep_2->setText(QApplication::translate("MainWindowDesign", "\346\204\237\347\237\245\346\250\241\345\235\227", 0));
        pushButton_startLocal_2->setText(QApplication::translate("MainWindowDesign", "\345\256\232\344\275\215\346\250\241\345\235\227", 0));
        pushButton_startSensor_2->setText(QApplication::translate("MainWindowDesign", "\344\274\240\346\204\237\345\231\250\346\250\241\345\235\227", 0));
        groupBox_layer_2->setTitle(QApplication::translate("MainWindowDesign", "\345\233\276\345\261\202", 0));
        checkBox_reference_2->setText(QApplication::translate("MainWindowDesign", "\345\217\202\350\200\203\347\272\277", 0));
        checkBox_obstacles_2->setText(QApplication::translate("MainWindowDesign", "\351\232\234\347\242\215\347\211\251", 0));
        checkBox_image_2->setText(QApplication::translate("MainWindowDesign", "\345\233\276\345\203\217", 0));
        checkBox_pointcloud_2->setText(QApplication::translate("MainWindowDesign", "\347\202\271\344\272\221", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindowDesign", "\346\216\247\345\210\266\347\225\214\351\235\242", 0));
        pushButton_loadMap_2->setText(QApplication::translate("MainWindowDesign", "\345\212\240\350\275\275\345\234\260\345\233\276", 0));
        pushButton_confirmStart_2->setText(QApplication::translate("MainWindowDesign", "\347\241\256\345\256\232\350\265\267\345\247\213", 0));
        pushButton_confirm_2->setText(QApplication::translate("MainWindowDesign", "\347\241\256\345\256\232", 0));
        pushButton_cancel_2->setText(QApplication::translate("MainWindowDesign", "\345\217\226\346\266\210", 0));
        pushButton_start_2->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\220\257", 0));
        pushButton_pause_2->setText(QApplication::translate("MainWindowDesign", "\346\232\202\345\201\234", 0));
        pushButton_end_2->setText(QApplication::translate("MainWindowDesign", "\347\273\223\346\235\237", 0));
        groupBox_moduleState_2->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227 - \344\274\240\346\204\237\345\231\250\347\212\266\346\200\201", 0));
        label_4->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2271", 0));
        label_6->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2272", 0));
        label_7->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2273", 0));
        label_8->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2274", 0));
        groupBox_moduleData_2->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227\344\277\241\346\201\257", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindowDesign", "\350\247\202\346\265\213\347\225\214\351\235\242", 0));
        pushButton_startMapping->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\247\213\345\273\272\345\233\276", 0));
        pushButton_endMapping->setText(QApplication::translate("MainWindowDesign", "\347\273\223\346\235\237\345\273\272\345\233\276", 0));
        pushButton_recording->setText(QApplication::translate("MainWindowDesign", "\345\275\225\345\210\266\346\225\260\346\215\256", 0));
        groupBox_moduleState_3->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227 - \344\274\240\346\204\237\345\231\250\347\212\266\346\200\201", 0));
        label_9->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2271", 0));
        label_10->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2272", 0));
        label_11->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2273", 0));
        label_12->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\2274", 0));
        label_led->setText(QApplication::translate("MainWindowDesign", "\346\214\207\347\244\272\347\201\257\345\233\276\347\211\207", 0));
        groupBox_moduleData_3->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227\344\277\241\346\201\257", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindowDesign", "\350\247\202\346\265\213\347\225\214\351\235\242", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindowDesign", "\346\250\241\345\235\227\346\216\247\345\210\266", 0));
        pushButton_startAll_3->setText(QApplication::translate("MainWindowDesign", "\345\205\250\351\203\250\345\274\200\345\247\213", 0));
        pushButton_startPercep_3->setText(QApplication::translate("MainWindowDesign", "\346\204\237\347\237\245\346\250\241\345\235\227", 0));
        pushButton_startLocal_3->setText(QApplication::translate("MainWindowDesign", "\345\256\232\344\275\215\346\250\241\345\235\227", 0));
        pushButton_startSensor_3->setText(QApplication::translate("MainWindowDesign", "\344\274\240\346\204\237\345\231\250\346\250\241\345\235\227", 0));
        groupBox_layer_3->setTitle(QApplication::translate("MainWindowDesign", "\345\233\276\345\261\202", 0));
        checkBox_reference_3->setText(QApplication::translate("MainWindowDesign", "\345\217\202\350\200\203\347\272\277", 0));
        checkBox_obstacles_3->setText(QApplication::translate("MainWindowDesign", "\351\232\234\347\242\215\347\211\251", 0));
        checkBox_image_3->setText(QApplication::translate("MainWindowDesign", "\345\233\276\345\203\217", 0));
        checkBox_pointcloud_3->setText(QApplication::translate("MainWindowDesign", "\347\202\271\344\272\221", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindowDesign", "\346\216\247\345\210\266\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
