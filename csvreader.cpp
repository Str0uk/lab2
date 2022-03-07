#include "csvreader.h"


CSVReader::CSVReader(const QString& filename)
{
    fin.open(filename.toLatin1().data());

}

CSVReader::~CSVReader(){
    fin.close();
}

std::vector<Employe> CSVReader::readAll(){

    std::vector<Employe> result;


            while (!fin.eof())
            {
                std::string line;
                std::getline(fin, line);


                if (line != "") {
                    auto v = split(line, ';'); // {"1", "Ford Focus", "0", "2004"}

                    Employe employee;
                    employee.id = std::stoi(v[0]);
                    employee.full_name = QString::fromStdString(v[1]);
                    employee.birth_year = std::stoi(v[2]);

                    result.push_back(employee);
                }



               }
            return result;
}
