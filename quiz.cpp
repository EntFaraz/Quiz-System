#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

class student { // super class
protected:
    string name;
    int roll;
    int marks;
    int correctans;
    int incorrectans;
    int per;

public:
    student() {
        marks = 0;
        correctans = 0;
        incorrectans = 0;
        per = 0;
    }


    void get() {
      cout << "\n-----Enter your  first name without space: ";
       
        cin >> name;
        cout << "\n-----Please note! that more than 9 digits are not allowed in the roll number-----\n\n";
        cout << "-----Enter your roll number: ";
        cin >> roll;
    }

    virtual void display() = 0;

    virtual void method1() {
        cout << "This is a method of the abstract class." << endl;
    }
};

class cplusplus : public student {
    char choice;

public:
    cplusplus() {
		cout<<"\t\t1. C++\n";
	}

    void method1() {
        cout << "************************************************************************************************************" << endl;
        cout << "*************************Welcome to the C++ Quiz!**********************************************************" << endl;
        cout << "************************************************************************************************************" << endl << endl;
    }

    void display() {
        fstream file;
        file.open("cpp.txt", ios::app);
        if (!file) {
            cout << "\t\tYour C++ Quiz Result File is Not Created" << endl;
        } else {
            cout << "\t\tYour C++ Quiz Result File is Created" << endl;
     
            get();
            file << "\n\nYour Name is: " << name;
            file << "\nYour Roll Number is: " << roll;
        }

        cout << "\n\n1. What is the correct syntax to output \"Hello World\" in C++?" << endl;
        cout << " A: system.out.printIn(\"Hello World\");" << endl;
        cout << " B: Console.WriteLine(\"Hello World\");" << endl;
        cout << " C: print Hello World" << endl;
        cout << " D: cout<<\"Hello World\"" << endl;
        cin >> choice;
        if (choice == 'D' || choice == 'd') {
            file << "\n1) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            file << "\n1) Your answer is incorrect (Correct answer is: D)" << endl;
            incorrectans++;
        }

        cout << "\n2. A language which has the capability to generate new data types are called?" << endl;
        cout << " A: Extensible" << endl;
        cout << " B: Overloaded" << endl;
        cout << " C: Encapsulated" << endl;
        cout << " D: Reprehensible" << endl;
        cin >> choice;
        if (choice == 'A' || choice == 'a') {
            file << "\n2) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            file << "\n2) Your answer is incorrect (Correct answer is: A)" << endl;
            incorrectans++;
        }

        cout << "\n3. Which of the following is called insertion / put to operator?" << endl;
        cout << " A: <" << endl;
        cout << " B: >" << endl;
        cout << " C: <<" << endl;
        cout << " D: >>" << endl;
        cin >> choice;
        if (choice == 'C' || choice == 'c') {
            file << "\n3) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            file << "\n3) Your answer is incorrect (Correct answer is: C)" << endl;
            incorrectans++;
        }

        cout << "\n4. What is the correct syntax for a single-line comment in C++?" << endl;
        cout << " A: //This is a comment" << endl;
        cout << " B: /This is a comment" << endl;
        cout << " C: /*This is a comment" << endl;
        cout << " D: /*This is a comment*/" << endl;
        cin >> choice;
        if (choice == 'A' || choice == 'a') {
            file << "\n4) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            file << "\n4) Your answer is incorrect (Correct answer is: A)" << endl;
            incorrectans++;
        }

        cout << "\n5) Which of the following is not a built-in data type in C++?" << endl;
        cout << " A: char" << endl;
        cout << " B: int" << endl;
        cout << " C: double" << endl;
        cout << " D: string" << endl;
        cin >> choice;
        if (choice == 'D' || choice == 'd') {
            file << "\n5) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            file << "\n5) Your answer is incorrect (Correct answer is: D)" << endl;
            incorrectans++;
        }
        
		cout << "\n6. Which of the following is called address operator?" << endl;
        cout << " A: +" << endl;
        cout << " B: &" << endl;
        cout << " C: -" << endl;
        cout << " D: % " << endl;
        cin>>choice;
        if (choice == 'B' || choice == 'b') {
            file << "\n6) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            file << "\n6) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }
        
        file << "\nYour Total Marks are: " << marks << "/50";
        file << "\n\nYour Total Correct Answers are: " << correctans;
        file << "\nYour Total Incorrect Answers are: " << incorrectans;
        per = 100*marks/6;
     	file<<"\n\nPercentage : "<<per<<"%"<<endl;
  		if(per>=50){
    		file<<"\nStatus: Pass"<<endl;}
  		else{
  			file<<"\nStatus: Fail"<<endl; }
        file << "\n\n************************************************************************************************************" << endl;
        file.close();
    }

};

class java : public student {
    char choice_java;

public:
    java() {
		cout<<"\t\t2. Java\n";
	}

    void method1() {
        cout << "************************************************************************************************************" << endl;
        cout << "*************************Welcome to the JAVA Quiz!**********************************************************" << endl;
        cout << "************************************************************************************************************" << endl << endl;
    }

    void display() {
        fstream javafile;
        javafile.open("java.txt", ios::app);
        if (!javafile) {
            cout << "\t\tYour JAVA Quiz Result File is Not Created" << endl;
        } else {
            cout << "\t\tYour JAVA Quiz Result File is Created" << endl;
   
            get();
            javafile << "\n\nYour Name is: " << name;
            javafile << "\nYour Roll Number is: " << roll;
        }

        cout << "\n\n1. Which of the following is not an OOPS concept in Java?" << endl;
        cout << " A: Polymorphism" << endl;
        cout << " B: Inheritance" << endl;
        cout << " C: Compilation" << endl;
        cout << " D: Encapsulation" << endl;
        cin >> choice_java;
        if (choice_java == 'C' || choice_java == 'c') {
            javafile << "\n1) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            javafile << "\n1) Your answer is incorrect (Correct answer is: C)" << endl;
            incorrectans++;
        }

        cout << "\n2. Which statement is true about Java?" << endl;
        cout << " A: Java is a sequence-dependent" << endl;
        cout << " B: Java is a code-dependent programming language" << endl;
        cout << " C: Java is a platform-dependent programming language" << endl;
        cout << " D: Java is a platform-independent programming language" << endl;
        cin >> choice_java;
        if (choice_java == 'D' || choice_java == 'd') {
            javafile << "\n2) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            javafile << "\n2) Your answer is incorrect (Correct answer is: D)" << endl;
            incorrectans++;
        }

        cout << "\n3. Which component is used to compile, debug and execute the Java programs?" << endl;
        cout << " A: JRE" << endl;
        cout << " B: JIT" << endl;
        cout << " C: JDK" << endl;
        cout << " D: JVM" << endl;
        cin >> choice_java;
        if (choice_java == 'C' || choice_java == 'c') {
            javafile << "\n3) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            javafile << "\n3) Your answer is incorrect (Correct answer is: C)" << endl;
            incorrectans++;
        }

        cout << "\n4. What is Truncation in Java?" << endl;
        cout << " A: Floating-point value assigned to a Floating type" << endl;
        cout << " B: Floating-point value assigned to an integer type" << endl;
        cout << " C: Integer value assigned to floating type" << endl;
        cout << " D: Integer value assigned to floating type" << endl;
        cin >> choice_java;
        if (choice_java == 'B' || choice_java == 'b') {
            javafile << "\n4) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            javafile << "\n4) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }

        cout << "\n5. What is the extension of Java code files?" << endl;
        cout << " A: .js" << endl;
        cout << " B: .txt" << endl;
        cout << " C: .class" << endl;
        cout << " D: .java" << endl;
        cin >> choice_java;
        if (choice_java == 'D' || choice_java == 'd') {
            javafile << "\n5) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            javafile << "\n5) Your answer is incorrect (Correct answer is: D)" << endl;
            incorrectans++;
        }

        cout << "\n6. Which keyword is used to define a constant variable in Java?" << endl;
        cout << " A: var" << endl;
        cout << " B: final" << endl;
        cout << " C: static" << endl;
        cout << " D: const" << endl;
        cin >> choice_java;
        if (choice_java == 'B' || choice_java == 'b') {
            javafile << "\n6) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            javafile << "\n6) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }
        
        javafile << "\n***Your total marks are: " << marks;
        javafile << "\nYour correct answers are: " << correctans;
        javafile << "\nYour incorrect answers are: " << incorrectans;
        per = 100 * marks / 6;
        javafile << "\n\nPercentage: " << per << "%" << endl;
        if (per >= 50) {
            javafile << "\nStatus: Pass" << endl;
        } else {
            javafile << "\nStatus: Fail" << endl;
        }
        javafile.close();
    }
};

class html : public student {
    char choice_html;

public:
    html() {
		cout<<"\t\t3. HTML\n";
	}

    void method1() {
        cout << "************************************************************************************************************" << endl;
        cout << "*************************Welcome to the HTML Quiz!**********************************************************" << endl;
        cout << "************************************************************************************************************" << endl << endl;
    }

    void display() {
        fstream htmlfile;
        htmlfile.open("html.txt", ios::app);
        if (!htmlfile) {
            cout << "\t\tYour HTML Quiz Result File is Not Created" << endl;
        } else {
            cout << "\t\tYour HTML Quiz Result File is Created" << endl;
      
            get();

            htmlfile << "\n\nYour Name is: " << name;
            htmlfile << "\nYour Roll Number is: " << roll;
        }

        cout << "\n\n1. What does HTML stand for?" << endl;
        cout << " A: Hyper Text Markup Language" << endl;
        cout << " B: High-level Text Management Language" << endl;
        cout << " C: Hyperlink and Text Markup Language" << endl;
        cout << " D: Home Tool Markup Language" << endl;
        cin >> choice_html;
        if (choice_html == 'A' || choice_html == 'a') {
            htmlfile << "\n1) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            htmlfile << "\n1) Your answer is incorrect (Correct answer is: A)" << endl;
            incorrectans++;
        }

        cout << "\n2. Which HTML tag is used for creating hyperlinks?" << endl;
        cout << " A: <link>" << endl;
        cout << " B: <a>" << endl;
        cout << " C: <href>" << endl;
        cout << " D: <hyperlink>" << endl;
        cin >> choice_html;
        if (choice_html == 'B' || choice_html == 'b') {
            htmlfile << "\n2) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            htmlfile << "\n2) Your answer is incorrect (Correct answer is: b)" << endl;
            incorrectans++;
        }

        cout << "\n3. Which HTML tag is used for creating a line break?" << endl;
        cout << " A: <break>" << endl;
        cout << " B: <br>" << endl;
        cout << " C: <lb>" << endl;
        cout << " D: <linebreak>" << endl;
        cin >> choice_html;
        if (choice_html == 'B' || choice_html == 'b') {
            htmlfile << "\n3) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            htmlfile << "\n3) Your answer is incorrect (Correct answer is: b)" << endl;
            incorrectans++;
        }

        cout << "\n4. Which HTML element is used for defining the structure of an HTML document, including the head and body sections?" << endl;
        cout << " A: <structure>" << endl;
        cout << " B: <document>" << endl;
        cout << " C: <html>" << endl;
        cout << " D: alt" << endl;
        cin >> choice_html;
        if (choice_html == 'C' || choice_html == 'c') {
            htmlfile << "\n4) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            htmlfile << "\n4) Your answer is incorrect (Correct answer is: c)" << endl;
            incorrectans++;
        }

        cout << "\n5. Which HTML element is used to create a dropdown list?" << endl;
        cout << " A: <select>" << endl;
        cout << " B: <list>" << endl;
        cout << " C: <dropdown>" << endl;
        cout << " D: <menu>" << endl;
        cin >> choice_html;
        if (choice_html == 'A' || choice_html == 'a') {
            htmlfile << "\n5) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            htmlfile << "\n5) Your answer is incorrect (Correct answer is: a)" << endl;
            incorrectans++;
        }

       	cout << "\n6. Which attribute is used to set the background color of an HTML element?*" << endl;
        cout << " A: bgcolor" << endl;
        cout << " B: color" << endl;
        cout << " C:  background-color" << endl;
        cout << " D:  style " << endl;
        cin>>choice_html;
        if (choice_html == 'D' || choice_html == 'd') {
            htmlfile << "\n6) Your anser is correct" << endl;
            marks++; 
            correctans++;
        } else {
            htmlfile << "\n6) your answer is incorrect and (Correct answer is : d)" << endl;
            incorrectans++;
        }

        htmlfile << "\n\nYour Total Marks: " << marks;
        htmlfile << "\n\nTotal Correct Answers: " << correctans;
        htmlfile << "\n\nTotal Incorrect Answers: " << incorrectans;
        per = 100 * marks / 6;
        htmlfile << "\n\nPercentage: " << per << "%" << endl;
        if (per >= 50) {
            htmlfile << "\nStatus: Pass" << endl;
        } else {
            htmlfile << "\nStatus: Fail" << endl;
        }
        htmlfile.close();
    }
};

class Python : public student {
private:
    char choice;

public:
    Python() {
		cout<<"\t\t4. Python\n";
	}

    void method1() {
        cout << "************************************************************************************************************" << endl;
        cout << "*************************Welcome to the PYTHON Quiz!**********************************************************" << endl;
        cout << "************************************************************************************************************" << endl << endl;
    }

    void display() {
        fstream pythonfile;
        pythonfile.open("python.txt", ios::app);
        if (!pythonfile) {
            cout << "\t\tYour PYTHON Quiz Result File is Not Created" << endl;
        } else {
            cout << "\t\tYour PYTHON Quiz Result File is Created" << endl;
    
            get();

            pythonfile << "\n\nYour Name is: " << name;
            pythonfile << "\nYour Roll Number is: " << roll;
        }

        cout << "\n\n1. What is the print function in Python?" << endl;
        cout << " A: It is used to get input from the user" << endl;
        cout << " B: It is used to display output to the screen" << endl;
        cout << " C: It is used to do arithmetic operations" << endl;
        cout << " D: It is used to store data in a variable" << endl;
        cin >> choice;
        if (choice == 'B' || choice == 'b') {
            pythonfile << "\n1) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            pythonfile << "\n1) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }

        cout << "\n2. What is the data type of the variable in the following code: x = 10?" << endl;
        cout << " A: String" << endl;
        cout << " B: Integer" << endl;
        cout << " C: Float" << endl;
        cout << " D: Boolean" << endl;
        cin >> choice;
        if (choice == 'B' || choice == 'b') {
            pythonfile << "\n2) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            pythonfile << "\n2) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }

        cout << "\n3. What is the purpose of the len() function in Python?" << endl;
        cout << " A: To convert a string to uppercase" << endl;
        cout << " B: To get the length of a string or list" << endl;
        cout << " C: To concatenate two strings" << endl;
        cout << " D: To find the index of a character in a string" << endl;
        cin >> choice;
        if (choice == 'B' || choice == 'b') {
            pythonfile << "\n3) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            pythonfile << "\n3) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }

        cout << "\n4. What is the output of the following code: print(5 + 5)?" << endl;
        cout << " A: 10" << endl;
        cout << " B: 5 + 5" << endl;
        cout << " C: 25" << endl;
        cout << " D: Error" << endl;
        cin >> choice;
        if (choice == 'A' || choice == 'a') {
            pythonfile << "\n4) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            pythonfile << "\n4) Your answer is incorrect (Correct answer is: A)" << endl;
            incorrectans++;
        }

        cout << "\n5. What is the purpose of the range() function in Python?" << endl;
        cout << " A: To generate a sequence of numbers" << endl;
        cout << " B: To convert a string to uppercase" << endl;
        cout << " C: To get the length of a string or list" << endl;
        cout << " D: To find the index of a character in a string" << endl;
        cin >> choice;
        if (choice == 'A' || choice == 'a') {
            pythonfile << "\n5) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            pythonfile << "\n5) Your answer is incorrect (Correct answer is: A)" << endl;
            incorrectans++;
        }

        cout << "\n6. What is the purpose of the split() function in Python?" << endl;
        cout << " A: To concatenate two strings" << endl;
        cout << " B: To split a string into a list where each word is a list item" << endl;
        cout << " C: To find the index of a character in a string" << endl;
        cout << " D: To find the index of a substring in a string" << endl;
        cin >> choice;
        if (choice == 'B' || choice == 'b') {
            pythonfile << "\n6) Your answer is correct" << endl;
            marks++;
            correctans++;
        } else {
            pythonfile << "\n6) Your answer is incorrect (Correct answer is: B)" << endl;
            incorrectans++;
        }

        pythonfile << "\n\nTotal Marks: " << marks << endl;
        pythonfile << "\nTotal Correct Answers: " << correctans << endl;
        pythonfile << "\nTotal Incorrect Answers: " << incorrectans << endl;
        per = 100 * marks / 6;
        pythonfile << "\n\npercentage : " << per << "%" << endl;
        if (per >= 50) {
            pythonfile << "\nStatus: Pass" << endl;
        } else {
            pythonfile << "\nStatus: Fail" << endl;
        }
    	pythonfile.close();
    }
};

     
class action {
	
    char nb, press;

public:
    void method(); 
};

void action:: method() {
        
	do {		
	system("CLS");
	cout << "\n\n\t\t\t******************" << endl
         << "\t\t\t   QUIZ SYSTEM" << endl
         << "\t\t\t******************" << endl;
    cout << "\t\t   **SELECT YOUR QUIZ OPTION**\n\n";
	

  

    student *p;
    cplusplus c;
    java j;
	html h;
	Python py;
	
	cin >> nb;
	cout << "\t\t   Enter your choice (1-4): ";
    
    system("CLS");

    switch (nb) {
        case '1': // we use 1 in single quotes cuz of char
            cout << "*****C++ QUIZ*****" << endl
                 << endl
                 << endl;
            p = &c;
            c.method1();
            p->display();
            break;

 	    case '2':
            cout << "*****JAVA QUIZ*****" << endl
                 << endl
                 << endl;
            p = &j;
            j.method1();
            p->display();
            break;

        case '3':
            cout << "*****HTML QUIZ*****" << endl << endl << endl;
            p = &h;
            p->method1(); // you can call it though pointer or also you can call using obj
            p->display();
            break;

        case '4':
            cout << "*****PYTHON QUIZ*****" << endl
                 << endl
                 << endl;
            p = &py;
            p->method1(); 
            p->display();
            break;

        default:
            cout << "Invalid input. Please try again." << endl;
            break;
    }
 
    cout << "Press 'y' to continue or any key to terminate." << endl;
    cin >> press;
    } while (press == 'y' || press == 'Y');
    
}
int main(){
	action ac;
		ac.method();
}


