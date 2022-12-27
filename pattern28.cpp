//* * * * * * * * * * * * * 
// * * * * * * * * * * * * 
// *  * * * * * * * * * * 
// *  *  * * * * * * * * 
// *  *  *  * * * * * * 
// *  *  *  *  * * * *
// *  *  *  *  *  * *
// *  *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  
// *  *  *  
// *  *  
// * 
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
     int m=1;
    while (m<n){
        int a=7+n;
        while(a>0){
            cout<<"*"<<" ";
            a=a-2;
        }
        cout<<endl<<"   ";
        m++;
    }
    
    int i = 1;
    while(i<=n-1){
        int j=1;
        while(j<=i){
            cout<<" "<<"*"<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
    int l=1;
    while (l<=n-1)
    {
      int k=1;
      while(k<=n-l+1){
        cout<<" "<<"*"<<"  ";
        k++;
      }
      cout<<endl;
      l++;
    }
   
    
    

    
    
 return 0;
}