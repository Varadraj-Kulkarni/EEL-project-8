AIM: Develop a program to implement following operations on string (without
using built in functions, write user defined functions):
∙ Comparison of two strings
∙ Copy of one string into another
∙ Finding the length of the string
∙ Concatenating two strings into one


RESEARCH:
Across many real-life digital systems — like mobile phone contact lists, customer databases, hotel guest logs, and email services — names are stored and processed as strings. Every time we save a contact, check if a name already exists, merge two parts of a name, or display a formatted full name, the system performs operations similar to:

Comparing two strings, Copying one string to another, Finding the length of a string, Concatenating two strings
These operations are fundamental in software such as:
Phone contact management apps
Online registration portals
Simple CRM tools
Messaging applications
Behind the scenes, these platforms often use low-level string manipulation similar to classic C programming techniques.
This project uses the same logic to create a miniature simulation of a real-world contact-name handler.
SOURCES:
Let Us C – Yashavant Kanetkar
GeeksforGeeks – String handling basics
TutorialsPoint – C programming fundamentals

PROJECT: Simple Contact Name Manager

ANALYSIS:
To create this project, the requirements were broken down into four main operations — each implemented with user-defined functions.
1. Input Data:
The user enters a first name and a last name.
The user also enters another name to compare.
2. String Length Function (myLength):
Counts characters one by one until '\0' is reached.
This mimics how languages internally track the size of text.
3. String Copy Function (myCopy):
Character-by-character copying from source to destination.
Represents how a contact name is saved inside storage.
4. String Comparison Function (myCompare):
Compare two names character by character.
Useful for checking duplicate entries in a contact list.
5. String Concatenation Function (myConcat):
Combines first and last name with a space in between.
Simulates how full names are generated for display.


IDEATE:
Before finalizing the idea of a “Contact Name Manager,” several string-related project themes were considered:
1. Username generator
2. File-name formatter
3. Basic text editor
4. Library book title organizer
5. Simple search bar simulation

Finally, the contact manager was chosen because:
1. Everyone can relate to saving contact names
2. It naturally uses all required string operations.
3. The logic stays very simple and beginner-friendly.
4. It reflects how real apps (like Contacts, WhatsApp, Gmail) work internally.

BUILD:
The project was built step-by-step as follows:
1. Function Definitions:
2. Input Section:
3. Concatenation Section:
4. Length Calculation:
5. Copying Section:
6. Comparison Section:
7. Output Section:

TESTING:



Output-
Enter first name: varadraj
Enter last name: kulkarni

Full Contact Name: varadraj kulkarni
Length of full name: 16
Copied Name: varadraj kulkarni

Enter another name to compare: varad
The names are different.


IMPLIMENTATION:
Github link:  

CONCLUSION:
This project demonstrates how essential string operations work at a basic level. It shows how contact names can be processed in software without relying on library functions. By manually implementing comparison, copying, concatenation, and length-finding. The idea also reflects real-world applications such as contact managers and registration systems.
