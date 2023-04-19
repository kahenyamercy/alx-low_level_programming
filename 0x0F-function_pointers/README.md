POINTER TO FUNCTIONS

##1 Declaring a pointer to a function
To declare a pointer to a function, you use the same syntax as declaring a regular function, but you add an asterisk (*) before the name of the variable to indicate that it's a pointer. Here's an example:
	int (*myFuncPtr)(int, int);
This declares a pointer to a function that takes two integer parameters and returns an integer value.

##2 Assigning a function to a pointer
Once you've declared a pointer to a function, you can assign a function to it by using the name of the function (without parentheses) as the value. Here's an example:
	int add(int x, int y) 
	{
    		return x + y;
	}	

	int (*myFuncPtr)(int, int) = add;
This assigns the function add() to the pointer myFuncPtr

##3 Calling a function through a pointer
To call a function through a pointer, you use the same syntax as calling a regular function, but you use the pointer variable instead of the function name. Here's an example:
	int result = (*myFuncPtr)(3, 4);
This calls the function pointed to by myFuncPtr, passing in the values 3 and 4 as parameters, and stores the result in the variable result.

ADVANTAGES OF POINTERS TO FUNCTIONS
1**Dynamic dispatching: Pointers to functions allow you to dynamically dispatch a function call at runtime, based on the value of the pointer. This means you can select which function to call based on input parameters or other factors, which can make your code more flexible and adaptable.

2**Code reuse: Using a pointer to a function allows you to reuse code by calling the same function from different parts of your program. This can help you avoid duplicating code and can make your program more modular and easier to maintain.

3**Reduced code size: Pointers to functions can be used to implement callbacks, which allows you to reduce the amount of code you need to write by allowing external libraries or modules to call your functions. This can make your code more concise and easier to read.

4**Efficiency: Pointers to functions can be faster than other ways of calling functions, especially when dealing with large data sets or complex algorithms. By avoiding the overhead of passing parameters and setting up function calls, you can achieve better performance in certain situations.


