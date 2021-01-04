#ifndef Project_businessobject_DataUnit_H_
#define ProJect_businessobject_DataUnit_H_

#include <map>
class DataUnit{
private:
// dosomething()
    map<string,string> Member;
public:
    DataUnit();
    void SetMapMember(map<string,string> member);
    map<string,string> GetMapMemner();
    string ToString();
    string GetValue(string key);
    // string GetInfor();

    // json ToJson();
};  

#endif