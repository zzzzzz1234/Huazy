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
void fanxiang()
{
     float money;
	 float base;
     double total = 1.0f;
	 int day;
	 int x;
	 double total1;
	 printf("����������Ҫ�õ��Ľ��:\n");
	 scanf("%f",&money);
	 printf("������ƽ����ر���:\n");
	 scanf("%f",&base);
	 printf("��������������\n");
	 scanf("%d",&day);
	 printf("���Ǹ���ѡ��1������ѡ��2\n");
	 scanf("%d",&x);
	 if(x==1)
	 {
     total=total*pow(1+base,day);
	 total1=money/total;
	 printf("��Ҫ�ı���Ϊ:%f\n",total1);
	 }
	 else
	 {
     total=base*day;
	 total1=money/(1+total);
	 printf("��Ҫ�ı���Ϊ:%f\n",total1);
	 }
}
void main()
{
	int num=4;
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                                               \n");
	printf("                       -------------------------------------\n");
	printf("                                 ��ӭ����������ҵ����\n");
	printf("                              �˿�����Ը���1~3ѡ��\n");
	printf("                                   1.��������\n");
	printf("                                   2.��������\n");
	printf("                                   3.�������Ͻ���㷽��\n");
	printf("                       -------------------------------------\n");
	printf("                                               \n");
	printf("���������ѡ������Ҫ�Ĺ���(1~3)\n");
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
	}
}