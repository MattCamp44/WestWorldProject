#include "Miner.h"

void Miner::Update()
{

	m_iThirst += 1;

	if (m_pCurrentState) {

		m_pCurrentState->Execute(this);

	}

}
