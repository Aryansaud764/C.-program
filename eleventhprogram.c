
//in this program we gonna used if and else statement

#include <stdio.h>
int main(){
    int light;
    int red = 1;
    int green =2;
    int yellow =3;

    printf("enter the light colour 1 for red 2 for green and 3 for yellow\n");
    scanf("%d",&light);
    
    if(light == red ){
        printf("stope\n");
    }

    else if (light==yellow){
        printf("ready to go\n");
    }
    else{
        printf("go\n");
    }

    return 0;
}