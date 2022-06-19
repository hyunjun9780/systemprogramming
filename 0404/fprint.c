#include <stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char buffer[10] = {
		0,
	};
	if(argc<2)
		fp = stdin;
	else
		fp = fopen(argv[1],"r");
	
	fseek(fp,17,SEEK_SET);
	fread(buffer,4,1,fp);
	printf("%s\n",buffer);
	fclose(fp);
	return 0;
}
