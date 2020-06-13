#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkAttack(int qr,int qc,int Or,int oc)
{
    if(qr==Or || qc==oc)return 1;
    else  if(abs(qr-Or)==abs(qc-oc))return 1;
    return 0;
}
int main()
{
    int qr,qc,Or,oc;
    scanf("%d%d%d%d",&qr,&qc,&Or,&oc);
    printf("%s\n",(checkAttack(qr,qc,Or,oc))?"Yes" : "No");
    return 0;
}
