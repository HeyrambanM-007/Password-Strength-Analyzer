# 🔐 Password Security Analyzer

A simple C++ cybersecurity tool that analyzes password strength and provides security recommendations.

## 📌 Features

* Checks password length
* Detects uppercase and lowercase characters
* Detects numbers and special characters
* Identifies commonly used passwords
* Calculates a password security score
* Estimates password entropy
* Provides security recommendations

## 🛠️ Technologies Used

* **C++**
* **C++ STL / Standard Library**
* `<cctype>` for character analysis
* `<cmath>` for entropy calculation

## ⚙️ How It Works

The program analyzes the characteristics of a password and assigns a security score based on:

* Password length
* Character diversity
* Presence of numbers
* Presence of special characters
* Whether the password is commonly used

It also estimates password entropy using:

`Entropy = L × log₂(R)`

where `L` is the password length and `R` is the estimated character-set size.

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
```

### 2. Navigate to the project

```bash
cd PasswordSecurityAnalyzer
```

### 3. Compile

```bash
g++ main.cpp -o password_analyzer
```

### 4. Run

```bash
./password_analyzer
```

On Windows:

```bash
password_analyzer.exe
```

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

## 🔒 Cybersecurity Concepts

This project demonstrates basic concepts of:

* Password security
* Brute-force resistance
* Password entropy
* Authentication security
* Common-password detection
* Password complexity

## 🚀 Future Improvements

* Detect sequential and repeated patterns
* Add a larger common-password database
* Add a graphical user interface
* Add password generation
* Add more advanced password-strength analysis

## 👨‍💻 Author

**Heyramban M**

B.Tech Information Technology
Cybersecurity Enthusiast
