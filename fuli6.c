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
	printf("ÿ��������ʱ�Ϊ:");
	scanf("%f",&stu.base);
	printf("-------------------------------------------------------------|\n");
	printf("��������������:");
	scanf("%d",&stu.day);
	printf("-------------------------------------------------------------|\n");
	printf("�����㸴������:");
    scanf("%d",&k);
	stu.total=stu.total*pow(stu.base/k+1,stu.day*k);	
	printf("-------------------------------------------------------------|\n");
	printf("ÿ���������%f,����%d��,�����������:%lf\n",stu.base,stu.day,stu.total);
	printf("-------------------------------------------------------------|\n");
	printf("���뱾����:");
	scanf("%f",&stu.money);
	stu.total1=stu.money*stu.total;
	printf("-------------------------------------------------------------|\n");
	printf("�㽫���Եõ�:%lf\n",stu.total1);
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
	 fprintf(wc,"|  �����ʣ�%.2f    |\n",stu.base);
	 fprintf(wc,"|  �����꣺%d      |\n",stu.day);
	 fprintf(wc,"|  �����ʣ�%.2f    |\n",stu.total);
	 fprintf(wc,"|  ����%.2f      |\n",stu.money);
	 fprintf(wc,"|  �õ���%.2f  |\n",stu.total1);
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
	printf("                      |       ��ӭ����������ҵ����        |\n");
	printf("                      |       �˿�����Ը���1~7ѡ��       |\n");
	printf("                      |        1.��������                 |\n");
	printf("                      |        2.��������                 |\n");
	printf("                      |        3.�������Ͻ���㷽��       |\n");
	printf("                      |        4.��Ʊ׬ǮӴ               |\n"); 
	printf("                      |        5.Ͷ�ʹ����ҵĺò�׬ǮӴ   |\n");
	printf("                      |        6.�����뱾��Ĵ�����     |\n");
	printf("                      |        7.����                     |\n"); 
	printf("                      --------------------------------------\n");
	printf(" \n");
	printf("���������ѡ������Ҫ�Ĺ���(1~7)\n");
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