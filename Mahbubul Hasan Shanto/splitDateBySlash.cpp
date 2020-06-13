#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    scanf("%s",s);
    char *pch;
    pch=strtok(s,"/");
    while(pch!=NULL)
    {
        printf("%s\n",pch);
        pch=strtok(NULL,"/");
    }
    return 0;
}
