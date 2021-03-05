#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int bill(int , int );

int main()
{
 int l_r, c_r,y;
 cout<<"\n Enter Last Month Reading and Current Month Reading:"; //Enter last months reading first then current month reading
 cin>>l_r>>c_r;
 y=bill(l_r,c_r);
 cout<<"\n The Bill Amount for this Months is:"<<y;
 return 0;
}
int bill(int l_r, int c_r)
{
 int u,f_t=110;
 double b_t,v_t,e_t,total=0;
 u=c_r-l_r;
 if(u>=0 && u<=100)
 b_t=(3.46*u);
 else if(u>=101 && u<=300)
 b_t=(7.43*u);
 else if(u>=301 && u<=500)
 b_t=(10.32*u);
 else if(u>=501 && u<= 1000)
 b_t=(11.71*u);
 else
 b_t=(11.71*u);
 v_t=u*1.45;
 e_t=(f_t+b_t+v_t)*0.16;
 total=b_t+f_t+v_t+e_t;
 cout<<"\n Fixed charges="<<f_t; //Fixed Charges are 110
 cout<<"\n Variable Charges="<<b_t; // vary according to consumption, rates acc. to units consumed 
 cout<<"\n FAC ="<<v_t; // @1.45 RS/unit
 cout<<"\n Fuel Charges="<<e_t; //16% of FAC+Variable charges+Fixed Charges
 return total;
 }