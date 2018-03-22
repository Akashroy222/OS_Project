#include<iostream>
#include<conio>

using namespace std;
class depage{
public:

double service_page_fault;
double replace_page_modified;
double memory_access_time;
double modified_time;
double maximum_acceptable_page_fault;

depage(double SPF,double RPM,double MAT,double MT,double MAPF)
{

service_page_fault=SPF;
replace_page_modified=RPM;
memory_access_time=MAT;
modified_time=MT;
maximum_acceptable_page_fault=MAPF;
}

void dispaly()
{
MAPF=(((1-p)*MAT)+(0.7*p*RPM)+(0.3*p*SPF));
}
}
//MAPF=(((1-p)*MAT)+(0.7*p*RPM)+(0.3*p*SPF));

int main()
{
cout<<"Enter the value of Service Page Fault (SPF):"<<endl;
cin>>SPF>>endl;

cout<<"Enter the value of Replace Page Modified(RPM):"<<endl;
cin>>RPM>>endl;

cout<<"Enter the value of Memory Access Time(MAT):"<<endl;
cin>>MAT>>endl;

cout<<"Enter the value of Modified Time(MT):"<<endl;
cin>>MT>>endl;

cout<<"Enter the value of Maximum Acceptable Page Fault(MAPF):"<<endl;
cin>>MAPF>>endl;

}
