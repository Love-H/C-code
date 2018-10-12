#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "I LOVE YOU!";
	printf("sizeof str = %d\n", sizeof(str));
	printf("strlen str = %u\n", strlen(str));
	
	char str1[] = "Original String";
	char str2[] = "New String";
	char str3[100];
	char str4[] = "Love";
	
	strcpy(str2, str1);
	strcpy(str3, "CopySuccessful");
	
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	
	strncpy(str4,str3, 5);
	str4[5] = '\0';			//srtncpy不会自己添加结束符 
	printf("str4: %s\n", str4);

	return 0;  
}

















