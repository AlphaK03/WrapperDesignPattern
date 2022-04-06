//
// Created by Key Cortés on 6/4/2022.
//

#include "Client.h"

void Client::clientPetition(IComponent *component) {
    printf("RESULT: ");
    component->operation();
}
