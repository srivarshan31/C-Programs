#include<stdio.h>
#include<string.h>

	int ispalindrome(char str[]);
	int main(){
	char str[100];
	printf("enter a string :");
	scanf("%s",&str);
	if(ispalindrome(str)){
		printf("the %s is palindrome\n",str);
		
	}
	else{
		printf("the %s is not palindrome\n",str);
		
		
	}
	return 0;}
	
	ispalindrome(char str[]){
		int left=0;
		int right=strlen(str)-1;
		while(left<right){
			if(str[left]!=str[right]){
				return 0;
				
			}
			left++;
			right--;
		}
		return 1;
		
		
		
	
			
			
			
		}
	
	
	
	
	
	
	
	
	
	
	
