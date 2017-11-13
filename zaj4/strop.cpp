#include "strop.h"
#include <cstring>


void chunk (const char * newText, delimited * divide, char newSign){
	divide->textStart = newText;
	divide->textEnd = divide->textStart + strlen(newText);
	divide->sign = newSign;
	divide->partStart=divide->textStart;
	divide->partEnd=divide->textStart;
}

//*******************************************************************PART

void get_fragment (delimited * divide, char *buffor){
	int n = divide->partEnd-divide->partStart; //długość wyrazu
	strncpy (buffor, divide->partStart, n); 	
	buffor [n] = '\0';
}

int fragment_size (delimited *divide){
	return divide->partEnd-divide->partStart;
}

//*******************************************************************REWIND

void rewind (delimited *divide){
	divide->partStart = divide->textStart;
	divide->partEnd=divide->textStart;
}

//*******************************************************************NEXT

bool next (delimited * divide){
	divide->partStart = next_not_delim(divide->partEnd, divide);
	divide->partEnd = next_delim(divide->partStart, divide);

	if (divide->partStart == divide->textEnd || *(divide->partStart) == '\0' ) return false;
	return true;
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

//*******************************************************************PREVIOUS

void previous (delimited *divide){
	divide->partEnd = previous_delim(divide->partStart-1, divide);
	divide->partStart = previous_not_delim(divide->partEnd-1, divide);
}

const char*  previous_delim(const char * part, delimited * divide){ 
	if(part == NULL) return NULL;
	while ( *part == divide->sign && *part != *(divide->textStart)) part--;	
	return part+1;
}

const char*  previous_not_delim(const char * part, delimited * divide){
	if(part == NULL) return NULL;
	while ( *part != divide->sign && *part != *(divide->textStart)) part--;
	if(*part == *(divide->textStart)) return part;
	return part+1;
}


