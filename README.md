# passwordChecker
An exercise to check a password composition in C

In this program, I implemented a simple password checker. The user's input password is checked to ensure it includes at least one uppercase letter, one lowercase letter, one number, and one symbol.

in this exercise I leanrd the fallowing:

User Input: You learned how to prompt the user for input using printf and how to read input from the user using fgets.

String Handling: You practiced working with strings, including storing user input in a string array and manipulating strings using functions like strlen and strcspn.

Character Classification: You utilized functions from the ctype.h library, such as isupper, islower, isdigit, and isalnum, to check the properties of characters (whether they are uppercase, lowercase, digits, or alphanumeric).

Function Definition: You defined a function (valid) to encapsulate the logic for password validation. This involved specifying the return type, function name, parameter list, and function body.

Looping and Conditionals: You used a for loop to iterate through each character of the password and conditional statements (if and else if) to check each character against the specified criteria.

Boolean Logic: You applied boolean logic to track whether the password met the required conditions, setting flags (upl, lowl, num, sym) to indicate the presence of uppercase letters, lowercase letters, numbers, and symbols, respectively.