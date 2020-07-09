#include <iostream>
using namespace std;

class dist{
	double distance;
	public:
		dist(double x){distance=x;}
		double getdistance(){ return distance; }
		virtual void trav_time(){ 
				cout<<"Time to cover "<<distance<<" miles at 60 miles/hour is: "<<distance/60<<" hours\n";
	}
};

class metric : public dist{
	public:
		metric(double x) : dist(x) {}
		void trav_time(){
			cout<<"Time to cover "<<getdistance()<<" kilometers at 100 km/hour is: "<<getdistance()/100<<" hours\n";
		}
};

int main()
{
dist *p;
dist miles(60.2);
metric kilometers(100);
p = &miles;
p -> trav_time();
p = &kilometers;
p -> trav_time();
return 0;
}

