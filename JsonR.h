

#include<string>
#include<fstream>
#include<vector>


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
		void addObject(string,string[]);

		void addArrayObject(string,string[]);

		void compileJSON();
		void closeJSON();

};
