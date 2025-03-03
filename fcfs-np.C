#include<stdio.h>
int main()
{
	int n,bt[30],wt[30],arr[30];
	float awt,sum=0;
	printf("enter no.of processes: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter burst times of processes: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	wt[0]=0;
	printf("waiting times: %d\n",wt[0]);
	for(int i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		printf("%d\n",wt[i]);
		sum=sum+wt[i];
	}
	awt=sum/n;
	printf("\naverage waiting time: %.2f",awt);
	return 0;
}
