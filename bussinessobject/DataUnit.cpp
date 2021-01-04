#include "DataUnit.h"
DataUnit::DataUnit()
{
    Member.clear();
}
void DataUnit:: SetMapMember(map<string,string> member)
{
    Member.clear();
    Member = member;
    FromMapMember();
}
map<string,string> DataUnit::GetMapMemner()
{
    ToMapMenber();
    return Member;
}
string DataUnit::ToString()
{
    ToMapMember()
    map<string,string>::iterator it;
    string s= "";
    for(it= Member.begin();it!= Member.end();it++)
    {
        s += it->second + ", ";
    }
    s = "{" + s +"}";
    return s;

}
// string DataUnit:: GetInfor()
// {

// }
// int DataUnit::GetId()
// {
//     return Id;
// }
