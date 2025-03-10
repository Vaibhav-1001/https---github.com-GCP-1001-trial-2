#include <iostream>
using namespace std;
int c = 0;
int main()
{

    int n = 74;
    int f1 = 0, f2 = 1;
    c++;
    if (n == 1)
    {
        cout << " 0 " << endl;
    }
    c++;
    if (n == 2)
    {
        cout << " 0  1 " << endl;
    }
    else
    {
        int f3;
        c++;
        cout << " 0  1  ";
        for (int i = 2; i < n; i++, c++)
        {
            c++;
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
            cout << f3 << "  ";
        }
    }
    cout << "\noperation are : " << c;
    return 0;
}