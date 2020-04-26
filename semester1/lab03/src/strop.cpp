#include "strop.h"
#include <cstring>


void chunk (const char * newText, delimited * divide, char newSign){
	divide->textStart = newText;
	divide->textEnd = divide->textStart + strlen(newText);
	divide->sign = newSign;
	divide->partStart=divide->textStart;
	divide->partEnd=divide->textStart;

}

bool next (delimited * divide){
	divide->partStart = next_not_delim(divide->partEnd, divide);
	divide->partEnd = next_delim(divide->partStart, divide);

	if (divide->partStart == divide->textEnd || *(divide->partStart) == '\0' ) return false;
	return true;
}

void part (delimited * divide, char *buffor){
	int n = divide->partEnd-divide->partStart; //długość wyrazu
	strncpy (buffor, divide->partStart, n); 	
	buffor [n] = '\0';
}

const char*  next_delim(const char * part, delimited * divide){ 
	if(part == NULL) return NULL;
	while ( *part != divide->sign && *part != '\0') part++;	
	return part;
}

const char*  next_not_delim(const char * part, delimited * divide){
	if(part == NULL) return NULL;
	while ( *part == divide->sign && *part != '\0') part++;
	return part;
}

