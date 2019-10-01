#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    clock_t begin = clock();

    FILE *ftxtfile;

    ftxtfile = fopen("C://CA//Output.txt","w");

    for (int i = 0; i <=100 ; ++i) {
        fprintf(ftxtfile,"%d\n",i);
        printf("%d\n",i);

    }
    system("getmac");

    clock_t end = clock();

    float time = (float)(end-begin)/CLOCKS_PER_SEC;

    fprintf(ftxtfile,"Total Time Spent to Process: %f",time);

    fclose(ftxtfile);
}
