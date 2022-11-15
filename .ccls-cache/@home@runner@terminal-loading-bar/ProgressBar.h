#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include <iostream>
#include <chrono>
#include <thread>
#include <math.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

//Ascii color codes!! 
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

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
