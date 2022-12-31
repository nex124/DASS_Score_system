#include <stdio.h>



int main(void){

char name [5][30],a[5][30],b[5][30],c[5][30];
int j,i,depression [5],anxiety [5],stress [5];
float highest_a=0.0,highest_b=0.0,highest_c=0.0,total_a=0.0,total_b=0.0,total_c=0.0,average_a,average_b,average_c;

printf("======RESEARCH MANAGEMENT CENTRE (MC) UNIVERSITY MALAYSIA PAHANG========\n");
printf("=============DEPRESSION-ANXIETY-STRESS-SCALE-(DASS)-SCORE===============\n");


for(i=0;i<5;i++){
printf("\nEnter student name:");
scanf("%s",&name[i]);
printf("\nStudent Depression Level:");
scanf("%d",&depression[i]);
printf("\nStudent Anxiety Level:");
scanf("%d",&anxiety[i]);
printf("\nStudent Stress Level:");
scanf("%d",&stress[i]);

total_a=total_a+depression[i];//TOTAL FOR DEPRESSION
if (depression[i]>highest_a)
 {highest_a=depression[i];}

total_b=total_b+anxiety[i];//TOTAL FOR ANXIETY
if (anxiety[i]>highest_b)
  {highest_b=anxiety[i];}

total_c=total_c+stress[i];//TOTAL FOR STRESS
if (stress[i]>highest_c)
  {highest_c=stress[i];}
}

printf("------------------------------------------------------------------------------------------------------------------------");
printf("------------------------------------------------------------------------------------------------------------------------");
printf("\nStudent Name\t");
printf("Depression\t");
printf("Anxiety\t\t");
printf("Stress");
printf("\n");
for (i=0 ; i<5 ; i++){//LOOP BEGINS
printf("%s\t\t",name[i]);
//DETERMINE DEPRESSION LEVEL
if (depression [i]<=9)
{printf("Normal\t\t");}
else if (10<=depression[i] && depression[i]<=13)
{printf("Mild\t\t");}
else if (14<=depression[i] && depression[i]<=20)
{printf ("Moderate\t");}
else if (21<=depression[i] && depression[i]<=27)
{printf("Severe\t\t");}
else
{printf("Extreme\t\t");}

//DETERMINE ANXIETY LEVEL
if (anxiety [i]<=7)
{printf("Normal\t\t");}
else if (8<=anxiety [i] && anxiety [i]<=9)
{printf("Mild\t\t");}
else if (10<=anxiety [i] && anxiety [i]<=14)
{printf ("Moderate\t");}
else if (15<=anxiety [i] && anxiety [i]<=19)
{printf("Severe\t\t");}
else
{printf("Extreme\t\t");}

//DETERTMINE STRESS LEVEL
if (stress [i]<=14)
{printf("Normal\t");}
else if (15<=stress  [i]  && stress  [i]<=18)
{printf("Mild\t");}
else if (19<=stress  [i] && stress  [i]<=25)
{printf ("Moderate\t");}
else if (26<=stress  [i] && stress  [i]<=33)
{printf("Severe\t");}
else
{printf("Extreme\t");}
printf("\t\n");
}//LOOP END
average_a=total_a/5;//AVERAGE FOR DEPRESSION
average_b=total_b/5;//AVERAGE FOR ANXIETY
average_c=total_c/5;//AVERAGE FOR STRESS
printf("\n");
printf("\nThe Average Score for: Depression=%.2f, Anxiety=%.2f, Stress=%.2f",average_a,average_b,average_c);
printf("\nThe Highest Score for: Depression=%.0f, Anxiety=%.0f, Stress=%.0f",highest_a,highest_b,highest_c);
printf("\n------------------------------------------------------------------------------------------------------------------------");
printf("----------------------------------------------------DASS REPORT---------------------------------------------------------");
}
//END OF PROGRAM
