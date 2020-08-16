#include "item.h"

using namespace kudroma::code_assistant;

Item::Item(const QDir& dir, QString name) : dir_(dir), name_(name)
{
}

void Item::addItem(const QSharedPointer<Item> item)
{
    childItems_.append(item);
}
