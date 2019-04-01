#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
	int i;
	time_t sec1,sec2;
	
	//time(&sec1);
	for(i = 0 ; i >= 0;i++)
	{
		printf("hello world\n");
		usleep(99975);
	}
	//time(&sec2);
	//printf("%ld\n",sec2-sec1);
	
	return 0;
}