#pragma once
#include "C:\Users\MohmadAyman\Documents\CMP103 Project S2015 - ALL Docs - student\Project Framework\Actions\Action.h"
class Move :
	public Action
{
	Point Position;	//Position where the user clicks to add the stat.
public:
	Move(ApplicationManager*);
	~Move();
	void Move::ReadActionParameters();
	void Move::Execute();
};

