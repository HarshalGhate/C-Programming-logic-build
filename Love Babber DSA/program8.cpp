#include <iostream>
using namespace std;

//  I/p = 3
// 3       2       1          33 32 31
// 3       2       1          23 22 21
// 3       2       1          13 12 11

void display(int ino)
{
    int i = ino;
    while (i>0)
    {
        int j = ino;
        while (j>0)
        {
            cout << j << "\t";
            j--;
        }
        cout << endl;
        i--;
    }
}

int main()
{
    int ivalue = 0;
    cin >> ivalue;
    display(ivalue);
    return 0;
}