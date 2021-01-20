#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
using namespace std;
#include <string>

class Op : public Base {
    private:
	double num;
    public:
	Op() : num(0) { }
        Op(double value) : num(value) { }
        virtual double evaluate() { return num; }
        virtual std::string stringify() { return to_string(num); }
};


#endif //__OP_HPP__
