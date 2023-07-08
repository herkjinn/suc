#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *cmd;
int main(int argc, char *argv[]){
	int size;
	for (int i=1; i<argc; i++){
		size += (sizeof(argv[i]) / sizeof(char*));
	}
	cmd = (char*) malloc(size);
	strcat(cmd, "/bin/su -c \"");
	for (int i=1;i<argc;i++){
		strcat(cmd, argv[i]);
		strcat(cmd, " ");
	}
	strcat(cmd, "\"");
	printf("executing: %s\n", cmd);
	int returncode = system(cmd);
	free(cmd);
	return returncode;
}
