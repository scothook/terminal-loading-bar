#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include <iostream>
#include <chrono>
#include <thread>
#include <math.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * \breif Print out a progress incrementing over some duration of seconds. 
 *
 * @param time_duration The duration in seconds that the progress bar should
 *          print over. 
 */
void printProgressBar(std::chrono::seconds time_duration);

/**
 * Print some percentage of a line of '=' characters. The total length
 * of the line is the number of columns available in the terminal you call 
 * this in. 
 *
 * @param percent The percentage of the line to print. 
 */
void printLine(float percent);

/**
 * Get the line length of the termial
 */
int getLineLength();

#endif
