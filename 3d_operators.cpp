#include <iostream>
using namespace std;

class three_d{
	private:
		int x,y,z;
	public:
		three_d(int i, int j, int k){ x=i; y=j; z=k;}
		three_d(){ x=0; y=0; z=0;};
		void get(int &i, int &j, int&k)
		{
			i=x; j=y; k=z;
		}
		three_d operator++();    //υπερφόρτωση τελεστή προ-αύξησης
		three_d operator++(int); //υπερφόρτωση τελεστή μετά-αύξησης
		three_d operator--();    //υπερφόρτωση τελεστή προ-μείωσης
		three_d operator--(int); //υπερφόρτωση τελεστή μετά-μείωσης
};

three_d three_d::operator++(){
	x++; y++; z++;
	return *this;
}
three_d three_d::operator++(int){
	x++; y++; z++;
	return *this;
}
three_d three_d::operator--(){
	x--; y--; z--;
	return *this;
}
three_d three_d::operator--(int){
	x--; y--; z--;
	return *this;
}

class samp{
	private:
		int a;
	public:
		samp(){a=0;}
		samp(int n){a=n;}
		int get_a(){return a;}
};



int main()
{
samp ob (88);
samp obarray[10];

return 0;
}

