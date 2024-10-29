#ifndef NODEEVENT_H
#define NODEEVENT_H

#include <QObject>
#include "node.h"

class NodeEvent : public Node
{
    Q_OBJECT
public:
    explicit NodeEvent(QGraphicsScene *parent = nullptr);

signals:

};

#endif // NODEEVENT_H
