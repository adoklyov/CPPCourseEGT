/*

Answer the questions below in writing both in English and Bulgarian Language.

1.Syntax Explanation - Describe what the following line of code does int* ptr = &var

ENG:

This is an int Pointer holding the address of a variable var.

BG:

Това е указател от тип int, който държи адреса на променливата var.

2.Concept Clarification - Explain the difference between a while and do-while loop in C++

Example:

While loop:

int i = 0;
while (i < 5) {
	std::cout << i << std::endl;
	i++;
}

Do-while loop:

int i = 0;
do {
	std::cout << i << std::endl;
	i++;
} while (i < 5);

ENG:

The difference between a while and do-while loop is that the while loop checks the condition 
before executing the code block, while the do-while loop checks the condition after the code block has been executed.

BG:

Разликата между while и do-while цикъла е, че while цикъла проверява условието преди да изпълни 
кодовия блок, докато do-while цикъла проверява условието след като е изпълнил кодовия блок.

3.Code Analysis - Given a snippet of C++ code containing a for loop, explain what the loop does
and how many times it iterates and why.

Code Snippet:

for (int i = 0; i < 5; i++) {
	std::cout << i << std::endl;
}

ENG:

The for loop iterates 5 times. It starts with i = 0, then checks if i is less than 5, 
then prints the value of i and increments it by 1. This process is repeated until i is no longer less than 5.

BG:

for цикълът се изпълнява 5 пъти. Започва с i = 0, след това проверява дали i е по-малко от 5,
след което отпечатва стойността на i и увеличава i с 1. Този процес се повтаря докато i вече не е по-малко от 5.

4.Function Usage - Write about how functions prevent code duplication and give an example
of a simple C++ function that calculates the square of a number.

Example:

int square(int num) {
	return num * num;
}

ENG:

Functions prevent code duplication by allowing us to write a block of code once and then call it multiple times.
This way we can avoid writing the same code multiple times in different places in our program.

BG:

Функциите предотвратяват дублирането на код, като ни позволяват да напишем блок код веднъж и след това да го извикваме многократно.
По този начин можем да избегнем да пишем един и същи код многократно на различни места в програмата си.

5.Memory Management - Discuss the importance of memory management in C++ and explain the difference
between stack and heap memory allocation.

ENG:

Memory management is important in C++ because it allows us to allocate and deallocate memory as needed.
This is important because it allows us to use memory efficiently and avoid memory leaks.
Stack memory allocation is done at compile time and is used for static memory allocation, 
while heap memory allocation is done at runtime and is used for dynamic memory allocation.

BG:

Управлението на паметта е важно в C++, защото ни позволява да заделяме и освобождаваме паметта според нуждите си.
Това е важно, защото ни позволява да използваме паметта ефективно и да избегнем изтичане на памет.
Заделянето на памет в стека се извършва по време на компилация и се използва за статично заделяне на памет,
докато заделянето на памет в хийпа се извършва по време на изпълнение и се използва за динамично заделяне на памет.

6.Object-Oriented Programming - Explain the concept of encapsulation in C++ and how it is achieved using classes.

Example:

class MyClass {
private:
	int myVar;
}

ENG:

Encapsulation is the concept of bundling the data and the methods that operate on the data into a single unit.
This is achieved using classes in C++. Classes allow us to define the data and the methods that operate on the data
and then create objects of the class to use the data and the methods.

BG:

Енкапсулацията е концепцията за обединяване на данните и методите, които работят с данните, в единен блок.
Това се постига с помощта на класове в C++. Класовете ни позволяват да дефинираме данните и методите, които работят с данните,
след което да създадем обекти на класа, за да използваме данните и методите.

7.Error Handling - Describe how exceptions are used in C++ for error handling, with an example of
a try-catch block.

Example:

try {
	int x = 10;
	int y = 0;
	int z = x / y;
}
catch (std::exception& e) {
	cout << "An exception occurred: " << e.what() << endl;
}

ENG:

Exceptions are used in C++ for error handling by allowing us to handle errors that occur during the execution of our program.
We can use a try-catch block to catch and handle exceptions that occur in the try block. If an exception occurs,
the catch block will be executed and we can handle the exception there.

BG:

Изключенията се използват в C++ за обработка на грешки, като ни позволяват да обработваме грешки, които възникват по време на изпълнението на програмата ни.
Можем да използваме try-catch блок, за да хванем и обработим изключения, които възникват в try блока. 
Ако възникне изключение, catch блока ще се изпълни и можем да обработим изключението там.

8.STL Containers - Write about the purpose and use of std::vector in C++.

Example:

vector<int> myVector = { 1, 2, 3, 4, 5 };

ENG:

The purpose of std::vector in C++ is to provide a dynamic array that can grow and shrink in size as needed.
It is used to store a collection of elements of the same type and provides methods for adding, removing, and accessing elements in the vector.

BG:

Целта на std::vector в C++ е да предостави динамичен масив, който може да расте и намалява според нуждите.
Той се използва за съхранение на колекция от елементи от един и същи тип и предоставя методи за добавяне, премахване и достъп до елементи във вектора.

9.Pointers and References - Discuss the difference between pointers and references in C++ and provide
scenarios where one might be preferred over the other.

Example:

int x = 10;
int* ptr = &x;
int& ref = x;

ENG:

Pointers and references are both used to store the memory address of a variable, but they have some differences.
Pointers can be reassigned to point to different memory addresses, while references cannot be reassigned after initialization.

BG:

Указателите и референциите се използват за съхранение на адреса на паметта на променлива, но имат някои разлики.
Указателите могат да бъдат пренасочени да сочат към различни адреси в паметта, докато референциите не могат да бъдат пренасочени след инициализацията.

10.Advanced Features - Explain the concept of templates in C++ and how they support generic programming.
Include a simple example of a template function.

Examples:

template <class T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

ENG:

Templates in C++ allow us to write generic code that can work with different data types.
We can define a template function or class that can work with any data type, and then use it with different data types.

BG:

Шаблоните в C++ ни позволяват да пишем общ код, който може да работи с различни типове данни.
Можем да дефинираме шаблонна функция или клас, която може да работи с всякакъв тип данни и след това да я използваме с различни типове данни.
*/