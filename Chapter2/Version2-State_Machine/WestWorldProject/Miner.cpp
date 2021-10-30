#include "Miner.h"
#include <cassert>
#include "State.h"
#include "GoHomeAndSleepTillRested.h"

Miner::Miner(int id) : BaseGameEntity(id) , 
						m_location(shack) , 
						m_iGoldCarried(0) ,
						m_iMoneyInBank(0) ,
						m_iThirst(0),
						m_iFatigue(0),
						m_pCurrentState(GoHomeAndSleepTilRested::Instance())

{}



void Miner::Update()
{

	m_iThirst += 1;

	if (m_pCurrentState) {

		m_pCurrentState->Execute(this);

	}

}

void Miner::ChangeState(State* pNewState)
{

	assert(m_pCurrentState && pNewState);

	m_pCurrentState->Exit(this);

	m_pCurrentState = pNewState;

	m_pCurrentState->Enter(this);


}
