#include<stdio.h>
int main()
{
int c;
int r;
char n[30];
int e;
int t;
int m;
int s;
int total;
int avg;
int d;
int x;
printf("\n=========STUDENT MARKS MANAGEMENT SYSTEM==========\n");
printf("\n1.ENTER STUDENTS DETAILS\n");
printf("2.CALCULATE RESULT\n");
printf("3.DISPLAY STUDENT RESULT\n");
printf("4.EXIT(PRESS 0)\n");
printf("\n");
printf("==================================================");
printf("\n!!!ENTER 1 TO FILL DATA!!!\n");scanf("%d",&c);
if(c==0)
 { printf("!!!!THANKS FOR VISITING US!!!!(AGAIN PRESS 0)");scanf("%d");}
switch(c)
{
    case 1:
     printf("\nENTER THE STUDENT NAME:");scanf("%s",&n);
     printf("ENTER THE ROLL NO:");scanf("%d",&r);
     printf("\n=========ENTER THE MARKS OBTAINED BY THE STUDENTS=========\n");
     printf("ENTER THE ENGLISH MARK:");scanf("%d",&e);
     printf("ENTER THE TAMIL MARK:");scanf("%d",&t);
     printf("ENTER THE MATHS MARK:");scanf("%d",&m);
     printf("ENTER THE SCIENCE MARK:");scanf("%d",&s);
     total=e+t+m+s;
     printf("TOTAL MARKS=""%d",total);
     printf("\n");
     printf("\n=====STUDENT DETAILS=====\n");
     printf("\nSTUDENT NAME:""%s",n);
     printf("\nROLL NO:""%d",r,"\n");
     avg=total/4;
     if(avg>=90)
      printf("\nGRADE:A");
     else if(avg>=80)
      printf("\nGRADE B:");
     else if(avg>=70)
      printf("\nGRADE:C");
     else if(avg>=60)
      printf("\nGRADE:D");
     else
      printf("\nGRADE:F");
     printf("\nENTER 0 TO EXIT!!!!\n");
     scanf("%d",d);
     break;
}
return 0;
}