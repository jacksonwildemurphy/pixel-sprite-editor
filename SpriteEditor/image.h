#ifndef IMAGE_H
#define IMAGE_H


#include <vector>
#include "layer.h"
#include <qmap.h>
#include <string>
#include <qpoint.h>
#include <QColor>
#include <sstream>
using namespace std;

class Image
{
private:
    QMap<string,QColor> pixels;
    QMap<int,QColor> pixelsIndex;
    int screenHeight;
    int screenWidth;
    int unitSize;

public:
    Image();
    QColor getPixelColor(QPoint point);
    void addPixel(QPoint point, QColor color);
    void clearPixel(QPoint point);
    QMap<string,QColor> getPixels() { return pixels; }

    QColor getPixelColorIndex(int k);
    void addPixelIndex(QPoint point, QColor color);
    void clearPixelIndex(QPoint point);
    void setSize(int x, int y, int unit);
    int pointToIndex(QPoint point);
    QPoint indexToPoint(int index);

};
#endif // IMAGE_H
