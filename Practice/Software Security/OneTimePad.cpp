#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<string.h>
using namespace std;

char plain_text[10000];
char cipher_text[10000];
char key[10000];
int plain_text_value[10000];
int cipher_text_value[10000];
int key_value[10000];
int text_length;
int key_length;

char convertToCipher(int cv)
{
    if(cv<=26)return (char)cv+64;
    else return (char)(cv%26)+64;
}
int convertCharToNo(char ch)
{
    if(ch>=65 && ch<=90)return ch-64;
    else return ch-96;
}
void createCompleteKey()
{
    for(int i=strlen(key),j=0;i<text_length;i++,j++)
    {
        if(j==key_length)j=0;
        key[i]=key[j];
    }
   // cout<<key;
    return;
}
void Encryption()
{
    printf("Enter Plain Text: ");
    scanf("%s",&plain_text);
    printf("Enter Key: ");
    scanf("%s",&key);
    text_length=strlen(plain_text);
    key_length=strlen(key);
    createCompleteKey();
    for(int i=0;i<text_length;i++)plain_text_value[i]=convertCharToNo(plain_text[i]);
    cout<<endl<<"P:  ";
    for(int i=0;i<text_length;i++)cout<<plain_text[i]<<' ';
    cout<<endl<<"PV: ";
    for(int i=0;i<text_length;i++)cout<<plain_text_value[i]<<' ';
    for(int i=0;i<text_length;i++)key_value[i]=convertCharToNo(key[i]);
    cout<<endl<<"K : ";
    for(int i=0;i<text_length;i++)cout<<key[i]<<' ';
    cout<<endl<<"KV: ";
    for(int i=0;i<text_length;i++)cout<<key_value[i]<<' ';
    for(int i=0;i<text_length;i++)cipher_text_value[i]=plain_text_value[i]+key_value[i];
    cout<<endl<<"CV: ";
    for(int i=0;i<text_length;i++)cout<<cipher_text_value[i]<<' ';
    for(int i=0;i<text_length;i++)cipher_text[i]=convertToCipher(cipher_text_value[i]);
    cout<<endl<<"C : ";
    for(int i=0;i<text_length;i++)cout<<cipher_text[i]<<' ';
    return;
}
char convertToPlainText(int cv)
{
    if(cv>=1)return (char)cv+64;
    else return (char)((ceil((double)abs(cv)/26)*26)+cv+64);
}
void Decryption()
{
    printf("Enter Cipher Text: ");
    scanf("%s",&cipher_text);
    printf("Enter Key: ");
    scanf("%s",&key);
    text_length=strlen(cipher_text);
    key_length=strlen(key);
    createCompleteKey();
    for(int i=0;i<text_length;i++)cipher_text_value[i]=convertCharToNo(cipher_text[i]);
    cout<<endl<<"C:  ";
    for(int i=0;i<text_length;i++)cout<<cipher_text[i]<<' ';
    cout<<endl<<"CV: ";
    for(int i=0;i<text_length;i++)cout<<cipher_text_value[i]<<' ';
    cout<<endl<<"K:  ";
    for(int i=0;i<text_length;i++)cout<<key[i]<<' ';
    for(int i=0;i<text_length;i++)key_value[i]=convertCharToNo(key[i]);
    cout<<endl<<"KV: ";
    for(int i=0;i<text_length;i++)cout<<key_value[i]<<' ';
    for(int i=0;i<text_length;i++)plain_text_value[i]=cipher_text_value[i]-key_value[i];
    cout<<endl<<"PV: ";
    for(int i=0;i<text_length;i++)cout<<plain_text_value[i]<<' ';
    for(int i=0;i<text_length;i++)plain_text[i]=convertToPlainText(plain_text_value[i]);
    cout<<endl<<"P:  ";
    for(int i=0;i<text_length;i++)cout<<plain_text[i]<<' ';
    return;
}
int main()
{
    printf("1>Encrytion\n2>Decreption\nEnter Your Choice:");
    int choice;cin>>choice;
    switch(choice)
    {
    case 1:
        Encryption();
        break;
    case 2:
        Decryption();
        break;
    default :
        printf("Please chose wisely!!");
        getchar();
        getchar();
        system("cls");
        main();
        break;
    }
    return 0;
}
