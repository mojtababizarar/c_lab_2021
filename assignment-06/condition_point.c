/*
* Project name: condition_point
--------------------------------------------
    ID:9931007
    Name:mojtaba bizarar
    Mail:mobi@aut.ac.ir
--------------------------------------------
*/
#include <stdio.h>

int main(){
    //write your code here
    int x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    float m1=(float)y2-y1 / x2-x1;
    float m2=(float)y3-y2 / x3-x2;
    float m3=(float)y4-y3 / x4-x3;
    float m4=(float)y4-y1 / x4-x1;
    float m5=(float)y3-y1 / x3-x1;
    float m6=(float)y4-y2 / x4-x2;
    if(m1 == m2 == m3)
    {printf("All in one line");}
    else if( ((m1==m5) != m4) || ((m1==m4) != m5) || ((m4==m5) != m1) || ((m3==m6) != m4))
    { printf("Three in one line");}
    else if( (m1 == m3) || (m4 == m2) || (m5 == m6) )
    { printf("Diamond");}
    else
    {printf("None");}
}
