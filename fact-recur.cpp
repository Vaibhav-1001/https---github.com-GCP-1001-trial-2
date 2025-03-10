#include <iostream>
using namespace std;
int c=0;
static int fact(int n) {
    c++;if(n==1) {
        return 1;
    }
    c++;
    return n*fact(n-1);
    
}

int main() {
    int n=4 , fac = 1;
    fac = fact(n);
    // trial
    cout<<"factorial is : "<<fac << endl;
    cout<<"Operations is : "<<c << endl;
    return 0;
}
