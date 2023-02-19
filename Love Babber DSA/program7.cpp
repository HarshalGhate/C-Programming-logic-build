#include <iostream>
using namespace std;

//  I/p = 4
// 1       1       1       1
// 2       2       2       2
// 3       3       3       3
// 4       4       4       4

void display(int ino)
{
    int i = 1;
    while (i <= ino)
    {
        int j = 1;
        while (j <= ino)
        {
            cout << i << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}

int main()
{
    int ivalue = 0;
    cin >> ivalue;
    display(ivalue);
    return 0;
}