/* sum of n numbers */
#include<iostream>
using namespace std;
int main()
{
 int n;
 int sum;
 cin>>n;
 int i=1;
 sum=0;
 while (i<=n)
 {
   sum=i+sum;
   i=i+1;
 }
 cout<<"value of sum is"<<sum<<endl;
 return 0;
}