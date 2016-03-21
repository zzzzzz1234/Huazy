#include<stdio.h>
#include<math.h>

void fuli()
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
void danli()
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
	total=base*day;	
	printf("-------------------------------------------------------------\n");
	printf("每年的年利率%f,连续%d年,总受益的利率:%lf\n",base,day,total);
	printf("-------------------------------------------------------------\n");
	printf("输入本金金额:");
	scanf("%f",&money);
	total1=money+money*total;
	printf("-------------------------------------------------------------\n");
	printf("你将可以得到:%lf\n",total1);
}
void daikuan()
{
	int day;
	float money;
	float base;
	double total;
	double total1;
	double total2;
	printf("------------------------------------------------------------\n");
	printf("每年的年利率比为:");
	scanf("%f",&base);
	printf("------------------------------------------------------------\n");
    printf("输入你存入的年数:");
	scanf("%d",&day);	
	printf("-------------------------------------------------------------\n");
	printf("借款本金金额:");
	scanf("%f",&money);
	base=base/12;
	day=day*12;
	total1=(money*base*pow(1+base,day));
	total2=(pow(1+base,day)-1);
	total=total1/total2;
	printf("-------------------------------------------------------------\n");
	printf("你需要每个月还%lf元\n",total);
}
void fanxiang()
{
     float money;
	 float base;
     double total = 1.0f;
	 int day;
	 int x;
	 char lab;
	 double total1;
	 printf("------------------------------------------------------------\n");
	 printf("请输入你需要得到的金额:\n");
	 scanf("%f",&money);
	 printf("------------------------------------------------------------\n");
	 printf("请输入平均年回报率:\n");
	 scanf("%f",&base);
	 printf("------------------------------------------------------------\n");
	 printf("请输入存入的年数\n");
	 scanf("%d",&day);
	 printf("------------------------------------------------------------\n");
     lab:printf("若是复利选择1，单利选择2\n");
	 scanf("%d",&x);
	 if(x==1)
	 {
     total=total*pow(1+base,day);
	 total1=money/total;
	 printf("需要的本金为:%f\n",total1);
	 }
	 else if(x==2)
	 {
     total=base*day;
	 total1=money/(1+total);
	 printf("需要的本金为:%f\n",total1);
	 }
	 else
	 {
		 printf("请重新输入1或者2\n");
		 goto lab;
	 }

}
void gupiao()
{
     float money;
	 double base=0.1;
     float total;
	 double day;
	 printf("------------------------------------------------------------\n");
	 printf("请输入你的本金:\n");
	 scanf("%f",&total);
	 printf("------------------------------------------------------------\n");
	 printf("请输入你需要得到的金额:\n");
	 scanf("%f",&money);
	 printf("------------------------------------------------------------\n");
	 printf("此股票平均年报酬率为(百分之十)!\n");
     day=(money-total)/(total*base);
    
	 printf("需要的年数为:%.3lf年\n",day);
	 
}

void ligunli()
{
     
	 float base;
	 int day;
	 int x;
	 int i;
	 double total1;
	 double total2;
	 double total3=0;
	 printf("------------------------------------------------------------\n");
	 printf("若是月利选择1，年利选择2\n");
	 scanf("%d",&x);
	 if(x==1)
	 {
	 printf("------------------------------------------------------------\n");
     printf("请输入你的本金:\n");
	 scanf("%lf",&total1);
	 printf("------------------------------------------------------------\n");
	 printf("请输入平均月回报率:\n");
	 scanf("%f",&base);
	 printf("------------------------------------------------------------\n");
	 printf("请输入存入的月数\n");
	 scanf("%d",&day);
	  for(i=1;i<=day;i++)
	 {
		 total2=total1+(total1*base);
		 total1=total2;
		 total3=total1+total3;
	 }
	     printf("最后可以得到%.3lf元\n",total3);
	 }
	 
	 else if(x==2)
	 { 
	 printf("------------------------------------------------------------\n");
	 printf("请输入你的本金:\n");
	 scanf("%lf",&total1);
	 printf("------------------------------------------------------------\n");
	 printf("请输入平均年回报率:\n");
	 scanf("%f",&base);
	 printf("------------------------------------------------------------\n");
	 printf("请输入存入的年数\n");
	 scanf("%d",&day);
     for(i=1;i<=day;i++)
	 {
		 total2=total1+(total1*base);
		 total1=total2;
		 total3=total1+total3;
	 }
	     printf("最后可以得到%.3lf元\n",total3);
	 }
}
void touzi()
{
     float money;
	 double base=0.1;
     float total;
	 double day;
	 printf("------------------------------------------------------------\n");
	 printf("请输入你的本金:\n");
	 scanf("%f",&total);
	 printf("------------------------------------------------------------\n");
	 printf("请输入你需要得到的金额:\n");
	 scanf("%f",&money);
	 printf("------------------------------------------------------------\n");
	 printf("请输入存入的年数:\n");
	 scanf("%lf",&day);
     base=(money-total)/(day*total);
	 printf("投资工具报酬率需要有%.3lf才够\n",base);	 
}


void main()
{	while(1){
	int num=7;
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                       -------------------------------------\n");
	printf("                                 欢迎来到广州商业银行\n");
	printf("                              顾客你可以根据1~7选择\n");
	printf("                                   1.复利计算\n");
	printf("                                   2.单利计算\n");
	printf("                                   3.送你养老金计算方法\n");
	printf("                                   4.股票赚钱哟\n");
    printf("                                   5.投资工具找的好才赚钱哟\n");
	printf("                                   6.本利与本金的存款计算\n");
	printf("                                   7.贷款\n");
	printf("                       -------------------------------------\n");
	printf("                                               \n");
	printf("请根据数字选择你需要的功能(1~7)\n");

	scanf("%d",&num);
	switch(num)
	{
	case 1:
		fuli();
		break;
	case 2:
		danli();
		break;
	case 3:
		fanxiang();
		break;
	case 4:
		gupiao();
		break;
	case 5:
		touzi();
		break;
	case 6:
		ligunli();
		break;
	case 7:
		daikuan();
		break;
	}
	}
}