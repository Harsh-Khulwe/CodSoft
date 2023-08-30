#include <iostream>
using namespace std;

int main()
{
    int a, b, ch;

    cout<<"\t\t\t--->ARITHMETIC CALCULATOR <---\n\n";
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;

    cout<<"\n\t\tCHOOSE THE OPERATION";
    cout<<"\n\t1. Addtion\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n";
    cout<<"\nEnter your choice: ";
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<"\n\tThe sum of the two numbers is "<<a + b;
            break;

        case 2:
            cout<<"\n\tThe difference of the two numbers is: "<<a - b;
            break;

        case 3:
            cout<<"\n\tThe product of the two numbers is: "<<a * b;
            break;

        case 4:
            value:
            if(b == 0)
            {
                cout<<"\nValue of denominator cannot be zero...\n\t";
                cout<<"Enter a non-zero value: ";
                cin>>b;
                
                goto value;
            }
            else
                cout<<"\n\tThe quotient of the two numbers is: "<<(float)a / b;
            break;

        default:
            cout<<"\n\tEnter a valid choice for operation!!";
            break;
    }

    return 0;
}
