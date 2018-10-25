# Exercise-Pointers1

We're revisiting a version of our cars.cpp program from last week and incorporating the pointer concepts from Chapter 11. Before beginning this exercise, make sure you are familiar with this version of the cars.cpp program and have read the pointer content of Chapter 11 and viewed the example code and videos.

Your goal is going to be to modify the main() function in the attached cars.cpp file to use a pointer to the car variable, rather than the full Car variable it currently uses.

Before beginning, answer the following:

    Conceptually, what changes will you need to make in the rest of the main() function if you change the definition in car to:
        Car *carPtr
    Hints:
        Keep in mind how this changes what the car variable is and what it associates with in memory.
        If car is pointer, what is it going to point to?
        Since Car is a struct and has multiple members, how does making car a pointer change how you will access those members.

Ready? Now modify cars.cpp so that it uses the following definitions and assignments. (i.e., replace the Car car, declaration with the following three lines and then modify the rest of main() so that it uses carPtr rather than accessing the car variable directly.)
```
  Car  *carPtr;     // Declare a pointer to a Car struct (This is only a pointer)
  Car car;          // Still need a car variable to hold the actual data values
  carPtr = &car;    // Point your carPtr at the memory location of car </b>
```
+Submit: Updated and commented cars.cpp file. (Just to clarify, you shouldn't be changing either of the functions or modifying anything in car.h or cars.dat.)
