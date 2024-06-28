#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->verticalLayoutWidget);
    connect(ui->verticalLayoutWidget, SIGNAL(resize()), this, SLOT(window_resize()));
    this->setAttribute(Qt::WA_AlwaysShowToolTips,true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoadButton_pressed()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Select the image", "", tr("Images (*.png *.jpg *.jpeg *.gif)"));
    QPixmap file;
    _currentFile = fileName;
    if(fileName.isEmpty())
    {

        return;
    }
    cv::Mat mat = cv::imread(fileName.toStdString());
    _mat = mat;
    file = MapConverter::CvMatToPixmap(mat);
    // Display the image in a window
//       cv::namedWindow("Image", cv::WINDOW_NORMAL);
//       cv::imshow("Image", img);

//       // Wait for a key press to close the window
//       cv::waitKey(0);

//       // Clean up
//       cv::destroyAllWindows();


    setWindowTitle(fileName);
    if (! ui->Display->scene()) {
            //qDebug() << "No Scene!";

            QGraphicsScene *scene = new QGraphicsScene(this);
            ui->Display->setScene(scene);
    }
    file.scaled(ui->Display->size(),Qt::KeepAspectRatio);
    ui->Display->scene()->clear();
    ui->Display->scene()->addPixmap(file);
    //ui->Display->rotate(90);
    //ui->Display->scale();
    //ui->Display->fitInView(ui->Display->scene()->sceneRect(),Qt::KeepAspectRatio);
    //ui->Display->adjustSize();
}

void MainWindow::window_resize()
{
    ui->Display->fitInView(ui->Display->scene()->sceneRect(),Qt::KeepAspectRatio);
}

void MainWindow::on_FlipButton_pressed()
{
    cv::Mat flippedMat;
    if(_mat.empty())
        return;

    cv::flip(_mat, flippedMat, 0);
    _mat = flippedMat;

    QPixmap pix = MapConverter::CvMatToPixmap(flippedMat);
    pix.scaled(ui->Display->size(),Qt::KeepAspectRatio);
    ui->Display->scene()->clear();
    ui->Display->scene()->addPixmap(pix);

}

void MainWindow::on_GrayButton_pressed()
{
    cv::Mat greyMat;
    if(_mat.empty() || _mat.type() == CV_8UC1)
        return;


    cv::cvtColor(_mat, greyMat, cv::COLOR_BGR2GRAY);
    _mat = greyMat;
    QPixmap pix = MapConverter::CvMatToPixmap(greyMat);
    pix.scaled(ui->Display->size(),Qt::KeepAspectRatio);
    ui->Display->scene()->clear();
    ui->Display->scene()->addPixmap(pix);



}

void MainWindow::on_AvgPixButton_pressed()
{
    cv::Scalar avg;

    if(_mat.empty() || !_mat.type() == CV_8UC1)
    {
        QMessageBox::warning(this,"no gray image", "You need to load an image and convert it to gray!");
        return;
    }

    avg = cv::mean(_mat);

    QMessageBox::information(this,"Average Pixel Value", "The Average pixel value is: "+QString::number(static_cast<double>(avg.val[0])));

}
