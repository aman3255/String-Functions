#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str="holidays";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        *it=*it-32;
        cout<<*it<<endl;
    }
    return 0;
}