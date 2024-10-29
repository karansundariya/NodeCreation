#ifndef NODEGRAPHSCENE_H
#define NODEGRAPHSCENE_H

#include <QGraphicsScene>
#include "nodeevent.h"

class NodeGraphScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit NodeGraphScene(QGraphicsView *parent = nullptr);
    void addNode();

signals:

};

#endif // NODEGRAPHSCENE_H
