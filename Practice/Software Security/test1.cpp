#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countc=0;
    bool b;
    char non_repeat_key[100];
    char key_text[100]="SOFTWARESECURITY";
    puts(key_text);
    int length_key_text=strlen(key_text);
    for(int i=0;i<length_key_text;i++)
    {
        b=0;
        non_repeat_key[i]='\0';
        for(int j=i-1;j>=0;j--)
        {
            if(key_text[i]==key_text[j])
            {
                countc++;
                b=1;
            }
        }
        if(b)continue;
        non_repeat_key[i-countc]=key_text[i];
    }
    printf("%d\n",strlen(non_repeat_key));
    strcpy(key_text,non_repeat_key);
    puts(key_text);
    return 0;
}
