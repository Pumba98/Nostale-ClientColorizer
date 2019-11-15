#ifndef PATTERNSEARCH_H
#define PATTERNSEARCH_H
#include <QByteArray>
#include <QString>

namespace Pattern {
    static int search(QByteArray content, const QByteArray &pattern, const QString &mask, int base = 0) {
        int patternLength = mask.size();
        int i = 0;
        while (i + patternLength < content.size()) {
            bool found = true;
            for (int j = 0; j < patternLength; j++) {
                found &= mask[j] == '?' || content.at(i+j) == pattern.at(j);
            }

            if (found) {
                return base + i;
            }
            i++;
        }
        return -1;
    }
}

#endif // PATTERNSEARCH_H
