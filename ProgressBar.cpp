#include "ProgressBar.h"

void printProgressBar(std::chrono::seconds time_duration)
{
    using namespace std::chrono;

    auto secondsDuration = time_duration.count();
    long count = 1;

    while(count <= secondsDuration)
    {
        float percent = float(count) / secondsDuration;
        printLine(percent);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        count ++;
    }

}

void printLine(float percent)
{
    int lineLength = getLineLength() - 1;
    int progress = floor(percent * lineLength);
    std::cout << "\r" << KCYN;
    for(int i=0; i < progress; i++)
    {
        std::cout << "=";
    }

    std::cout << "|" << std::flush; 
    std::cout << RST;
}

int getLineLength()
{
    struct winsize w; 
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    return w.ws_col;
}
