# Vector Arithmetic

__This was my 4th and final programming project for CSC 1253, an intro to C++ course.__

_This program computes the dimension, magnitude, addition, subtraction, multiplication, dot product, and string representation of two sets of three vectors._

This program was intended to ...
* Solidify functions
* solidify iterative arithmetic
* introduce vectors
* implement type casting and string manipulation techniques
  
  ## How to use ...
  __Input__
* First, enter the dimension of your vectors (size).
* Next, input the coordinates of three vectors in the given dimension.

__Output__ 
* The program will output the functions named above in detail. 
  
  
* _Note 1: This program explicitly deletes each vector to avoid memory leaks on your local machine._
* _Note 2: This program has an issue with the dim function. 
  * I don't believe this raises any major concerns ...
    * As a result, only half of the program outputs with each run.
    * While the program works, I needed /**/ to output which parts needed. 
    * This problem was noted by the professor and can be mitigated by simply not using the dim function and pulling the size where needed. 