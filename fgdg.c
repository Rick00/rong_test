#include<stdio.h>
#include<math.h>
main()
{
	int n,j;
	double f,p,i;
	printf("请输入存入本金");
	scanf("%lf",&p);
	printf("请输入年利率");
	scanf("%lf",&i);
	printf("请输入存入年限");
	scanf("%d",&n);
	printf("请输入年复利次数");
	scanf("%d",&j);
	f=p*pow((1+i/j),n*j);
	printf("本利为：%lf\n",f);
}