/*1. Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 4 iCol = 4 
Output :
 A B C D 
 A B C D 
 A B C D 
 A B C D
*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';
    if((iRow<0)||(iCol<0))      //Filter
    {
        iRow=-iRow;
        iCol=-iCol;
    }
    for(i=1;i<=iRow;i++)
    {
        for ( j =1,ch='A'; j <=iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        cout<<endl;        
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    cout<<"Enter the number of Rows\n";
    cin>>iValue1;
    cout<<"Enter the number of Colums\n";
    cin>>iValue2;

    Pattern(iValue1,iValue2);
    return 0;
}
