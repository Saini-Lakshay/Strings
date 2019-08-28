#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[] = "aabxaabxcaabxabxay";
	char str2[] = "aabx";
	int a=0;
	int len=0;
	
	while(str2[a]!='\0')
	{
		a++;
	}
	
	char *str1 = strcat(str2,str);
	
	while(str1[len]!='\0')
	{
		len++;
	}
	
	int arr[len];
	
	
	int i=1;
	int r=1,l=1;
	
	arr[0]=0;
	while(str1[i]!='\0')
	{
		if(i>=r)
		{
			r=i;
			l=r;
			while(r<len && str1[r]==str1	[r-l])
			{
				r++;
			}
			arr[i] = r-l;	
		}
		else
		{
			if(arr[i-l]+i < r)
			{
				arr[i] = arr[i-l];
			}
			else
			{
				l = i;
			while(r<len && str1[r]==str1	[r-l])
			{
				r++;
			}
			arr[i] = r-l;
			}
		}
		
		i++;
	}
	
	printf("%d is a\n",a);
	for(i=0;i<len;i++)
	{
		if(arr[i]%a==0)
		{
			printf("Exists at index %d\n",i-a);
		}
	}
	
	
	
	return 0;
}
