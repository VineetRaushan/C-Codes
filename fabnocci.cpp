#include<iostream>
using namespace std;
 
 int fabnocci(int n){
    int n1 = 0,n2=1,n3;
    for (int i = 2; i < n; i++)
    {
        n3 = n1+n2;
        n1=n2;
        n2=n3;
    }
    return n3;
 }

int main()
{
 int n;
 cin>>n;
 int answer = fabnocci(n);
 cout<<fabnocci(n)<<endl;
 return 0;
}