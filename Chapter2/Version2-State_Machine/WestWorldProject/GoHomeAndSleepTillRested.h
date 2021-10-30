#pragma once
#include "State.h"
class GoHomeAndSleepTilRested :
    public State
{

private:

   

    GoHomeAndSleepTilRested() {};

public:

    //Singleton instance
    static GoHomeAndSleepTilRested* Instance();

    virtual void Enter(Miner* pMiner);

    virtual void Execute(Miner* pMiner);

    virtual void Exit(Miner* pMiner);


};

