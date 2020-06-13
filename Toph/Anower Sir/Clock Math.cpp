#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double hr,min,hrAngle,minAngle,angle;
    cin>>hr>>min;
    hrAngle=hr*30+min*.5;
    minAngle=min*6;
    if(hrAngle>=180 && minAngle>=180)
    {
        if(hrAngle>=minAngle)angle=hrAngle-minAngle;
        else angle=minAngle-hrAngle;
    }
    else if(hrAngle>=180 && minAngle<180)
    {

        if((360-hrAngle)+minAngle<=hrAngle-minAngle)angle=(360-hrAngle)+minAngle;
        else angle=hrAngle-minAngle;
    }
    else if(hrAngle<180 && minAngle>=180)
    {
        if((360-minAngle)+hrAngle<=minAngle-hrAngle)angle=(360-minAngle)+hrAngle;
        else angle=minAngle-hrAngle;
    }
    else
    {
        if(hrAngle>=minAngle)angle=hrAngle-minAngle;
        else angle=minAngle-hrAngle;
    }
    printf("%.10f",angle);
    return 0;
}
