//
// Created by Key Cortés on 6/4/2022.
//

#include "DecorationB.h"

DecorationB::DecorationB(IComponent *component) : Decorator(component) {}

void DecorationB::operation() {
    printf("DecorationB + (");
    Decorator::operation();
    printf(")");
}
