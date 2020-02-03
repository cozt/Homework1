#include <stdio.h>
#include <string.h>
#define MAXLINE 1000 /* maximum input line length */
int mgetline(char line[], int maxline);
void reverse(char line[]);
/* print the longest input line */
int main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
max = 0;
while ((len = mgetline(line, MAXLINE)) > 0)
reverse(line);
printf("\n");
return 0;
}
/* getline: read a line into s, return length */
int mgetline(char line[], int maxline)
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
/* copy: copy 'from' into 'to'; assume to is big enough */
void reverse(char line[])
{
  int c, i, b;
  b= 0;

  for (i=(strlen(line)-1); i >= 0 ; --i)
  {
    printf("%c", line[i]);

  }
  printf("\n");
}
