#include<stdio.h>
#define G1 8.75
#define G2 9.33
#define G3 10.00
#define G4 11.20
#define S300 0.15
#define S150 0.2
#define S450 0.25

void work(int G);   //函数原型 

int main(void)
{
	int option;
	int k=1;
	
	printf("请选择您的工资等级：\n");
	printf("1.$8.75/hr\t2.$9.33/hr\n3.$10.00/hr\t4.$11.20/hr\n5.quit\n");

	
	while (k == 1)
	{
		scanf("%d",&option);

		switch (option)
		{
			case 1:
				work(G1);
				break;
			case 2:
				work(G2);
				break;
			case 3:
				work(G3);
				break;
			case 4:
				work(G4);
				break; 
			case 5:
				k = 0;
			 	break;
			default:
				printf("请输入正确的选项！\n");
				printf("请选择您的工资等级：\n");		
		}
	}
		
	return 0;
 } 
 
void work(int G)  //函数定义 
{
	int hour;
	int zonge;
	int shuijin;
	int jingshouru;
	
	printf("请输入一周工作的小时数：\n");
	scanf("%d",&hour);
	
	if (hour <= 40)
	{
		zonge = G * hour;
		
		if (zonge <= 300)
		{
			shuijin = 0;
			jingshouru = zonge;
			printf("您的工资总为%d，税金为%d，净收入为%d。\n",zonge,shuijin,jingshouru);
		}
		else 
		{
			shuijin = 300 * S300 + (zonge - 300) * S150;
			jingshouru = zonge - shuijin;
			printf("您的工资总为%d，税金为%d，净收入为%d。\n",zonge,shuijin,jingshouru);
		}
	}
	else
	{
		zonge = 400 + G * (hour-40) * S300;
		if (zonge <= 450)	
		{
			shuijin = 300 * S300 + (zonge - 300) * S150;
			jingshouru = zonge - shuijin;
			printf("您的工资总为%d，税金为%d，净收入为%d。\n",zonge,shuijin,jingshouru);
		}
		else
		{
			shuijin = 300 * S300 + 150 * S150 + (zonge - 450) * S450;
			jingshouru = zonge - shuijin;
			printf("您的工资总为%d，税金为%d，净收入为%d。\n",zonge,shuijin,jingshouru);
		}
	}
	
	printf("\n"); 
	printf("请选择您的工资等级：\n");
	printf("1.$8.75/hr\t2.$9.33/hr\n3.$10.00/hr\t4.$11.20/hr\n5.quit\n");
} 
