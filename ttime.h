/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ttime.h
 * Author: gabriel
 *
 * Created on 18. April 2017, 16:39
 */

#ifndef TTIME_H
#define TTIME_H

#include <stdio.h>
#include <ttime.h>
#include <iostream>

class TTime {
    private:
        unsigned char hour;
        unsigned char minute;
        unsigned char second;
    public:
        TTime();
        TTime(unsigned char hour, unsigned char minute);
        TTime(unsigned char hour, unsigned char minute, unsigned char second);
        void print();
        void setCurrentTime();
};

#endif /* TTIME_H */

