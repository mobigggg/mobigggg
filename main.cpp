#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <CString>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include "miscFuncLib.h"
#include "allVars.h"
#include "quizPerformLib.h"
#include "quizAdminLib.h"

using namespace std;

void administerQuiz()
{
	 int r;
     AdminUsers adm;
     r = adm.loginSystem();
     if (r == 1)
        adm.manageQuestion();
}

// This function will call the functions that runs a quiz session
// Refer to quizPerformLib.h for the functions referred here
void startQuiz()
{
	prepareQuizData();
	selectTenQuestions();
	runQuiz();
	displayResult();
}

// It shows the first opening menu 
void menuController()
{
  int ch = 0;
  
  while (ch != 3)
  {	
    // Present the menu
    cout<<"----------------------------------------------------------------------------\n";
    cout<<"-**************************************************************************-\n";
    cout<<"-**                                                                      **-\n";
    cout<<"-**                      Welcome to Quiz Contestor                       **-\n";
    cout<<"-**                                                                      **-\n";
	cout<<"-**************************************************************************-\n";
    cout<<"----------------------------------------------------------------------------\n";
    cout<<"----------------------------------------------------------------------------\n";
    cout<<"                               Presented By                                 \n";
	cout<<"***********************                                  *******************\n";
    cout<<"**                   **                                  **               **\n";
	cout<<"**  Muhammad Muneeb  **                                  ** Sap-id= 15013 **\n";
    cout<<"**                   **                                  **               **\n";
	cout<<"***********************                                  *******************\n\n";
	cout<<"    -----------------------------\n";
	cout<<"    -Kindly Select your catagory-\n";
	cout<<"    -----------------------------\n";
    cout<<"    -1) Teacher                 -\n";
    cout<<"    -2) Student                 -\n";
    cout<<"    -3) Exit                    -\n";
    cout<<"    -----------------------------\n";
    cout<<"    Enter your choice (1/2/3) :: ";
    cin>>ch;
        // Evaluate choices 
    switch (ch)
    {
    	case 1 :
    	    administerQuiz(); 
			break;	
		case 2 :
			startQuiz();
			break;
        case 3 :
        	break;
        default :
        	printf("Please choose between 1,2 or 3 .. Press a key to continue.\n");
        	getch();
	}
  }
}
// The main function
int main() {
	menuController();
	return 0;
}
