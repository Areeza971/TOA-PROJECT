# TOA-PROJECT 
# DFA Minimization (C++)

This project implements a **Deterministic Finite Automaton (DFA) Minimization** algorithm using C++. It reduces the number of states in a DFA without changing the language it accepts.

## 🚀 Features

- Reads DFA from user input or file
- Performs state minimization using partitioning
- Outputs the minimized DFA
- Simple and clear C++ code

/DFA_Project
│
├── /src                  # All source code files
│   ├── DFA.h             # Header file for DFA class
│   ├── DFA.cpp           # Implementation for DFA class
│   ├── DFAFactory.h      # Header file for DFAFactory class
│   ├── DFAFactory.cpp    # Implementation for DFAFactory class
│   ├── minimize.cpp      # Minimization algorithm (if implementing one)
│   ├── partition.cpp     # Partition refinement algorithm (if implementing)
│   └── partition.h       # Header for partition.cpp
│
├── /build                # Compiled output goes here (e.g., dfa_program)
│
├── /main.cpp             # The main entry point for program
│
└── /README.md            # Optional, project description, documentation
