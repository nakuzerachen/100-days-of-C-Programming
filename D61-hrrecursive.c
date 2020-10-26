/*Day 61 - HackerRank:Recursive Sequence*/
#include <stdio.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) 
{
    if(n>3)
        return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
    else if(n==3)
        return c;
    else if(n==2)
        return b;
    else
        return a;
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}