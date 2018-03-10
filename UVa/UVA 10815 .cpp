#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
set<string>st;
int main() 
{
    string x,a;
    set<string>::iterator t;
    while(getline(cin,x)){
         for(int i=0;i<x.length();i++){
           if(isalpha(x[i])){
                x[i]=tolower(x[i]);
                a+=x[i];
            }
           else if(a!=""){
               st.insert(a);
               a="";
            }
    }
    if(a!=""){
      st.insert(a);
      a="";
    }
}
for (auto it:st)
    cout<<it<<endl;

    }
