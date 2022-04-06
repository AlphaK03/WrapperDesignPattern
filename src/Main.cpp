//
// Created by Key Cortés on 6/4/2022.
//
#include "iostream"
#include "IComponent.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "Client.h"
#include "DecorationA.h"
#include "DecorationB.h"

using namespace std;
int main(){

    IComponent* simple = new ConcreteComponent;
    std::cout << "Client: I've got a simple component:\n";
    Client client;
    client.clientPetition(simple);
    std::cout << "\n\n";


    IComponent* decorator1 = new DecorationA(simple);
    IComponent* decorator2 = new DecorationB(decorator1);
    std::cout << "Client: Now I've got a decorated component:\n";
    client.clientPetition(decorator2);
    std::cout << "\n";

    delete simple;
    delete decorator1;
    delete decorator2;

    
    return 0;
}