/*print -1+2-3+4-5+6-7+8-9+10*/
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<"+"<<i<<" ";
        }
        else
            cout<<-i<<" ";
        
    }
 return 0;
}