
#include<fstream>
#include<string>

#include<array>

using namespace std;

template<typename Type>

class JSONR
{

	private:
		fstream JSON;

	public:
		JSONR(fstream,string);

		void addString(string,string);
		void addBool(string,bool);
		void addInteger(string,int);
		void addObject(string,string[]);

		void addArray(string,array<Type,int>);
		void addArrayObject(string,string[]);


		~JSONR();


};
