//进度条


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define M 101
#define STYLE '#'
void ProncessOn()
{
    int cnt = 0;
    char bar[M];
    memset(bar,'\0',sizeof(bar));

    const char * lable = "|\\-/";

    while(cnt<=100)
    {
        printf("[%-100s][%d%%][%c]\r",bar,cnt,lable[cnt%4]);
        fflush(stdout);
        bar[cnt++] = STYLE;
        usleep(50000);
    }

    printf("\n");
}

int main(void)
{
    ProncessOn();


    return 0;

}