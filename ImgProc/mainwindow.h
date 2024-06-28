#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QPixmap>
#include <QMessageBox>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "mapconverter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LoadButton_pressed();
    void window_resize();

    void on_FlipButton_pressed();

    void on_GrayButton_pressed();

    void on_AvgPixButton_pressed();

private:
    Ui::MainWindow *ui;
    QString _currentFile;
    cv::Mat _mat;
};

#endif // MAINWINDOW_H
