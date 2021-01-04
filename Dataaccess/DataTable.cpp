#include "DataTable.h"
#include <fstream>
DataTable::DataTable(){
    // _data.size()=0
    // _maxId = 0;
}
DataTable::DataTable(string fileName,DataUnit* ptrU)
{
    _maxId = 0;
    _data.size() =0;
    istream inFile(fileName,ios::in);
    const int maxSize =255;
    char buff[maxSize];
    while(inFile.getline(buff,maxsize))
    {
        DataUnit* unit = GetTableUnit();
        unit->FromStringDecode(buff);
        _Data.push_back(unit);
    }    
    inFile.close();

}
int DataTable::GetMaxId()
{
    return _maxId;
}
    // int PushBack(DataUnit);
// string DataTable::PushBack(DataUnit* unit)
int DataTable::PushBack(DataUnit* unit)
{
    _maxId++;
    _data.push_back(unit);
    return _maxId;
}

DataTable::DataUnit* GetPoint(int i)
{ 
    DataUnit* ptr = nullptr;
    if(i >= 0 && i < _data.size())
            ptr = &_data[i];
    return ptr;

}
int DataTable::ExporttoFile (string fileName);
{
    ostream outFile(fileName,ios::out);
    if(!outFile) return 0;
    for(  :_data){
    }
    outFile.close();
    return 1;
}
string GetData()
{
    return _data;
}
string DataTable::ToString()
{
    string sOut("");
    for(DataUnit* unit:_Data)
    {
        sOut = sOut + unit->ToString() + "\n";
    }
    reutrn sOut;
}
void Add();
void Eddit();
void Delete();
void Save();
