#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 

(assuming not needing signed, unsigned, short and long variations as well as wchar_t?) ...

 bool
 char
 int
 float
 double
 void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    bool isOn = 0;
    bool isHigherThan5 = 1;
    bool isOrange = 0;

    char initials = 'W'; //WWW
    char activity = 'P'; //Programming
    char today = 'F'; //Friday

    int dayOfMonth = 16;
    int year = 2021;
    int answer = 5;

    float threeDecimalPlaces = 4.321f;
    float mypi = 3.13f;
    float randomDecimal = 3.57618f;

    double fifteenDigits = 4645.45798134586;
    double threeSigFig = 3.42;
    double isOverKillFor = 5;

    ignoreUnused(isOn, isHigherThan5, isOrange, initials, activity, today, dayOfMonth, year, answer, threeDecimalPlaces, mypi, randomDecimal, fifteenDigits, threeSigFig, isOverKillFor); //passing each variable declared to the ignoreUnused() function

}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */

/*
 1)
 */
double doMaths(float mypi, int randomNumber = 53)
{ 
    ignoreUnused(mypi, randomNumber);
    return {};
} 

/*
 2)
 */
char concatenateInitials(char firstName, char secondName = 'M', char lastName)
{ 
    ignoreUnused(firstName, secondName, lastName);
    return {};
} 

/*
 3)
 */
void setupProjectView(int windowSizeX = 640, int windowsizeY = 480)
{ 
    ignoreUnused(windowSizeX, windowsizeY);
}

/*
 4)
 */
bool closeWindow(int mousePosX, int mousePosY)
{ 
    ignoreUnused(mousePosX, mousePosY);
    return {};
} 

/*
 5)
 */
bool isWindowOpen(bool sensorState = 0)
{ 
    ignoreUnused(sensorState);
    return {};
} 

/*
 6)
 */
void playMusic(int readHeadPosition = 43, char playbackState = 'S')
{ 
    ignoreUnused(readHeadPosition, playbackState);
}

/*
 7)
 */
int numDogBarksSinceBreakfast(int numDogBarksinHour, double timeSinceBreakfast)
{ 
    ignoreUnused(numDogBarksinHour, timeSinceBreakfast);
    return {};
} 

/*
 8)
 */
double tempInDegC(float tempInDegF = 103.5)
{ 
    ignoreUnused(tempInDegF);
    return {};
} 

/*
 9)
 */
char theTempTodayIs(char day = 'F', double tempInDegC = 20.1)
{ 
    ignoreUnused(day, tempInDegC);
    return {};
}

/*
 10)
 */
bool isThistheLastTask(int currentTaskNum, int totalTaskNum)
{ 
    ignoreUnused(currentTaskNum, totalTaskNum);
    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //1)
    auto mathsResult = doMaths(3.13);

    //2)
    auto fullInitials = concatenateInitials('A', 'B', 'C');

    //3)
    //auto viewProject = setupProjectView();

/* this and //6 gave error "[cquery] variable has incomplete type 'void'" */


    //4)
    auto closeW = closeWindow(320, 240);

    //5)
    auto openWindow = isWindowOpen();
  
    //6)
    //auto play = playMusic(22, 'p');

    //7)
    auto barks = numDogBarksSinceBreakfast(15, 4);

    //8)
    auto theTempTomorrowinDegC = tempInDegC(94);

    //9)
    auto theTempHasGoneUpBy = theTempTodayIs('S', 30);
 
    //10)
    auto amIClose = isThistheLastTask(5, 10);

    
    ignoreUnused(mathsResult, fullInitials, closeW, openWindow, barks, theTempTomorrowinDegC, theTempHasGoneUpBy, amIClose);


    std::cout << "good to go!" << std::endl;
    return 0;    
}
