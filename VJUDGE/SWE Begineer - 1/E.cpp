#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int x=0;
    int n,i;
    char c[5];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",c);
        if(strcmp(c,"X++")==0)x++;
        else if(strcmp(c,"++X")==0)++x;
        else if(strcmp(c,"X--")==0)x--;
        else if(strcmp(c,"--X")==0)--x;
    }
    printf("%d\n",x);
    return 0;
}

