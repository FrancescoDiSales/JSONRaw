#include<iostream>
#include<array>
#include<string>
#include<fstream>

#include<cstring>

#include"JSONR.h"


using namespace std;



JSONR::JSONR(string filename)
{
	
	this->JSON.open(filename+".json",std::fstream::out);
	this->JSON<<"{"<<endl;
}

void JSONR::compileJSON()
{

	if(this->compiler.capacity() == 0)
		throw "no info given for the JSON";

	for(int i=0;i<this->compiler.capacity();i++)
	{
		JSON<<this->compiler[i]<<",";
		
		if(i == this->compiler.capacity()-1)
		{
			JSON<<this->compiler[i];
		}
		
	}

}


void JSONR::closeJSON()
{
	this->JSON<<"}";
	this->JSON.close();
	
}

void JSONR::addInteger(string key,string value)
{
	this->compiler.push_back(this->quote+key+this->quote+":"+this->quote+value+this->quote);
}



void JSONR::addBool(string key,string value)
{
	
	if(value!="false" || value !="true")
		this->compiler.push_back( " \" error \": \"invalid boolean format \" ");
	
	this->compiler.push_back(this->quote+key+this->quote+":"+this->quote+value+this->quote);
	
}

