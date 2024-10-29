#ifndef NODE_H
#define NODE_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QColor>
#include "nodeheader.h"
#include "socket.h"

class Node : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Node(QGraphicsScene *parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    QRect getBounds() const;
    void setBounds(const QRect &newBounds);

    int getCornerRadius() const;
    void setCornerRadius(int newCornerRadius);

    void addSockets();

signals:

protected:
    int width = 348;
    int height = 202;
    QRect bounds = QRect(0,0,width,height);
    int headerHeight = 38;
    int cornerRadius = 10;
    QColor backgroundColor = QColor("#D9D9D9");
    void addHeader();
    NodeHeader *header = nullptr;
    Socket *inputSocket = nullptr;
    Socket *outputSocket = nullptr;


};

#endif // NODE_H
