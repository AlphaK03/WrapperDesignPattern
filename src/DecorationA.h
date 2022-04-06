//
// Created by Key Cortés on 6/4/2022.
//
#include "Decorator.h"
#ifndef WRAPPERDESIGNPATTERN_DECORATIONA_H
#define WRAPPERDESIGNPATTERN_DECORATIONA_H


class DecorationA : public Decorator{
public:
    DecorationA(IComponent *component);
    void operation() override;
};


#endif //WRAPPERDESIGNPATTERN_DECORATIONA_H
