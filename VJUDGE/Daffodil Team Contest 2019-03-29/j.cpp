#include<iostream>
using namespace std;
int main()
{
    int hp,wp,hm,wm;
    while(cin>>hp>>wp>>hm>>wm)
    {
        int count=0,full=0;
        char a[hp][wp],b[hm][wm];
        for(int i=0;i<hp;i++)for(int j=0;j<wp;j++)cin>>a[i][j];
        for(int i=0;i<hm;i++)for(int j=0;j<wm;j++)cin>>b[i][j];
        for(int i=0;i<hm-hp+1;i++)
        {
            for(int j=0;j<wm-wp+1;j++)
            {
                count=0;
                for(int k=0;k<hp;k++)
                {
                    for(int l=0;l<wp;l++)
                    {
                        if(a[k][l]==b[i+k][j+l])count++;
                    }
                }
                if(count==(hp+wp) && hp != 1 && wp!=1)full++;
                else if(count==(hp+wp-1) && hp == 1 && wp==1)full++;
            }
        }
        cout<<full<<'\n';
    }
    return 0;
}
