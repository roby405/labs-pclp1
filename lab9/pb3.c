#include <stdio.h>
#include <string.h>
#include <time.h>

char* timestr(struct tm t, char* time) {
  char h[3];
  char m[3];
  char s[3];
  sprintf(h, "%d", t.tm_hour);
  sprintf(m, "%d", t.tm_min);
  sprintf(s, "%d", t.tm_sec);
  strcat(time, h);
  strcat(time, ":");
  strcat(time, m);
  strcat(time, ":");
  strcat(time, s);
  return time;
}

int main() {
  char s[10];
  time_t unixTime = time(NULL);
  printf("%s", timestr(*localtime(&unixTime), s));
  return 0;
}