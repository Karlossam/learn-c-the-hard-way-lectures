#include <stdio.h>

void usage() {
    printf("Usage:\n");
    printf("./mine ARG1 [ARG2 ARG3 ...]\n");
}

int main(int argc, char *argv[]) {
	if(argc == 1) {
		printf("Es necesario un argumento\n");
        usage();
	} else if(argc > 1 || argc < 4) {
		printf("Tus argumentos son:\n");	
		int i = 0;
		for(i=0; i<argc; i++) {
            if(sizeof(argv[i]) <= 7){
                printf("%d - %s\n", i, argv[i]);
                printf("%ld\n", sizeof(argv[i]));
            }
            else {
                int o;
                for(o=0; o < sizeof(argv[i]); o++) {
                    if('a' == argv[i][o]) {
                        printf("Cheeky Cheeky %s\n", argv[i]);
                    }
                }
            }
			
		}
	} else {
		printf("Te pasaste\n");	
	}

	return 0;
}