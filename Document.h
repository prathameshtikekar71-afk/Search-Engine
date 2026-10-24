
#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

struct Document {
    int id;
    std::string title;
    std::string content;
    std::string category;
    std::string date;
};

#endif
