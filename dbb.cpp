#include<stdio.h>
#include<math.h>
void FL()
{
	int n,j;
	double i,p,f;
	printf("�����뱾��");
	scanf("%lf",&p);
	printf("������������");
	scanf("%lf",&i);
	printf("������������");
	scanf("%d",&n);
	printf("�����븴������");
	scanf("%d",&j);
	f=p*pow((1+i/j),n*j);
	printf("������Ϣ��Ϊ%lf\n",f);
}
void DL()
{
	
	double f,i,p,n;
	printf("�����뱾��");
	scanf("%lf",&p);
	printf("������������");
	scanf("%lf",&i);
	printf("������������");
	scanf("%d",&n);
	f=p*(1+i*n);
	printf("������Ϣ��Ϊ%lf\n",f);
}
void BJ()
{
	int n1,n2,j1,a;
	double f1,f2,i1,i2,p1,p2;
    printf("1:�������㱾��\n");
    printf("2:�������㱾��\n");
	printf("���������");
	scanf("%d",&a);
    switch(a)
	{
	case 1:
	printf("������Ŀ����");
	scanf("%lf",&f1);
	printf("������������");
	scanf("%lf",&i1);
	printf("������������");
	scanf("%d",&n1);
	printf("�����븴������");
	scanf("%d",&j1);
	p1=f1/pow(i1/j1+1,j1*n1);
	printf("����Ϊ%lf\n",p1);
	break;
	case 2:
	printf("������Ŀ����");
	scanf("%lf",&f2);
	printf("������������");
	scanf("%lf",&i2);
	printf("������������");
	scanf("%d",&n2);
	p2=f2/(1+i2*n2);
	printf("����Ϊ%lf\n",p2);
	break;
	}

}
void Time()
{
	int j1,a;
    double  f1,f2,i1,i2,p1,p2,n1,n2;
    printf("1:��������ʱ��\n");
    printf("2:��������ʱ��\n");
	printf("���������");
	scanf("%d",&a);
    switch(a)
	{
	case 1:
	printf("������Ŀ����");
	scanf("%lf",&f1);
	printf("������������");
	scanf("%lf",&i1);
	printf("�����뱾��");
	scanf("%lf",&p1);
	printf("�����븴������");
	scanf("%d",&j1);
	n1=log(pow(f1/p1,1/j1))/log(1+i1/j1);
	printf("ʱ��Ϊ%lf\n",n1);
	break;
	case 2:
	printf("������Ŀ����");
	scanf("%lf",&f2);
	printf("������������");
	scanf("%lf",&i2);
	printf("�����뱾��");
	scanf("%lf",&p2);
    n2=(f2/p2-1)/i2;
	printf("ʱ��Ϊ%lf\n",n2);
	break;
	}

}
void LL()
{
	int a;
	double f1,f2,i1,i2,p1,p2,n1,n2,j1;
    printf("1:������������\n");
    printf("2:������������\n");
	printf("���������");
	scanf("%d",&a);
    switch(a)
	{
	case 1:
	printf("������Ŀ����");
	scanf("%lf",&f1);
	printf("������������");
	scanf("%lf",&n1);
	printf("�����뱾��");
	scanf("%lf",&p1);
	printf("�����븴������");
	scanf("%lf",&j1);
	i1=j1*(pow(pow(f1/p1,1/j1),1/n1)-1);
	printf("����Ϊ%lf\n",i1);
	break;
	case 2:
	printf("������Ŀ����");
	scanf("%lf",&f2);
	printf("�����뱾��");
	scanf("%lf",&p2);
	printf("������������");
	scanf("%lf",&n2);
	i2=(f2/p2-1)/n2;
	printf("����Ϊ%lf\n",i2);
	break;
	}

}

void main()
{
	int m;
	printf("1:��������\n");

	printf("2:��������\n");

	printf("3:�󱾽�\n");
	printf("4:��ʱ��\n");
	printf("5:������\n");
	printf("���������");

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


