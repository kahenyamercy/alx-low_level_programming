0x06-pointers_arrays_strings
task 0 
The function takes two arguments: a pointer to the destination string dest, and a pointer to the source string src.
The function then creates a pointer p to point to the end of the dest string, by iterating over the characters in dest until it finds the terminating null byte (\0).
Then the function uses a loop to iterate over the characters in src, copying each character to the end of dest using the *p++ = *src++ statement. Note that this loop only copies the characters in src up to and including the terminating null byte.
Finally, the function adds a terminating null byte to the end of dest using the statement *ptr = '\0', and returns a pointer to the resulting string dest.



TASK1
The strncat function is slightly different. We can use this to append at most n characters from a source string to a destination string.

TASK2
This function takes three parameters: a destination string (char* dest), a source string (const char* src), and an integer n, which represents the maximum number of characters to copy from src to dest.

The function first iterates through the characters of the source string until it has copied n characters or until it encounters the null character '\0'. It then fills the remaining characters in the destination string with null characters '\0' until the total length of dest becomes n.


TASK3
Here's how the function works:

The function takes in two arguments, s1 and s2, which are pointers to the two strings that are being compared.
The function uses a while loop to compare the characters in the two strings. It does this by iterating over the characters in both strings one by one, checking if they are equal as it goes.
If the function encounters two characters that are not equal, it returns the difference between the two characters as an integer. This difference is calculated by casting the characters to unsigned char values, which ensures that the result is always positive.
If the function reaches the end of both strings without finding any differences, it returns 0 to indicate that the strings are equal.


TASK4
Here's how the function works:

We initialize two pointers: start points to the first element of the array and end points to the last element of the array.
We swap the elements pointed to by start and end using a temporary variable temp.
We move start to the next element in the array and end to the previous element in the array.
We repeat steps 2 and 3 until start is greater than or equal to end.

TASK5
This function takes a string as input and modifies it by changing all lowercase letters to uppercase letters. It does so by iterating over the characters of the string, and for each character that is a lowercase letter (i.e., between 'a' and 'z' inclusive), it subtracts the ASCII code of 'a' and adds the ASCII code of 'A' to convert it to the corresponding uppercase letter.

TASK6
This program takes a string of words as input and makes the first letter of each word capital. For example, if the input string is "hello world", the program will change it to "Hello World". It does this by going through each letter of the string and checking if it's the first letter of a word. If it is, it capitalizes it. It knows if it's the first letter of a word by looking for certain characters like spaces and punctuation marks.

TASK7
The modified implementation initializes the letters and numbers arrays with the leet characters and their corresponding replacements, respectively. Then, it loops through the input string character by character, and for each character, it loops through the letters array to find a match. If a match is found, it replaces the character with the corresponding replacement character from the numbers array.

TASK8
This implementation uses two nested loops to iterate through each character in the input string and compare it to the ROT13-encoded alphabet. The outer loop iterates through each character in the input string, while the inner loop iterates through each character in the alpha and rot13 arrays simultaneously.

The p pointer is used to iterate through the string, and the function returns a pointer to the modified string s.

Note that the if statement requirement is met by using a break statement within the inner loop to exit the loop when a match is found.

TASK9
First, the function checks if the integer n is negative. If it is, it prints a minus sign (-) to indicate that the number is negative, and then takes the absolute value of n by multiplying it by -1 and storing the result in the variable m. If n is not negative, it simply assigns n to m.
The variable d is then assigned the value of m, and a counter variable count is initialized to 1.

The code then enters a while loop that divides d by 10 and multiplies count by 10 until d is less than or equal to 9. This determines the order of magnitude of the number, i.e., how many digits it has.
Finally, a for loop prints out each digit of the number one by one by dividing m by count, taking the remainder, and adding 48 (the ASCII code for the character '0') to convert the remainder to its corresponding character. This loop runs until count is less than 1, i.e., until all the digits have been printed.

TASK10
nitialise p[5] = 98

TASK11



