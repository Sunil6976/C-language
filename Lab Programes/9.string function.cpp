#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("\n enter s1:");
	scanf("%s",s1);
	printf("\n enter s2:");
	scanf("%s",s2);
	
	printf("\n len of s1=%d",strlen(s1));
	printf("\n s1==s2 s1=%d",strcmp(s1,s2));
	printf("\n reverse of s1=%s",strrev(s1));
	printf("\n uppercase s1=%s",strupr(s1));
	printf("\n s1+s2 s1=%s",strcat(s1,s2));
}
