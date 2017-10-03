#include <stdio.h>
#include <dirent.h>

int main(int argc, char** argv) {
	if(argc == 2) {
		DIR* d;
		struct dirent* dir;
		d = opendir(argv[1]);
		if(d) {
			while((dir = readdir(d)) != NULL) {
				printf("%s\n", dir->d_name);
			}
		}else{
			printf("the directory could not be found\n");
		}
		closedir(d);
	}else{
		printf("The dirpath given was faulty\n");
	}
	return 0;
}
