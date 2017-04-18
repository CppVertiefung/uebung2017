/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//#include <qt/QtCore/qstring.h>
#include "ttime.h"

TTime::TTime() {
    setCurrentTime();
}

TTime::TTime(unsigned char hour, unsigned char minute, unsigned char second) {
    if (hour < 24 && hour >= 0)
        this->hour = hour;
    else
        this->hour = 0;
    if (minute < 60 && minute >= 0)
        this->minute = minute;
    else
        this->minute = 0;
    if (second < 60 && hour >= 0)
        this->second = second;
    else
        this->second = 0;
}

TTime::TTime(unsigned char hour, unsigned char minute) {
    if (hour < 24 && hour >= 0)
        this->hour = hour;
    else
        this->hour = 0;
    if (minute < 60 && minute >= 0)
        this->minute = minute;
    else
        this->minute = 0;
    second = 0;
}

void TTime::print() {
    printf("%02hhu:%02hhu:%02hhu", hour, minute, second);
}

void TTime::setCurrentTime() {
    time_t t;
    struct tm *now;

    time(&t);
    now = localtime(&t);

    hour = (unsigned char) now->tm_hour;
    minute = (unsigned char) now->tm_min;
    second = (unsigned char) now->tm_sec;
}