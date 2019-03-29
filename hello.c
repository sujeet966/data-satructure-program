#include<stdio.h>
#include<stdlib.h>
typedef struct frac frac;
struct frac
{
	
	int n,d;

};
frac inputfraction()
{
	frac x;
	printf("Enter Numerator\t");
	scanf("%d",&x.n);
	printf("\nEnter Denominator ");
	scanf("%d",&x.d);
	return x;
}
void displayfraction(frac x)
{
	printf("%d/%d",x.n,x.d);
}
frac addfractions(frac x,frac y)
{
	int t1,t2;
	frac temp;
	temp.d=x.d*y.d;
	t1=temp.d/x.d;
	t1=t1*x.n;
	t2=temp.d/y.d;
	t2=t2*y.n;
	temp.n=t1+t2;
	return temp;
	
}
frac addnfractions(frac arr[],int size)
{
	frac temp;
	int i;
	for(i=0;i<size-1;i++)
	temp=addfractions(arr[i],arr[i+1]);
	return temp;
}
 /*frac* inputfractions(int n,frac x[] )
{
	int i;
	for(i=0;i<n;i++)
	{
		x[i]=inputfraction();
	}
	return x;
}*/
main()
{
	frac x,y,z;
	int ch,n,l;
	frac arr[n];
	while(1)
	{
		system("cls");
		printf("Choose any one from following\n");
		printf("1.Input Fraction\n2.Input Fractions\n3.Display\n4.Add Fractions\n5.Add N fractions\n6.Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("You have to enter atleat two fraction\n");
					x=inputfraction(); 
					y=inputfraction();break;
			case 2:	printf("\nHow many Fractions you want to add\t");
					scanf("%d",&n);
					for(l=0;l<n;l++)
					{
						arr[l]=inputfraction();
					}
					  break;
			case 3:displayfraction(arr[l]); scanf("%d",&l); break;
			case 4:z=addfractions(x,y);   break;
			case 5:z=addnfractions(arr,n); break;
			case 6: return(-1);
			default: printf("Wrong Choice");
		}
	}
}

