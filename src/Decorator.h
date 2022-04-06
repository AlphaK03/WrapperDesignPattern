//
// Created by Key Cortés on 6/4/2022.
//

#ifndef WRAPPERDESIGNPATTERN_DECORATOR_H
#define WRAPPERDESIGNPATTERN_DECORATOR_H
#include "IComponent.h"
class Decorator : public IComponent{
protected:
    IComponent * component;
public:
    Decorator(IComponent *component);

    void operation() override;
};


#endif //WRAPPERDESIGNPATTERN_DECORATOR_H
