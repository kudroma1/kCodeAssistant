#ifndef PACKAGEPARSER_H
#define PACKAGEPARSER_H

#include <QFile>

namespace kudroma {
namespace code_assistant {

class Parser
{
public:
    Parser();

    void parse(const QString& filename) const;

private:
    const qint8 minContentSize_ = 10;
};
}}

#endif // PACKAGEPARSER_H
