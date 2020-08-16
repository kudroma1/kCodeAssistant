#include "parser.h"

#include <QDebug>

#include <QFile>

using namespace kudroma::code_assistant;

Parser::Parser()
{

}

void Parser::parse(const QString &filename) const
{
    QFile file;
    file.setFileName(filename);
    file.open(QIODevice::OpenModeFlag::ReadOnly | QIODevice::OpenModeFlag::Text);
    const auto content = QString(file.readAll().toStdString().c_str());
    qDebug() << content;

    if(content.size() < minContentSize_)
        return;

    bool finish = false;
    qint32 forwardInd = 0;
    qint32 backwardInd = content.size() - 1;
    while(!finish)
    {

    }
}
