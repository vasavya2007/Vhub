//program for calculating salary slip//
#include<stdio.h>
#include<string.h>
int main(){
int ID;
float CTC;
char Name[100];
printf("Enter your employee ID: ");
scanf("%d",&ID);
printf("Enter your name:");
scanf("%s",&Name);
prinf("Enter your CTC/Annual Income: ");
scanf("%d",&CTC);

if(CTC<100000){
printf("Enter the salary above 6 digits.");}

else{
float MS=CTC/12, HRA=MS*20/100, DA=MS*50/100,PF=MS*12/100,BS=MS*40/100,GS=BS+HRA+DA, NS=GS-PF;
printf("Your Salary Slip:");
printf("HRA : %d\nDA : %d\nPF : %d\nBS : %d\nGS : %d\nNS : %d",HRA,DA,PF,BS,GS,NS);}
return 0;
}
