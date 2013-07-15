#include "NyanCat.h"
#include<iostream>


NyanCat::NyanCat(void)
{
	name= "Nyan Cat";
	color = 0;
	dimensions= 1.5; 
    nyanCount =0;
	hasLazers = true; 
	isRainbow = true;
}

NyanCat::~NyanCat(void)
{
	nyanCount = 0;
	cout << name << " has been met with a terrible fate" << endl;
}

void NyanCat::fly()
{
    cout << name << " is flying!" << endl;
}

void NyanCat::nyan()
{
    cout << "Nyan" << endl;
    nyanCount++;
}