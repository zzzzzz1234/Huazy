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
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       �����ʣ�%.2f                   \t|\n",stu.base);
	 fprintf(wc," |       �����꣺%.1f                   \t|\n",stu.day);
	 fprintf(wc," |       �����ʣ�%.2f                   \t|\n",stu.total);
	 fprintf(wc," |       ����ֵ��%.2f                   \t|\n",stu.money);
	 fprintf(wc," |       �ý�%.2f                   \t|\n",stu.total1);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save1()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       �����ʣ�%.2f                   \t|\n",stu.base);
	 fprintf(wc," |       �����꣺%.1f                   \t|\n",stu.day);
	 fprintf(wc," |       �����ʣ�%.2f                   \t|\n",stu.total);
	 fprintf(wc," |       ����ֵ��%.2f                   \t|\n",stu.money);
	 fprintf(wc," |       �ý�%.2f                   \t|\n",stu.total1);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save2()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       �����ʣ�%.2f                   \t|\n",stu.base);
	 fprintf(wc," |       �����꣺%.1f                   \t|\n",stu.day);
	 fprintf(wc," |       ��Ҫ����ֵ��%.2f               \t|\n",stu.total1);
	 fprintf(wc," |       �ý�%.2f                   \t|\n",stu.money);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save3()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       Ͷ�ʹ��������ʣ�%.2f             \t |\n",stu.base);
	 fprintf(wc," |       ��Ҫ�����꣺%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       ����ֵ��%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       �ɵý�%.2f                   \t |\n",stu.money);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save4()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       Ͷ�ʹ��������ʣ�%.2f             \t |\n",stu.base);
	 fprintf(wc," |       ��Ҫ�����꣺%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       ����ֵ��%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       �ɵý�%.2f                   \t |\n",stu.money);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save5()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       ƽ���»ر��ʣ�%.2f               \t |\n",stu.base);
	 fprintf(wc," |       ������·ݣ�%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       ����ֵ��%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       �ɵý�%.2f                   \t |\n",stu.total3);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save6()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       ÿ��������ʣ�%.2f               \t |\n",stu.total3);
	 fprintf(wc," |       �����꣺%.1f                     \t |\n",stu.day/12);
	 fprintf(wc," |       ����%.2f                   \t |\n",stu.money);
	 fprintf(wc," |       ÿ�»����%.2f               \t |\n",stu.total);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}

save7()
{
	 FILE* wc =fopen("c:\\ccc.txt","a");
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	 if(wc==NULL) 
	{
     printf("failed to open file\n");
     return 0;
    }
	 fprintf(wc," -------------------------------------------------\n");
	 fprintf(wc," |       ƽ����ر��ʣ�%.2f               \t |\n",stu.base);
	 fprintf(wc," |       �������ݣ�%.1f                 \t |\n",stu.day);
	 fprintf(wc," |       ����ֵ��%.2f                     \t |\n",stu.total);
	 fprintf(wc," |       �ɵý�%.2f                   \t |\n",stu.total3);
	 fprintf(wc," -------------------------------------------------\n");
	 fclose(wc);
	 return 0;
}
void fuli()
{
	int k;
    stu.total=1.0;
	printf("-------------------------------------------------------------|\n");
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%lf",&stu.base);
		while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("��������������:");
	scanf("%lf",&stu.day);
		while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.day);
		}
	printf("-------------------------------------------------------------|\n");
	printf("�����㸴������:");
    scanf("%d",&k);
	    while(k<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%d",&k);
		}
	stu.total=stu.total*pow(stu.base/k+1,stu.day*k);	
	printf("-------------------------------------------------------------|\n");
	printf("ÿ���������%.2f,����%.1f��,�����������:%.2f\n",stu.base,stu.day,stu.total);
	printf("-------------------------------------------------------------|\n");
	printf("���뱾����:");
	scanf("%lf",&stu.money);
		while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.money);
		}
	stu.total1=stu.money*stu.total;
	printf("-------------------------------------------------------------|\n");
	printf("�㽫���Եõ�:%.2lf\n",stu.total1);
	printf("-------------------------------------------------------------|\n");

}




void danli()
{
    stu.total=1.0;
	printf("-------------------------------------------------------------|\n");
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%lf",&stu.base);
	    while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("��������������:");
	scanf("%lf",&stu.day);
		while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.day);
		}
	stu.total=stu.base*stu.day;	
	printf("-------------------------------------------------------------|\n");
	printf("ÿ���������%.2f,����%.1f��,�����������:%.2lf\n",stu.base,stu.day,stu.total);
	printf("-------------------------------------------------------------|\n");
	printf("���뱾����:");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.money);
		}
	stu.total1=stu.money+stu.money*stu.total;
	printf("-------------------------------------------------------------|\n");
	printf("�㽫���Եõ�:%.2lf\n",stu.total1);
	printf("-------------------------------------------------------------|\n");
}



void fanxiang()
{
	
	int x;
	int k;
	stu.total = 1.0;
	printf("-------------------------------------------------------------|\n");
	printf("����������Ҫ�õ��Ľ��:\n");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.money);
		}
	printf("-------------------------------------------------------------|\n");
	printf("������ƽ����ر���:\n");
	scanf("%lf",&stu.base);
	    while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("��������������\n");
	scanf("%lf",&stu.day);	
	    while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.day);
		}
	printf("-------------------------------------------------------------|\n");
lab:printf("���Ǹ���ѡ��1������ѡ��2\n");
	scanf("%d",&x);
	printf("-------------------------------------------------------------|\n");
	if(x==1)
	{
		printf("�����븴������:\n");
        
		scanf("%d",&k);
		while(k<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%d",&k);
		}
		printf("-------------------------------------------------------------|\n");
		stu.total=stu.total*pow(1+stu.base/k,k*stu.day);
		stu.total1=stu.money/stu.total;
		printf("��Ҫ�ı���Ϊ:%.2f\n",stu.total1);
		printf("-------------------------------------------------------------|\n");
	}
	else if(x==2)
	{
		stu.total=stu.base*stu.day;
		stu.total1=stu.money/(1+stu.total);
		printf("��Ҫ�ı���Ϊ:%.2f\n",stu.total1);
		printf("-------------------------------------------------------------|\n");
	}
	else
	{
		printf("����������1����2\n");
		goto lab;
	}
	
}



void gupiao()
{   
	
	stu.base=0.1;
	printf("-------------------------------------------------------------|\n");
	printf("��������ı���:\n");
	scanf("%lf",&stu.total);
	    while(stu.total<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.total);
		}
	printf("-------------------------------------------------------------|\n");
	printf("����������Ҫ�õ��Ľ��:\n");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.money);
		}
	printf("-------------------------------------------------------------|\n");
	printf("�˹�Ʊƽ���걨����Ϊ(�ٷ�֮ʮ)!\n");
	stu.day=(stu.money-stu.total)/(stu.total*stu.base);
	printf("��Ҫ������Ϊ:%.3lf��\n",stu.day);
	printf("-------------------------------------------------------------|\n");
	
}


void touzi()
{
	
	stu.base=0.1;
	printf("-------------------------------------------------------------|\n");
	printf("��������ı���:\n");
	scanf("%lf",&stu.total);
	    while(stu.total<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.total);
			}
	printf("-------------------------------------------------------------|\n");
	printf("����������Ҫ�õ��Ľ��:\n");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.money);
			}
	printf("-------------------------------------------------------------|\n");
	printf("��������������:\n");
	scanf("%lf",&stu.day);
	    while(stu.day<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.day);
			}
	stu.base=(stu.money-stu.total)/(stu.day*stu.total);
	printf("Ͷ�ʹ��߱�������Ҫ��%.3lf�Ź�\n",stu.base);	
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
lab2:printf("��������ѡ��1������ѡ��2\n");
	scanf("%d",&x);
	if(x==1)
	{
		printf("------------------------------------------------------------|\n");
		printf("��������ı���:\n");
		scanf("%lf",&stu.total1);
		stu.total=stu.total+stu.total1;
		    while(stu.total1<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.total1);
			}
		printf("------------------------------------------------------------|\n");
		printf("������ƽ���»ر���:\n");
		scanf("%lf",&stu.base);
		    while(stu.base<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.base);
			}
		printf("------------------------------------------------------------|\n");
		printf("��������������\n");
		scanf("%lf",&stu.day);
		    while(stu.day<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.day);
			}
			
		for(i=1;i<=stu.day;i++)
		{
			
			stu.total2=stu.total1+(stu.total1*stu.base);
			stu.total1=stu.total2;
			stu.total3=stu.total1+stu.total3;
		}
		printf("�����Եõ�%.3lfԪ\n",stu.total3);
		printf("-------------------------------------------------------------|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		save5();
	}
	
	else if(x==2)
	{ 
		printf("-------------------------------------------------------------|\n");
		printf("��������ı���:\n");
		scanf("%lf",&stu.total1);
		stu.total=stu.total+stu.total1;
		    while(stu.total1<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.total1);
			}
		printf("-------------------------------------------------------------|\n");
		printf("������ƽ����ر���:\n");
		scanf("%lf",&stu.base);
		    while(stu.base<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.base);
			}
		printf("-------------------------------------------------------------|\n");
		printf("��������������\n");
		scanf("%lf",&stu.day);
		    while(stu.day<=0)
			{
		    printf("-------------------------------------------------------------|\n");
		    printf("����ֵΪ����������������:\n");
		    scanf("%lf",&stu.day);
			}
		for(i=1;i<=stu.day;i++)
		{
			stu.total2=stu.total1+(stu.total1*stu.base);
			stu.total1=stu.total2;
			stu.total3=stu.total1+stu.total3;
		}
		printf("�����Եõ�%.3lfԪ\n",stu.total3);
		printf("-------------------------------------------------------------|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		save6();
	}
	else
	{
		 printf("------------------------------------------------------------|\n");
         printf("���ٴ�����1����2:\n");
		 printf("------------------------------------------------------------|\n");
		 goto lab2;
	}
}
void daikuan()
{
    stu.total3=0;
	printf("-------------------------------------------------------------|\n");
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%lf",&stu.base);
	stu.total3=stu.total3+stu.base;
	    while(stu.base<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.base);
		}
	printf("-------------------------------------------------------------|\n");
	printf("��������������:");
	scanf("%lf",&stu.day);
	    while(stu.day<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.day);
		}
	printf("-------------------------------------------------------------|\n");
	printf("������:");
	scanf("%lf",&stu.money);
	    while(stu.money<=0)
		{
		printf("-------------------------------------------------------------|\n");
		printf("����ֵΪ����������������:\n");
		scanf("%lf",&stu.money);
		}
	stu.base=stu.base/12;
	stu.day=stu.day*12;
	stu.total1=(stu.money*stu.base*pow(1+stu.base,stu.day));
	stu.total2=(pow(1+stu.base,stu.day)-1);
	stu.total=stu.total1/stu.total2;
	printf("-------------------------------------------------------------|\n");
	printf("����Ҫÿ���»�%.2lfԪ\n",stu.total);
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

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // ��ȡ����̨���
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
	printf("                      |       ��ӭ����������ҵ����        |\n");
	printf("                      |       �˿�����Ը���0~7ѡ��       |\n");
	printf("                      |        0.��ն�̬��ʾ             |\n");
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
	printf("                      |        1.��������                 |\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("                      |        2.��������                 |\n");
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("                      |        3.���Ͻ����               |\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_BLUE);
	printf("                      |        4.��Ʊ����                 |\n"); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("                      |        5.Ͷ�ʼ���                 |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("                      |        6.���Ͷ�������         |\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_BLUE);
	printf("                      |        7.����                     |\n"); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("                      --------------------------------------\n");
	printf(" \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY |BACKGROUND_INTENSITY);
	printf("���������ѡ������Ҫ�Ĺ���(0~7)\n");
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