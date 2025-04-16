#include "DFAFactory.h"
#include "DFA.h"
#include <iostream>

int main() {
    DFAFactory factory;

    // Generate a DFA that accepts strings ending in 01
    DFA* dfa1 = factory.endsIn01_inefficient();
    std::cout << "DFA 1: Ends in 01\n";
    dfa1->print_DFA();

    // Generate an exponential DFA
    DFA* dfa2 = factory.exponential_DFA(3, 2);  // n=3, alphabet size = 2
    std::cout << "DFA 2: Exponential DFA\n";
    dfa2->print_DFA();

    // Generate a random DFA
    DFA* dfa3 = factory.random(5, 2);  // n=5, alphabet size = 2
    std::cout << "DFA 3: Random DFA\n";
    dfa3->print_DFA();

    // Generate a minimal DFA for repeating 01 language
    DFA* dfa4 = factory.repeating_01(2);  // n=2
    std::cout << "DFA 4: Repeating 01 DFA\n";
    dfa4->print_DFA();

    return 0;
}
