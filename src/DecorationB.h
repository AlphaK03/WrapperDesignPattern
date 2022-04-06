//
// Created by Key Cortés on 6/4/2022.
//

#ifndef WRAPPERDESIGNPATTERN_DECORATIONB_H
#define WRAPPERDESIGNPATTERN_DECORATIONB_H
#include "Decorator.h"

class DecorationB : public Decorator{
public:
    DecorationB(IComponent *component);

    void operation() override;
};


#endif //WRAPPERDESIGNPATTERN_DECORATIONB_H
