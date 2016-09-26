#ifndef GIFEXPORT_H
#define GIFEXPORT_H
#include <string>
#include "sprite.h"
#include <QDebug>
#include <ImageMagick/Magick++.h>

class GIFExport
{
public:
    GIFExport();

public slots:
    void save(string fileName, Sprite* sprite);

};

#endif // GIFEXPORT_H
