/*
5. Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 3 iCol = 4 
Output :
 1  2  3  4 
 5  6  7  8 
 9  10 11 12 
*/


#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iCnt=1;
    if((iRow<0)||(iCol<0))      //Filter
    {
        iRow=-iRow;
        iCol=-iCol;
    }
    for(i=1;i<=iRow;i++)
    {   
        for ( j =1; j <=iCol; j++)
        {   
            printf("%d\t",iCnt++);
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