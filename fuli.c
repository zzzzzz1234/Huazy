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
