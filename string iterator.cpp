#include <iostream>

using namespace std;

int main()
{
    string str="Holidays";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}