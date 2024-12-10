#include <stdio.h>
#include <time.h>

int main() {
  time_t unixTime = time(NULL);
  struct tm timeStruct = *localtime(&unixTime);
  printf("%s", asctime(&timeStruct));
  printf("%s", ctime(&unixTime));
  return 0;
}