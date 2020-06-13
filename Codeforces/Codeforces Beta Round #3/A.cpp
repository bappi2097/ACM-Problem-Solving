#include<bits/stdc++.h>
using namespace std;
string str1[64];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    string str2,str3;
    cin>>str2>>str3;
    int r1,r2,c1,c2,cnt=0;
    c1=str2[0]-'a'+1;
    r1=str2[1]-'0';
    c2=str3[0]-'a'+1;
    r2=str3[1]-'0';
    if(r1==r2)
    {
        if(c1-c2>0)for(int i=0;i<abs(c1-c2);i++,cnt++)str1[cnt]="L";
        else if(c1-c2<0)for(int i=0;i<abs(c1-c2);i++,cnt++)str1[cnt]="R";
    }
    else if(c1==c2)
    {
        if(r1-r2>0)for(int i=0;i<abs(r1-r2);i++,cnt++)str1[cnt]="D";
        if(r1-r2<0)for(int i=0;i<abs(r1-r2);i++,cnt++)str1[cnt]="U";
    }
    else
    {
        if(r2-r1>0 && c2-c1>0)
        {
            for(int i=r1,j=c1;i<=r2 && j<=c2;i++,j++)
            {
                if(i==r2)
                {
                    for(j;j<c2;j++)
                    {
                        str1[cnt]="R";
                        cnt++;
                    }
                }
                else if(j==c2)
                {
                    for(i;i<r2;i++)
                    {
                        str1[cnt]="U";
                        cnt++;
                    }
                }
                else
                {
                    str1[cnt]="RU";
                    cnt++;
                }
            }
        }
        else if(r2-r1>0 && c2-c1<0)
        {
            for(int i=r1,j=c1;i<=r2 && j>=c2;i++,j--)
            {
                if(i==r2)
                {
                    for(j;j>c2;j--)
                    {
                        str1[cnt]="L";
                        cnt++;
                    }
                }
                else if(j==c2)
                {
                    for(i;i<r2;i++)
                    {
                        str1[cnt]="U";
                        cnt++;
                    }
                }
                else
                {
                    str1[cnt]="LU";
                    cnt++;
                }
            }
        }
        else if(r2-r1<0 && c2-c1<0)
        {
            for(int i=r1,j=c1;i>=r2 && j>=c2;i--,j--)
            {
                if(i==r2)
                {
                    for(j;j>c2;j--)
                    {
                        str1[cnt]="L";
                        cnt++;
                    }
                }
                else if(j==c2)
                {
                    for(i;i>r2;i--)
                    {
                        str1[cnt]="D";
                        cnt++;
                    }
                }
                else
                {
                    str1[cnt]="LD";
                    cnt++;
                }
            }
        }
        else
        {
            for(int i=r1,j=c1;i>=r2 && j<=c2;i--,j++)
            {
                if(i==r2)
                {
                    for(j;j<c2;j++)
                    {
                        str1[cnt]="R";
                        cnt++;
                    }
                }
                else if(j==c2)
                {
                    for(i;i>r2;i--)
                    {
                        str1[cnt]="D";
                        cnt++;
                    }
                }
                else
                {
                    str1[cnt]="RD";
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)cout<<str1[i]<<endl;
    return 0;
}
