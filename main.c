#include <stdio.h>

int main() {
	FILE *input;
	input = fopen("alphabet.txt", "r");
	
	while(feof(input) ==0 ) {
	    int la[];
	    
	   
	    //read a character
	    fscanf(input, "%c", &c);
	    
	   
	    //print that character to the console
	    printf("%c\n", c);
	    
	}
	return 0;
}
