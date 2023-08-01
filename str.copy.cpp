#include <iostream>

using namespace std;

int main()
{
    string str="Programming";
    char str1[20];
    str.copy(str1,str.length());
    cout<<str1<<endl;
    return 0;
}