//
// Created by Key Cortés on 6/4/2022.
//

#include "DecorationA.h"

DecorationA::DecorationA(IComponent *component) : Decorator(component) {}

void DecorationA::operation() {
    printf("DecorationA + (");
    Decorator::operation();
    printf(")");
}
