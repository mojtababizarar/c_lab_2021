/*
* Project name: less_conditions
--------------------------------------------
    ID:9931007  
    Name:mojtaba bizarar
    Mail: mobi@aut.ac.ir
--------------------------------------------
*/
#include <stdio.h>

int main(){
    //write your code here
    
    int m1,m2,m3,n1,n2,n3;
    int maxm =0 , maxn = 0;
    scanf("%d%d%d%d%d%d",&m1 , &n1 , &m2 , &n2 , &m3 , &n3);
    if ( m1>m2 && m1>m3)
        maxm= m1;
    else if ( m2>m1 && m2>m3)
        maxm= m2;
    else if ( m3>m2 && m3>m1)
        maxm= m3;
    else if(m1 == m2 && m1 == m3)
        maxm = m1;
    if ( n1<n2 && n1<n3)
        maxn= n1;
    if ( n2<n1 && n2<n3)
        maxn= n2;
    if ( n3<n2 && n3<n1)
        maxn= n3;
    else if (n1 == n2 && n1== n3)
        maxn = n1;
    if(maxm < maxn)
        printf("(%d %d)",maxm , maxn);
    return 0;
}
