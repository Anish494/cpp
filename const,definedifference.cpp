//how does constant defined by const differ from that defined using define


/*In C++, constants can be defined using either the const keyword or the #define preprocessor directive. These methods differ in several significant ways:

--------const Keyword
Type Safety:
const variables are strongly typed. This means that the compiler knows the type of the constant, which helps catch type-related errors during compilation.
Example:

const int max_value = 100;

Scope:
const variables follow the same scoping rules as regular variables. They can be local to a function or global within a file or namespace.
Example:

void function() {
    const int local_const = 50; // Local to this function
}
const int global_const = 100; // Global within the file

Debugging:
const variables are visible to the debugger, allowing you to inspect their values during debugging sessions.

Memory Allocation:
const variables may consume memory like regular variables, depending on the context and compiler optimizations. However, modern compilers often optimize them out if they are not address-taken.

Constexpr:
With constexpr, you can ensure that the constant is evaluated at compile-time, providing similar benefits as #define but with type safety.
Example:

constexpr int compile_time_const = 100;




--------#define Preprocessor Directive
No Type Safety:
#define constants are essentially text substitutions and do not have a type. This can lead to type-related errors that are not caught at compile-time.
Example:

#define MAX_VALUE 100

Scope:
#define constants have file scope. They are not scoped like variables and are available throughout the file after their definition.
Example:

#define MAX_VALUE 100

Debugging:
#define constants are not visible to the debugger because they are replaced by their values during preprocessing. This can make debugging more difficult.

Memory Allocation:
#define constants do not consume memory like variables. They are replaced by their values at compile-time, potentially saving memory.

Syntax and Errors:
#define can lead to subtle errors if not used carefully, as the substitution is purely textual. For instance, missing parentheses can lead to incorrect results.
Example:

#define SQUARE(x) x * x
int result = SQUARE(3 + 1); // Expands to 3 + 1 * 3 + 1, which is 7, not 16



In conclusion, while both const and #define can be used to define constants, const provides better type safety, scoping, and debugging capabilities, whereas #define offers a simple text substitution mechanism that doesn't use memory but can lead to harder-to-debug code and potential errors. In modern C++, using const (or constexpr for compile-time constants) is generally preferred over #define for defining constants.


*/



