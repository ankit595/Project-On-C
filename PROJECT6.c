#include <stdio.h>
#include <time.h>
int main() 
{
   time_t s, val = 1;
   struct tm* curr_time;
   s = time(NULL); //This will store the time in seconds
   curr_time = localtime(&s); //get the current time using localtime function
      //Display in HH:mm:ss format
      printf("%02d:%02d:%02d", curr_time->tm_hour, curr_time->tm_min,curr_time->tm_sec);
}
