#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double ab,bc,ca,a,b,c;
    double pi=acos(-1);
    cout<<"Enter Size of Triangle : ";
    cin>>ab>>bc>>ca;
    a=(180/pi)*acos((pow(bc,2)+pow(ca,2)-pow(ab,2))/(2*bc*ca));
    b=(180/pi)*acos((pow(ab,2)+pow(ca,2)-pow(bc,2))/(2*ab*ca));
    c=(180/pi)*acos((pow(ab,2)+pow(bc,2)-pow(ca,2))/(2*ab*bc));
    cout<<"<A = "<<a<<"\t"<<"<B = "<<b<<"\t"<<"<C = "<<c<<"\n";
    return 0;
}
