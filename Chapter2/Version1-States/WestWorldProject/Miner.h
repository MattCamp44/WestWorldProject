#pragma once
#include "BaseGameEntity.h"
#include "Locations.h"


class State;

class Miner : public BaseGameEntity
{

private:

    State * m_pCurrentState;

    location_type m_location;

    int m_iGoldCarried;

    int m_iMoneyInBank;

    int m_iThirst;

    int m_iFatigue;

    



public:

    Miner(int ID);

    void Update();

    void ChangeState(State* pNewState);

    location_type Location() { return m_location; }

    void ChangeLocation(location_type location) { m_location = location; }

    void AddToGoldCarried(int gold) { m_iGoldCarried += gold; }

    void IncreaseFatigue() { m_iFatigue++; }

    bool PoketsFull() { return m_iGoldCarried > 10; }

    bool Thirsty() { return m_iThirst > 10; }

    int GoldCarried() { return m_iGoldCarried; }

    void AddToWealth(int amount) { m_iMoneyInBank += amount; }

    void SetGoldCarried(int amount) { m_iGoldCarried = amount; }

    int Wealth() { return m_iMoneyInBank; }

    bool Fatigued() { return m_iFatigue > 0; }

    void DecreaseFatigue() { m_iFatigue--; }

    void BuyAndDrinkAWhiskey() { m_iThirst = 0; m_iMoneyInBank -= 2; };
};

