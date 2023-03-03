#include <stdio.h>

#include <stdlib.h>

 

int main(void)

{	

	FILE *fp_gates;

	FILE *fp_steve;

	FILE *fp_xor;

	FILE *fp_print;

	char buffer1,buffer2,buffer3;

 

	int i;

	

	fp_gates = fopen("C:\Users\82109\Desktop\DEV.C\문정욱 C언어\gates.txt","rb");

	fp_xor = fopen("C:\Users\82109\Desktop\DEV.C\문정욱 C언어\xor.txt","rb");

	fp_steve = fopen("C:\Users\82109\Desktop\DEV.C\문정욱 C언어\steve.txt","wb");

	

	for(i=0;i<780;i++) {

		fread(&buffer1,sizeof(char),1,fp_gates);

		fread(&buffer2,sizeof(char),1,fp_xor);

		buffer3 = buffer1 ^ buffer2;

		fwrite(&buffer3,sizeof(char),1,fp_steve);

	}

	

	fclose(fp_steve);

	fp_print = fopen("steve.txt","rb");

	

	if(fp_print==NULL) {

		printf("해당 파일이 없음\n");

		exit(1);

	}

	while(fread(&buffer3,sizeof(char),1,fp_steve)==1) {

		printf("%c", buffer3);

	}

	fclose(fp_gates);

	fclose(fp_steve);

	fclose(fp_xor);

	

	return 0;

}
