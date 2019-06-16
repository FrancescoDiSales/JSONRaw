#include <iostream>
#include<vector>
#include"JSONR.h"

using namespace std;


int main(int argc, char** argv) 
{
	
	
		JSONR json("defJSON");
		string nomi[3] = {"giovanni","antonio","michele"};
		string numeri[3] ={"1","2","3"};
		cout<<"test JSON"<<endl;

		json.addString("hello","hello world");
		json.addInteger("numero","2");
		json.addArray("persone",nomi,3);
		json.addArray("numeri",numeri,3);
		json.addObject("obj",nomi,numeri,3,3);
		json.compileJSON();
	
		json.closeJSON();

	
	return 0;
}
