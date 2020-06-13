#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={3,2,4,6,1};
    sort(&ar[0],&ar[5]);
    for(int i=0;i<5;i++)cout<<ar[i]<<' ';
    cout<<endl;
    return 0;
}
