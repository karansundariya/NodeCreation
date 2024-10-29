#ifndef TEXTHEADER_H
#define TEXTHEADER_H

#include <QObject>
#include <QGraphicsItem>
#include <QFont>

class textHeader : public QGraphicsTextItem
{
public:
    explicit textHeader(QGraphicsItem *parent = nullptr);
    QString getDefaultText() const;
    void setDefaultText(const QString &newDefaultText);

    float getFontSize() const;
    void setFontSize(float newFontSize);

signals:
private:
    QString defaultText = "Default";
    float FontSize = 1.5;

};

#endif // TEXTHEADER_H
