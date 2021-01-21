#ifndef OP_HPP
#define OP_HPP

#include "base.hpp"
using namespace std;
#include <string>
#include <iostream>
#include <stdio.h>

class Op : public Base {
    private:
        double num;
    public:
        Op() : num(0) { }
        Op(double value) : num(value) { }
        double evaluate() { return num; }
        std::string stringify() {
	 return to_string(num); }
};

class SevOpMock: public Base {
    public:
        SevOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};

#endif //OP_HPP
