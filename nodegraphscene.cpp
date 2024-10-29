#include "nodegraphscene.h"

NodeGraphScene::NodeGraphScene(QGraphicsView *parent)
    : QGraphicsScene{}
{
    addNode();
}

void NodeGraphScene::addNode()
{
//    Node *node = new Node(this);
    NodeEvent *node = new NodeEvent(this);
    addItem(node);
}
