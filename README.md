# Programming Fundamentals in C++
Welcome to the Programming Fundamentals in C++ repository! This project provides a comprehensive set of practice questions to help learners strengthen their understanding of C++ programming.

## What You'll Learn
This repository covers fundamental concepts and practice problems in C++, including:
- **Basic Concepts**: Variables, Data Types, Operators, and Control Flow
- **Decision Making**: If-Else, Switch Case
- **Loops**: For, While, and Do-While Loops
- **Arrays and Strings**: 1D and 2D Arrays, String Manipulation
- **Functions**: Recursive and Non-Recursive Solutions
- **Pointers**: Dynamic Memory Allocation and Operations
- **File Handling**: Reading, Writing, and Manipulation of Files
- **Advanced Topics**: Sorting, Searching, and Real-World Scenarios

## Topics Covered
- If-Else Statements
- Loops and Iterations
- Switch Case Statements
- Star and Number Patterns
- Functions and Recursion
- Arrays and 2D Arrays
- Pointers and Dynamic Memory
- File Handling
- Scenario-Based Real-World Problems

## Folder Structure
```
📂 C-plus-plus-CBL-Project
├── 📁 If-Else
├── 📁 Loops
├── 📁 Switch-Case
├── 📁 Patterns
├── 📁 Functions
├── 📁 Arrays
├── 📁 Pointers
├── 📁 File-Handling
├── 📁 Scenario-Based
├── README.md
```

## How to Use
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/aazannoorkhuwaja/C-plus-plus-CBL-Project.git
   cd C-plus-plus-CBL-Project
   ```
2. **Compile and Run**:
   ```bash
   g++ If-Else/positive_negative.cpp -o output
   ./output  # On Windows: output.exe
   ```

## How to Collaborate on This Project
Interested in contributing? Follow these steps to join as a collaborator!

### Prerequisites
- **Git**: Install from [git-scm.com](https://git-scm.com/downloads).
- **C++ Compiler**: Install `g++` (e.g., MinGW for Windows, `sudo apt install g++` for Ubuntu, or `xcode-select --install` for Mac).
- **Editor**: Visual Studio Code with the "C/C++" extension is recommended.

### Getting Started
1. **Accept the Invite**: Check your email for a collaborator invitation and accept it.
2. **Clone the Repository**:
   ```bash
   git clone https://github.com/aazannoorkhuwaja/C-plus-plus-CBL-Project.git
   cd C-plus-plus-CBL-Project
   ```
3. **Set Up Git** (if first time):
   ```bash
   git config --global user.name "Your Name"
   git config --global user.email "your.email@example.com"
   ```

### Contributing
1. **Create a Branch**:
   ```bash
   git checkout -b yourname-feature
   ```
   Example: `git checkout -b safiyan-loops`
2. **Add or Edit Files**:
   - Add your code to the appropriate folder (e.g., `Loops/factorial.cpp`).
   - Example:
     ```cpp
     #include <iostream>
     using namespace std;
     int main() {
         int n, fact = 1;
         cout << "Enter a number: ";
         cin >> n;
         for (int i = 1; i <= n; i++) fact *= i;
         cout << "Factorial is: " << fact << endl;
         return 0;
     }
     ```
3. **Test Your Code**:
   ```bash
   g++ Loops/factorial.cpp -o factorial
   ./factorial  # On Windows: factorial.exe
   ```
4. **Commit and Push**:
   ```bash
   git add Loops/factorial.cpp
   git commit -m "Added factorial program to Loops"
   git push origin yourname-feature
   ```
5. **Submit a Pull Request**:
   - Visit the repo on GitHub.
   - Click "Compare & pull request" for your branch.
   - Describe your changes (e.g., "Added factorial program") and submit.

### Tips
- **Folder Structure**: Keep code in relevant folders (e.g., loops in `Loops/`).
- **Sync Up**: Run `git pull origin main` before working to get the latest updates.
- **Need Help?**: Contact the repo owner if you’re stuck.

## Contribution
Contributions are welcome! Submit pull requests, report issues, or suggest improvements.

Happy Coding!
