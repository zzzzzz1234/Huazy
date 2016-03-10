#include<stdio.h>
#include<math.h>

int main()
{
	int day;
	double total = 1.0f;
	float money;
	float base;
	double total1;
	printf("------------------------------------------------------------\n");
	printf("每年的年利率比为:");
	scanf("%f",&base);
	printf("------------------------------------------------------------\n");
    printf("输入你存入的年数:");
	scanf("%d",&day);
	total=total*pow(1+base,day);	
	printf("-------------------------------------------------------------\n");
	printf("每年的年利率%f,连续%d年,总受益的利率:%lf\n",base,day,total);
	printf("-------------------------------------------------------------\n");
	printf("输入本金金额:");
	scanf("%f",&money);
	total1=money*total;
	printf("-------------------------------------------------------------\n");
	printf("你将可以得到:%lf\n",total1);
}
