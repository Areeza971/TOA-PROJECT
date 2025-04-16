#include <vector>
#include <iostream>
using namespace std;

// This is my representation of a DFA. It uses vectors to store transitions.
class DFA {
public:
    DFA(int num_states, int alph_size, int start_index, vector<bool> finals, vector<int> H, vector<int> L, vector<int> T);
    void print_DFA();

    // Number of states
    int Q;

    // Whether a state is final
    vector<bool> final;

    // Starting state
    int q0;

    // Size of alphabet; a letter is an integer from 0 to alph_size - 1
    int alph_size;

    // transitions[i] represents:
    // from Tails[i], under input Labels[i], go to Heads[i]
    vector<int> Heads;
    vector<int> Labels;
    vector<int> Tails;
};
