#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int igetline(char line[], int maxline)
  {
  int c, i;
  for (i=0; i < maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
  line[i] = c;
  if (c == '\n') {
  line[i] = c;
  ++i;
  }
  line[i] = '\0';
  return i;
  }

int removeline(char line[]){
int a;
a=0;
while(line[a]!='\n'){++a;}
--a;
while((a>0)&&((line[a] == ' ') || (line[a] =='\t'))){--a;}
if( a >= 0) /* Non Empty Line */
{
++a;
line[a] = '\n';
++a;
line[a] = '\0';
}
return a;
}
int main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
max = 0;
while ((len = igetline(line, MAXLINE)) > 0)
if ( removeline(line)> max) {

printf("%s", line);

}
return 0;
}
