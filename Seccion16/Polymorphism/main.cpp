#include "Base.h"
#include "Derived.h"

void greetings(const Base &obj) {
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {
    Base baseObj;
    Derived derivedObj;

    baseObj.say_hello();
    derivedObj.say_hello();
    

    return 0;
}
