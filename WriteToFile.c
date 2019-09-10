#include <stdio.h>
#include <time.h>

int main() {
    clock_t begin = clock();
    //මේකෙන් තමා වෙලාව මනින්නේ. උඩ time.h ලයිබ්‍රි එකේ ෆන්ශන් එකක් මේක.
    //begin වලින් පටන් ගත්තු වේලාව සටහන් වෙනව.

    FILE *ftxtfile;
    //මේ තමා ෆයිල් වල ඩේටා ටයිප් එක.

    ftxtfile = fopen("මචන් මෙතන ෆයිල් පාත් එක","w");
    //මේකෙන් තමා ෆයිල් එක ඕපන් කරන්නෙ. අග තියන
    //W එකෙන් කියන්නෙ write මෝඩ් එකෙන් ඕපන් කලා කියල.
    for (int i = 0; i <=100 ; ++i) {
        fprintf(ftxtfile,"%d\n",i);
        //fprint කියන්නෙ print to file කියන එක.
        //මේ ලූප් එකෙන් ෆයිල් එකට 1 ඉඳන් 100ට රයිට් වෙනව.
    }
    clock_t end = clock();
    //end වලින් ඉවර උන වෙලාව සටහන් වෙනව.
    double time = (double)(end-begin)/CLOCKS_PER_SEC;
    //දැන් ඉවර වෙච්ච වෙලාවෙන් පටන්ගත්තු වෙලාව අඩු කරල තප්පර වලට හරවල time වෙරියබල් එකට දානව.
    fprintf(ftxtfile,"%f",time);
    //ඒක ෆයිල් එකේ අගට රයිට් කරනව.
    fclose(ftxtfile);
    //දැන් ෆයිල් එක ක්ලෝස් කරනව.
}
