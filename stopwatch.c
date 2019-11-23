#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
    int hr, mn, sc;
    hr=mn=sc=0;
    while(1){
        system("clear");
        printf("%02d:%02d:%02d ",hr,mn,sc);
        fflush(stdout);
        sc++;
        if(sc==60){
            mn+=1;
            sc=0;
        }
        if(mn==60){
            hr+=1;
            mn=0;
        }
        if(hr==24){
            hr=0;
            mn=0;
            sc=0;
        }
        sleep(1);
    }
    return(0);
}
