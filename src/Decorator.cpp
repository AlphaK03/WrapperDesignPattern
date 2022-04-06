//
// Created by Key Cortés on 6/4/2022.
//

#include "Decorator.h"


void Decorator::operation() {
    this->component->operation();
}

Decorator::Decorator(IComponent *component) : component(component) {}
