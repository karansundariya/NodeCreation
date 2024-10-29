#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Socket : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Socket(QGraphicsItem *parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

signals:
private:
    QRect bounds = QRect(0,0,10,22);
    int cornerRadius = 4;
};

#endif // SOCKET_H
