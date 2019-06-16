#include<iostream>
#include<string>
#include<fstream>

#include<vector>


#include"JSONR.h"


using namespace std;



JSONR::JSONR(string filename)
{
	
	this->JSON.open(filename+".json",std::fstream::out);
	this->JSON<<"{"<<endl;
	
}

void JSONR::compileJSON()
{

	for(int i=0;i<this->compiler.size();i++)
	{
		if(i==this->compiler.size()-1)
			this->JSON<<this->compiler[i];
		else
			this->JSON<<this->compiler[i]<<",";
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

void JSONR::addArray(string key,string array[],int size)
{
	string array_values;
	
	for(int i=0;i<size;i++)
	{
		if(i==size-1)
		array_values+=array[i];
		else
		array_values+=array [i]+",";
	}
	
	this->compiler.push_back(this->quote+key+this->quote+":"+this->quote+"["+array_values+"]"+this->quote);
	
}
