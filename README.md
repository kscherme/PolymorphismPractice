Lab 3: Inheritance
------------------
------------------

Courtney Kelly and Katie Schermerhorn
February 9, 2016

Explains how the user uses the program
--------------------------------------
	The user just runs the program and sees a display of an overnight package and a two day package. The two day package adds a flat fee to the original cost of the package and the overnight package charges an extra fee per ounce. The user could input the prices in the constructor. 
	
Explains how the program works internally
-----------------------------------------
	The base class, Package.h, consists of a default constructor as well as two member functions - CalculateCost() and getpackWeight(). It has four data members including name, zipcode, packWeight, and shipCost. In the Package.cpp file, the default constructor initializes the data members and ensures that the weight of the package and the cost per ounce for shipping are both greater than zero. The function CalculateCost() calculates the cost to ship a package by multiplying the weight of the package by the cost per ounce of shipping. The other classes also have this function, but with different cost parameters. The other member function, getpackWeight() returns the weight of the package so it can be accessed in other classes. 

	The next derived class is TwoDayPackage. This class is the child of Pakckage and consists of a default constructor and a CalculateCost function. It has one data member called flatFee. In the implementation file, the default constructor initializes the flat fee. In the CalculateCost() function, the program takes the cost of the package from the base class CalculateCost function and adds the flat fee to the cost.

	The second derived class, OvernightPackage, consists of a default constructor and a CalculateCost function.  It also has one data member - extraCostPerOunce.  In the implementation file, the default constructor initializes the extra cost per ounce to ship a package overnight.  The CalculateCost function takes the cost of the original package and the weight of the package from the base class functions, and then adds the extra cost per ounce.

	Main.cpp makes two different packages, one from each derived class, and displays the cost of each one.

How was the program verified?
-----------------------------
	We verified by double checking the calculations by hand with a calculator. 

How do you make a base class abstract and a derived class concrete?
-------------------------------------------------------------------
	An abstract class are classes from which you never intend to instantiate any objects. These classes are normally used as base classes in inheritance hierarchies. They cannot be used to instantiate objects because they’re incomplete, and derived classes must be used to fill in the gaps. Classes that can be used to instantiate objects are concrete classes. They define or inherit implementations for every member function they declare. Abstract classes are too generic to define real objects. Concrete classes provide the specifics that make it possible to instantiate objects. For example, an Abstract Class would be 2D Shape, and Concrete classes would be Circle or Square. 

Discussion on which approach (composition vs. inheritance) is more natural and why
----------------------------------------------------------------------------------
	Inheritance is more natural because with compositions classes have to be created from scratch. Inheritance is much cleaner and reuses software. This can greatly simplify code maintenance and debugging. Moreover, inheritance is easier to visualize than composition. You can think of it as a tree or hierarchy, whereas there is no easy way to visualize composition. 

Distinguishes between virtual functions and pure virtual functions. You should mention both the technical difference (how) and the big picture difference (why)
--------------------------------------------------------------------------------------------------------------------------------------
	A pure virtual function is specified by placing “=0” in its declaration. Pure virtual functions usually don’t provide implementations. Each concrete derived class (TwoDayPackage and OvernightPackage) must override all base-class pure virtual functions with concrete implementations of those functions. Otherwise, the derived class also becomes abstract. Aside from not having the “=0” the difference between virtual functions and pure virtual functions if that a virtual function has an implementation and gives the derived class the option of overriding the function. A pure virtual function does not have an implementation and requires the derived class to override the function.
