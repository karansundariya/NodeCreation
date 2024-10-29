#include "socket.h"

Socket::Socket(QGraphicsItem *parent)
    : QGraphicsItem{}
{
    setParentItem(parent);
}

QRectF Socket::boundingRect() const
{
    return bounds;
}

void Socket::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::NoPen));
    painter->setBrush(QBrush(Qt::yellow));
    painter->drawRoundedRect(bounds,cornerRadius,cornerRadius);
}
