#include "DFA.h"
#include <vector>
using namespace std;

int main() {
    // Example DFA with 3 states (0,1,2), alphabet size 2 (inputs 0 and 1)
    int num_states = 3;
    int alph_size = 2;
    int start_state = 0;

    // State 2 is the only final state
    vector<bool> finals = {false, false, true};

    // Transitions: from state Tails[i], under input Labels[i], go to Heads[i]
    vector<int> Tails = {0, 0, 1, 2};
    vector<int> Labels = {0, 1, 1, 0};
    vector<int> Heads = {1, 2, 2, 1};

    DFA dfa(num_states, alph_size, start_state, finals, Tails, Labels, Heads);
    dfa.print_DFA();

    return 0;
}
