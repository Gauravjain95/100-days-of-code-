#include<stdio.h>
#include<conio.h>
int count=0;
void input(int [],int);
void insertion_sort(int [],int);
void output(int [],int);
void main()
{
	int a[100],n;
	clrscr();
	printf("enter the size of the array");
	scanf("%d",&n);
	input(a,n);
	insertion_sort(a,n);
	output(a,n);
	printf("value of count=%d",count);
	getch();
}
void insertion_sort(int a[], int n)
{
	int i,j,key;
	count++;
	for(j=1;j<n;j++)
	{
		count++;
		key=a[j];		count++;
		i=j-1;			count++;
		while(i>=0&&a[i]>key)
		{
			count++;
			a[i+1]=a[i];	count++;
			i=i-1;		count++;
		}
		a[i+1]=key;		count++;
	}
}
void input(int a[],int n)
{       int i;
	printf("enter the element of the array");
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void output(int a[],int n)
{
	int i;
	printf("sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}