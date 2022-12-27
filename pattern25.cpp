//   1
//  23
// 456
//78910

#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int i=1;
 int num =1;
 while (i<=n)
 {
    int space = n-i;
    while(space){
        cout<<" ";
        space--;
    }
    int j=1;
    
    while(j<=i){
        cout<<num;
        num++;
        j++;
    }
    cout<<endl;
    i++;
 }
 
 return 0;
}