#include "nodeheader.h"

NodeHeader::NodeHeader(QGraphicsItem *parent)
    : QGraphicsItem{}
{
    setParentItem(parent);
    text.setParentItem(this);
}

QRectF NodeHeader::boundingRect() const
{
    return bounds;
}

void NodeHeader::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::NoPen));
    painter->setBrush(QBrush(color));
    painter->drawRoundedRect(bounds,10,10);
}

QRect NodeHeader::getBounds() const
{
    return bounds;
}

void NodeHeader::setBounds(const QRect &newBounds)
{
    bounds = newBounds;
}

QColor NodeHeader::getColor() const
{
    return color;
}

void NodeHeader::setColor(const QColor &newColor)
{
    color = newColor;
}

int NodeHeader::getRoudedRadius() const
{
    return roudedRadius;
}

void NodeHeader::setRoudedRadius(int newRoudedRadius)
{
    roudedRadius = newRoudedRadius;
}

QString NodeHeader::getText() const
{
    return text.getDefaultText();
}

void NodeHeader::setText(QString newText)
{
    text.setPlainText(newText);
}



