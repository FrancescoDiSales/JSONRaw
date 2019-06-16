

#include<string>
#include<fstream>
#include<vector>

#include<queue>

using namespace std;



class JSONR
{

	private:
		fstream JSON;
		string quote ="\"";
		vector<string> compiler;
		
	public:
		JSONR(string);

		void addString(string,string);
		void addBool(string,string);
		void addInteger(string,string);
		void addObject(string,string[],string[],int,int);

		void addArray(string,string[],int);
				
		void compileJSON();
		void closeJSON();

};
