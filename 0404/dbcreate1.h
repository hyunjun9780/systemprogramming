#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "student.h"

int main(int argc, int argv[]){
	int fd;
	struct record, student;
	if(argc < 2){
		fprintf(stderr,"사용버: %sfile\n",argv[0]);
		exit(1);
	}
	if(fd = open(argv[1],O_WRONLY|O_CREAT|O_EXEL,0640)==-1){
		perror(argv[1]);
		exit(2)
	}
	print("%-9s학번 %-8s이름 %-4s점수",학번,이름,점수);
	while(scanf("%d %s %d",&record.id %
