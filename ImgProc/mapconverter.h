#ifndef MAPCONVERTER_H
#define MAPCONVERTER_H
#include <QPixmap>
#include <opencv2/opencv.hpp>

class MapConverter
{
public:
    MapConverter();
    static QPixmap CvMatToPixmap(cv::Mat mat);
};

#endif // MAPCONVERTER_H
