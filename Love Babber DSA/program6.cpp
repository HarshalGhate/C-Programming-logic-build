#include <iostream>
using namespace std;


// 1       2       3
// 1       2       3
// 1       2       3

void display(int ino)
{
    int i=1;
    while(i<=ino){
        int j=1;
        while(j<=ino){
            cout<<j<<"\t";
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