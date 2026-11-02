#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[15];
	int i,j,len;
	int freq[15];
	
	printf("Enter any string : ");
	scanf("%s",&str);
	
	len = strlen(str);
	
	for(i=0;i<len;i++) {
		freq[i]=-1;
	}
	
	for(i=0;i<len;i++) {
		int count=1;
		for(j=i+1;j<len;j++) {
			if(str[i]==str[j]) {
				count++;
				freq[j]=0; 
			}
		}
		if(freq[i] != 0) {
			freq[i]=count;
		}
	}
	
	printf("Output:\n");
	printf("Frequency of each letter:\n");
	for(i=0;i<len;i++) {
		if(freq[i] != 0) {
			printf("%c => %d\n", str[i], freq[i]);
		}
	}
	
	return 0;
}
