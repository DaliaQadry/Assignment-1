#include <iostream>
using namespace std;

class Move{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	} // sets x, y to a, b
	Move showmove() const{
		cout << "x=" << x << ", y=" << y;
		return x, y;
	}

		// shows current x, y values
	Move add(const Move & m) const{
		Move temp;
		temp.x = x + m.x;
		temp.y = y + m.y;
		return temp;
	}
	// this function adds x of m to x of invoking object to get new x,
		// adds y of m to y of invoking object to get new y, creates a new
		// move object initialized to new x, y values and returns it
	Move reset(double a = 0, double b = 0){
		x = 0;
		y = 0;
		return x, y;
	} // resets x,y to a, b
};
int main(){
	Move origin(0, 0);
	origin.showmove();
	Move temp(1,4);
	origin = origin.add(temp);
	origin.showmove();
	origin.reset();
	origin.showmove();
	return 0;
}