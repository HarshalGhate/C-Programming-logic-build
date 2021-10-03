/*
4. Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 4 iCol = 5 
Output : 
 4 4 4 4 4 
 3 3 3 3 3 
 2 2 2 2 2 
 1 1 1 1 1
*/


#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    
    for(i=iRow;i>0;i--)
    {
        for ( j =1; j <=iCol; j++)
        {
            printf("%d\t",i);
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