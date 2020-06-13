#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ar[n],i,j,pot;
    for(i=0;i<n;i++)scanf("%lld",&ar[i]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
                pot=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=pot;
            }
        }
    }
    pot=((ar[n-1]-ar[0])-n)+1;
    printf("%lld\n",pot);
    return 0;
}
