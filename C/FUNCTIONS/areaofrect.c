#include <stdio.h>
int areaofrect(int len,int breadth){
    int area;
    area=len*breadth;
    return area;
}

int main(){
    int l=10, b=5;
    int area = areaofrect(l,b);
    printf("AREA = %d",area);
}
