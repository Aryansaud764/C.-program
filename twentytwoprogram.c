
#include <stdio.h>
int main(){
    int outertemperature,bodytemperature;

    printf("enter your outer temoerature\n");
    scanf("%d",&outertemperature);

    printf("enter your body temperature\n");
    scanf("%d",&bodytemperature);

    if (outertemperature>bodytemperature){
        printf("there is chances of you gonna sick\n");
    }
    else if( outertemperature<bodytemperature){
        printf("there is less chances of you gonna sick\n");
    }
    else if (outertemperature==bodytemperature){
        printf("there is no chances of you gonna sick\n");
    }
    else{
        printf("you enter invalid value\n");
        printf("sorry i can't read this value\n");
    }

    return 0;
}