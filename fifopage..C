#include<stdio.h>
int main() 
{
	int num_pages,num_frames,page;
	int page_faults=0;
	int front=0,rear=0;
	printf("enter no.of pages: ");
	scanf("%d", &num_pages);
	printf("enter no.of frames: ");
	scanf("%d", &num_frames);
	int pages[num_pages];
	int frames[num_frames];
	printf("enter page elements: ");
	for(int i=0;i<num_pages;i++)
	{
		scanf("%d",&pages[i]);
	}
	for(int i=0;i<num_frames;i++)
	{
		frames[i]=-1;
	}
	for(int i=0;i<num_pages;i++)
	{
		page=pages[i];
		int page_found=0;
		for(int j=0;j<num_frames;j++)
		{
			if(frames[j]==page) 
			{
				 page_found=1;
				 break;
			}
		}
		if(!page_found) 
		{https://chatgpt.com/
			frames[rear]=page;
			rear=(rear+1)%num_frames;
			if(front==rear)
			{
				front=(front+1)%num_frames;
			}
			page_faults++;
		}
		printf("Page: %d | Frames: [" ,page);
		for(int j=0;j<num_frames;j++)
		{
			if(frames[j]!=-1)
			{
				printf("%d" ,frames[j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("]\n");
	}
	printf("total no.of page faults:%d ",page_faults);
	return 0;
}
			
		
	
	
	
