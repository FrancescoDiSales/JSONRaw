#include<string>

#include<fstream>
#include<iostream>
#include<array>

#include"JsonR.h"

using namespace std;

JSONR::JSONR(fstream file,string filename)
{

	this->JSON.open(filename.c_str(),fstream::in);
	this->JSON<<"{"<<endl;
}


void JSONR::addString(string key,string value)
{

	this->JSON<<key<<":"<<value<<",";

}

void JSONR::addBool(string key,int value)
{
	this->JSON<<key<<":"<<value<<",";
}


void JSONR::addInteger(string key,bool value)
{
	this->JSON<<key<<":"<<value<<",";
}

void JSONR::addArray(string key,array<Type x,int size> Array)
{
	this->JSON<<key<<":["

	for(int i=0;i<intArray.size();i++)
	{
		this->JSON<<Array[i]<<",";

		if(i==intArray.size()-1)
		 this->JSON<<Array[i]<<"";		
	}
	

	this->JSON<<"],";

}

void JSONR::addObject(
