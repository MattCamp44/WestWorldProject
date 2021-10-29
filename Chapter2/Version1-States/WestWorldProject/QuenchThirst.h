#pragma once
#include "State.h"
class QuenchThirst :
    public State
{

private:

    QuenchThirst() {};

public:

    //Singleton instance
    static QuenchThirst* Instance();

    virtual void Enter(Miner* pMiner);

    virtual void Execute(Miner* pMiner);

    virtual void Exit(Miner* pMiner);


};

