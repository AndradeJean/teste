#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * fp;
	char x,ret;
	
	fp=fopen("top.txt", "r");
	
	if (fp==NULL){
		printf("nao existe");
		exit(1);
	}
	ret=fscanf(fp,"%c",&x);
	
	while (ret!=EOF){
		printf("%c",x);
		ret=fscanf(fp,"%c",&x);
	}
	fclose(fp);
	return 0;
}
