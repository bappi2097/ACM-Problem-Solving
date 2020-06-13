#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define         pri(n)          printf("%d",n)
#define         br()             printf("\n")

char plain_text[10000];
char cipher_text[10000];
char key_text[10000];
char key_2d[5][5];
int length_plain_text;
int length_cipher_text;
int length_key_text;

///Key Start
void set2dKey()
{
    for(int i=0; i<length_key_text; i++)if(key_text[i]=='J')key_text[i]='I';
    int countc=0;
    bool b;
    strcat(key_text,"ABCDEFGHIKLMNOPQRSTUVWXYZ");
    length_key_text=strlen(key_text);
    char non_repeat_key[30];
    for(int i=0; i<length_key_text; i++)
    {
        b=0;
        non_repeat_key[i]='\0';
        for(int j=i-1; j>=0; j--)
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
    strcpy(key_text,non_repeat_key);
    countc=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            key_2d[i][j]=key_text[countc++];
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%c ",key_2d[i][j]);
        }
        br();
    }
    return;
}
void removeRepeatChar()
{
    int countc=0;
    bool b;
    char non_repeat_key[30];
    for(int i=0; i<length_key_text; i++)
    {
        b=0;
        non_repeat_key[i]='\0';
        for(int j=i-1; j>=0; j--)
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
    strcpy(key_text,non_repeat_key);
    length_key_text=strlen(key_text);
    return;
}
void createKeyTextWithOutSpace()
{
    int countc=0;
    for(int i=0; i<length_key_text; i++)
    {
        if(key_text[i+countc]==' ')countc++;
        key_text[i]=key_text[i+countc];
    }
    length_key_text-=countc;
    return;
}
///Key End

///All
char createTextUpperCase(char ch)
{
    if(ch>=65 && ch<=90)return ch;
    else return ch-32;
}
///All

///Encryption Start
void createCipherText()
{
    int r1,c1,r2,c2,countc=0;
    bool b=1;
    for(int x=0; x<length_plain_text; x+=2)
    {
        b=1;
        for(int i=0; i<5 && b; i++)
        {
            b=1;
            for(int j=0; j<5 && b; j++)
            {
                if(key_2d[i][j]==plain_text[countc])
                {
                    r1=i;
                    c1=j;
                    countc++;
                    b=0;
                }
            }
        }
        b=1;
        for(int i=0; i<5 && b; i++)
        {
            b=1;
            for(int j=0; j<5 && b; j++)
            {
                if(key_2d[i][j]==plain_text[countc])
                {
                    r2=i;
                    c2=j;
                    b=0;
                }
            }
        }
        if(r1==r2)
        {
            countc--;
            if(c1==4)cipher_text[countc]=key_2d[r1][0];
            else cipher_text[countc]=key_2d[r1][c1+1];
            countc++;
            if(c2==4)cipher_text[countc]=key_2d[r2][0];
            else cipher_text[countc]=key_2d[r2][c2+1];
        }
        else if(c1==c2)
        {
            countc--;
            if(r1==4)cipher_text[countc]=key_2d[0][c1];
            else cipher_text[countc]=key_2d[r1+1][c1];
            countc++;
            if(r2==4)cipher_text[countc]=key_2d[0][c2];
            else cipher_text[countc]=key_2d[r2+1][c2];
        }
        else
        {
            countc--;
            cipher_text[countc]=key_2d[r1][c2];
            countc++;
            cipher_text[countc]=key_2d[r2][c1];
        }
        //cout<<cipher_text[countc-1]<<cipher_text[countc]<<"R1="<<r1<<"c1="<<c1<<"r2="<<r2<<"c2="<<c2<<endl;
        countc++;
    }
    return;
}
void createPlainTextWIthOutPair()
{
    int countc=0;
    for(int i=0; i<length_plain_text+countc-2; i++)
    {
        if(plain_text[i]==plain_text[i+1])
        {
            cipher_text[i+countc]=plain_text[i];
            countc++;
            cipher_text[i+countc]='X';
            continue;
        }
        cipher_text[i+countc]=plain_text[i];
    }
    length_plain_text+=countc;
    strcpy(plain_text,cipher_text);
    if(length_plain_text%2==1)
    {
        plain_text[length_plain_text]='X';
        length_plain_text++;
    }
    return;
}
void createPlainTextWithOutSpace()
{
    int countc=0;
    for(int i=0; i<length_plain_text; i++)
    {
        if(plain_text[i+countc]==' ')countc++;
        plain_text[i]=plain_text[i+countc];
    }
    length_plain_text-=countc;
    return;
}
void Encryption()
{
    freopen("encryption.txt","r",stdin);
    printf("Enter Plain Text: ");
    gets(plain_text);
    gets(plain_text);
    printf("Enter Key: ");
    gets(key_text);
    length_plain_text=strlen(plain_text);
    length_key_text=strlen(key_text);
    createPlainTextWithOutSpace();
    createKeyTextWithOutSpace();
    for(int i=0; i<length_plain_text; i++)plain_text[i]=createTextUpperCase(plain_text[i]);
    for(int i=0; i<length_key_text; i++)key_text[i]=createTextUpperCase(key_text[i]);
    createPlainTextWIthOutPair();
    removeRepeatChar();
    set2dKey();
    createCipherText();
    puts(plain_text);
    puts(key_text);
    br();
    puts(cipher_text);
    return;
}
///Encryption End

///Decryption Start
void createPlainText()
{
    int r1,c1,r2,c2,countc=0;
    bool b=1;
    for(int x=0; x<length_cipher_text; x+=2)
    {
        b=1;
        for(int i=0; i<5 && b; i++)
        {
            b=1;
            for(int j=0; j<5 && b; j++)
            {
                if(key_2d[i][j]==cipher_text[countc])
                {
                    r1=i;
                    c1=j;
                    countc++;
                    b=0;
                }
            }
        }
        b=1;
        for(int i=0; i<5 && b; i++)
        {
            b=1;
            for(int j=0; j<5 && b; j++)
            {
                if(key_2d[i][j]==cipher_text[countc])
                {
                    r2=i;
                    c2=j;
                    b=0;
                }
            }
        }
        if(r1==r2)
        {
            countc--;
            if(c1==0)plain_text[countc]=key_2d[r1][4];
            else plain_text[countc]=key_2d[r1][c1-1];
            countc++;
            if(c2==0)plain_text[countc]=key_2d[r2][4];
            else plain_text[countc]=key_2d[r2][c2-1];
        }
        else if(c1==c2)
        {
            countc--;
            if(r1==0)plain_text[countc]=key_2d[4][c1];
            else plain_text[countc]=key_2d[r1-1][c1];
            countc++;
            if(r2==0)plain_text[countc]=key_2d[4][c2];
            else plain_text[countc]=key_2d[r2-1][c2];
        }
        else
        {
            countc--;
            plain_text[countc]=key_2d[r1][c2];
            countc++;
            plain_text[countc]=key_2d[r2][c1];
        }
        //cout<<cipher_text[countc-1]<<cipher_text[countc]<<"R1="<<r1<<"c1="<<c1<<"r2="<<r2<<"c2="<<c2<<endl;
        countc++;
    }
    return;
}
void createCipherTextWithOutSpace()
{
    int countc=0;
    for(int i=0; i<length_cipher_text; i++)
    {
        if(cipher_text[i+countc]==' ')countc++;
        cipher_text[i]=cipher_text[i+countc];
    }
    length_cipher_text-=countc;
    return;
}
void Decryption()
{
    freopen("decryption.txt","r",stdin);
    printf("Enter Cipher Text: ");
    gets(cipher_text);
    gets(cipher_text);
    printf("Enter Key Text :");
    gets(key_text);
    length_cipher_text=strlen(cipher_text);
    length_key_text=strlen(key_text);
    createKeyTextWithOutSpace();
    createCipherTextWithOutSpace();
    for(int i=0; i<length_cipher_text; i++)cipher_text[i]=createTextUpperCase(cipher_text[i]);
    for(int i=0; i<length_key_text; i++)key_text[i]=createTextUpperCase(key_text[i]);
    removeRepeatChar();
    set2dKey();
    puts(cipher_text);
    puts(key_text);
    br();
    createPlainText();
    puts(plain_text);
    return;
}
///Decryption End
int main()
{
    printf("1>Encryption\n2>Decryption\nEnter Your Choice :");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        Encryption();
        break;
    case 2:
        Decryption();
        break;
    default:
        printf("Please Chose Wisely!\n");
        break;
    }
    return 0;
}
