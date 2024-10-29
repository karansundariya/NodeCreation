#ifndef NODEHEADER_H
#define NODEHEADER_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include "textheader.h"

class NodeHeader : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit NodeHeader(QGraphicsItem *parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    QRect getBounds() const;
    void setBounds(const QRect &newBounds);

    QColor getColor() const;
    void setColor(const QColor &newColor);

    int getRoudedRadius() const;
    void setRoudedRadius(int newRoudedRadius);

    QString getText() const;
    void setText(QString newText);

signals:

private:
    textHeader text;
    int roudedRadius = 5;
    QRect bounds = QRect(0,0,10,10);
    QColor color = QColor(Qt::gray);
};

#endif // NODEHEADER_H
