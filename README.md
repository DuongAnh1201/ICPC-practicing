# ICPC Practicing

Competitive programming practice for ICPC preparation, solving problems from [Kattis](https://open.kattis.com) and [Codeforces](https://codeforces.com).

## Platforms

| Platform | Focus |
|----------|-------|
| [Kattis](https://open.kattis.com) | ICPC-style problems, diverse topics |
| [Codeforces](https://codeforces.com) | Rated contests, Div. 2/3 problem sets |

## Languages

- **C++** — primary language for contest solutions (C++17, `clang++`)
- **Python** — alternative solutions and quick scripting
- **Jupyter Notebook** — algorithm notes, derivations, and topic documentation

## Structure

```
.
├── <problem-name>.cpp        # C++ solution
├── <problem-name>.py         # Python solution (if applicable)
├── notebooks/                # Jupyter notebooks for topic study
│   └── <topic>.ipynb
└── .vscode/                  # VSCode build & debug config
```

## VSCode Setup

Press `Cmd+Shift+B` to build the currently open `.cpp` file.
Press `F5` to build and launch the debugger.

The build task compiles with `-std=c++17 -g -Wall -Wextra` using `clang++`.

## Problems Solved

### Kattis

| File | Problem | Topic |
|------|---------|-------|
| [legs.cpp](legs.cpp) | [Legs](https://open.kattis.com/problems/legs) | Math / Greedy |

### Codeforces

| File | Problem | Topic |
|------|---------|-------|
| [newyearandhurry.cpp](newyearandhurry.cpp) | [New Year and Hurry (850A)](https://codeforces.com/problemset/problem/850/A) | Greedy |
