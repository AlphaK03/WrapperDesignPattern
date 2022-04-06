//
// Created by Key Cortés on 6/4/2022.
//
#ifndef WRAPPERDESIGNPATTERN_ICOMPONENT_H
#define WRAPPERDESIGNPATTERN_ICOMPONENT_H
#include "iostream"

using namespace std;
class IComponent {
public:
    IComponent() = default;

    virtual ~IComponent() = default;

    virtual void operation() = 0;
};


#endif //WRAPPERDESIGNPATTERN_ICOMPONENT_H
