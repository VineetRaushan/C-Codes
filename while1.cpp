/* on enterning a to z gove output small case same for uppercase and for numbers */
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"This is Smallcase alphabet";
    }
    else if (ch>='A'&&ch<='Z')
    {
        cout<<"This is Uppercase alphabet";
    }
    else{
        cout<<"This is a numeric input";
    }
    
 return 0;
}