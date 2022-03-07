#ifndef CSVREADER_H
#define CSVREADER_H

#include <QString>
#include <fstream>
#include <vector>

#include <employe.h>

using namespace std;

class CSVReader
{
    std::ifstream fin;

public:
    CSVReader(const QString& filename);
   ~CSVReader();

    bool is_open() const {return fin.is_open(); };

    std::vector<Employe> readAll();
};

#endif // CSVREADER_H
