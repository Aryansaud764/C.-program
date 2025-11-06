#include <Stdio.h>
int main(){
    int i;

    for(i=1; i<=20; i++){
        if (i == 6) {
            continue;
           
        }
        printf("%d\n", i);
    }
    
    return 0;
}