#include<stdio.h>
#include<math.h>
void FL()
{
	int n,j;
	double i,p,f;
	printf("请输入本金");
	scanf("%lf",&p);
	printf("请输入年利率");
	scanf("%lf",&i);
	printf("请输入存款年限");
	scanf("%d",&n);
	printf("请输入复利次数");
	scanf("%d",&j);
	f=p*pow((1+i/j),n*j);
	printf("本金利息共为%lf\n",f);
}
void DL()
{
	
	double f,i,p,n;
	printf("请输入本金");
	scanf("%lf",&p);
	printf("请输入年利率");
	scanf("%lf",&i);
	printf("请输入存款年限");
	scanf("%d",&n);
	f=p*(1+i*n);
	printf("本金利息共为%lf\n",f);
}
void BJ()
{
	int n1,n2,j1,a;
	double f1,f2,i1,i2,p1,p2;
    printf("1:复利计算本金\n");
    printf("2:单利计算本金\n");
	printf("请输入序号");
	scanf("%d",&a);
    switch(a)
	{
	case 1:
	printf("请输入目标金额");
	scanf("%lf",&f1);
	printf("请输入年利率");
	scanf("%lf",&i1);
	printf("请输入存款年限");
	scanf("%d",&n1);
	printf("请输入复利次数");
	scanf("%d",&j1);
	p1=f1/pow(i1/j1+1,j1*n1);
	printf("本金为%lf\n",p1);
	break;
	case 2:
	printf("请输入目标金额");
	scanf("%lf",&f2);
	printf("请输入年利率");
	scanf("%lf",&i2);
	printf("请输入存款年限");
	scanf("%d",&n2);
	p2=f2/(1+i2*n2);
	printf("本金为%lf\n",p2);
	break;
	}

}
void Time()
{
	int j1,a;
    double  f1,f2,i1,i2,p1,p2,n1,n2;
    printf("1:复利计算时间\n");
    printf("2:单利计算时间\n");
	printf("请输入序号");
	scanf("%d",&a);
    switch(a)
	{
	case 1:
	printf("请输入目标金额");
	scanf("%lf",&f1);
	printf("请输入年利率");
	scanf("%lf",&i1);
	printf("请输入本金");
	scanf("%lf",&p1);
	printf("请输入复利次数");
	scanf("%d",&j1);
	n1=log(pow(f1/p1,1/j1))/log(1+i1/j1);
	printf("时间为%lf\n",n1);
	break;
	case 2:
	printf("请输入目标金额");
	scanf("%lf",&f2);
	printf("请输入年利率");
	scanf("%lf",&i2);
	printf("请输入本金");
	scanf("%lf",&p2);
    n2=(f2/p2-1)/i2;
	printf("时间为%lf\n",n2);
	break;
	}

}
void LL()
{
	int a;
	double f1,f2,i1,i2,p1,p2,n1,n2,j1;
    printf("1:复利计算利率\n");
    printf("2:单利计算利率\n");
	printf("请输入序号");
	scanf("%d",&a);
    switch(a)
	{
	case 1:
	printf("请输入目标金额");
	scanf("%lf",&f1);
	printf("请输入存款年限");
	scanf("%lf",&n1);
	printf("请输入本金");
	scanf("%lf",&p1);
	printf("请输入复利次数");
	scanf("%lf",&j1);
	i1=j1*(pow(pow(f1/p1,1/j1),1/n1)-1);
	printf("利率为%lf\n",i1);
	break;
	case 2:
	printf("请输入目标金额");
	scanf("%lf",&f2);
	printf("请输入本金");
	scanf("%lf",&p2);
	printf("请输入存款年限");
	scanf("%lf",&n2);
	i2=(f2/p2-1)/n2;
	printf("利率为%lf\n",i2);
	break;
	}

}

void main()
{
	int m;
	printf("1:复利计算\n");

	printf("2:单利计算\n");

	printf("3:求本金\n");
	printf("4:求时间\n");
	printf("5:求利率\n");
	printf("请输入序号");

	scanf("%d",&m);
	if(m==1)
		FL();
	 else if(m==2)
	    DL();
	 else if(m==3)
		BJ();
	 else if(m==4)
		Time();
	 else if(m==5)
		 LL();
}


