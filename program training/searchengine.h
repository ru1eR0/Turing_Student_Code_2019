#ifndef SEARCHENGINE_H_INCLUDED
#define SEARCHENGINE_H_INCLUDED

#include <string>
#include "document.h"
#include "field.h"

class SearchEngine{
    private:
        std::vector <Document> m_library;
    public:
        SearchEngine(){}
        ~SearchEngine(){}
        void Initialize();
        std::vector <Document> Search (std::vector <Field> lost);//Interface is waiting for deciding.
};

#endif