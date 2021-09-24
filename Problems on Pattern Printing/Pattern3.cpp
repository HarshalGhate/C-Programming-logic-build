/*
3. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output :
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    if((iRow<0)||(iCol<0))
    {
        iRow=-iRow;
        iCol=-iCol;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>0;j--)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    cout<<"Enter the nmber of Rows\n";
    cin>>iValue1;
    cout<<"Enter the number of Colums\n";
    cin>>iValue2;

    Pattern(iValue1,iValue2);
    return 0;
}