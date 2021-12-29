// class = class is considered as user define datatype which contain characteristics(Data types) and behaviour(Functions)
// constructor = 1) class name and constructor name is same. 2) when we create the object of class then constructor called automatically.
//                3)There are 3 types of constructor. 
#include<iostream>

using namespace std;

class Arithmatic            //class
{
    public:
            int no1,no2;            //characteristics
            Arithmatic()            //default constructor => which not accept any parameters.which is used for initializtion.
            {
                cout<<"Object creating of default constructor\n";
                no1=0;
                no2=0;
            }
            Arithmatic(int i,int j)     //Parameterised constructor => which accept parameters.
            {
                cout<<"Object creating of parameterised constructor\n";
                no1=i;
                no2=j;
            }
            Arithmatic(Arithmatic &ref)   //copy Constructor  
            { 
                 cout<<"Object creating of copy constructor\n";
                this->no1=ref.no1;
                this->no2=ref.no2;
            }
            ~Arithmatic()           //destructor
            {
              cout<<"Inside Destructor\n";      
            }
            int Add()               //Behaviour
            {
                return no1+no2;
            }

};

int main()
{
    int x=0,y=0,iRet=0;
    cout<<"Enter First number :";
    cin>>x;
    cout<<"Enter Second number :";
    cin>>y;
    Arithmatic aobj(x,y);
    iRet=aobj.Add();
    cout<<"Addition is :"<<iRet<<endl;

    Arithmatic a1(aobj);
    cout<<a1.no1<<endl;
    cout<<a1.Add()<<endl;
    return 0;
}