# Finite-Automata
Finite automata (written in C) designed to recognize typical programming language tokens.

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

* Fig.5.9 shows a finite automaton that recognizes all the tokens listed in Fig.5.5
```
Please enter the symbol: END.

VALID TOKEN!
```
```
Please enter the symbol: :=

VALID TOKEN!
```

## Reference
Book Title: *System Software - An Introduction to Systems Programming*

Author: Leland Beck.