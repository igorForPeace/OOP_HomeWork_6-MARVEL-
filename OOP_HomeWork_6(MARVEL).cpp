#include <iostream>
#include "Classes.h"


using namespace std;

int main()
{
	CaptainAmerica cap;
	cap.CanMakeSuperPowerThings();
	cap.CanRunFast();

	CaptainMarvel den;
	den.CanMakeSuperPowerThings();

	Tanos titan;
	titan.MakeBadThings();

	Altron Al;
	Al.IsARobot();

	DoctorStrange dr;
	dr.CanMakeSuperPowerThings();

	Thor th;
	th.IsAGod();
	IronMan ir;
	ir.MakeGoodThings();
	cout << "=======================" << endl;
	cout << "Who can fly: \n" << endl;
	SpiderMan Peter;
	Peter.CanFly();
	den.CanFly();
	dr.CanFly();
	ir.CanFly();
	th.CanFly();
	Al.CanFly();

	

	return 0;
}