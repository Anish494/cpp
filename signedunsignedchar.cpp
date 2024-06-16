#include <iostream>
using namespace std;
#include <climits> // for CHAR_BIT

int main() {
cout << "Size of char: " << sizeof(char) << " byte(s)" <<endl;
cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte(s)" <<endl;
cout << "Size of signed char: " << sizeof(signed char) << " byte(s)" <<endl;
cout << "Size of int: " << sizeof(int) << " byte(s)" <<endl;

// cout << "Bits in a byte: " << CHAR_BIT <<endl; // Typically 8 bits per byte

cout << "Range of signed char: " << SCHAR_MIN << " to " << SCHAR_MAX <<endl;
cout << "Range of unsigned char: 0 to " << UCHAR_MAX <<endl;
cout << "Range of int: " << INT_MIN << " to " << INT_MAX <<endl;
cout << "Range of unsigned int: 0 to " << UINT_MAX <<endl;

    return 0;
}


/*
    Bit Interpretation:

Signed Char:
------> Uses the MSB/ first bit as the sign bit.
If the MSB is 0, the value is non-negative.
If the MSB is 1, the value is negative, and two's complement representation is used.

Unsigned Char:
 Does not use the MSB as a sign bit. 
 All bits contribute to the magnitude.

Binary Representation:

Signed Char:
Positive: 01111111 represents 127.
Negative numbers are stored using two's complement representation.
To find the two's complement, invert all the bits of the positive number
and add 1 to the least significant bit (LSB).
Negative: 11111111 represents -1.

Start with the positive binary representation of 1: 00000001.
Invert all the bits: 11111110.
Add 1 to the LSB: 11111110 + 1 = 11111111.
Thus, -1 in two's complement (for signed char) is 11111111.

Unsigned Char:
Positive: 11111111 represents 255.

*/

/*
what is the result if we store 210 in signed and unsigned char?

ChatGPT
When storing the value 210 in both signed char and unsigned char, 
the interpretation of the value differs due to how each type handles the most significant bit (MSB).

Unsigned Char
Range: 0 to 255
Binary Representation:
210 in decimal is 11010010 in binary.
Since 210 is within the range of unsigned char (0 to 255), it can be directly stored without any issues.

Signed Char
Range: -128 to 127
Binary Representation:
Storing 210 in a signed 8-bit value would overflow because 210 exceeds the maximum value (127) 
that a signed 8-bit integer can represent.
When you store 210 in a signed char, it will wrap around due to overflow, using the two's 
complement representation to fit within the 8-bit signed range.

Calculating the Equivalent Signed Value
To determine the equivalent signed value of 210 in an 8-bit signed char:

Convert 210 to binary: 11010010
Interpret 11010010 as a signed 8-bit value:
The MSB is 1, indicating a negative number.
To find the negative value, calculate the two's complement:
Invert the bits: 00101101
Add 1: 00101101 + 1 = 00101110
The positive value of 00101110 is 46.

Therefore, the negative value is -46.
*/