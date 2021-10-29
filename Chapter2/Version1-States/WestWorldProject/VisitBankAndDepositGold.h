#pragma once
#include "State.h"
class VisitBankAndDepositGold :
    public State
{

private:

    const static int ComfortLevel = 20;

    VisitBankAndDepositGold() {};

public:

    //Singleton instance
    static VisitBankAndDepositGold* Instance();

    virtual void Enter(Miner* pMiner);

    virtual void Execute(Miner* pMiner);

    virtual void Exit(Miner* pMiner);



};

