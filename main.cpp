//main.cpp
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
//using namespace std;

int main() {
	//initializes the input stream 
    std::ifstream inputFile("input.txt"); 
	//initializes the output stream
    std::ofstream outputFile("output.txt"); 
	//make sure input file opens successfully
    if (!inputFile) { 
        std::cout << "An error has occurred while opening the input file" << std::endl;
    }
	//make sure outfile file opens successfully
    if (!outputFile) { 
        std::cout << "An error has occurred while opening the output file" << std::endl;
    }

    std::string presentLine;
	//main while loop of this program, as long as there is a input it will continue running
    while (getline(inputFile, presentLine)) { 
		//initializes the input stream
	    std::istringstream istream(presentLine); 
		//storing the numbers in integers array
	    int integers[3]; 
		//this placeholder takes care of commas
	    char delimiter; 
		//sends the stream into the array
	    istream >> integers[0]; 

		int i;
		//this for loop keep on running until there are 3 integers in the array
	    for (i = 1; i < 3; ++i) { 
		    istream >> delimiter >> integers[i];
	    }
		//stores the text lines
	    std::string text; 
		//gets the text line
	    getline(inputFile, text); 

	    int total = 0;
		int j;
		//loops through the array for final total
	    for (j = 1; j < 3; j++) { 
		    total = total + integers[j];
	    }
		//initializes the output stream
	    std::ostringstream ostream; 
		//sending the text to the output stream to write on the file
	    ostream << text; 

		int k;
		//this for loop puts the text together with a comma afterwards
	    for (k = 0; k < total; k++) { 
		    ostream << "," << text; 
	    }
	    outputFile << ostream.str() << std::endl;
	}
	//close the input file
	inputFile.close();
	//close the output file 
    	outputFile.close(); 

    return 0;
} //end main
