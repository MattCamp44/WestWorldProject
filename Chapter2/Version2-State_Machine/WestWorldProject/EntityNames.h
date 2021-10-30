#pragma once

#include<string>

enum {

	ent_Miner_Joe,

	ent_Elsa


};


inline std::string GetNameOfEntity(int n) {

	switch (n)
	{

	case ent_Miner_Joe: return "Miner Joe"; break;

	default:
		break;
	}



}


