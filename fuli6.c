#include<stdio.h>
#include<math.h>
struct jisuan {
   int day;
   double total;
   float money;
   float base;
   double total1;
}stu;
void fuli()
{
	int k;
    stu.total=1.0;
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率比为:");
	scanf("%f",&stu.base);
	printf("-------------------------------------------------------------|\n");
	printf("输入你存入的年数:");
	scanf("%d",&stu.day);
	printf("-------------------------------------------------------------|\n");
	printf("输入你复利次数:");
    scanf("%d",&k);
	stu.total=stu.total*pow(stu.base/k+1,stu.day*k);	
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率%f,连续%d年,总受益的利率:%lf\n",stu.base,stu.day,stu.total);
	printf("-------------------------------------------------------------|\n");
	printf("输入本金金额:");
	scanf("%f",&stu.money);
	stu.total1=stu.money*stu.total;
	printf("-------------------------------------------------------------|\n");
	printf("你将可以得到:%lf\n",stu.total1);
	printf("-------------------------------------------------------------|\n");

}
save()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc,"--------------------\n");
	 fprintf(wc,"|  年利率：%.2f    |\n",stu.base);
	 fprintf(wc,"|  存入年：%d      |\n",stu.day);
	 fprintf(wc,"|  总利率：%.2f    |\n",stu.total);
	 fprintf(wc,"|  本金：%.2f      |\n",stu.money);
	 fprintf(wc,"|  得到金额：%.2f  |\n",stu.total1);
	 fprintf(wc,"--------------------\n");
	 fclose(wc);
	 return 0;
}
duqu()
{
     FILE* wc =fopen("c:\\ccc.txt","r");

	 int n = 0;
	 char ch[1000];
	 while(!feof(wc))
	 {
		 fscanf(wc, "%c", &ch[n]);
		 printf("%c", ch[n]);
		 n++;
	 }
         fclose(wc);
	return 0;
}
void main()
{
	
    while(1){
	int num=7;
	duqu();
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf("                      -------------------------------------\n");
	printf("                      |       欢迎来到广州商业银行        |\n");
	printf("                      |       顾客你可以根据1~7选择       |\n");
	printf("                      |        1.复利计算                 |\n");
	printf("                      |        2.单利计算                 |\n");
	printf("                      |        3.送你养老金计算方法       |\n");
	printf("                      |        4.股票赚钱哟               |\n"); 
	printf("                      |        5.投资工具找的好才赚钱哟   |\n");
	printf("                      |        6.本利与本金的存款计算     |\n");
	printf("                      |        7.贷款                     |\n"); 
	printf("                      --------------------------------------\n");
	printf(" \n");
	printf("请根据数字选择你需要的功能(1~7)\n");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("\n");
		fuli();
		save();
		break;

	}
}
}