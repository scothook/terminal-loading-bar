#include <iostream>
#include "ProgressBar.h"

int main(int argc, char *argv[])
{
    //Figure out how many seconds to progressbar for
    int secs = 10;
    if(argc == 2)
    {
       secs = atoi(argv[1]);
    }
    std::chrono::seconds duration(secs);
    //Print a progress bar for a number of seconds.
    printProgressBar(duration); 
    return 0;
}
