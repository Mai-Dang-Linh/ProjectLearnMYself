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
string DataUnit::GetValue(string key){
    string s("");
    map<string,string>::iterrator it;
    for(it = Member.begin();it != Member.end(); it++)
    {
        if(key == Member.find(key))
            s = it->second;
    }

    return s;
}
// string DataUnit:: GetInfor()
// {

// }
// int DataUnit::GetId()
// {
//     return Id;
// }
