#include <iostream>
using namespace std;

bool ChkPrime(int ino)
{
    for (int i = 2; i <= ino - 1; i++)
    {
        if (ino % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    // return;
}

int main()
{
    int iValue = 0;
    bool bret = false;
    cout << "Enter the number = ";
    cin >> iValue;

    bret = ChkPrime(iValue);
    if (bret == true)
    {
        cout << "The number is Prime " << iValue;
    }
    else
    {
        cout << "The number is not Prime " << iValue;
    }
    return 0;
}
