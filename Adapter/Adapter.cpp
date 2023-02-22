#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
using namespace std;

void testDuck(Duck* duck) {
	duck->quack();
	duck->fly();
}
int main() {
	MallardDuck* duck = new MallardDuck();
	WildTurkey* turkey = new WildTurkey();
	Duck *adapter = new TurkeyAdapter(turkey);

	cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();

	cout << "The Duck says..." << endl;
	testDuck(duck);

	cout << "The TurkeyAdapter says..." << endl;
	testDuck(adapter);
	delete duck, turkey, adapter;
	return 0;
}
