#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    private:
	Base* num1;
        Base* num2;
    public:
        Div(Base* value1, Base* value2) : num1(value1), num2(value2){ }
        double evaluate() { return num1 -> evaluate() / num2 -> evaluate(); }
        std::string stringify() { return  "("+ num1 -> stringify()+ " / "+ num2 -> stringify()+")"; }
};

class DivOpMock: public Base {
    public:
        DivOpMock() { }
        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};


#endif //__DIV_HPP__

