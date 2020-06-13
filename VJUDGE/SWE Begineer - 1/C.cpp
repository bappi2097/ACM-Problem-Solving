#include <cstdio>
using namespace std;
int main()
{
    int T,i,count;
    int contestent[5];
    while(scanf("%d",&T)!=EOF)
    {
        count=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&contestent[i]);
            if(T==contestent[i])count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
