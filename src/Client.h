//
// Created by Key Cortés on 6/4/2022.
//

#ifndef WRAPPERDESIGNPATTERN_CLIENT_H
#define WRAPPERDESIGNPATTERN_CLIENT_H
#include "IComponent.h"

class Client {
public:
    void clientPetition(IComponent* component);
};


#endif //WRAPPERDESIGNPATTERN_CLIENT_H
