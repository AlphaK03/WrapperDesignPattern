//
// Created by Key Cortés on 6/4/2022.
//

#ifndef WRAPPERDESIGNPATTERN_CONCRETECOMPONENT_H
#define WRAPPERDESIGNPATTERN_CONCRETECOMPONENT_H
#include "IComponent.h"

class ConcreteComponent : public IComponent{
public:
    void operation() override;
};


#endif //WRAPPERDESIGNPATTERN_CONCRETECOMPONENT_H
