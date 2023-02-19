// *       *       *
// *       *       *
// *       *       *

#include <iostream>
using namespace std;

// void display(int ino)
// {
//     for (int i = 1; i <= ino; i++)
//     {
//         for (int j = 1; j <= ino; j++)
//         {
//             cout << "*\t";
//         }
//         cout << "\n";
//     }
// }

void display(int ino)
{
    int i=1;
    while(i<=ino){
        int j=1;
        while(j<=ino){
            cout<<"*\t";
            j++;
        }
        cout<<endl;
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