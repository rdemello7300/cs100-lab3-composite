#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return ""; }
};

class SevenOpMock : public Base{
    public: 
        SevenOpMock(){ }
	virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

class NegOpMock : public Base{
    public:
	NegOpMock() { }
	virtual double evaluate() { return -7.5; }
        virtual std::string stringify() { return "-7.5"; }
};

#endif //__OP_HPP__
