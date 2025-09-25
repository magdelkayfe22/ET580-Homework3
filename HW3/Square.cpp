#include "Square.h"   

int main() {
Square sq1; // Default constructor
Square sq2(5); // Parameterized constructor

print(sq1); // Should print Area: 1
print(sq2); // Should print Area: 25

sq1.setSide(4);
print(sq1); // Should print Area: 16

return 0;
}