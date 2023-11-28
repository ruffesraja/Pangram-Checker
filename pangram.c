#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("Enter a sentence :\n");
	char str[101];  // only lowercase letters
	scanf("%s",str);
	int hash = 0;
	int hash_val;
	char ch;
	for(int ind=0; str[ind] ; ind++){
		ch = str[ind];
		if(ch>='A' && ch<='Z'){
			ch = ch + 32;
		}
		hash_val = ch-'a';
		hash = hash | (1<<hash_val);
	}
	if(hash == (1<<26)-1){
		printf("Pangram");
	}
	else{
		printf("not a Pangram");
	}
	return EXIT_SUCCESS;
}