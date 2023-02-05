/* Switch case examples:*/
//Q(1.)
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<(a+b);
        break;
    case '-':
        cout<<(a-b);
        break;
    case '*':
        cout<<(a*b);
        break;
    case '/':
        cout<<(a/b);
        break;
    case '%':
        cout<<(a%b);
        break;
    default:
        cout<<"Please enter a valid operation";
        break;
    }
}   */

//Q(2.)

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int num2;
    cout<<"Enter the case number:";
    cin>>num2;
    switch(num2)
    {
        case 100:
           cout<< " There are "<<num/100 <<" hundread rupees notes in given amount"<<endl;
           num=num-((num)/100)*100;
        case 50 :
           cout<< " There are "<<num/50 <<" fifty rupees notes in given amount"<<endl;
        case 20 :
           cout<< " There are "<<num/20 <<" twenty rupees notes in given amount"<<endl;
           num=num-((num)/20)*20;
        case 1 :
           cout<< " There are "<<num/1 <<" one rupee notes in given amount"<<endl;
           break;
        default:
           cout<<"Invalid Case";
    }
}
