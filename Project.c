#include<stdio.h>
//#include<conio.h>

long double mstons(long double a)
{
	a=a*1000000;
	return a;
}
int main()
{
long double result;
long double SPF; 
long double RPM; 
long double MAT; 
long double MAPF;






printf("Enter the value of Service Page Fault (SPF):\n");
scanf("%le",SPF);
SPF=mstons(SPF);
printf("Enter the value of Replace Page Modified(RPM):\n");
scanf("%le",RPM);
RPM=mstons(RPM);
printf("Enter the value of Memory Access Time(MAT):\n");
scanf("%le",MAT);

printf("Enter the value of Maximum Acceptable Page Fault(MAPF):\n");
scanf("%le",MAPF);

long double p;
p=((MAPF-MAT)/((0.7*RPM)+(0.3*SPF)-(MAT)));

printf("%le\n",p);
return 0;

}
