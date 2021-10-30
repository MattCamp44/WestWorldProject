#include "QuenchThirst.h"
#include<iostream>
#include "EnterMineAndDigForNugget.h"

QuenchThirst* QuenchThirst::Instance()
{
    static QuenchThirst instance;

    return &instance;
}

void QuenchThirst::Enter(Miner* pMiner)
{

    std::cout << "\n" << "Going to the bar!";

    if(pMiner->Location() != saloon)
        pMiner->ChangeLocation(saloon);

}

void QuenchThirst::Execute(Miner* pMiner)
{

    if (pMiner->Thirsty()) {

        std::cout << "\n" << "Drinking at the saloon...";

        pMiner->BuyAndDrinkAWhiskey();

        pMiner->ChangeState(EnterMineAndDigForNugget::Instance());

    }
    else {

        std::cout << "\n" << "ERROR";

    }


}

void QuenchThirst::Exit(Miner* pMiner)
{

    std::cout << "\n" << "Leaving the saloon";

}
