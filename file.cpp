#include <iostream>
using namespace std;
 
//CALL BY VALUE
//Value of x gets copied into a
class b{
	private:
	static int a;
	public:
		static int d(){
			cout<<"h";
		}
	void showa(){
	cout<<a;
};

};
int b::a=30;
int main()
{
	b t;
	t.showa();
	b::d();

   return 0;
}
