#include<iostream>
using namespace std;
int c = 0;
int main() {

    int n = 5, fact=1 ;
    // do{
    // cout<<"Enter Number  : ";
    // cin>>n;
    // if (n<0) {
    //     cout<<"Enter Valid Output \n";
    // }
    // } while(n<0);
    c++;
    if(n == 0 || n == 1) {
        
        fact = 1;
    }
    else {
        
    c++;for (int i = 1; i <= n; i++ , c++) 
    { 
        c++; // INCREMENT 2
        c++;
        fact *= i;
    }
    }
    cout<<"\nfactotail is : "<<fact;
    cout<<"\nOperation is : "<<c;
    return 0;
}