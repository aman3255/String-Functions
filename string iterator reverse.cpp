#include <iostream>

using namespace std;

int main()
{
    string str="Holidays";
    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++){
        cout<<*it<<endl;
    }
    return 0;
}