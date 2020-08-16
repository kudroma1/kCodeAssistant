#include "packageitem.h"

using namespace kudroma::code_assistant;

PackageItem::PackageItem(const QDir &dir, const QString &name) : Item(dir, name)
{}

void PackageItem::action(QSharedPointer<Lang> lang)
{
    if(lang)
        lang->createPackage(dir_, name_);
}
