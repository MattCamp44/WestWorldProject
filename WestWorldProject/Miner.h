#pragma once
#include "BaseGameEntity.h"
class Miner :
    public BaseGameEntity
{

private:

    State* m_pCurrentState;

    location_type m_location;

    int m_iGoldCarried;

    int m_iMoneyInBank;

    int m_iThirst;

    int m_iFatigue;



public:

    Miner(int ID);

    void Update();

    void ChangeState(State* pNewState);





};

