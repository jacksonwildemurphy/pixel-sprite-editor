#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "model.h"
#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include "vector.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include "model.h"
#include "spritegraphicsview.h"
#include <QPointF>
#include <gifexport.h>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;

    QVBoxLayout *framesLayout; //Used to nicely order the preview frames in the GUI
    QVBoxLayout *graphicsLayout;
    int individualFrameWidth = 80;
    int individualFrameHeight = 80;
    std::list<QPushButton*> frameWidgets;
    SpriteGraphicsView* spriteGraphicsView;
    QGraphicsScene* scene;
    Model* model;
    void drawGrid(int imageheight,int imagewidth, int unitsize);

    int screenWidth;
    int screenHeight;

private slots:
    void on_secondaryColorButton_clicked();

    void on_addFrameButton_clicked();

    void on_frameButton_clicked();

    void on_primaryColorButton_clicked();

    void on_deleteFrameButton_clicked();

    void on_brushButton_clicked();

    void on_eraserButton_clicked();

    void on_bucketButton_clicked();

    void on_fileOpened(int frameCount);

    void on_spinBox_valueChanged(int arg1);

    void on_actionExport_triggered();

public:
    explicit MainWindow(QWidget *parent = 0);
    void addRect(float x, float y, float height, float width, Vector4 color);

    ~MainWindow();
};

#endif // MAINWINDOW_H
