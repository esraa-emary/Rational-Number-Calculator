# Rational Numbers Calculator

## Table of Contents
- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Input Format](#input-format)
- [Examples](#examples)
- [Test Cases](#test-cases)
- [Contributing](#contributing)
- [Authors](#authors)
- [License](#license)

## About
Rational Numbers Calculator is a command-line application designed to perform basic arithmetic operations (addition, subtraction, multiplication, and division) on rational numbers (fractions). It can handle both positive and negative fractions, simplify results automatically, and detect invalid inputs, such as zero in denominators. 

## Features
- Supports **Addition, Subtraction, Multiplication, and Division** of fractions
- Handles **simplification of results** automatically
- Detects invalid inputs (e.g., zero in the denominator)
- Accepts both fractions and whole numbers in calculations
- User-friendly prompts and input validation

## Getting Started

### Prerequisites
- **C++ compiler** (such as GCC, MinGW, or Visual Studio)
- Basic knowledge of command-line operations

### Installation
1. **Clone the Repository**
   ```bash
   git clone https://github.com/yourusername/rational-numbers-calculator.git
   ```
2. **Navigate to the Project Directory**
   ```bash
   cd rational-numbers-calculator
   ```
3. **Compile the Program**
   ```bash
   g++ -o RationalCalculator main.cpp
   ```

## Usage
1. **Run the Program**
   ```bash
   ./RationalCalculator
   ```
2. **Input Format**: Enter two fractions separated by an operation symbol. The supported format is `[numerator/denominator] operation [numerator/denominator]`.
3. **Operation Options**: `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division).

After entering your expression, the program will display the simplified result. You can choose to perform additional calculations or exit.

## Input Format
- **Form**: `num/num operator num/num`
- **Operators**: `+`, `-`, `*`, `/`
- **Examples**:
  - `3/4 + 2/5`
  - `7 * 1/3`
  - `5/6 - 3/8`
- **Notes**:
  - Whole numbers are accepted (e.g., `5 * 3`).
  - Avoid entering `0` in the denominator.

## Examples

### Addition
   - **Input**: `1/2 + 3/4`
   - **Output**: `The Result = 5/4`

### Subtraction
   - **Input**: `5/6 - 1/3`
   - **Output**: `The Result = 1/2`

### Multiplication
   - **Input**: `2/3 * 3/4`
   - **Output**: `The Result = 1/2`

### Division
   - **Input**: `4/5 / 2/3`
   - **Output**: `The Result = 6/5`

## Test Cases
Below are sample test cases to verify the calculator's functionality. 

1. **Input**: `1/2 + 3/4`  
   **Expected Output**: `5/4`

2. **Input**: `2/3 * 3/4`  
   **Expected Output**: `1/2`

3. **Input**: `1/0 + 1/2`  
   **Expected Output**: `Please don't enter a zero in the denominator.`

4. **Whole Number Input**  
   **Input**: `5 * 3`  
   **Expected Output**: `15/1`

5. **Exit Prompt**  
   **Follow-Up Prompt**: `Do you want to continue?\n [1] Yes.\n [2] No.`  
   **Input**: `2`  
   **Expected Outcome**: `Thanks For Using Rational Number Calculator ....` and program exits.

## Contributing
1. Fork the repository.
2. Create a new branch.
3. Make your changes.
4. Submit a pull request.

Contributions are welcome for new features, bug fixes, and improving documentation.

## Authors
- Mohammed Atef Abd EL-Kader - 20231143
- Esraa Emary Abd Elsalam - 20230054
- Aly El-Deen Yasser Aly - 20231109

## License
This project is licensed under the MIT License. See `LICENSE` for details.
