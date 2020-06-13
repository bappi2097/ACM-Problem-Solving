#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
void check_roman1(int a);
void check_roman2(int a);
void check_roman3(int a);
int main()
{
    int d,mul=1;
    cin>>d;
    check_roman1((d/100)*100);
    d%=100;
    check_roman2((d/10)*10);
    d%=10;
    check_roman3(d);
    cout<<'\n';
    return 0;
}
void check_roman1(int a)
{
    switch(a)
    {

    case 900:
        cout<<"CM";
        break;
    case 800:
        cout<<"DCCC";
        break;
    case 700:
        cout<<"DCC";
        break;
    case 600:
        cout<<"DC";
        break;
    case 500:
        cout<<"D";
        break;
    case 400:
        cout<<"CD";
        break;
    case 300:
        cout<<"CCC";
        break;
    case 200:
        cout<<"CC";
        break;
    case 100:
        cout<<"C";
        break;
    case 0:
        break;
    }
}

void check_roman2(int a)
{
    switch(a)
    {
    case 10:
        cout<<"X";
        break;
    case 20:
        cout<<"XX";
        break;
    case 30:
        cout<<"XXX";
        break;
    case 40:
        cout<<"XL";
        break;
    case 50:
        cout<<"L";
        break;
    case 60:
        cout<<"LX";
        break;
    case 70:
        cout<<"LXX";
        break;
    case 80:
        cout<<"LXXX";
        break;
    case 90:
        cout<<"XC";
        break;
    case 0:
        break;
    }
}
void check_roman3(int a)
{
    switch(a)
    {
    case 1:
        cout<<'I';
        break;
    case 2:
        cout<<"II";
        break;
    case 3:
        cout<<"III";
        break;
    case 4:
        cout<<"IV";
        break;
    case 5:
        cout<<"V";
        break;
    case 6:
        cout<<"VI";
        break;
    case 7:
        cout<<"VII";
        break;
    case 8:
        cout<<"VIII";
        break;
    case 9:
        cout<<"IX";
        break;
    case 0:
        break;
    }
}
