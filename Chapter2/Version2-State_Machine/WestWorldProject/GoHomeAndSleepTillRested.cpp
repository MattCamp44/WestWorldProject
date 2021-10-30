#include "GoHomeAndSleepTillRested.h"
#include "EnterMineAndDigForNugget.h"

#include <iostream>

GoHomeAndSleepTilRested* GoHomeAndSleepTilRested::Instance()
{
    static GoHomeAndSleepTilRested instance;

    return &instance;
}

void GoHomeAndSleepTilRested::Enter(Miner* pMiner)
{

    std::cout << "\n" << "Walking home";

    pMiner->ChangeLocation(shack);



}

void GoHomeAndSleepTilRested::Execute(Miner* pMiner)
{

    if (!pMiner->Fatigued()) {
    
        std::cout << "\n" << "Time to go back to the mine!";

        pMiner->ChangeState(EnterMineAndDigForNugget::Instance());
    
    }
    else {
    
        pMiner->DecreaseFatigue();

        std::cout << "\n" << "Zzz Zzz Zzz";

    
    }


}

void GoHomeAndSleepTilRested::Exit(Miner* pMiner)
{

    std::cout << "\n" << "Leaving the house!";


}
