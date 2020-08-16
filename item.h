#ifndef ITEM_H
#define ITEM_H

#include "param.h"
#include "lang.h"

#include <QDir>
#include <QSharedPointer>
#include <QVariant>

namespace kudroma {
namespace code_assistant {

class Item
{
public:
    Item(const QDir& dir, QString name);

    void addItem(const QSharedPointer<Item> item);

    virtual void action(QSharedPointer<Lang> lang) = 0;

protected:
    QList<QSharedPointer<Item> > childItems_;
    QDir dir_;
    QString name_;
};
}}

#endif // ITEM_H
