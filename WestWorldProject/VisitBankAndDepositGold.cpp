#include "VisitBankAndDepositGold.h"
#include<iostream>
#include "EntityNames.h"
#include "EnterMineAndDigForNugget.h"
#include "GoHomeAndSleepTillRested.h"

VisitBankAndDepositGold* VisitBankAndDepositGold::Instance()
{
    static VisitBankAndDepositGold instance;

    return &instance;
}

void VisitBankAndDepositGold::Enter(Miner* pMiner)
{


    if (pMiner->Location() != bank) {

        std::cout << "\n" << GetNameOfEntity(pMiner->ID()) << " Going to the bank...";

        pMiner->ChangeLocation(bank);

    }





}

void VisitBankAndDepositGold::Execute(Miner* pMiner)
{

    pMiner->AddToWealth(pMiner->GoldCarried());

    pMiner->SetGoldCarried(0);

    std::cout << "\n" << "Putting gold in the bank. Money in the bank now: " << pMiner->Wealth();

    if (pMiner->Wealth() >= ComfortLevel) {
    
        pMiner->ChangeState(GoHomeAndSleepTilRested::Instance());
    
    }
    else {
    
        pMiner->ChangeState(EnterMineAndDigForNugget::Instance());
    
    }
}

void VisitBankAndDepositGold::Exit(Miner* pMiner)
{

    std::cout << "\n" << "Leaving the bank";


}
