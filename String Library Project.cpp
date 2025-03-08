#include <iostream>
#include "clsString.h"

using namespace std;

int main() {


	clsString String;
	

	String.value = "Kissame Mohamed";

	cout << "Call with Obj :" << endl;
	String.PrintFirstLetterOfEachWord();

	cout << "\nCall with static Function :" << endl;
	clsString::PrintFirstLetterOfEachWord("kissame mohamed");

	cout << "\nCall UpperMethod with Obj :" << endl;
	cout << String.UpperFirstLetterOfEachWord() << endl;

	cout << "\nCall LowerMethod with Obj :" << endl;
	cout << String.LowerFirstLetterOfEachWord();

	cout << "\n\nCall UpperAllLetter Method With OBj : " << endl;
	 String.UpperAllLetterOfAStrin();

	cout << "\n\nCall LowerAllLetter Method with Obj : " << endl;
	 String.LowerAllLetterOfAString();

	cout << "\n\nCall Invert Character Method :" << endl;
	cout << String.InvertCase('m');

	cout << "\n\nCall Invert All Letter Case Method : " << endl;
    String.InvertAllLetterCase();

	cout << "\n\nCall Count All Letter In String Method : " << endl;
	cout << String.Length();

	cout << "\n\nCall Count Capital Letters In String Method : " << endl;
	cout << String.CountCapitalLetters();

	cout << "\n\nCall Count Small Letters in String Method : " << endl;
	cout << String.CountSmallLetter();

	cout << "\n\nCall Count An Letter In string Method : " << endl;
	cout << String.CountACharacterInString("kissame Mohamed Kissame" , 's');


	cout << "\n\nCall Count An Letter Match Case or Not In string Method : " << endl;
	
	// In this Method he has a default parameter bool MatchCase = true This is Count Match Case Small = Small / Capital = Capital 
	// but if you sent false To Method The counter will Count Both The Small And Capital Letter :).

	cout << String.CountSpecificLetter("Mohamed Kissame", 'm');


	cout << "\n\nCall Check if is Vowel Letter Method : " << endl;
    String.CheckIsVowel('h');
	

	 cout << "\n\nCall Split String Method : " << endl;
	 vector <string> Split;

	 Split = String.SplitString("Mohamed//Kissame//Student//Full//Stack", "//");

	 for (auto& S : Split) {

		 cout << S << endl;
	 }

	 // This Method Will be Count the Number Of words in string 
	 
	 //That Make in First time Split string to words and after that GetReady To Count Words in This String :).
	 
	 // We Call This Function Derictory From Class Dont needed Object And In Same Time If You need to Call Him From Object We Can This .
	 cout << "\n\nCall Count string Method : " << endl;
	 cout << "The Number Of Words in this string is : " << clsString::CountString("Mohamed Kissame Hi How Are You");

	 cout << "\n\nCall Calcul Score String Method :" << endl;
	 cout << "The Score Of string " << clsString::ScorOfString("Hello");

	 cout << "\n\nCall Count Vowel Letter : " << clsString::CountVowelLetter("hello I m Mohamed Kissame");

	 cout << "\n\nCall Method Print All Vowel Letter : " << endl;

	 String.PrintAllVowels("Mohamed Kissame Hi I am A Devloper");

	 cout << "\n\nCall Method For Print String Words : " << endl;
	 String.PrintEachWord("Mohamed Kissame Welcom To This Method");

	 
	system("pause>0");
}