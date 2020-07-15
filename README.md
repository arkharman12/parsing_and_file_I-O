# Parsing and File I/O
A program that takes an expected input file named "input.txt" of exact format:

(int),(int),(int) <br>
(string) <br>
(int),(int),(int) <br>
(string) <br>
(int),(int),(int) <br>
(string) <br>
(int),(int),(int) <br>
(string) <br>
(int),(int),(int) <br>
(string) <br>

Then sum the ints of each line and output the immediately following line's string that many times seperated by commas such that:

1,2,3
ham

becomes:

ham,ham,ham,ham,ham,ham

## Usage

1. First run the "make" command. New "output.txt" file will be created.
2. Then run the "make run" command. Finally, you can see the final output in the premade "output.txt" file.
