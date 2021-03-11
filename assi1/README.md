Assignment-4
Team Members

Enrollment No.	Name	GithubId
IIT2019090	Smitesh Hadape
IIT2019091	Varun Bhardwaj
IIT2019092	Tanish Patel
Group No-"-------"

Faculty Name-Dr. Mohammed Javed

Mentor Name- Md. Meraz

Problem Statement
Given an array that represents elements of arithmetic progression in
order. One element is missing in the progression, find the missing
number.

How to use code
#Download project
git clone https://github.com/Smitesh25/DAA-Assignments/tree/main/assi4
Run the code.cpp file in a compiler

Output

Test case

Find max

Test Case-1
Input:
2 4 6 10 12
Out:
8
#--------------------------#
Test Case-2
Input:
5 9 13 21
Out:
17
#--------------------------#
Test Case-3
Input:
1 2 3 4 5
Out:
No term missing

Theory
The given problem can besolved using divide and conquer approach which is similar to binarysearch.Basically we divide the givenproblem into smaller sub-problemsand appropriately combine their solutions to get the solution to the main problem.
The idea is to keep on checking the difference between the middle element and its adjacent elements unless the difference is not equal to the desired common difference.

Analysis
Time Complexity
Assume that k the function missingTerm is called k times.
- At each function call, the array is divided into 2 halves. Assume the length of the array before any function calls is n.
- After the 1st function call, length of array becomes n/2.
- After the 2nd function call, length of array becomes n/4.
- After the 3rd function call, length of array becomes n/8.
- After the kth function call, length of array becomes n/2k
- Since the length of the array becomes 1 after k function calls(worst case)
=> n = 2k
Hence k = log2 (n)
Hence, the time complexity for the above approach is log2 (n).

Space Complexity
o(1)

References

1] Introduction to Algorithms / Thomas H. Cormen . . . [et al.]. - 3rd edition.
[2] The Design and Analysis of Algorithms (Pearson) by A V Aho, J E Hopcroft, and J D Ullman
[3] Algorithm Design (Pearson) by J Kleinberg, and E Tard
[4] https://www.geeksforgeeks.org/findmissing-number-arithmetic-progression/
