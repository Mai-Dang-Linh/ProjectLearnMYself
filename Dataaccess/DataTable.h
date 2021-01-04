#ifndef Project_Dataaccess_DataTable_H_
#define Project_Dataaccess_DataTable_H_

#include "../bussinessobject/DataUnit.h"
#include <map>
#include <string>
#include <vector>
using namespace std;
class DataTable{
private:
    vector<*DataUnit> _data; Linh
    vector<DataUnit*> _data;
    _maxId;
public:
    DataTable();
    DataTable(string fileName);
    int GetMaxId();
    // int PushBack(DataUnit);
    string ToString();
    string  PushBack(DataUnit);
    DataUnit* GetPoint(int i);
    string GetData();
    int ExporttoFile (string fileName); // xuat ra file ben ngoai 
    void Add();
    void Eddit();
    void Delete();
    void Save();
     

};

#endif