#include<stdio.h>
#include<string.h>

int main()
{
	char str [20];
	int freq[123] = {0};
	
	printf("Enter your str : ");
	scanf("%s",&str);
	
	for(int i=0; i<strlen(str); i++)
     {
	  	freq[str[i]]++;
	 }
		 
    printf("\n freq is : ");		 	
	
	for (int i = 0; i <= 122; i++)
	{
		if(freq[i]>0)
		{
	    	printf("\n %c => %d",i,freq[i]);
		}
	}
	
	return 0;
}
