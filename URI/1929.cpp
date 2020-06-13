#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    /*
    if(a+b>=c && b+c>=a && a+c>=b)cout<<"S\n";
    else if(b+c>=d && c+d>=b && d+b>=c)cout<<"S\n";
    else if(a+c>=d && c+d>=a && d+a>=c)cout<<"S\n";
    else if(a+b>=d && b+d>=a && d+a>=b)cout<<"S\n";
    else cout<<"N\n";
    */
    return 0;
}
///Right Code :
/**
#include<iostream>
using namespace std;
int main()
{
    int a[4],pot;
    for(int i=0;i<4;i++)cin>>a[i];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                pot=a[j];
                a[j]=a[j+1];
                a[j+1]=pot;
            }
        }
    }
    int s1=a[0]+a[1],s2=a[1]+a[2];
    if(a[2]<s1 || a[3]<s2)cout<<"S\n";
    else cout<<"N\n";
    return 0;
}

*/
