#include<windows.h>
#include<stdio.h>
#include<math.h>
struct jisuan {
   double day;
   double money;
   double base;
   double total;
   double total1;
   double total2;
   double total3;
}stu;

save()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       年利率：%.2f                   \t|\n",stu.base);
	 fprintf(wc," |       存入年：%.1f                   \t|\n",stu.day);
	 fprintf(wc," |       总利率：%.2f                   \t|\n",stu.total);
	 fprintf(wc," |       本金值：%.2f                   \t|\n",stu.money);
	 fprintf(wc," |       得金额：%.2f                   \t|\n",stu.total1);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save1()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       年利率：%.2f                   \t|\n",stu.base);
	 fprintf(wc," |       存入年：%.1f                   \t|\n",stu.day);
	 fprintf(wc," |       总利率：%.2f                   \t|\n",stu.total);
	 fprintf(wc," |       本金值：%.2f                   \t|\n",stu.money);
	 fprintf(wc," |       得金额：%.2f                   \t|\n",stu.total1);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save2()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       年利率：%.2f                   \t|\n",stu.base);
	 fprintf(wc," |       存入年：%.1f                   \t|\n",stu.day);
	 fprintf(wc," |       需要本金值：%.2f               \t|\n",stu.total1);
	 fprintf(wc," |       得金额：%.2f                   \t|\n",stu.money);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save3()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       投资工具年利率：%.2f             \t |\n",stu.base);
	 fprintf(wc," |       需要存入年：%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       本金值：%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       可得金额：%.2f                   \t |\n",stu.money);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save4()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       投资工具年利率：%.2f             \t |\n",stu.base);
	 fprintf(wc," |       需要存入年：%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       本金值：%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       可得金额：%.2f                   \t |\n",stu.money);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save5()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       平均月回报率：%.2f               \t |\n",stu.base);
	 fprintf(wc," |       存入的月份：%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       本金值：%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       可得金额：%.2f                   \t |\n",stu.total3);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save6()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       每年的年利率：%.2f               \t |\n",stu.total3);
	 fprintf(wc," |       存入年：%.1f                     \t |\n",stu.day/12);
	 fprintf(wc," |       借款本金：%.2f                   \t |\n",stu.money);
	 fprintf(wc," |       每月还款金额：%.2f               \t |\n",stu.total);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save7()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       平均年回报率：%.2f               \t |\n",stu.base);
	 fprintf(wc," |       存入的年份：%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       本金值：%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       可得金额：%.2f                   \t |\n",stu.total3);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}
void fuli()
{
	int k;
    stu.total=1.0;
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率比为:");
	scanf("%lf",&stu.base);
		while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("输入你存入的年数:");
	scanf("%lf",&stu.day);
		while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.day);
		}
	printf("-------------------------------------------------------------|\n");
	printf("输入你复利次数:");
    scanf("%d",&k);
	    while(k<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%d",&k);
		}
	stu.total=stu.total*pow(stu.base/k+1,stu.day*k);	
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率%.2f,连续%.1f年,总受益的利率:%.2f\n",stu.base,stu.day,stu.total);
	printf("-------------------------------------------------------------|\n");
	printf("输入本金金额:");
	scanf("%lf",&stu.money);
		while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.money);
		}
	stu.total1=stu.money*stu.total;
	printf("-------------------------------------------------------------|\n");
	printf("你将可以得到:%.2lf\n",stu.total1);
	printf("-------------------------------------------------------------|\n");

}




void danli()
{
    stu.total=1.0;
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率比为:");
	scanf("%lf",&stu.base);
	    while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("输入你存入的年数:");
	scanf("%lf",&stu.day);
		while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.day);
		}
	stu.total=stu.base*stu.day;	
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率%.2f,连续%.1f年,总受益的利率:%.2lf\n",stu.base,stu.day,stu.total);
	printf("-------------------------------------------------------------|\n");
	printf("输入本金金额:");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.money);
		}
	stu.total1=stu.money+stu.money*stu.total;
	printf("-------------------------------------------------------------|\n");
	printf("你将可以得到:%.2lf\n",stu.total1);
	printf("-------------------------------------------------------------|\n");
}



void fanxiang()
{
	
	int x;
	int k;
	stu.total = 1.0;
	printf("-------------------------------------------------------------|\n");
	printf("请输入你需要得到的金额:\n");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.money);
		}
	printf("-------------------------------------------------------------|\n");
	printf("请输入平均年回报率:\n");
	scanf("%lf",&stu.base);
	    while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("请输入存入的年数\n");
	scanf("%lf",&stu.day);	
	    while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.day);
		}
	printf("-------------------------------------------------------------|\n");
lab:printf("若是复利选择1，单利选择2\n");
	scanf("%d",&x);
	printf("-------------------------------------------------------------|\n");
	if(x==1)
	{
		printf("请输入复利次数:\n");
        
		scanf("%d",&k);
		while(k<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%d",&k);
		}
		printf("-------------------------------------------------------------|\n");
		stu.total=stu.total*pow(1+stu.base/k,k*stu.day);
		stu.total1=stu.money/stu.total;
		printf("需要的本金为:%.2f\n",stu.total1);
		printf("-------------------------------------------------------------|\n");
	}
	else if(x==2)
	{
		stu.total=stu.base*stu.day;
		stu.total1=stu.money/(1+stu.total);
		printf("需要的本金为:%.2f\n",stu.total1);
		printf("-------------------------------------------------------------|\n");
	}
	else
	{
		printf("请重新输入1或者2\n");
		goto lab;
	}
	
}



void gupiao()
{   
	
	stu.base=0.1;
	printf("-------------------------------------------------------------|\n");
	printf("请输入你的本金:\n");
	scanf("%lf",&stu.total);
	    while(stu.total<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.total);
		}
	printf("-------------------------------------------------------------|\n");
	printf("请输入你需要得到的金额:\n");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.money);
		}
	printf("-------------------------------------------------------------|\n");
	printf("此股票平均年报酬率为(百分之十)!\n");
	stu.day=(stu.money-stu.total)/(stu.total*stu.base);
	printf("需要的年数为:%.3lf年\n",stu.day);
	printf("-------------------------------------------------------------|\n");
	
}


void touzi()
{
	
	stu.base=0.1;
	printf("-------------------------------------------------------------|\n");
	printf("请输入你的本金:\n");
	scanf("%lf",&stu.total);
	    while(stu.total<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.total);
			}
	printf("-------------------------------------------------------------|\n");
	printf("请输入你需要得到的金额:\n");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.money);
			}
	printf("-------------------------------------------------------------|\n");
	printf("请输入存入的年数:\n");
	scanf("%lf",&stu.day);
	    while(stu.day<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.day);
			}
	stu.base=(stu.money-stu.total)/(stu.day*stu.total);
	printf("投资工具报酬率需要有%.3lf才够\n",stu.base);	
	printf("-------------------------------------------------------------|\n");
}


void ligunli()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	int x;
	int i;
	stu.total3=0;
	stu.total=0;
	printf("------------------------------------------------------------|\n");
lab2:printf("若是月利选择1，年利选择2\n");
	scanf("%d",&x);
	if(x==1)
	{
		printf("------------------------------------------------------------|\n");
		printf("请输入你的本金:\n");
		scanf("%lf",&stu.total1);
		stu.total=stu.total+stu.total1;
		    while(stu.total1<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.total1);
			}
		printf("------------------------------------------------------------|\n");
		printf("请输入平均月回报率:\n");
		scanf("%lf",&stu.base);
		    while(stu.base<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.base);
			}
		printf("------------------------------------------------------------|\n");
		printf("请输入存入的月数\n");
		scanf("%lf",&stu.day);
		    while(stu.day<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.day);
			}
			
		for(i=1;i<=stu.day;i++)
		{
			
			stu.total2=stu.total1+(stu.total1*stu.base);
			stu.total1=stu.total2;
			stu.total3=stu.total1+stu.total3;
		}
		printf("最后可以得到%.3lf元\n",stu.total3);
		printf("-------------------------------------------------------------|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		save5();
	}
	
	else if(x==2)
	{ 
		printf("-------------------------------------------------------------|\n");
		printf("请输入你的本金:\n");
		scanf("%lf",&stu.total1);
		stu.total=stu.total+stu.total1;
		    while(stu.total1<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.total1);
			}
		printf("-------------------------------------------------------------|\n");
		printf("请输入平均年回报率:\n");
		scanf("%lf",&stu.base);
		    while(stu.base<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.base);
			}
		printf("-------------------------------------------------------------|\n");
		printf("请输入存入的年数\n");
		scanf("%lf",&stu.day);
		    while(stu.day<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("输入值为负数，请重新输入:\n");
		    scanf("%lf",&stu.day);
			}
		for(i=1;i<=stu.day;i++)
		{
			stu.total2=stu.total1+(stu.total1*stu.base);
			stu.total1=stu.total2;
			stu.total3=stu.total1+stu.total3;
		}
		printf("最后可以得到%.3lf元\n",stu.total3);
		printf("-------------------------------------------------------------|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		save6();
	}
	else
	{
		 printf("------------------------------------------------------------|\n");
         printf("请再次输入1或者2:\n");
		 printf("------------------------------------------------------------|\n");
		 goto lab2;
	}
}
void daikuan()
{
    stu.total3=0;
	printf("-------------------------------------------------------------|\n");
	printf("每年的年利率比为:");
	scanf("%lf",&stu.base);
	stu.total3=stu.total3+stu.base;
	    while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("输入你存入的年数:");
	scanf("%lf",&stu.day);
	    while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.day);
		}
	printf("-------------------------------------------------------------|\n");
	printf("借款本金金额:");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("输入值为负数，请重新输入:\n");
		scanf("%lf",&stu.money);
		}
	stu.base=stu.base/12;
	stu.day=stu.day*12;
	stu.total1=(stu.money*stu.base*pow(1+stu.base,stu.day));
	stu.total2=(pow(1+stu.base,stu.day)-1);
	stu.total=stu.total1/stu.total2;
	printf("-------------------------------------------------------------|\n");
	printf("你需要每个月还%.2lf元\n",stu.total);
	printf("-------------------------------------------------------------|\n");
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
clean()
{
	FILE *wc;
	wc=fopen("c:\\ccc.txt","w");
	fclose(wc);
}
void main()
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
    while(1){
	int num=7;
	duqu();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf("                      -------------------------------------\n");
	printf("                      |       欢迎来到广州商业银行        |\n");
	printf("                      |       顾客你可以根据0~7选择       |\n");
	printf("                      |        0.清空动态显示             |\n");
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
	printf("                      |        1.复利计算                 |\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("                      |        2.单利计算                 |\n");
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("                      |        3.养老金计算               |\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_BLUE);
	printf("                      |        4.股票计算                 |\n"); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("                      |        5.投资计算                 |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("                      |        6.定额定投收益计算         |\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_BLUE);
	printf("                      |        7.贷款                     |\n"); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("                      --------------------------------------\n");
	printf(" \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY |BACKGROUND_INTENSITY);
	printf("请根据数字选择你需要的功能(0~7)\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	scanf("%d",&num);
	switch(num)
	{
	case 0:
        clean();
		break;
	case 1:
		printf("\n");
		fuli();
		save();
		break;
    case 2:
		printf("\n");
		danli();
		save1();
		break;
	case 3:
		printf("\n");
		fanxiang();
		save2();
		break;
	case 4:
		printf("\n");
		gupiao();
		save3();
		break;
	case 5:
		printf("\n");
		touzi();
		save4();
		break;
	case 6:
		printf("\n");
		ligunli();
		break;
	case 7:
		printf("\n");
		daikuan();
		save6();
		break;
	}
}
}