#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
using namespace std;
main()
{
    while(1)
    {
        int a,b,c;
        int x1,x2;
        char shutdown='0';
        cout<<"Enter the values of : \n\n";
        cout<<"a = ";
        cin>>a;
        cout<<"\nb = ";
        cin>>b;
        cout<<"\nc = ";
        cin>>c;
        system("cls");
        if(a==0)
        {
            cout<<"The given equation is not quadratic ...\n\nReason :\na cannot be 0 ... ";
        }
        else
        {
            x1= (-b+sqrt((b*b)-4*a*c))/(2*a);
            cout<<" x1 = "<<x1;
            cout<<"\n";
            x2= (-b-sqrt((b*b)-4*a*c))/(2*a);
            cout<<" x2 = "<<x2;
            getch();
            system("cls");
        }
        while(1)
        {
            char choice;
            cout<<"Do you want to perform a new calculation ? (y/n) : ";
            choice=getch();
            system("cls");
            if(choice=='y'||choice=='Y')
            {
                cout<<"Refreshing Code ...";
                sleep(2);
                system("cls");
                break;
            }
            else if(choice=='n'||choice=='N')
            {
                shutdown='1';
                cout<<"Thanks for using our code ...\nExiting ...";
                sleep(2);
                system("cls");
                break;
            }
            else
            {
                cout<<"Invalid Choice ...\nPress any key to try again ...";
                getch();
                system("cls");
            }
        }
        if(shutdown=='1')
        {
            break;
        }
    }
    
}