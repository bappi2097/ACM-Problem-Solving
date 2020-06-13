#include<stdio.h>
#include<math.h>
#include<string.h>

char plain_text[10000];
char cipher_text[10000];
char key_text[12];
char sort_key_text[12];
int length_plain_text;
int length_cipher_text;
int length_key_text;
char text_2d[12][1000];
int row;
int col;

///Encryption Start
void createPlainTextWithOutSpace()
{
    int count=0;
    for(int i=0; i<length_plain_text; i++)
    {
        if(plain_text[i+count]==' ')count++;
        plain_text[i]=plain_text[i+count];
    }
    length_plain_text=strlen(plain_text);
    return;
}
char convertToUpperCase(char ch)
{
    if(ch>=65 && ch<=90)return ch;
    else return ch-32;
}
void setRowColumn(char any_text[10000])
{
    double len=strlen(any_text);
    row=ceil((double)(len/length_key_text));
    col=length_key_text;
}
void set2dArrayFromPlain(char any_text[10000],int len)
{
    int cnt=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            text_2d[i][j]=any_text[cnt];
            cnt++;
        }
    }
    for(int i=26-((row*col)-len)+65,j=col-((row*col)-len); j<col; i++,j++)
    {
        text_2d[col-1][j]=i;
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%c ",text_2d[i][j]);
        }
        printf("\n");
    }
    return;
}
void createCipherText()
{
    int cnt=0,pot=0;
    strcpy(sort_key_text,key_text);
    for(int i=0; i<length_key_text; i++)
    {
        for(int j=0; j<length_key_text-i-1; j++)
        {
            if(sort_key_text[j]>sort_key_text[j+1])
            {
                pot=(int)sort_key_text[j];
                sort_key_text[j]=sort_key_text[j+1];
                sort_key_text[j+1]=(char)pot;
            }
        }
    }
    int ar[11];
    for(int i=0; i<length_key_text; i++)
    {
        for(int j=0; j<length_key_text; j++)
        {
            if(sort_key_text[i]==key_text[j])
            {
                ar[i]=j;
            }
        }
    }
    for(int i=0; i<length_key_text; i++)
    {
        for(int j=0;j<row;j++)
        {
            cipher_text[cnt]=text_2d[j][ar[i]];
            cnt++;
        }
    }
    printf("\n");
    puts(cipher_text);
    return;
}
void Encryption()
{
    //freopen("encryption.txt","r",stdin);
    printf("Enter Plain Text: ");
    gets(plain_text);
    gets(plain_text);
    printf("Enter Key Text: ");
    gets(key_text);
    length_plain_text=strlen(plain_text);
    length_key_text=strlen(key_text);
    createPlainTextWithOutSpace();
    for(int i=0; i<length_plain_text; i++)
    {
        plain_text[i]=convertToUpperCase(plain_text[i]);
    }
    puts(plain_text);
    setRowColumn(plain_text);
   set2dArrayFromPlain(plain_text,length_plain_text);
    createCipherText();
    return;
}
///Encryption End

///Decryption Start
void createPlainText()
{
    int cnt=0;
    for(int i=0; i<length_key_text; i++)
    {
        for(int j=0;j<row;j++)
        {
            plain_text[cnt]=text_2d[i][j];
            cnt++;
        }
    }
    printf("\n");
    cnt=0;
    for(int i=(row*col)-row+1;i<length_cipher_text-1;i++)
    {
        if((char)plain_text[i]+1==plain_text[i+1])cnt++;
        else cnt=0;
    }
    for(int i=(row*col)-cnt-1;i<length_cipher_text;i++)
    {
        plain_text[i]='\0';
    }
    puts(plain_text);
    return;
}
void set2dArrayFromCipher(char any_text[10000],int len)
{
    int cnt=0,pot=0;
    strcpy(sort_key_text,key_text);
    for(int i=0; i<length_key_text; i++)
    {
        for(int j=0; j<length_key_text-i-1; j++)
        {
            if(sort_key_text[j]>sort_key_text[j+1])
            {
                pot=(int)sort_key_text[j];
                sort_key_text[j]=sort_key_text[j+1];
                sort_key_text[j+1]=(char)pot;
            }
        }
    }
    int ar[11];
    for(int i=0; i<length_key_text; i++)
    {
        for(int j=0; j<length_key_text; j++)
        {
            if(sort_key_text[i]==key_text[j])
            {
                ar[i]=j;
            }
        }
    }
    cnt=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            text_2d[j][ar[i]]=any_text[cnt];
            cnt++;
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%c ",text_2d[i][j]);
        }
        printf("\n");
    }
    return;
}
void createCipherTextWithOutSpace()
{
    int count=0;
    for(int i=0; i<length_cipher_text; i++)
    {
        if(cipher_text[i+count]==' ')count++;
        cipher_text[i]=cipher_text[i+count];
    }
    length_cipher_text=strlen(cipher_text);
    return;
}
void Decryption()
{
    //freopen("decryption.txt","r",stdin);
    printf("Enter Cipher Text: ");
    gets(cipher_text);
    gets(cipher_text);
    printf("Enter Key Value: ");
    gets(key_text);
    length_cipher_text=strlen(cipher_text);
    length_key_text=strlen(key_text);
    createCipherTextWithOutSpace();
    for(int i=0;i<length_cipher_text;i++)
    {
        cipher_text[i]=convertToUpperCase(cipher_text[i]);//from encryption part
    }
    puts(cipher_text);
    setRowColumn(cipher_text);//from encryption part
   set2dArrayFromCipher(cipher_text,length_cipher_text);
   createPlainText();
    return;
}
///Decryption End
int main()
{
    printf("1>Encrytion\n2>Decryption\nEnter Your Choice: ");
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
        printf("Please chose wisely!\n");
        main();
        break;
    }
    return 0;
}
