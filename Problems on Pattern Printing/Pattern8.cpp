/*
3. Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 3 iCol = 5 
Output :
 A A A A A 
 B B B B B 
 C C C C C
*/


#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for ( j =1; j <=iCol; j++)
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