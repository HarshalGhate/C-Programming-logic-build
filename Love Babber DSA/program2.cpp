#include <iostream>
using namespace std;

// print numbers from 0 to n.
void display(int n)
{
    int i = 0;
    while (i <= n)
    {
        cout << i << "\t";
        i++;
    }
}

int main()
{
    int n = 0;
    cin >> n;

    display(n);
    return 0;
}