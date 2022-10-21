/*
Enter a string: hello ,I am , you
Sample Output:uoyma ,I ol , leh*
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i=0,j,temp;
	char str[10000];
	printf("Enter a string: ");
	gets(str);
	j=(strlen(str))-1;
	while(i<=j)
	{
		if(!((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9')))
			i++;
		if(!((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')))
			j--;
		else
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			
			i++;
			j--;
		}
	}
	puts(str);
}
			