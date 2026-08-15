# 🔐 Password Security Analyzer

A beginner-friendly **C++ cybersecurity project** that analyzes password strength and provides security recommendations.

## 📌 Project Overview

The Password Security Analyzer evaluates a password based on its length, character complexity, common-password usage, and estimated entropy.

The tool helps users understand why a password may be weak and provides recommendations for creating stronger passwords.

## ✨ Features

* 🔤 Uppercase character detection
* 🔡 Lowercase character detection
* 🔢 Number detection
* 🔣 Special character detection
* 📏 Password length analysis
* ⚠️ Common password detection
* 📊 Password security score
* 🔐 Password strength classification
* 🧮 Estimated password entropy
* 💡 Security recommendations

## 🛠️ Technologies Used

* **C++**
* C++ Standard Library
* `<cctype>` for character analysis
* `<cmath>` for entropy calculation
* `<string>` for password processing
* `<iostream>` for input/output

## 🔍 How It Works

The program analyzes the password and checks:

1. Password length
2. Uppercase characters
3. Lowercase characters
4. Numbers
5. Special characters
6. Common-password usage

A security score is then calculated based on these characteristics.

The project also estimates password entropy using:

```text
Entropy = L × log₂(R)
```

Where:

* `L` = password length
* `R` = estimated character-set size

Higher entropy generally indicates a larger theoretical brute-force search space.

> **Note:** Entropy is an estimate and does not guarantee real-world password security because human-generated passwords can contain predictable patterns.

## 📊 Password Strength

The analyzer classifies passwords into:

| Score | Strength    |
| ----: | ----------- |
|   0–3 | Very Weak   |
|   4–5 | Weak        |
|   6–7 | Medium      |
|   8–9 | Strong      |
|    10 | Very Strong |

## 💻 Example

```text
============================================
       PASSWORD SECURITY ANALYZER
============================================

Enter password: Hello123

============================================
             SECURITY ANALYSIS
============================================

Password Length      : 8
Uppercase Characters : YES
Lowercase Characters : YES
Numbers              : YES
Special Characters   : NO
Common Password      : NO

Password Score       : 4/10
Password Strength    : WEAK
Estimated Entropy    : 47.63 bits

============================================
          SECURITY RECOMMENDATIONS
============================================

- Use at least 12 characters.
- Add special characters.
```

## 🚀 How to Run

### Clone the Repository

```bash
git clone YOUR_REPOSITORY_URL
```

### Navigate to the Project

```bash
cd PasswordSecurityAnalyzer
```

### Compile

```bash
g++ main.cpp -o password_analyzer
```

### Run

Linux/macOS:

```bash
./password_analyzer
```

Windows:

```bash
password_analyzer.exe
```

## 📁 Repository Structure

```text
PasswordSecurityAnalyzer/
│
├── main.cpp
├── README.md
└── .gitignore
```

## 🔒 Cybersecurity Concepts Demonstrated

This project demonstrates basic concepts related to:

* Password security
* Authentication security
* Password complexity
* Brute-force resistance
* Password entropy
* Common-password detection
* Secure password practices

## 🚧 Future Improvements

* Detect sequential characters such as `123456` and `abcdef`
* Detect repeated characters
* Expand the common-password database
* Add password generation
* Add a graphical user interface
* Add more advanced password-strength analysis

## 👨‍💻 Author

**Heyramban M**

B.Tech Information Technology
Cybersecurity Enthusiast
