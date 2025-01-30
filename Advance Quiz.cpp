#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <conio.h>
#include <limits>
#include<unistd.h>
#include <windows.h> // for SetConsoleTextAttribute
using namespace std;

// Abstract base class for questions
class Question {
public:
    virtual void display() = 0;
    virtual int getCorrectAnswer() = 0;
public:
	 	string question;
	  	string getQuestion() {
        return question;
    }
};

// Multiple choice question class
class MultipleChoiceQuestion : public Question {
public:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int correctAnswer;
    int subjectId;

    MultipleChoiceQuestion(string q, string o1, string o2, string o3, string o4, int ca, int si) {
        question = q;
        option1 = o1;
        option2 = o2;
        option3 = o3;
        option4 = o4;
        correctAnswer = ca;
        subjectId = si;
    }

    void display() {
        cout << question << endl;
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cout << "3. " << option3 << endl;
        cout << "4. " << option4 << endl;
    }

    int getCorrectAnswer() {
        return correctAnswer;
    }
};

// Abstract base class for subjects
class Subject {
public:
    vector<Question*> questions;
	virtual string getName() = 0;
    virtual void displayQuiz() = 0;
};

// C++ subject class
class CppSubject : public Subject {
public:
	  string getName() {
        return "C++";
    }
    CppSubject() {
        questions.push_back(new MultipleChoiceQuestion("What does the std::cout statement do in C++?", "Prints a string", "Adds two numbers", "Creates a variable", "None of the above", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following C++ code: std::cout << 5 + 2;?", "7", "52", "25", "None of the above", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the #include directive in C++?", "To include a header file", "To define a function", "To declare a variable", "None of the above", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the difference between delete and delete[] in C++?", "delete is used for arrays, delete[] is used for pointers", "delete is used for pointers, delete[] is used for arrays", "Both are the same", "None of the above", 2, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following C++ code: std::cout << (5 > 2) << std::endl;?", "1", "0", "5", "2", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the static keyword in C++?", "To create a local variable that retains its value between function calls", "To create a global variable that can only be accessed within the current file", "To create a class variable that is shared among all objects of the class", "None of the above", 3, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following C++ code: std::cout << 5 % 2 << std::endl;?", "1", "0", "2", "5", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the const keyword in C++?", "To create a constant variable that cannot be modified", "To createa reference that cannot be changed", "To create a function that cannot modify its input parameters", "None of the above", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following C++ code: std::cout << 5 + 2 * 3 << std::endl;?", "11", "17", "7", "5", 1, 1));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the virtual keyword in C++?", "To create a virtual function that can be overridden in derived classes", "To create a pure virtual function that must be overridden in derived classes", "To create a function that can be called virtually", "None of the above", 1, 1));
    }

    void displayQuiz() {
        for (int i = 0; i < questions.size(); i++) {
            cout << "C++ Question: " << endl;
            questions[i]->display();

            int userAnswer;
            cout << "Enter your answer (1-4): ";
            cin >> userAnswer;

            if (userAnswer == questions[i]->getCorrectAnswer()) {
                cout << "Correct!" << endl;
            } else {
                cout << "Incorrect. The correct answer is " << questions[i]->getCorrectAnswer() << endl;
            }
        }
    }
};

// Python subject class
class PythonSubject : public Subject {
public:
    string getName() {
        return "Python";
    }
    PythonSubject() {
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Python code: print(5 + 2)?", "7", "52", "25", "None of the above", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the import statement in Python?", "To include a module", "To define a class", "To declare a variable", "None of the above", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the difference between list and tuple in Python?", "List is mutable, tuple is immutable", "List is immutable, tuple is mutable", "Both are mutable", "Both are immutable", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Python code: print(5 > 2 and 3 < 1)?", "True", "False", "5", "2", 2, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the pass keyword in Python?", "To create a null statement", "To create a constant variable", "To create a reference", "None of the above", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Python code: print(5 % 2)?", "1", "0", "2", "5", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the def keyword in Python?", "To define a function", "To define a class", "To define a variable", "None of the above", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Python code: print(5 + 2 * 3)?", "11", "17", "7", "5", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the self keyword in Python?", "To refer to the current object", "To refer to a method of the current class", "To refer to a variable of the current class", "None of the above", 1, 2));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Python code: print((5 > 2) or (3 > 1))?", "True", "False", "5", "2", 1, 2));
    }

    void displayQuiz() {
        for (int i = 0; i < questions.size(); i++) {
            cout << "Python Question: " << endl;
            questions[i]->display();

            int userAnswer;
            cout << "Enter your answer (1-4): ";
            cin >> userAnswer;

            if (userAnswer == questions[i]->getCorrectAnswer()) {
                cout << "Correct!" << endl;
            } else {
                cout << "Incorrect. The correct answer is " << questions[i]->getCorrectAnswer() << endl;
            }
        }
    }
};

// Java subject class
class JavaSubject : public Subject {
public:
	  string getName() {
        return "Java";
    }
    JavaSubject() {
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Java code: System.out.println(5 + 2);?", "7", "52", "25", "None of the above", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the import statement in Java?", "To include a package", "To define a class", "To declare a variable", "None of the above", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the difference between public, private, and protected access modifiers in Java?", "Public is accessible from anywhere, private is only accessible within the same class, protected is accessible within the same package", "Public is accessible from anywhere, private is not accessible at all, protected is accessible within the same package", "Public is accessible from anywhere, private is only accessible within the same class, protected is accessible from subclasses", "None of the above", 3, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Java code: System.out.println(5 > 2 && 3 < 1);?", "true", "false", "5", "2", 2, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the final keyword in Java?", "To create a constant variable that cannot be modified", "To create a reference that cannot be changed", "To create a function that cannot be overridden", "None of the above", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Java code: System.out.println(5 % 2);?", "1", "0", "2", "5", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the abstract keyword in Java?", "To create an abstract class that cannot be instantiated", "To create an interface that cannot be implemented", "To create a method that must be overridden in derived classes", "None of the above", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Java code: System.out.println(5 + 2 * 3);?", "11", "17", "7", "5", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the this keyword in Java?", "To refer to the current object", "To refer to a method of the current class", "To refer to a variable of the current class", "None of the above", 1, 3));
        questions.push_back(new MultipleChoiceQuestion("What is the output of the following Java code: System.out.println((5 > 2) || (3 > 1));?", "true", "false", "5", "2", 1, 3));
    }

    void displayQuiz() {
        for (int i = 0; i < questions.size(); i++) {
            cout << "Java Question: " << endl;
            questions[i]->display();

            int userAnswer;
            cout << "Enter your answer (1-4): ";
            cin >> userAnswer;

            if (userAnswer == questions[i]->getCorrectAnswer()) {
                cout << "Correct!" << endl;
            } else {
                cout << "Incorrect. The correct answer is " << questions[i]->getCorrectAnswer() << endl;
            }
        }
    }
};

// Web Development subject class
class WebDevSubject : public Subject {
public:
	  string getName() {
        return "WebDev";
    }
    WebDevSubject() {
        questions.push_back(new MultipleChoiceQuestion("What does the <!DOCTYPE html> declaration do in HTML?", "Specifies the document type", "Specifies the character encoding", "Specifies the CSS style sheet", "None of the above", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <head> tag in HTML?", "To define the body of the webpage", "To define the header of the webpage", "To define the footer of the webpage", "None of the above", 2, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the difference between <div> and <span> tags in HTML?", "<div> is a block-level element, while <span> is an inline element", "<div> is an inline element, while <span> is a block-level element", "Both are block-level elements", "Both are inline elements", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <meta> tag in HTML?", "To specify the character encoding", "To specify the viewport", "To specify the author of the webpage", "None of the above", 2, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <script> tag in HTML?", "To include JavaScript code", "To include CSS styles", "To include an image", "None of the above", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <link> tag in HTML?", "To include a CSS style sheet", "To include a JavaScript file", "To include an image", "None of the above", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <img> tag in HTML?", "To include an image", "To include a video", "To include an audio file", "None of the above", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <input> tag in HTML?", "To create a form input field", "To create a button", "To create a link", "None of the above", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <button> tag in HTML?", "To create a button", "To create a form input field", "To create a link", "None of the above", 1, 4));
        questions.push_back(new MultipleChoiceQuestion("What is the purpose of the <a> tag in HTML?", "To create a hyperlink", "To create a form input field", "To create a button", "None of the above", 1, 4));
    }

    void displayQuiz() {
        for (int i = 0; i < questions.size(); i++) {
            cout << "Web Development Question: " << endl;
            questions[i]->display();

            int userAnswer;
            cout << "Enter your answer (1-4): ";
            cin >> userAnswer;

            if (userAnswer == questions[i]->getCorrectAnswer()) {
                cout << "Correct!" << endl;
            } else {
                cout << "Incorrect. The correct answer is " << questions[i]->getCorrectAnswer() << endl;
            }
        }
    }
};

//Driver Code
int main() {
    system("cls"); // Clear the console screen
    cout << "************************************************************" << endl;
    cout << "*** Welcome to the Quiz Application! ***" << endl;
    cout << "************************************************************" << endl;
    cout << "You will get 2 mins for each subject" << endl;
    cout << "1. C++" << endl;
    cout << "2. Python" << endl;
    cout << "3. Java" << endl;
    cout << "4. Web Development" << endl;
    cout << "Press any key to start..." << endl;
    _getch();

    vector<Subject*> subjects;
    subjects.push_back(new CppSubject());
    subjects.push_back(new PythonSubject());
    subjects.push_back(new JavaSubject());
    subjects.push_back(new WebDevSubject());

    int totalScore = 0;
    ofstream resultsFile("quiz_results.txt", ios::app); // Open the file in append mode
	resultsFile.close();

    for (vector<Subject*>::iterator it = subjects.begin(); it != subjects.end(); it++) {
       Subject* subject = *it;
        int score = 0;
        time_t start_time = time(0);

	

        for (int i = 0; i < subject->questions.size(); i++) {
            time_t current_time = time(0);
            double elapsed_time = difftime(current_time, start_time);
            if (elapsed_time > 120) { // 2 minutes in seconds
                break;
            }

            system("cls"); // Clear the console screen
            cout << "************************************************************" << endl;
            cout << "*** " << subject->getName() << " Question " << i + 1 << " of " << subject->questions.size() << " ***" << endl;
            cout << "************************************************************" << endl;
            subject->questions[i]->display();

            int userAnswer;
           
        while (true) {
            cout << "Enter your answer (1-4): ";
            if (cin >> userAnswer) {
                if (userAnswer >= 1 && userAnswer <= 4) {
                    break;
                } else {
                    cout << "Invalid answer. Please try again.\n";
                }
            } else {
                cout << "Invalid input. Please enter a number.\n";
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
            }
        }
            if (userAnswer == subject->questions[i]->getCorrectAnswer()) {
                score++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << "Correct!" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            } else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
                cout << "Incorrect. The correct answer is " << subject->questions[i]->getCorrectAnswer() << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }

            sleep(1.2); // Pause the console window
            system("cls"); // Clear the console screen
        }

        system("cls"); // Clear the console screen
        cout << "************************************************************" << endl;
        cout << "*** Your score for " << subject->getName() << " is " << score << " out of " << subject->questions.size() << " ***" << endl;
        cout << "************************************************************" << endl;
		sleep(1.2); 
	    totalScore += score;
   
   	
	resultsFile.open("quiz_results.txt", std::ios::app);
	if (resultsFile.is_open()) {
		
       Subject* subject = *it;
       resultsFile << subject->getName() << ": " << score << " out of " << subject->questions.size() << endl;
    
    resultsFile.close();
	} else {
    cout << "Unable to open file for writing." << endl;
	}	
	resultsFile.close();
	}
	
	
    system("cls"); // Clear the console screen
    cout << "************************************************************" << endl;
    cout << "*** Your total score is " << totalScore << " out of " << subjects.size() * subjects[0]->questions.size() << " ***" << endl;
    cout << "************************************************************" << endl;
	
	resultsFile.open("quiz_results.txt", std::ios::app);
	if (resultsFile.is_open()) {
    resultsFile << "Total Score: " << totalScore << " out of " << subjects.size() * subjects[0]->questions.size() << endl;
    resultsFile << "--------------------------------------------" << endl;
	resultsFile.close();
	} else {
    cout << "Unable to open file for writing." << endl;
	}	
	char exitChar;
    cout << "Press 'x' to exit...\n";
    cin >> exitChar;

    while (exitChar != 'x') {
        cout << "Invalid input. Press 'x' to exit...\n";
        cin >> exitChar;
    }

    return 0;
}
