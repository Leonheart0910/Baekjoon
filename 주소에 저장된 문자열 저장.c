#include <stdio.h> 
void my_strcpy(char *psrc, char *pdst) {
	int i;
	for(i=0; *(psrc+i)!=0; ++i)
		*(pdst+i) = *(psrc+i);
}
int main(void) {
	char src_msg[] = "Hello, World\n";
	char dst_msg[256];

	my_strcpy(src_msg, dst_msg);
	printf("%s%s",src_msg,dst_msg);
	return 0;
}
