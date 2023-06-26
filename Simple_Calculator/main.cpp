#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int pilihan,numfor,no,jwp;
float Y,ans,N;
void Option()
{
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO THE WORLD OF COUNTING\n";
    cout<<"\n*********************************************";
    cout<<"\nWhich operation you want to perform ? : "<<endl;
    cout<<"Press 0 for exit\nPress 1 for Addition";
    cout<<"\nPress 2 for Subtraction\nPress 3 for Multiplication\n";
    cout<<"Press 4 for Division\nPress 5 for Power Calculation\n";
    cout<<"Press 6 for Square Root\nPress 7 for Factorial Calculator"<<endl;
    cout<<"*********************************************";
    cout<<endl<<"Press Option : ";
    cin>>pilihan;
}
void kosong()
{
   cout<<"*********************************************";
    cout<<"\n     TQ To using THE WORLD OF COUNTING\n";
    cout<<"*********************************************"<<endl;
}
void satu()
{
    ans=0;
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO ADDITION CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter number of item : ";
    cin>>numfor;
    for(no=1;no<=numfor;no++)
    {
        cout<<"Enter Number "<<no<<" : ";
        cin>>Y;
        ans+=Y;
    }
    cout<<"The Total of Addition all "<<no<<" Numbers is : "<<ans<<"\n\n";
}
void dua()
{
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO SUBTRACTION CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter number of item : ";
    cin>>numfor;
    cout<<"Enter Number 1 : ";
    cin>>Y;
    ans=Y;
    for(no=2;no<=numfor;no++)
    {
        cout<<"Enter Number "<<no<<" : ";
        cin>>Y;
        ans-=Y;
    }
    cout<<"The Total of Subtraction all "<<no-1<<" Numbers is : "<<ans<<endl<<endl;
}
void tiga()
{
 cout<<"*********************************************";
    cout<<"\n\tWELCOME TO MULTIPLICATION CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter number of item : ";
    cin>>numfor;
    cout<<"Enter Number 1 : ";
    cin>>Y;
    ans=Y;
    for(no=2;no<=numfor;no++)
    {
        cout<<"Enter Number "<<no<<" : ";
        cin>>Y;
        ans*=Y;
    }
    cout<<"The Total of Multiplcation all "<<no-1<<" Numbers is : "<<ans<<"\n"<<endl;
}
void empat()
{
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO DIVISION CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter number of item : ";
    cin>>numfor;
    cout<<"Enter Number 1 : ";
    cin>>Y;
    ans=Y;
    for(no=2;no<=numfor;no++)
    {
        cout<<"Enter Number "<<no<<" : ";
        cin>>Y;
        ans/=Y;
    }
    cout<<"The Total of Division all "<<no-1<<" Numbers is : "<<ans<<endl<<"\n";
}
void lima()
{
    ans=1;
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO POWER CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter The Base Number : ";
    cin>>Y;
    cout<<"Enter The Exponent Number : ";
    cin>>N;
    int W=N;
    while(N!=0)
    {
        ans*=Y;
        --N;
    }
    cout<<Y<<" ^ "<<W<<" = "<<ans<<"\n"<<endl;
}
void enam()
{
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO SQUARE ROOT CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter The Number : ";
    cin>>Y;
    ans=sqrt(Y);
    cout<<"Square root of "<<Y<<" = "<<ans<<endl<<endl;
}
void tujuh()
{
    cout<<"*********************************************";
    cout<<"\n\tWELCOME TO FACTORIAL CALCULATOR\n";
    cout<<"*********************************************"<<endl;
    cout<<"Enter The Number : ";
    cin>>Y;
    for(N=1;N<Y;++N)
    {
        jwp*=N;
    }
    cout<<"Factorial of "<<Y<<" = "<<jwp<<endl;
}
void notInChoose()
{
    cout<<"Please press the available option only !!! "<<endl<<endl;
}
void cls()
{
    system("cls");
}
void pause()
{
    system("pause");
}
void CalcFunction()
{
    if(pilihan==0)
    {
        cls();
        kosong();
    }
    else if (pilihan==1)
    {
        cls();
        satu();
        pause();
        cls();
    }
    else if (pilihan==2)
    {
        cls();
        dua();
        pause();
        cls();
    }
    else if (pilihan==3)
    {
        cls();
        tiga();
        pause();
        cls();
    }
    else if (pilihan==4)
    {
        cls();
        empat();
        pause();
        cls();
    }
    else if (pilihan ==5)
    {
        cls();
        lima();
        pause();
        cls();
    }
    else if (pilihan ==6)
    {
        cls();
        enam();
        pause();
        cls();
    }
    else if (pilihan==7)
    {
        cls();
        tujuh();
        pause();
        cls();
    }
    else
    {
        cls();
        notInChoose();
        cls();
    }
}
int main()
{
    do
    {
        Option();
        CalcFunction();
    }
    while(pilihan!=0);
}
