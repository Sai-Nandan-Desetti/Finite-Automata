# Finite-Automata
Finite automata (written in C) designed to recognize typical programming language tokens.

## Fig.5.8(b)
![Fig 5 8(b)](https://github.com/Sai-Nandan-Desetti/Finite-Automata/assets/80631906/aebbf889-da73-469e-adf6-386d4de155fb)

## Fig.5.9
![Fig 5 9](https://github.com/Sai-Nandan-Desetti/Finite-Automata/assets/80631906/9b8b316f-1e5b-4a56-94f3-c7791ec66728)


### Examples
* Fig.5.8(b) shows a finite automaton that recognizes identifiers.
* The identifiers can include an underscore...
```
Please enter the symbol: NEXT_LINE
TOKEN CORRECT
```
* ...But they cannot begin or end with one, or contain two consecutive ones.
```
Please enter the symbol: _LINE
TOKEN ERROR!
```

* Fig.5.9 shows a finite automaton that recognizes all the tokens listed in Fig.5.5.
```
Please enter the symbol: END.

VALID TOKEN!
```
```
Please enter the symbol: :=

VALID TOKEN!
```

## Fig.5.5
![Fig 5 5](https://github.com/Sai-Nandan-Desetti/Finite-Automata/assets/80631906/736922ad-8139-4d3f-b87d-3d70ac824862)

## Reference
Book Title: *System Software - An Introduction to Systems Programming*

Author: Leland Beck.
