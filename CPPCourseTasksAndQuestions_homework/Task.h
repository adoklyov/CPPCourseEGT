/* C++ Coding Task #1 310124

Implementing a Library Management System 

Task Description:

Create a C++ program for a simple library management system.

The program should include classes for books and library members, and demonstrate
the use of objects, methods, and pointers.

Requirements:

	Book Class:
		- Title
		- Author
		- ISBN
		- Display method
		Methods:
			- Constructor
			- display() to output the book details to the console

	Member Class:
		- Name
		- Age
		- Member ID
		Methods:
			- Constructor
			- display() to output the member details
			- borrowBook(Book *book) to simulate borrowing a book, which takes a pointer to a Book object
	
	Main Function:
		- Create an array of book objects and an array member objects
		- Demonstrate the borrowing process by having a member borrow a book

Task Instructions:


Task:

class Book {

private:

	string title;
	string author;
	string isbn;

public:

	Book(string title, string author, string isbn);

	string getTitle();
	string getAuthor();
	string getISBN();

	void setTitle(string title);
	void setAuthor(string author);
	void setISBN(string isbn);

	void display() {

	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "ISBN: " << isbn << endl;
	
	}
};

class Member {

private:

	string name;
	int age;
	string memberID;

public:

	Member(string name, int age, string memberID);

	string getName();
	int getAge();
	string getMemberID();

	void setName(string name);
	void setAge(int age);
	void setMemberID(string memberID);

	void borrowBook(Book *book) {

	cout << name << " has borrowed " << book->getTitle() << endl;
	
	}
};

int main () {

	Book books[2] = {Book("Entertaining", "Martha Stewart", "9780517544198"), Book("Strangers", "Yamada Taichi", "9780571224371")};

	Member members[2] = {Member("Peter Smith", 23, "134578"), Member("Ivan Stoyanov", 30, "521348")};


	return 0;
}

C++ Coding Task #2 310124:

Implement an Employee Management System

Task Description:

Develop a C++ program that models a simple employee management system.
This program should include classes for emplotyees and classes for employees and departments,
showcasing the use of objects, methods, and pointers.

Requirements:

	Employee Class:
		- Name
		- employeeID
		- position
		Methods:
			- Constructor
			- display() to output employee details

	Department Class:
		- departmentName
		- employees (pointer to an array of Employee objects)
		- numEmployees
		Methods:
			- Constructor
			- addEmployee (Employee *employee) to add an employee to the department
			- displayEmployees() to list all employees in the department

	Main Function:
		- Create several Employee objects and a Department object
		- Add employees to the department and display the list of all employees in it

Task Instructions:
	- Implement Employee and Department classes as described
	- In the main function, instantiate several Employee objects
	- Create a Department object and use the addEmployee method to add employees to the department
	- Use the displayEmployees method to list all employees in the department
	- Ensure proper use of pointers, especially in managing the array of employees in the department
	
Task:

class Employee {

private:

	string name;
	int employeeID;
	string position;

public:
	
	Employee(string name, int employeeID, string position);

	string getName();
	int getEmployeeID();
	string getPosition();

	void setName(string name);
	void setEmployeeID(int employeeID);
	void setPosition(string position);

	void display() {
	cout << "Name: " << name << endl;
	cout << "ID: " << employeeID << endl;
	cout << "Position: " << position << endl;

	}
}

class Department {

private:
	string departmentName;
	Employee *employees;
	int numEmployees;

public:
	Department(string name);

	void addEmployee();
	void displayEmployees();
}

int main() {

	Employee e1("Ivan", 1245, "CEO");
	Employee e2("Tanya", 3642, "HR");
	Employee e3("Josh", 7481, "Customer Support");
	Employee e4("Martin", 3214, "Front Desk");

	Department depart("CS");

	depart.addEmployee(e1);
	depart.addEmployee(e2);
	depart.addEmployee(e3);
	depart.addEmployee(e4);
	
	depart.displayEmployees();

}

Questions on C++ #1

Answer the questions below in writing both in English and Bulgarian Language:

1.Syntnax Explanation: 
	Describe what the following line of C++ code does: int* ptr = &var.

BG:
	Декларираме променлива ptr, която е пойнтър към int и взима стойността на адреса от променливата var.

ENG:
	Declares a variable ptr, which is a pointer to an int, which also takes the address of the variable var.

2.Concept Clarification:
	Explain the difference between a while loop and a do-while loop in C++.

BG:
	Разликата между while и do-while, е че при while, условието се проверява преди екзекуцията на цикъла, а при do-while се проверява след екзекуцията на цикъла.

ENG:
	The difference between while and do-while is that the condition in while is checked before the execution of the loop, while in do-while it is checked after the execution of the loop.

3.Code Analysis:
	Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.

	Code(have not used any reference here):
	for(i = 0, i < 10; i++){
		cout << "Printing." << endl;
	}

BG:
	Този код извежда следният текст "Printing" на конзолата 10 пъти, тъй като i има първоначална стойност от 0, и всеки път като се принтира се добавя 1 и трябва да е по-малко от 10.
	
ENG:
	The code outputs to the console the text "Printing" a total of 10 times, since i has an initial assignment of 0, and every time the text is printed, we increment it by 1 and it
	has to be less than 10.

4.Function Usage:
	Write about how functions prevent code duplication and give an example of a simple C++ function that calculates the square of a number.

	Unable to answer.

	Function:

	int squareNumber(){
		return number * number;
	}

5.Memory Management:
	Discuss the importance of memory management in C++ and explain the difference between stack and heap memory allocation.

	Unable to answer.

6.Object-Oriented Programming:
	Explain the concept of encapsulation in C++ and how it is achieved using classes.

BG:
	Енкапсулацията ограничава достъпа до данните на даден клас, за да не се изведе важна информация навън или да даде ненужен достъп за да се изменят тези данни.
	Класовете са като шаблон на това как ще се използват тези данни.
ENG:
	Encapsulation limits the access to the data members and functions of a given class, so that they can keep the data secure in order for important information to be leaked
	or the data to be trampled with from an outside source.

7.Error Handling:
	Describe how exceptions are used in C++ for error handling, with an example of a try-catch hook.

	Unable to answer.

8.STL Containers:
	Write about the purpose and use of std::vector container in C++.

BG:
	Векторът се използва когато искаме функционалността на динамичен масив, когато не знаем колко ще е голям като размер и можем да добавяме и премахваме нови елементи.
ENG:
	Vector has the functionality of a dynamic array and we can use it when we do not know the size of how much elements we will need. We can also add and remove new elements.

9.Pointers and References:
	Discuss the difference between pointers and references in C++ and provide scenarios where one might be preferred over the other.

BG:
	

10.Advanced Features:
	Explain the concept of templates in C++ and how they support generic programming. Include a simple example of a template function.

	Unable to answer.

	*/