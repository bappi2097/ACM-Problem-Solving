#include<bits/stdc++.h>
using namespace std;

char plain_text[100]="";
char cipher_text[100]="";
int key[2][2];
int cipher_value[100];
int plain_value[100];
int length_plain_text;
int length_cipher_text;
int detarminant=0;
int d,r1,r2,R,t1=0,t2=1,t;

///Encryption Start
void createCipherText()
{
    for(int k=0; k<length_plain_text; k+=2)
    {
        cipher_value[k]+=key[0][0]*(plain_text[k]-'A');
        cipher_value[k]+=key[0][1]*(plain_text[k+1]-'A');
        cipher_value[k+1]+=key[1][0]*(plain_text[k]-'A');
        cipher_value[k+1]+=key[1][1]*(plain_text[k+1]-'A');
    }
    for(int i=0;i<length_plain_text;i++)cipher_text[i]=(cipher_value[i]%26)+'A';
    return;
}
void Encryption()
{
    printf("Enter Plain Text: ");
    gets(plain_text);
    gets(plain_text);
    printf("Enter Key(2x2): ");
    for(int i=0; i<2; i++)for(int j=0; j<2; j++)scanf("%d",&key[i][j]);
    length_plain_text=strlen(plain_text);
    puts(plain_text);
    createCipherText();
    puts(cipher_text);

    return;
}
///Encryption End

///Decryption Start
void Decryption()
{
    printf("Enter Cipher Text: ");
    gets(cipher_text);
    gets(cipher_text);
    printf("Enter Key(2x2): ");
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)scanf("%d",&key[i][j]);
    length_cipher_text=strlen(cipher_text);
    puts(cipher_text);
    detarminant=abs((key[0][0]*key[1][1])-(key[1][0]*key[0][1]));
    swap(key[0][0],key[1][1]);
    key[1][0]*=-1;
    key[0][1]*=-1;
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)while(key[i][j]<0)key[i][j]+=26;
    r2=detarminant;
    r1=26;
    while(r1!=1 || r2!=0)
    {
        d=r1/r2;
        R=r1%r2;
        t=t1-(t2*d);
        r1=r2;
        r2=R;
        t1=t2;
        t2=t;
    }
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)key[i][j]*=t1;
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)while(key[i][j]>=26)key[i][j]-=26;
    for(int k=0; k<length_cipher_text; k+=2)
    {
        plain_value[k]+=key[0][0]*(cipher_text[k]-'A');
        plain_value[k]+=key[0][1]*(cipher_text[k+1]-'A');
        plain_value[k+1]+=key[1][0]*(cipher_text[k]-'A');
        plain_value[k+1]+=key[1][1]*(cipher_text[k+1]-'A');
    }
    for(int i=0;i<length_cipher_text;i++)plain_text[i]=(plain_value[i]%26)+'A';
    puts(plain_text);
    return;
}
///Decryption End

int main()
{
    cout<<endl;
    for(int i=0; i<51; i++)printf("-");
    printf("HILL CIPHER");
    for(int i=0; i<51; i++)printf("-");
    cout<<endl;
    for(int i=0;i<100;i++)cipher_value[i]=0;
    printf("1->Encryption\n2->Decryption\nEnter Your Choice: ");
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        Encryption();
        break;
    case 2:
        Decryption();
        break;
    default:
        printf("Chose option wisely!\n");
        break;
    }
    return 0;
}
