# C++ Programming – Exercise Questions (Inheritance & Polymorphism)

The questions for this exercise are listed below.

## Questions

1. Write a Program illustrating how constructors are implemented and the **order in which they are called** when classes are inherited.
   Use three classes named:

   * `alpha`
   * `beta`
   * `gamma` (derived class inheriting from both alpha & beta)

2. Write a Program to design:

   * a `student` class (roll number)
   * a `test` class (derived from student, storing subject scores)
   * a `sports` class (storing sports score)

   Both `test` and `sports` should be inherited by a `result` class which:

   * adds scores
   * displays final result

3. Write a program to maintain records of a person with details:

   * Name
   * Age

   Find the **eldest person** using the `this` pointer.

4. Write a Program to illustrate the use of **pointers to objects** which are related by inheritance.

5. Write a program illustrating the use of **virtual functions** in a class.

6. Write a program to design a class representing a **digital library system**:

   * Base class: `media`
   * Derived classes: `book`, `tape`

   The system should support:

   * Adding new items
   * Issuing items
   * Depositing items

   Use **runtime polymorphism**.
