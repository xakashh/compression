#ifndef __HEADER_FILE
#define __HEADER_FILE

int displaymenu();
int compression();
int decompression();
char* creatMarray(int);
int codelength(int);
int compress2(int,char *);
int compress3(int,char *);
int compress4(int,char *);
int compress5(int,char *);
int compress6(int,char *);
int compress7(int,char *);
int openfile(char *);
int findindex(char,char *);
int decompress2(int,char *);
int decompress3(int,char *);
int decompress4(int,char *);
int decompress5(int,char *);
int decompress6(int,char *);
int decompress7(int,char *);
int (*compress[6])(int,char *);
int down();
#endif
