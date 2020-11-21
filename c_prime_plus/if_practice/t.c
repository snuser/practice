#include <stdio.h>
int main(void)
{
    int k=1;
    int option;
	while (k == 1)
	{
		scanf("%d",&option);
		switch (option)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break; 
			case 5:
				k = 0;
			 	break;
			default:
				printf("请输入正确的选项！\n");
				printf("请选择您的工资等级：\n");		
		}
	}
    printf("%d", option);
}
