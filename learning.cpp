#include <iostream>
//basic data types
/*
int main(){

    int age = 18;
    //double includin decimal
    double prize = 20.99;

    // single character
    char grade = 'O';
    char hello = 'V';

    //boolean
    bool student = false;
    bool power = true;

    // string (object that represent a sequence of text)
    
    std::string name ="Bro";
    std::string day = "Saturday";

    std::cout <<"hello " << name <<'\n';
    std::cout <<"you are "<<age<<" year old";
    return 0;
}
*/

//const
/*
int main(){
    const double PI = 3.14159; //fix value and cant be changed
    int r = 10;
    double  circ;
    circ = 2 * PI * r;

    std::cout <<"curcumfrence of circle is "<<circ;
    return 0;
}
*/

//Namespace
//A namespace is a way to group related code together under a name. It helps you avoid naming conflicts when your code grows or when you use code from multiple sources.
/*
namespace first{
    int x = 1;
}
namespace second
{
    int x = 2;
    
} // namespace second

// int main(){
//     using namespace second; //if one single namespace to be used everwhere in this specific section
//     int x = 0;
//     std::cout << first ::x;
//     return 0;
// }
*/

//typedef & type aliases
//typedef = reserved keyword used to creat an additional name
//          (alias) for another data type.
//          New identifier for an existing type
//          Helps with readbility and reduces typos
//          Use when there is a clear benifit
//          Replaced with 'using' (work betterw/ templates)

/* 
#include <vector>
//typedef std::vector<std::pair<std::string, int>>pairlist_t;
// typedef std::string text_t;
// typedef int num_t;
using text_t = std::string;
int main(){
    // pairlist_t pairlist;
    text_t firstname = "vishu";
    std::cout<<firstname<<'\n';

    // num_t marks =99;
    // std::cout<<marks;

    return 0;
}
*/


//Arithmetic operators
// operator like (+ - * /)
/*
int main(){
    int students = 20;

    //students = students + 79
    // students+=79;

    // students-=1;
    // students*=5;
    // students/=20;
    std::cout <<students;
}
*/

//Type conversion
// type conversion = conversion a value of one data type to other data type 
//                   Inplicit = automatic
//                   Explicit = Precede value with new data type
/*
int main(){

    int correct = 8;
    int question = 10;
    double score = correct / (double)question * 100;//conversion in the datatype should be in brackets

    std::cout<<score<<"%";
}
*/

//User input
//cout <<(insertion operation)
//cin >>(extraction operator)
/*
int main(){

    std::string name;
    int age;
    std::cout <<"whats your name?: ";
    std::cin>> name;

    std::cout <<"Whats your age?: ";
    std::cin >>age;

    std::cout << "hello " <<name<<'\n';
    std::cout<<"your are "<<age<<" year old";


    return 0 ;
}
*/

//Userfull Math related function
#include <cmath> //to enable maths
/*
int main(){
    double x = 2;
    double y = 3;
    double z;

    // z = std::max(x,y);   //to get max
    // z = std::min(x,y);   //to get min
    // z = pow(2,3);        //power
    // z = sqrt(9);         //squareroot
    // z = abs(3);          //absoulute (distance from 3)

    //FOR MORE USEFULL ONES - cplusplus.com/refrence/cmath/
    std::cout <<z;
}
*/

//practice
/*
//hypotenuse of right angle triangle
//c=sqrt(a*a + b*b)
int main(){
    double a;
    double b;
    double c;

    std::cout <<"Enter perpendicular: ";
    std::cin >> a;

    std::cout <<"Enter Base: ";
    std::cin >>b;
    a= pow(a,2);
    b = pow(b,2);
    c=sqrt(a+b);

    // c = sqrt(pow(a,2)+pow(b,2));         //More efficent way
    std::cout << "Hypotenous of the right angle triangle is: "<<c;
}
*/

//if else
//if something true you do something or something else
/*
int main(){
    int age;
    std::cout<<"Enter your age: ";
    std::cin>> age;

    if(age>=18){
        std::cout<<"eligible";
    }else if(age<0){
        std::cout<<"haha";
    }
    else{
        std::cout<<"not eligible";
    }

}
*/

using namespace std;

//Switches
// switches = it is an alternative to using many "else if" statements
// switch(input){
//      case 1:
//      something
//      break;
// }
/*
int main(){
    int month;
    cout<<"Enter the month(1-12): ";
    cin>>month;

    switch (month){
        case 1:
            cout<<"January";
            break;
        case 2:
            cout<< "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        default:
            cout << "Invalid month number";
    }

    return 0;
    
}
*/

//calculator program
/*
using namespace std;
int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout<< "*************** CALCULATOR ***************\n";
    
    cout<<"Enter either (+ - * /): ";
    cin>> op;

    cout<<"enter #1: ";
    cin>> num1;

    cout<<"enter #2: ";
    cin>> num2;

    switch(op){
        case '*':
        result = num1 *num2;
        cout<< "result "<<result<<'\n';
        break;

        case '/':
        result = num1 /num2;
        cout<< "result "<<result<<'\n';
        break;

        case '-':
        result = num1-num2;
        cout<< "result "<<result<<'\n';
        break;
        
        case '+':
        result = num1 +num2;
        cout<< "result "<<result<<'\n';
        break;

        default:
        cout<<"invalid response";
        break;

    }

}
*/

//ternary operator ?:
// Replacement of ifelse statement
// condition ? expression1 : expression2
/*
int main(){
    int age;
    cout<<"enter age: ";
    cin>> age;

    age >= 18? cout<<"eligible" : cout<< "not eligible";

}
*/

//logical Operator
//   && = check if both condition true
//   || = At least one is true
//   ! = reverse the logical state (if true does false; vice verse)
/*
int main(){
    int temp;
    
    cout<< "enter the temp: ";
    cin>> temp;
    //temp<0 && temp< 30
    //temp<0 || temp< 30
    if(!(temp<0 || temp< 30)){
        cout<< "the temprature is good";

    }else{
        cout<< "the temp is bad";
    }
}
*/

//temprature conversion program
/*
int main(){
    double temp;
    char unit;

    cout<<"F = Fahrenheit\n";
    cout<<"C = Celsius\n";
    cout<<"which unit you like to convert to: ";
    cin>>unit;

    if(unit == 'F' || unit == 'f'){
        cout<<"enter the temp in celsius: ";
        cin>>temp;

        temp = (1.8* temp)+ 32.0;
        cout<<"Temprature is: "<< temp<< "F\n";

    }else if(unit == 'C' || unit == 'c'){
        cout<<"enter the temp in Fahrenheit: ";
        cin>>temp;

        temp = (temp - 32)/ 1.8;
        cout<<"Temprature is: "<< temp<< "C\n";
    }else{
        cout<<"invalid response";
    }


}
*/

//usefull string meathod
// stringvar.length()  = for getting length of string
// string_var.empty()  = for getting empty string
// string_var.append(xyz) = to add something with the string
// string_var.at(position) = to get the char at the position
// string_var.inser(position, "anything") = insert anything at the specified position
// string_var.find(anything) = find if anything at which positon
// string_var.erase(position, anyting) = erase anything at a position //
/*
int main(){
    string name;
    cout<<"enter your name: ";
    getline(cin, name);

    if(name.empty()){
        cout<<"enter name";

    }else if(name.length() >12){
        cout<<"your name can not be over 12 character";
    }else {
        cout<<"welcome "<< name;
    }
}
*/

//dowhile loop
/*
int main(){

    int num;
    // cin >> num;
    do{
        cout<<"enter a positive integer";
        cin>> num;
    }while(num <0);
    cout <<"you entered"<<num;

}
*/

//for loop
//i++ = increment
// i-- = decrement
//i+=2 = increment by 2 
//and soo on
/*
int main(){

    for(int i=0; i<=10; i++){
        cout << i<<'\n';
    }
    cout<<"happy new year\n";
}
*/

//break & continue
//break = break out of the loop
// continue = skip the current iteration\/
/*
int main(){
    int i;
    for(int i = 1; i<=20; i++){
        if(i==13){
            continue;
        }
    }
    cout<< i <<'\n';

}
*/

//nested loops
// loop in a loop
/*
int main(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=10; j++){
        cout << j << ' ';
    }
    cout << '\n';
    }
    
}
*/

//practice; rectangle code
/*
int main(){
    int rows;
    int columns;

    cout<<"how many rows: ";
    cin>> rows;

    cout<<"how many columns: ";
    cin>>  columns;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
        cout << "*";
    }
    cout << '\n';
    }
}
*/

//generate some random numbers(0-32k)
//#include <ctime>
/*
#include <ctime>
int main(){

    srand(time(NULL));

    int num = (rand()%10)+1;
    cout<<num;
}
*/

//random event occur

/*
#include <ctime>
int main(){
    srand(time(0));
    int rand_num = (rand()%5) +1;
    switch(rand_num){
        case  1: cout<<"YOU won Meth!\n"; 
        break;
        case  2: cout <<"YOU won weed!\n";
        break;
        case  3: cout<<"YOU won a Heroin!\n";
        break;
        case  4: cout<<"YOU won a Cocaine!\n";
        break;
        case  5: cout<<"YOU won a Crack!\n";
        break;
        default: cout<<"YOU won a Chocolate!\n";
        break;
    }
}
*/

//practice; random number guessing game

/*
#include <ctime>

int main(){
    int num;
    int guess;
    int attempts = 0; // Initialize counter

    srand(time(0));
    num = rand() % 100 + 1;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < num) {
            cout << "Too low! Try again.\n";
        } else if (guess > num) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " 
                 << attempts << " attempts.\n";
        }
    } while(guess != num);

    cout << "Thank you for playing!\n";
    return 0;
}
*/

