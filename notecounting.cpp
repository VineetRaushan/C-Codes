//Here you have given a fixed amount (1130here) calculate number of notes of 100 50 10 1 needed to have this amount

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the amount"<<endl;
    int am;
    cin>>am;
    int t;
    switch(1){

        case 1 :
        t = am/100;
        cout<<t<<" " <<"100's notes are needed"<<endl;
        am=am%100;

        case 2 :
        t=am/50;
        cout<<t;
        cout<< " " <<"50's notes will be needed"<<endl;
        am=am%50;
        
        case 3 :
        t = am/20;
        cout<<t<<" "<<"20's notes are needed"<<endl;
        am=am%20;

        case 4 :
        t = am/1;
        cout<<t<<" "<<"1's notes are needed"<<endl;
        am=am%1;
        
    }
}