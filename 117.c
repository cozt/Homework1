#include <stdio.h>
#include <string.h>
#define MAXLINE 1000 /* maximum input line length */
int mgetline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
max = 0;
while ((len = mgetline(line, MAXLINE)) > 0)
if (len > 80) {
printf("This line is longer than 80 character: %s   %d \n", line, len);
}
else{printf("Line is less than 80 characters: %d \n", len);}
return 0;
}


int mgetline(char line[],int maxline)
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
