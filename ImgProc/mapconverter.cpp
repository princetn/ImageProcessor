#include "mapconverter.h"

MapConverter::MapConverter()
{

}

QPixmap MapConverter::CvMatToPixmap(cv::Mat mat)
{
    QPixmap pix;

    if( mat.type() == CV_8UC4) // 32bit.
    {
        QImage img(mat.data, mat.cols, mat.rows, static_cast<int>(mat.step),QImage::Format_RGBA8888);
        pix = QPixmap::fromImage(img.rgbSwapped());
    }
    else if(mat.type() == CV_8UC3) // 24bit.
    {
        QImage img(mat.data, mat.cols, mat.rows, static_cast<int>(mat.step),QImage::Format_RGB888);
        pix = QPixmap::fromImage(img.rgbSwapped());

    }
    else if(mat.type() == CV_8UC1) // 8bit.
    {
        QImage img(mat.data, mat.cols, mat.rows, static_cast<int>(mat.step),QImage::Format_Grayscale8);
        pix = QPixmap::fromImage(img.rgbSwapped());
    }


    return pix;

}

