#include<bits/stdc++.h>
using namespace std;

int plain_text_value[10000];
int cipher_text_value[10000];
int length;

int convertChar(char ch)
{
    if(ch>=65 && ch<=90)return ch-64;
    else return ch-96;
}
void setPlainTextValue(char plain_text[10000])
{
    length=strlen(plain_text);
    for(int i=0; i<length; i++)plain_text_value[i]=convertChar(plain_text[i]);
    cout<<"P ";
    for(int i=0; i<length; i++)cout<<plain_text[i]<<' ';
    cout<<endl;
    cout<<"PV ";
    for(int i=0; i<length; i++)cout<<plain_text_value[i]<<' ';
    return;
}
char convertToCipher(int cv)
{
    if(cv<=26)return (char)cv+64;
    else return (char)(cv%26)+64;

}
void Encryption()
{
    char plain_text[10000];
    int key;
    printf("Enter Plain Text:");
    scanf("%s",&plain_text);
    printf("Enter Key: ");
    scanf("%d",&key);
    setPlainTextValue(plain_text);
    for(int i=0; i<length; i++)cipher_text_value[i]=plain_text_value[i]+key;
    cout<<endl;
    cout<<"CV ";
    for(int i=0; i<length; i++)cout<<cipher_text_value[i]<<' ';
    char cipher_text[1000];
    for(int i=0; i<length; i++)cipher_text[i]=convertToCipher(cipher_text_value[i]);
    cout<<endl;
    cout<<"C ";
    for(int i=0; i<length; i++)cout<<cipher_text[i]<<' ';
    return;
}
char convertToPlainText(int cv)
{
    if(cv>=1)return (char)cv+64;
    else return (char)((ceil((double)abs(cv)/26)*26)+cv+64);
}
void Decrytion()
{
    char cipher_text[10000];
    int key;
    printf("Enter Cipher Text:");
    scanf("%s",&cipher_text);
    printf("Enter Key: ");
    scanf("%d",&key);
    length=strlen(cipher_text);
    for(int i=0;i<length;i++)cipher_text_value[i]=convertChar(cipher_text[i]);
    for(int i=0;i<length;i++)cout<<cipher_text_value[i]<<' ';
    for(int i=0;i<length;i++)cipher_text_value[i]-=key;
    cout<<endl;
    for(int i=0;i<length;i++)cout<<cipher_text_value[i]<<' ';
    char plain_text[10000];
    for(int i=0;i<length;i++)plain_text[i]=convertToPlainText(cipher_text_value[i]);
    cout<<endl;
    for(int i=0;i<length;i++)cout<<plain_text[i]<<' ';
    return;
}
int main()
{
    freopen("encryption.txt","r",stdin);
    freopen("decryption.txt","w",stdout);
    printf("1> Encryption\n2> Decryption\n\tEnter Your Choice: ");
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        Encryption();
        break;
    case 2:
        Decrytion();
        break;
    default :
        printf("Please Chose Wisely!!");
        getchar();
        getchar();
        system("cls");
        main();
        break;
    }
    return 0;
}
