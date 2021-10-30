#include "EnterMineAndDigForNugget.h"
#include<iostream>
#include "EntityNames.h"
#include "VisitBankAndDepositGold.h"
#include "QuenchThirst.h"

EnterMineAndDigForNugget* EnterMineAndDigForNugget::Instance()
{

	static EnterMineAndDigForNugget instance;

	return &instance;
}

void EnterMineAndDigForNugget::Enter(Miner* pMiner)
{

	if (pMiner->Location() != goldmine) {

		std::cout << "\n" << GetNameOfEntity(pMiner->ID()) << ": " << "Walkin' to the gold mine";

		pMiner->ChangeLocation(goldmine);
	}



}

void EnterMineAndDigForNugget::Execute(Miner* pMiner)
{

	pMiner->AddToGoldCarried(1);

	pMiner->IncreaseFatigue();

	std::cout << "\n" << GetNameOfEntity(pMiner->ID()) << ": " << "Pickin' up a nugget";

	if (pMiner->PoketsFull()) {

		pMiner->ChangeState(VisitBankAndDepositGold::Instance());

	}

	if (pMiner->Thirsty()) {


		pMiner->ChangeState(QuenchThirst::Instance());

	}

}

void EnterMineAndDigForNugget::Exit(Miner* pMiner)
{

	std::cout << "\n" << GetNameOfEntity(pMiner->ID()) << ": " << "Ah'm leavin' the gold mine with mah pockets full o' sweet gold"; 


}
