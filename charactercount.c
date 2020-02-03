#include <stdio.h>
#include<ctype.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
#define MAXWORD 25
#include <string.h>

int main(int argc, const char *argv[])
{
  char wordbuf[50];
  int index =0;
  memset(wordbuf,0, sizeof(wordbuf));
long nc, nl, nw;
int c, state = OUT;
nc = nl = nw = 0;
int words[25];
memset(words,0,sizeof(words));

while ((c = getchar()) != EOF) {

++nc;
if(isalpha(c)){wordbuf[index++]=c;}
// c(0) ca(1) cat(2) d(3) catd(3)
                  // get cat count it copy d back to begginning of wb
                  // d(0)
if (c == '\n')
++nl;
if (c == ' ' || c == '\n' || c =='\t')
state = OUT;
else if (state == OUT) {
state = IN;
++nw;
words[index]++;
wordbuf[0]=wordbuf[index];
index=0;
}
}
printf("%ld  chars %ld words %ld lines \n", nc, nw, nl);
int counter;
int c2;
c2=0;
counter =0;
for(int i =0; i < MAXWORD; i++){
    printf("%2d: |",i+1);

    for(int j = 0; j < words[i]; j++){
     putchar('#');
     c2++;
     if(c2%5==0){printf("|");}
   }
    printf("\n");
    c2=0;
    counter++;
    if(counter%4==0){printf("====================================================================================== \n");}
}
for(int a =0;  a < MAXWORD; a++){
    printf("%d|",a+1);
  }


return 0;
}
