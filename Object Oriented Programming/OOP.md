# Object Oriented Programing
    - convert real life scenarios into code using OOP concepts
    - nothing but another way of writing code
Interviewers ask definitions with examples

## Objects:
    • objects are entities in the real world
## Class:
    • class is like a blueprint of these entities

## Access Modifiers
- private - data & methods accessible inside class
- public - data & methods accessible to everyone
- protected - data and methods accessible inside class & to its derived class
    Attributes are by default private

# Encapsulation
- is wrapping up of data and member functions in a single unit called class
- hiding sensitive information using private

## Constructor
    Special method invoked automatically at time of object creation. Used for Initialisation.
• Same name as class
• Constructor doesn't have a return type
• Only called once (automatically), at object creation
• Memory allocation happens when constructor is called

### this pointer
    this is an implicit pointer that points to the current object which invoked the function.

- So if you call a member function on an object, inside that function, this refers to that specific object’s memory.
- this is a special pointer in C++ that points to the current object.
- this->property is same as *(this).prop

## Copy Constructor
    Special Constructor (default) used to copy properties of one object into another.
    that creates a new object as a copy of an existing object.

###  Shallow Copy vs Deep Copy
- A shallow copy of an object copies all of the member values from one object to another.  
- Creates problem while dynamic memory allocation (heap)

- A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.

