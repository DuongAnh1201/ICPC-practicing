# ICPC Practicing

Competitive programming practice for ICPC preparation, solving problems from [Codeforces](https://codeforces.com).

## Languages

- **C++** — primary language for contest solutions (C++17, `clang++`)
- **Python** — alternative solutions and utilities

## Structure

```
ICPC practicing/
├── Codeforce/          # Codeforces contest solutions, organized by round
│   ├── Round1074(Div4)/    # Solutions for Round 1074 Div. 4
│   ├── Round1090(Div4)/    # Solutions for Round 1090 Div. 4
│   └── Round1096(Div3)/    # Solutions for Round 1096 Div. 3
├── basicAlgo/          # Standalone implementations of common algorithms
├── python/             # Python-based solutions and utilities
└── .vscode/            # VSCode build and debug configuration
```

## VSCode Setup

Press `Cmd+Shift+B` to build the currently open `.cpp` file.  
Press `F5` to build and launch the debugger.

The build task compiles with `-std=c++17 -g -Wall -Wextra` using `clang++`.
