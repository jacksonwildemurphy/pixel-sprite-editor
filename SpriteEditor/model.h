#ifndef MODEL_H
#define MODEL_H

#include "sprite.h"
#include "image.h"
#include "layer.h"
#include "tool.h"
#include "vector.h"
#include <QGraphicsScene>
#include <QtGui>
#include <qobject.h>
#include <string>
#include <sstream>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsRectItem>
#include <Magick++.h>

using namespace std;

class Model :public QObject
{
    Q_OBJECT
private:
    // private data members
    //Sprite *selectedSprite;
    Image *selectedImage;
    Layer *selectedLayer;
    QGraphicsScene* scene;
    int screenWidth;
    int screenHeight;

    int currentPreviewFrame;
    QTimer *previewTimer;

    QMap<string,QGraphicsRectItem*> pixelMap;

    bool mouseIsPressed;
    int fps;

    // private methods
    void recursiveFill(int x, int y, QColor currentColor, QColor newColor);
    bool colorEquals(Vector4 vectorColor, QColor color);
    void updateGUI();
    void drawGrid(int height, int width, int unitSize);




public:
    Sprite *selectedSprite;

    Model(QGraphicsScene* scene, int screenHeight, int screenWidth, int unitSize);
    Model();
    void penDraw(int x, int y, Vector4 color);
    void erase(int x, int y);
    void fill(int x, int y, Vector4 color);

    void redrawImage(int index);
    void deleteRect(int x, int y);
    void addLayer();
    void addImage();
    void removeImageAt(int index);
    int getCurrentImageIndex();
    void setCurrentImageIndex(int index);
    QPoint getCellLocation(QPointF point);
    int unitSize;
    Vector4 color;
    Vector4 secondaryColor;
    QString currentTool;
    void setFPS(int fps);
    void exportSprite();

signals:
    void fileOpened(int frameCount);

public slots:
    void mousePressed(QPointF point);
    void mouseMove(QPointF point);
    void mouseReleased(QPointF point);
    void save();
    void open();
    void startPreview();
    void stopPreview();
    void preview();

};

#endif // MODEL_H
