#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{
    string password;

    cout << "============================================\n";
    cout << "       PASSWORD SECURITY ANALYZER\n";
    cout << "============================================\n";

    cout << "Enter password: ";
    cin >> password;

    // Character checks
    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;
    bool special = false;

    for (char c : password)
    {
        if (isupper(c))
            uppercase = true;

        else if (islower(c))
            lowercase = true;

        else if (isdigit(c))
            digit = true;

        else
            special = true;
    }

    // Common password list
    string commonPasswords[] =
    {
        "password",
        "123456",
        "12345678",
        "123456789",
        "qwerty",
        "admin",
        "welcome",
        "password123",
        "admin123",
        "letmein"
    };

    int commonCount = 10;
    bool common = false;

    for (int i = 0; i < commonCount; i++)
    {
        if (password == commonPasswords[i])
        {
            common = true;
            break;
        }
    }

    // Calculate password score
    int score = 0;

    if (password.length() >= 8)
        score += 1;

    if (password.length() >= 12)
        score += 2;

    if (password.length() >= 16)
        score += 2;

    if (uppercase)
        score += 1;

    if (lowercase)
        score += 1;

    if (digit)
        score += 1;

    if (special)
        score += 2;

    // Penalty for common password
    if (common)
        score -= 3;

    // Prevent negative score
    if (score < 0)
        score = 0;

    // Character pool calculation
    int characterPool = 0;

    if (lowercase)
        characterPool += 26;

    if (uppercase)
        characterPool += 26;

    if (digit)
        characterPool += 10;

    if (special)
        characterPool += 32;

    // Entropy calculation
    double entropy = 0;

    if (characterPool > 0)
    {
        entropy = password.length() * log2(characterPool);
    }

    // Display analysis
    cout << "\n============================================\n";
    cout << "             SECURITY ANALYSIS\n";
    cout << "============================================\n";

    cout << "Password Length      : " << password.length() << endl;
    cout << "Uppercase Characters : "
         << (uppercase ? "YES" : "NO") << endl;

    cout << "Lowercase Characters : "
         << (lowercase ? "YES" : "NO") << endl;

    cout << "Numbers              : "
         << (digit ? "YES" : "NO") << endl;

    cout << "Special Characters   : "
         << (special ? "YES" : "NO") << endl;

    cout << "Common Password      : "
         << (common ? "YES" : "NO") << endl;

    cout << "\nPassword Score       : "
         << score << "/10" << endl;

    // Strength classification
    string strength;

    if (score <= 3)
    {
        strength = "VERY WEAK";
    }
    else if (score <= 5)
    {
        strength = "WEAK";
    }
    else if (score <= 7)
    {
        strength = "MEDIUM";
    }
    else if (score <= 9)
    {
        strength = "STRONG";
    }
    else
    {
        strength = "VERY STRONG";
    }

    cout << "Password Strength    : "
         << strength << endl;

    // Entropy
    cout << "Estimated Entropy    : "
         << entropy << " bits" << endl;

    // Security recommendations
    cout << "\n============================================\n";
    cout << "          SECURITY RECOMMENDATIONS\n";
    cout << "============================================\n";

    bool hasRecommendation = false;

    if (password.length() < 12)
    {
        cout << "- Use at least 12 characters.\n";
        hasRecommendation = true;
    }

    if (!uppercase)
    {
        cout << "- Add uppercase letters.\n";
        hasRecommendation = true;
    }

    if (!lowercase)
    {
        cout << "- Add lowercase letters.\n";
        hasRecommendation = true;
    }

    if (!digit)
    {
        cout << "- Add numbers.\n";
        hasRecommendation = true;
    }

    if (!special)
    {
        cout << "- Add special characters.\n";
        hasRecommendation = true;
    }

    if (common)
    {
        cout << "- Avoid commonly used passwords.\n";
        hasRecommendation = true;
    }

    if (!hasRecommendation)
    {
        cout << "✓ No major security issues detected.\n";
    }

    // Warning for common password
    if (common)
    {
        cout << "\n⚠ WARNING: This is a commonly used password!\n";
        cout << "Choose a unique password to improve security.\n";
    }

    cout << "\n============================================\n";

    return 0;
}