/*
 * File:   tperson.h
 * Author: phil
 *
 * Created on 25. April 2017, 23:20
 * Updated on 04. June 2017 by phil
 */

#ifndef TPERSON_H
#define TPERSON_H

#include <string>
#include <stdio.h>
#include <fstream>

#include "tdate.h"
#include "taddress.h"

namespace std {

    class TPerson : public TParser {
    protected:
        string name;
        TAddress address;
        TDate birth;

    public:
        TPerson();
        TPerson(string name, TAddress address, TDate birth);
        virtual ~TPerson();

        void setName(string name);
        void setAddress(TAddress address);
        void setBirth(TDate birth);
        virtual void load(ifstream &stream);

        string getName();
        TAddress getAddress();
        TDate getBirth();

        virtual void print();
    };

} // std
#endif /* TPERSON_H */
