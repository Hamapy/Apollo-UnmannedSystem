/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/ros_gui/main_window.hpp"

namespace ros_gui {

using namespace Qt;

//WorkerThread::WorkerThread(QObject *parent) :
//QObject(parent){}
//void WorkerThread::computeSth()
//{
//    //接口之外涉及计算的内容全部放入子线程
//}

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
    ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.

    //this->setFixedSize(944,704);

    //pointcloud visualization
    renderPanel = new rviz::RenderPanel;
    manager =new rviz::VisualizationManager(renderPanel);
    renderPanel->initialize(manager->getSceneManager(),manager);
    manager->initialize();
    manager->startUpdate();
    this->ui.verticalLayout_render_1->addWidget(renderPanel);
    displayGrid = manager->createDisplay( "rviz/Grid", "adjustable grid", true );
    //ROS_ASSERT( displayGrid != NULL );
    displayGrid->subProp( "Line Style" )->setValue( "Billboards" );
    displayGrid->subProp( "Color" )->setValue( QColor( Qt::yellow ) );

    /*renderPanel_2 = new rviz::RenderPanel;
    manager_2 =new rviz::VisualizationManager(renderPanel_2);
    renderPanel_2->initialize(manager_2->getSceneManager(),manager_2);
    manager_2->initialize();
    manager_2->startUpdate();
    this->ui.verticalLayout_render_2->addWidget(renderPanel_2);
    displayGrid_2 = manager_2->createDisplay( "rviz/Grid", "adjustable grid", true );
    //ROS_ASSERT( displayGrid != NULL );
    displayGrid_2->subProp( "Line Style" )->setValue( "Billboards" );
    displayGrid_2->subProp( "Color" )->setValue( QColor( Qt::yellow ) );

    renderPanel2_1 = new rviz::RenderPanel;
    manager2_1 =new rviz::VisualizationManager(renderPanel2_1);
    renderPanel2_1->initialize(manager2_1->getSceneManager(),manager2_1);
    manager2_1->initialize();
    manager2_1->startUpdate();
    this->ui.verticalLayout_render2_1->addWidget(renderPanel2_1);
    displayGrid2_1 = manager2_1->createDisplay( "rviz/Grid", "adjustable grid", true );
    //ROS_ASSERT( displayGrid != NULL );
    displayGrid2_1->subProp( "Line Style" )->setValue( "Billboards" );
    displayGrid2_1->subProp( "Color" )->setValue( QColor( Qt::yellow ) );

    renderPanel2_2 = new rviz::RenderPanel;
    manager2_2 =new rviz::VisualizationManager(renderPanel2_2);
    renderPanel2_2->initialize(manager2_2->getSceneManager(),manager2_2);
    manager2_2->initialize();
    manager2_2->startUpdate();
    this->ui.verticalLayout_render2_2->addWidget(renderPanel2_2);
    displayGrid2_2 = manager2_2->createDisplay( "rviz/Grid", "adjustable grid", true );
    //ROS_ASSERT( displayGrid != NULL );
    displayGrid2_2->subProp( "Line Style" )->setValue( "Billboards" );
    displayGrid2_2->subProp( "Color" )->setValue( QColor( Qt::yellow ) );

    renderPanel3_1 = new rviz::RenderPanel;
    manager3_1 =new rviz::VisualizationManager(renderPanel3_1);
    renderPanel3_1->initialize(manager3_1->getSceneManager(),manager3_1);
    manager3_1->initialize();
    manager3_1->startUpdate();
    this->ui.verticalLayout_render3_1->addWidget(renderPanel3_1);
    displayGrid3_1 = manager3_1->createDisplay( "rviz/Grid", "adjustable grid", true );
    //ROS_ASSERT( displayGrid != NULL );
    displayGrid3_1->subProp( "Line Style" )->setValue( "Billboards" );
    displayGrid3_1->subProp( "Color" )->setValue( QColor( Qt::yellow ) );

    renderPanel3_2 = new rviz::RenderPanel;
    manager3_2 =new rviz::VisualizationManager(renderPanel3_2);
    renderPanel3_2->initialize(manager3_2->getSceneManager(),manager3_2);
    manager3_2->initialize();
    manager3_2->startUpdate();
    this->ui.verticalLayout_render3_2->addWidget(renderPanel3_2);
    displayGrid3_2 = manager3_2->createDisplay( "rviz/Grid", "adjustable grid", true );
    //ROS_ASSERT( displayGrid != NULL );
    displayGrid3_2->subProp( "Line Style" )->setValue( "Billboards" );
    displayGrid3_2->subProp( "Color" )->setValue( QColor( Qt::yellow ) );*/



    //m_menu = new QMenu(this);
    //m_Action1 = new QAction(m_menu);
    //m_Action2 = new QAction(m_menu);
    //m_Action3 = new QAction(m_menu);
    //m_Action1->setText(QObject::tr("导航模式"));
    //m_Action2->setText(QObject::tr("寻迹模式"));
    //m_Action3->setText(QObject::tr("建图模式"));
    //m_menu->addAction(m_addAction);
    //m_menu->addAction(m_delAction);
    //connect(m_addAction, &QAction::triggered, this, &ButtonMenu::addFunc);
    //connect(m_delAction, &QAction::triggered, this, &ButtonMenu::delFunc);

    //pushButton_6->setMenu(m_menu);
    //connect(this->ui.pushButton_6,SIGNAL(pressed()),this,SLOT(modeSwith_pressed()));
    QObject::connect(this->ui.comboBox_mode,SIGNAL(currentIndexChanged(QString)),this,SLOT(modeSwitch()));
    //connect(this->ui.pushButton_loadMap2,SIGNAL(pressed()),this,SLOT(loadMap()));
    //connect(this->ui.pushButton_loadMap3,SIGNAL(pressed()),this,SLOT(loadMap()));

    ////////////////////////Navigation mode - Observation//////////////////////
    this->ui.pushButton_start->setEnabled(false);
    this->ui.pushButton_pause->setEnabled(false);
    this->ui.pushButton_end->setEnabled(false);
    this->ui.pushButton_confirm->setVisible(false);
    this->ui.pushButton_cancel->setVisible(false);

    QObject::connect(this->ui.pushButton_loadMap,SIGNAL(pressed()),this,SLOT(loadMap()));
    QObject::connect(this->ui.pushButton_confirmStart,SIGNAL(pressed()),this,SLOT(pushButton_confirmStart_pressed()));
    QObject::connect(this->ui.pushButton_confirm,SIGNAL(pressed()),this,SLOT(pushButton_confirm_pressed()));
    QObject::connect(this->ui.pushButton_cancel,SIGNAL(pressed()),this,SLOT(pushButton_cancel_pressed()));

    ////////////////////////Navigation mode - Control//////////////
    QObject::connect(this->ui.pushButton_startAll,SIGNAL(pressed()),this,SLOT(startALL()));
    QObject::connect(this->ui.pushButton_startPercep,SIGNAL(pressed()),this,SLOT(startPercep()));
    QObject::connect(this->ui.pushButton_startLocal,SIGNAL(pressed()),this,SLOT(startLocal()));
    QObject::connect(this->ui.pushButton_startSensor,SIGNAL(pressed()),this,SLOT(startSensor()));
    QObject::connect(this->ui.checkBox_reference,SIGNAL(stateChanged(int)),this,SLOT(showReference()));
    QObject::connect(this->ui.checkBox_obstacles,SIGNAL(stateChanged(int)),this,SLOT(showObstacles()));
    QObject::connect(this->ui.checkBox_image,SIGNAL(stateChanged(int)),this,SLOT(showImage()));
    QObject::connect(this->ui.checkBox_pointcloud,SIGNAL(stateChanged(int)),this,SLOT(showPointcloud()));

    ////////////////////////Tracing mode - Observation//////////////
    this->ui.pushButton_start_2->setEnabled(false);
    this->ui.pushButton_pause_2->setEnabled(false);
    this->ui.pushButton_end_2->setEnabled(false);
    this->ui.pushButton_confirm_2->setVisible(false);
    this->ui.pushButton_cancel_2->setVisible(false);

    QObject::connect(this->ui.pushButton_loadMap_2,SIGNAL(pressed()),this,SLOT(loadMap2()));
    QObject::connect(this->ui.pushButton_confirmStart_2,SIGNAL(pressed()),this,SLOT(pushButton_confirmStart_pressed2()));
    QObject::connect(this->ui.pushButton_confirm_2,SIGNAL(pressed()),this,SLOT(pushButton_confirm_pressed2()));
    QObject::connect(this->ui.pushButton_cancel_2,SIGNAL(pressed()),this,SLOT(pushButton_cancel_pressed2()));

    ////////////////////////Tracing mode - Control//////////////
    QObject::connect(this->ui.pushButton_startAll_2,SIGNAL(pressed()),this,SLOT(startALL2()));
    QObject::connect(this->ui.pushButton_startPercep_2,SIGNAL(pressed()),this,SLOT(startPercep2()));
    QObject::connect(this->ui.pushButton_startLocal_2,SIGNAL(pressed()),this,SLOT(startLocal2()));
    QObject::connect(this->ui.pushButton_startSensor_2,SIGNAL(pressed()),this,SLOT(startSensor2()));
    QObject::connect(this->ui.checkBox_reference_2,SIGNAL(stateChanged(int)),this,SLOT(showReference2()));
    QObject::connect(this->ui.checkBox_obstacles_2,SIGNAL(stateChanged(int)),this,SLOT(showObstacles2()));
    QObject::connect(this->ui.checkBox_image_2,SIGNAL(stateChanged(int)),this,SLOT(showImage2()));
    QObject::connect(this->ui.checkBox_pointcloud_2,SIGNAL(stateChanged(int)),this,SLOT(showPointcloud2()));

    ////////////////////////Mapping mode - Observation//////////////
    QObject::connect(this->ui.pushButton_startMapping,SLOT(pressed()),this,SLOT(startMapping()));
    QObject::connect(this->ui.pushButton_endMapping,SLOT(pressed()),this,SLOT(endMapping()));
    QObject::connect(this->ui.pushButton_recording,SLOT(pressed()),this,SLOT(recording()));

    ////////////////////////Mapping mode - Control//////////////
    QObject::connect(this->ui.pushButton_startAll_3,SIGNAL(pressed()),this,SLOT(startALL3()));
    QObject::connect(this->ui.pushButton_startPercep_3,SIGNAL(pressed()),this,SLOT(startPercep3()));
    QObject::connect(this->ui.pushButton_startLocal_3,SIGNAL(pressed()),this,SLOT(startLocal3()));
    QObject::connect(this->ui.pushButton_startSensor_3,SIGNAL(pressed()),this,SLOT(startSensor3()));
    QObject::connect(this->ui.checkBox_reference_3,SIGNAL(stateChanged(int)),this,SLOT(showReference3()));
    QObject::connect(this->ui.checkBox_obstacles_3,SIGNAL(stateChanged(int)),this,SLOT(showObstacles3()));
    QObject::connect(this->ui.checkBox_image_3,SIGNAL(stateChanged(int)),this,SLOT(showImage3()));
    QObject::connect(this->ui.checkBox_pointcloud_3,SIGNAL(stateChanged(int)),this,SLOT(showPointcloud3()));
    
}

MainWindow::~MainWindow() {}

void MainWindow::modeSwitch()
{
    QString modeStr;
    modeStr = this->ui.comboBox_mode->currentText();

    if(modeStr == "导航模式")
        this->ui.stackedWidget->setCurrentWidget(this->ui.page);
    if(modeStr == "寻迹模式")
        this->ui.stackedWidget->setCurrentWidget(this->ui.page_2);
    if(modeStr == "建图模式")
        this->ui.stackedWidget->setCurrentWidget(this->ui.page_3);

}

////////////////////Navigation mode - Observation//////////////////////

void MainWindow::loadMap()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Map"), ".", tr("All files(*.***)"));
    QFileInfo fileinfo = QFileInfo(fileName);
    QString fileSuffix = fileinfo.suffix();
    //std::string filename = std::string((const char*)fileName.toLocal8Bit());//编码方式转换，能够识别中文

    if (!fileName.isEmpty())
    {
        //Map visualization in Qwidget
        //html/qml/mapbox...
        //...
    }
}

void MainWindow::pushButton_confirmStart_pressed()
{
    this->ui.pushButton_confirmStart->setVisible(false);
    this->ui.pushButton_confirm->setVisible(true);
    this->ui.pushButton_cancel->setVisible(true);

    //Map Qwidget spread
    //...
}

void MainWindow::pushButton_confirm_pressed()
{
    //Map Qwidget back
    //...
    this->ui.pushButton_start->setEnabled(true);
    this->ui.pushButton_start->setEnabled(true);
    this->ui.pushButton_pause->setEnabled(true);
    this->ui.pushButton_end->setEnabled(true);

    //module box
    //模块状态灯的效果需要去找图片 状态框里直接切换图片就好
    //QString filename(“...”);
    //QImage* img=new QImage;
    //this->ui.label_led->setPixmap(QPixmap::fromImage(*img));
    //this->ui.label->resize(img->width(),img->height());

    //console box
    //this->ui.textBrowser_console->setText("Ros node data");
    //detecting ros node data and renew the list
    //...
    //这部分就暂时看一下效果 到时候需要开多个线程接收ros节点消息
    QStringList mState;
    //QStringListModel *stateModel = new QStringListModel();
    for(int i=1;i<20;i++)
    {
        mState.append("Ros node data...");
        //sleep(5000); //msleep() in Qt thead;
    }
    QStringListModel *stateModel = new QStringListModel(mState);
    this->ui.listView_console->setModel(stateModel);

    //module box， Console box， speed box如果没有集成好的API，后面需要开子线程实时监测Ros消息并实时刷新界面，每次刷新中串行执行三个消息框中的更新显示
}

void MainWindow::pushButton_cancel_pressed()
{

}

////////////////////Navigation mode - Control//////////////////////
void MainWindow::startALL()
{
    //start all modules
}

void MainWindow::startPercep()
{
    //...
}

void MainWindow::startLocal()
{
    //...
}

void MainWindow::startSensor()
{
    //...
}

void MainWindow::showReference()
{

}

void MainWindow::showObstacles()
{

}

void MainWindow::showImage()
{

}

void MainWindow::showPointcloud()
{

}

//其他两个模式的框架基本一致
////////////////////////Tracing mode - Observation//////////////
void MainWindow::loadMap2(){}
void MainWindow::pushButton_confirmStart_pressed2(){}
void MainWindow::pushButton_cancel_pressed2(){}
void MainWindow::pushButton_confirm_pressed2(){}

////////////////////////Tracing mode - Control//////////////
void MainWindow::startALL2(){}
void MainWindow::startPercep2(){}
void MainWindow::startLocal2(){}
void MainWindow::startSensor2(){}
void MainWindow::showReference2(){}
void MainWindow::showObstacles2(){}
void MainWindow::showImage2(){}
void MainWindow::showPointcloud2(){}

////////////////////////Mapping mode - Observation//////////////
void MainWindow::startMapping(){}
void MainWindow::endMapping(){}
void MainWindow::recording(){}

////////////////////////Mapping mode - Control//////////////
void MainWindow::startALL3(){}
void MainWindow::startPercep3(){}
void MainWindow::startLocal3(){}
void MainWindow::startSensor3(){}
void MainWindow::showReference3(){}
void MainWindow::showObstacles3(){}
void MainWindow::showImage3(){}
void MainWindow::showPointcloud3(){}

}  // namespace ros_gui

