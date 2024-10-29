#include "node.h"

Node::Node(QGraphicsScene *parent)
    : QGraphicsItem{}
{
    addHeader();
    addSockets();
}

QRectF Node::boundingRect() const
{
    return QRectF(bounds);
}

void Node::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(backgroundColor));
    painter->setPen(QPen(Qt::NoPen));
    painter->drawRoundedRect(bounds,5,5);
}

QRect Node::getBounds() const
{
    return bounds;
}

void Node::setBounds(const QRect &newBounds)
{
    bounds = newBounds;
}

int Node::getCornerRadius() const
{
    return cornerRadius;
}

void Node::setCornerRadius(int newCornerRadius)
{
    cornerRadius = newCornerRadius;
}

void Node::addSockets()
{
    inputSocket = new Socket(this);
    inputSocket->moveBy(0,height/2);
    outputSocket = new Socket(this);
    outputSocket->moveBy(width - outputSocket->boundingRect().width(),height/2);
}

void Node::addHeader()
{
    header = new NodeHeader(this);
    header->setBounds(QRect(0,0,width,headerHeight));
    header->setRoudedRadius(cornerRadius);
}
