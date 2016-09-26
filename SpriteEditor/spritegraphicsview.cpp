#include "spritegraphicsview.h"

SpriteGraphicsView::SpriteGraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{

}

void SpriteGraphicsView::mousePressEvent(QMouseEvent * event)
{
    QPointF point = mapToScene(event->pos());
    emit mousePressSignal(point);
}

void SpriteGraphicsView::mouseMoveEvent (QMouseEvent *event)
{
    QPointF point = mapToScene (event->pos());
    emit mouseMoveSignal(point);
}

void SpriteGraphicsView::mouseReleaseEvent(QMouseEvent *event)
{
    QPointF point = mapToScene (event->pos());
    emit mouseReleaseSignal(point);
}
