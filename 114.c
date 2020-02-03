#include<stdio.h>
#define MAX 128

int main(void)
{
int a ,b,c;
int character[MAX];
for(b=33;b<MAX;++b){character[b] = 0; }
while((a=getchar())!=EOF){++character[a];}
for(b=33;b<MAX;++b)  {

printf( "%c |",b);
for(c=0;c<character[b];++c)
printf("#");
printf("\n");
}
return 0;
}
