///////////////////////////////////////////////////
/*-----------------------------------------------
//Basic Data Types
type -->> How many bytes are used

//Primitive built-in types
1- Boolean/Bool     -->> "true/false" & "1/0"
2- Character        -->> chart "abc"
3- Integer          -->> int 1.2
4- Floating point   -->> float 1.2
5- Double f point   -->> double 1.2345
6- Valueless        -->> void valueless()
7- Wide character   -->> wchar_t

with some speciffic keywords relation to add before and after to the code
1- signed
2- unsigned
3- short
4- long

//Class
1- Struct   -->> variable
2- Class    -->> variable and functions

1- Object   -->> Has states (variable) and behaviour (function)
Legartos.name
Legartos.getPoint()
2- Class             -->> Template describing function and state
3- Method            -->> Function (behaviour)
4- Instance variable -->> Legartos

-------------------------------------------------*/
///////////////////////////////////////////////////
/*Exercises_1
#include <iostream> 

int main() {
    std::cout<< "Size of int : " << sizeof(int) << std::endl;
    std::cout<< "Size of char : " << sizeof(char) << std::endl;
    std::cout<< "Size of float : " << sizeof(float) << std::endl;
    std::cout<< "Size of double : " << sizeof(double) << std::endl;
    
    system("pause");
    return 0;
}
*/
/*Exercises_2
#include <iostream>

typedef double pressureUnit; // Types can be renamed

int main() {
    double presMeasurement_1;
    pressureUnit presMeasurement_2;

    presMeasurement_1 = 1.2;
    presMeasurement_2 = 3.4;

    std::cout<< "Pressure Value 1 : " << presMeasurement_1 << std::endl;
    std::cout<< "Pressure Value 2 : " << presMeasurement_2 << std::endl;

    system("pause");
    return 0;
}
*/
/*Exercises_3
#include <iostream>

enum colorUnit {            // Variables can be renamed
    red     = 100,          // Integer
    green   = 200,
    blue    = 300
}c;

int main() {
    std::cout<< "Red type value : " << red << std::endl;
    std::cout<< "Green type value : " << green << std::endl;
    std::cout<< "Blue type value : " << blue << std::endl;
    
    system("pause");
    return 0;
}
-------------------------------------------------
///////////////////////////////////////////////////
//Scope - definition
#include <iostream>

int main () { // Function scope
    int a = 1;
    std::cout << "Function = " << a <<std::endl;
    
    { // Internal scope
        int a = 2;
        std::cout << "Internal = " << a <<std::endl;
    }
    std::cout << "Function = " << a <<std::endl;
    
}
-------------------------------------------------
//////////////////////////////////////////////////
// Constant definition

//    Literal -->> number and symbol
//    #define -->> preprocessor
//    const   -->> keyword

#include <iostream>

//-****** DEFINE Preprocessor *******
//#define PI  3.1415
//#define r   10
//-****** DEFINE Preprocessor *******

//-****** CONST Keyword *******
const float PI = 3.1415;
const int r = 10;
//-****** CONST Keyword *******

float area = 0;
    
int main () {
    area = (float)(PI * r * r);

    std::cout << "Area of the Circle = " << area << std::endl;
}

-------------------------------------------------
//////////////////////////////////////////////////
// Modifier
// some speciffic keywords relation to add before and after to the code
// 1- signed
// 2- unsigned
// 3- short
// 4- long

#include <iostream>


int main () {
    short int PI;
    short unsigned int r;

    PI  = 3;
    r   = 10;

    int area = (PI * r * r);

    std::cout << "Area of the Circle = " << area << std::endl;
}
-------------------------------------------------
//////////////////////////////////////////////////*/
