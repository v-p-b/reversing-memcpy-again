#include<string.h>
#include<stdlib.h>

int main(int argc, char** argv){
    char *buf0;
    char *buf1;

    unsigned int len=atoi(argv[1]);
    buf0=malloc(len);
    buf1=malloc(len);
    memset(buf0,'A',len);
    memcpy(buf1,buf0,len);
    return 0;
}
