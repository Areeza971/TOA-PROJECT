#include "DFA.h"
#include <stdio.h>

DFA::DFA(int num_states, int a, int start_index, vector<bool> finals, vector<int> T, vector<int> L, vector<int> H) {
    Heads = H;
    Labels = L;
    Tails = T;
    Q = num_states;
    alph_size = a;
    q0 = start_index;
    final = finals;
}

void DFA::print_DFA() {
    printf("There are %d states\n", Q);
    printf("The starting state is %d\n", q0);
    printf("The final states are: ");
    for (int i = 0; i < Q; i++) {
        if (final[i])
            printf("%d ", i);
    }
    printf("\nThe alphabet size is %d\n", alph_size);
    printf("The transitions are:\n");
    for (int i = 0; i < Heads.size(); i++) {
        printf("%d %d %d\n", Tails[i], Labels[i], Heads[i]);
    }
    printf("\n");
}
