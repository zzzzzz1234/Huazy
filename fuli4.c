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
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%f",&base);
	printf("------------------------------------------------------------\n");
    printf("��������������:");
	scanf("%d",&day);
	total=total*pow(1+base,day);	
	printf("-------------------------------------------------------------\n");
	printf("ÿ���������%f,����%d��,�����������:%lf\n",base,day,total);
	printf("-------------------------------------------------------------\n");
	printf("���뱾����:");
	scanf("%f",&money);
	total1=money*total;
	printf("-------------------------------------------------------------\n");
	printf("�㽫���Եõ�:%lf\n",total1);
}
void danli()
{
	int day;
	double total = 1.0f;
	float money;
	float base;
	double total1;
	printf("------------------------------------------------------------\n");
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%f",&base);
	printf("------------------------------------------------------------\n");
    printf("��������������:");
	scanf("%d",&day);
	total=base*day;	
	printf("-------------------------------------------------------------\n");
	printf("ÿ���������%f,����%d��,�����������:%lf\n",base,day,total);
	printf("-------------------------------------------------------------\n");
	printf("���뱾����:");
	scanf("%f",&money);
	total1=money+money*total;
	printf("-------------------------------------------------------------\n");
	printf("�㽫���Եõ�:%lf\n",total1);
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
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%f",&base);
	printf("------------------------------------------------------------\n");
    printf("��������������:");
	scanf("%d",&day);	
	printf("-------------------------------------------------------------\n");
	printf("������:");
	scanf("%f",&money);
	base=base/12;
	day=day*12;
	total1=(money*base*pow(1+base,day));
	total2=(pow(1+base,day)-1);
	total=total1/total2;
	printf("-------------------------------------------------------------\n");
	printf("����Ҫÿ���»�%lfԪ\n",total);
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
	 printf("����������Ҫ�õ��Ľ��:\n");
	 scanf("%f",&money);
	 printf("------------------------------------------------------------\n");
	 printf("������ƽ����ر���:\n");
	 scanf("%f",&base);
	 printf("------------------------------------------------------------\n");
	 printf("��������������\n");
	 scanf("%d",&day);
	 printf("------------------------------------------------------------\n");
     lab:printf("���Ǹ���ѡ��1������ѡ��2\n");
	 scanf("%d",&x);
	 if(x==1)
	 {
     total=total*pow(1+base,day);
	 total1=money/total;
	 printf("��Ҫ�ı���Ϊ:%f\n",total1);
	 }
	 else if(x==2)
	 {
     total=base*day;
	 total1=money/(1+total);
	 printf("��Ҫ�ı���Ϊ:%f\n",total1);
	 }
	 else
	 {
		 printf("����������1����2\n");
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
	 printf("��������ı���:\n");
	 scanf("%f",&total);
	 printf("------------------------------------------------------------\n");
	 printf("����������Ҫ�õ��Ľ��:\n");
	 scanf("%f",&money);
	 printf("------------------------------------------------------------\n");
	 printf("�˹�Ʊƽ���걨����Ϊ(�ٷ�֮ʮ)!\n");
     day=(money-total)/(total*base);
    
	 printf("��Ҫ������Ϊ:%.3lf��\n",day);
	 
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
	 printf("��������ѡ��1������ѡ��2\n");
	 scanf("%d",&x);
	 if(x==1)
	 {
	 printf("------------------------------------------------------------\n");
     printf("��������ı���:\n");
	 scanf("%lf",&total1);
	 printf("------------------------------------------------------------\n");
	 printf("������ƽ���»ر���:\n");
	 scanf("%f",&base);
	 printf("------------------------------------------------------------\n");
	 printf("��������������\n");
	 scanf("%d",&day);
	  for(i=1;i<=day;i++)
	 {
		 total2=total1+(total1*base);
		 total1=total2;
		 total3=total1+total3;
	 }
	     printf("�����Եõ�%.3lfԪ\n",total3);
	 }
	 
	 else if(x==2)
	 { 
	 printf("------------------------------------------------------------\n");
	 printf("��������ı���:\n");
	 scanf("%lf",&total1);
	 printf("------------------------------------------------------------\n");
	 printf("������ƽ����ر���:\n");
	 scanf("%f",&base);
	 printf("------------------------------------------------------------\n");
	 printf("��������������\n");
	 scanf("%d",&day);
     for(i=1;i<=day;i++)
	 {
		 total2=total1+(total1*base);
		 total1=total2;
		 total3=total1+total3;
	 }
	     printf("�����Եõ�%.3lfԪ\n",total3);
	 }
}
void touzi()
{
     float money;
	 double base=0.1;
     float total;
	 double day;
	 printf("------------------------------------------------------------\n");
	 printf("��������ı���:\n");
	 scanf("%f",&total);
	 printf("------------------------------------------------------------\n");
	 printf("����������Ҫ�õ��Ľ��:\n");
	 scanf("%f",&money);
	 printf("------------------------------------------------------------\n");
	 printf("��������������:\n");
	 scanf("%lf",&day);
     base=(money-total)/(day*total);
	 printf("Ͷ�ʹ��߱�������Ҫ��%.3lf�Ź�\n",base);	 
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
	printf("                                 ��ӭ����������ҵ����\n");
	printf("                              �˿�����Ը���1~7ѡ��\n");
	printf("                                   1.��������\n");
	printf("                                   2.��������\n");
	printf("                                   3.�������Ͻ���㷽��\n");
	printf("                                   4.��Ʊ׬ǮӴ\n");
    printf("                                   5.Ͷ�ʹ����ҵĺò�׬ǮӴ\n");
	printf("                                   6.�����뱾��Ĵ�����\n");
	printf("                                   7.����\n");
	printf("                       -------------------------------------\n");
	printf("                                               \n");
	printf("���������ѡ������Ҫ�Ĺ���(1~7)\n");

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