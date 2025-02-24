#include<stdio.h>
int main()
{
	int n,at[30],bt[30],ct[30],tat[30],wt[30],i,arr[30];
	int temp;
	float awt,atat,sum=0.0,avg=0.0;
	printf("enter no.of processes: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter arrival times of processes: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	printf("enter burst times of processes: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(at[j]>at[j+1])
			{
				temp=at[j];
				at[j]=at[j+1];
				at[j+1]=temp;
				temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	ct[0]=at[0]+bt[0];
	for(int i=1;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i];
	}
	for(int i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
		sum=sum+wt[i];
		avg=avg+tat[i];
	}
	awt=sum/n;
	atat=avg/n;
	printf("average waiting time: %.2f",awt);
	printf("average tat: %.2f",atat);
	return 0;
}
	
				
				

				
