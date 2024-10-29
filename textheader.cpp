#include "textheader.h"
#include "qfont.h"

textHeader::textHeader(QGraphicsItem *parent)
    : QGraphicsTextItem{}
{
    setPlainText("Default");
    setFont(QFont("Arial"));
    setScale(FontSize);
    setTextInteractionFlags(Qt::TextEditorInteraction);
    setDefaultTextColor(QColor(Qt::white));
}

QString textHeader::getDefaultText() const
{
    return defaultText;
}

void textHeader::setDefaultText(const QString &newDefaultText)
{
    defaultText = newDefaultText;
}

float textHeader::getFontSize() const
{
    return FontSize;
}

void textHeader::setFontSize(float newFontSize)
{
    FontSize = newFontSize;
}
