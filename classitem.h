#ifndef CLASSITEM_H
#define CLASSITEM_H

#include "item.h"

namespace kudroma {
namespace code_assistant {

class ClassItem : public Item
{
public:
    ClassItem(const QDir& dir, const QString& name);

    void action(QSharedPointer<Lang> lang) override;
};
}}

#endif // CLASSITEM_H
