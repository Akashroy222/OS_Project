#include<stdio.h>
//#include<conio.h>

double mstons(double a)
{
	a=a*1000000;
	return a;
}

double mstomis(double b)
{
	b=b*1000;
	return b;
}


int main()
{
double result;
double SPF;
double RPNM;
double MAT;
double EAT;
double p;



printf("Enter the value of Service Page Fault (SPF):\n");
scanf("%lf",&SPF);
SPF=mstons(SPF);

printf("Enter the value of Replace Page Not Modified(RPNM):\n");
scanf("%lf",&RPNM);
RPNM=mstons(RPNM);

printf("Enter the value of Memory Access Time(MAT):\n");
scanf("%lf",&MAT);
//MAT=nstos(MAT);

printf("Enter the value of Effective Address Time(EAT):\n");
scanf("%lf",&EAT);
//EAT=nstos(EAT);


p=(EAT-MAT)/(0.7*RPNM+0.3*SPF-MAT);
p=p*100;
printf("%lf%\n",p);
return 0;

}
