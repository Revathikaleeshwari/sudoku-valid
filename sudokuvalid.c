#include<stdio.h>
int main()
{
int a[9][9];
int i,j,sum,temp,flag=1;
printf("\n enter input::\n");
for(i=0;i<9;i++)
{
for(j=0;j<9;j++)
{
scanf("%d",&temp);
if(temp>0 && temp<10)
a[i][j]=temp;
else{
flag=0;
printf("invalid input\n");
break;
}
}
if(flag==0)
break;
}
if(flag)
{
for(i=0;i<9;i++)
{
sum=0;
for(j=0;j<9;j++)
sum=sum+a[i][j];
if(sum!=45)
break;
}
if(sum==45)
{
for(i=0;i<9;i++)
{
sum=0;
for(i=0;i<9;i++)
sum=sum+a[i][j];
if(sum!=45)
break;
}
if(sum==45)
printf("valid");
else printf("invalid");
}
else
printf("\n invalid");
}
return 0;
}
