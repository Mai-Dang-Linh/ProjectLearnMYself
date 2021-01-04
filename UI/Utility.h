#ifndef Project_UI_Utility_H_
#define Project_UI_Utility_H_

#include <string>
using namespace std;
class Utility
{
public:
    static string SEncoder(string s);
    static string SDecoder(string s);
    static string ToString(vector<string> vs);
    static vector<string> FromString(string s);

#endif