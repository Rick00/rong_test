#include<stdio.h>
#include<math.h>
main()
{
	int n,j;
	double f,p,i;
	printf("��������뱾��");
	scanf("%lf",&p);
	printf("������������");
	scanf("%lf",&i);
	printf("�������������");
	scanf("%d",&n);
	printf("�������긴������");
	scanf("%d",&j);
	f=p*pow((1+i/j),n*j);
	printf("����Ϊ��%lf\n",f);
}