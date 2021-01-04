#include <iostream>
#include <string>
#include <vector>

using namespace std;
string SEncoder(string s){
    for(int i =0; i<s.size();i++){
        if(s[i]==' ')
            s[i]='$';
    }
    return s;
}
string SDecoder(string s){
    for(int i = 0; i<s.size();i++)
    {
        if(s[i]=='$')
            s[i] = ' ';
    }
    return s;
}
string ToString(vector<string> vs)
{
    string s = "";
    for( string si : vs)
    {
        s = s + SEncoder(si) +" "; 
    }
    s[s.length()] = 0;
    return s;
}

vector<string> FromString(string s)
{
    vector<string> vs;
    string stemp = "";
    for(int i = 0; i<s.size(); i++){
        if(s[i]!=' ')
            stemp += s[i];
        else
            vs.push_back(SDecoder(stemp));
            stemp ="";
    }
    return vs;
}

int main(){
    // vector<*string> vs;
    string s="";
    vector<string> a ={"Mai Dang Linh","12","3000","Min Sin "};
    s = ToString(a);
    cout <<s << endl;
    // vs = FromString(s);
    for(auto &i : a)
        cout << i <<" ";

    return 0;
}
