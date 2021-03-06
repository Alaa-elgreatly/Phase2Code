#include "Move.h"
#include "C:\Users\MohmadAyman\Documents\CMP103 Project S2015 - ALL Docs - student\Project Framework\ApplicationManager.h"
#include "C:\Users\MohmadAyman\Documents\CMP103 Project S2015 - ALL Docs - student\Project Framework\GUI\input.h"
#include "C:\Users\MohmadAyman\Documents\CMP103 Project S2015 - ALL Docs - student\Project Framework\GUI\Output.h"
#include <sstream>
using namespace std;

//constructor: set the ApplicationManager pointer inside this action
Move::Move(ApplicationManager *pAppManager) :Action(pAppManager)
{}

void Move::ReadActionParameters()
{
	Input *pIn = pManager->GetInput();
	Output *pOut = pManager->GetOutput();
	
	pOut->PrintMessage("you are moving an object");

	pIn->GetPointClicked(Position);
	pOut->ClearStatusBar();
}
void Move::Execute()
{
	ReadActionParameters();
	//Calculating left corner of assignement statement block
	Input *pIn = pManager->GetInput();
	Output *pOut = pManager->GetOutput();
	pIn->GetPointClicked(Position);
	while (buttonstate() == 1)
	{
		Statement *s;
		Statement *sel;
		s=pManager->GetSelectedStatement();
		sel = s;
		
		pManager->DeleteStatement(s);
		sel->Draw(pOut);
	}
}
Move::~Move()
{}