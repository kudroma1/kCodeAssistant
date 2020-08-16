#include "classitem.h"

using namespace kudroma::code_assistant;

ClassItem::ClassItem(const QDir& dir, const QString& name) : Item(dir, name)
{}

void ClassItem::action(QSharedPointer<Lang> lang)
{
    if(lang)
        lang->createClass(dir_, name_);
}
