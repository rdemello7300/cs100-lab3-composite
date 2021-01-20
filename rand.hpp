#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
using namespace std;

class Rand : public Base {
    public:
	int r = rand() % 100;
        Rand() : Base() { }
        virtual double evaluate() { return r; }
        virtual std::string stringify() { return std::to_string(r); }
};

#endif //__OP_HPP__

