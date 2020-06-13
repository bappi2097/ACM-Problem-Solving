#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define sc          scanf
#define pf          printf
#define maxn        1000007

int ar[maxn];

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)cin>>ar[i];
	    for(int i=0;i<n-1;i++)
	    {
	        if(ar[i]>ar[i+1])cout<<ar[i+1]<<" ";
	        else cout<<"-1"<<" ";
	    }
	    cout<<"-1"<<endl;
	}
	return 0;
}
