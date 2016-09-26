#include "image.h"
#include <QDebug>

Image::Image()
{

}

QColor Image::getPixelColor(QPoint point)
{
    stringstream key;
    key << point.x() << " " << point.y();
    if(pixels.contains(key.str()))
        return pixels[key.str()];
    else
        return QColor(0,0,0,0);
}

void Image::addPixel(QPoint point, QColor color)
{
    stringstream key;
    key << point.x() << " " << point.y();
    pixels[key.str()] = color;
}

void Image::clearPixel(QPoint point)
{
    stringstream key;
    key << point.x() << " " << point.y();
    pixels[key.str()] = QColor(0,0,0,0);
}

QColor Image::getPixelColorIndex(int index)
{
    if(pixelsIndex.contains(index))
        return pixelsIndex[index];
    else
        return QColor(0,0,0,0);
}

void Image::addPixelIndex(QPoint point, QColor color)
{
    pixelsIndex[pointToIndex(point)] = color;
}

void Image::clearPixelIndex(QPoint point)
{
    pixelsIndex[pointToIndex(point)] = QColor(0,0,0,0);
}

void Image::setSize(int x, int y, int unit){
    screenWidth = x;
    screenHeight = x;
    unitSize = unit;
}

int Image::pointToIndex(QPoint point){
    int xindex = point.x();
    int yindex = point.y();
    int finalindex = xindex + yindex * (screenWidth/unitSize);
    return finalindex;
}

QPoint Image::indexToPoint(int index){
    int xindex = index % (screenWidth/unitSize);
    int yindex = (index - xindex) / (screenWidth/unitSize);
    QPoint point(xindex, yindex);
    return point;
}
