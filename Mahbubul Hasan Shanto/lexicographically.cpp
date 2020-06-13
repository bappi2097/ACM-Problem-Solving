#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    printf("%s\n",lexicographical_compare(s1,s1+strlen(s1),s2,s2+strlen(s2)) ?s1 :s2);
    return 0;
}
