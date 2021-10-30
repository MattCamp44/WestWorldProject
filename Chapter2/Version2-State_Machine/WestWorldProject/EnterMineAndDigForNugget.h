#pragma once
#include "State.h"

class EnterMineAndDigForNugget :
    public State
{

private:

    EnterMineAndDigForNugget() {};

public:

    //Singleton instance
    static EnterMineAndDigForNugget* Instance();
    
    virtual void Enter(Miner* pMiner);

    virtual void Execute(Miner* pMiner);

    virtual void Exit(Miner* pMiner);


};

