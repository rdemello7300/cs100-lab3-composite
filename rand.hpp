#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
using namespace std;
#include<time.h>

class Rand : public Base {
    private:
        double num;
    public:
        Rand() : num(rand() % 100) { }
        double evaluate() { return num; }
        std::string stringify() { return to_string(num); }

};

#endif //__OP_HPP__

