#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QFile>
#include <qfiledialog.h>
#include <qfileinfo.h>
#include <qlistview.h>
#include <qstringlistmodel.h>
#include <QThread>

//////////////////////////Thread//////////////////////////////
class WorkerThread : public QObject
{
    Q_OBJECT

public:
    WorkerThread(QObject *parent = 0);
    //~WorkerThread();

public slots:
    void computeSth();

//signals:
    //void message();
};

//////////////////////////Gui//////////////////////////////
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void modeSwitch();

    void loadMap();
    void pushButton_confirmStart_pressed();
    void pushButton_cancel_pressed();
    void pushButton_confirm_pressed();
    void startALL();
    void startPercep();
    void startLocal();
    void startSensor();
    void showReference();
    void showObstacles();
    void showImage();
    void showPointcloud();


    void loadMap2();
    void pushButton_confirmStart_pressed2();
    void pushButton_cancel_pressed2();
    void pushButton_confirm_pressed2();
    void startALL2();
    void startPercep2();
    void startLocal2();
    void startSensor2();
    void showReference2();
    void showObstacles2();
    void showImage2();
    void showPointcloud2();


    void startMapping();
    void endMapping();
    void recording();
    void startALL3();
    void startPercep3();
    void startLocal3();
    void startSensor3();
    void showReference3();
    void showObstacles3();
    void showImage3();
    void showPointcloud3();

};

#endif // MAINWINDOW_H
