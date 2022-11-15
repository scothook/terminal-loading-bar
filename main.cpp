#include <iostream>
#include <string>
#include "ProgressBar.h"

//ascii color codes
std::string colors [8] = {"\x1B[31m", "\x1B[32m", "\x1B[33m", "\x1B[34m", "\x1B[35m", "\x1B[36m", "\x1B[37m", "\x1B[30m"};

int main(int argc, char *argv[])
{
    //Default settings
    int secs = 1000;
    std::string design = "°º¤ø,¸¸,ø¤º°`°º¤ø,¸,ø¤°º¤ø,¸¸,ø¤º°`°º¤ø,¸";

    //Interpret user input
    if(argc == 2)
    {
       secs = atoi(argv[1]);
    }
    std::chrono::seconds duration(secs);



  int currentColor = 0;
    //Print a progress bar for a number of seconds.
  while(true){
    std::cout << colors[currentColor];
    printProgressBar(duration); 
    currentColor = (currentColor + 1) % 8;
  }
  return 0;
}
