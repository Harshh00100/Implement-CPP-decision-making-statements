# Implement-CPP-decision-making-statements
Aim:
To study and implement C++ decision making statements
Software:
Mingw c/cpp compiler , VScode , online C++ compiler

#Program 1:
Checking number is weather Even or Odd

The program starts with taking input of a integer in variable 'a'.Then it goes to the If statement ,if the condition matches then it goes to another if condition otherwise it shows the output whatever their is in if else statement is present.After going to another  if condition , if number is divisible by 2 the output display even otherwise it show odd.

Algorithm:
- Start
- Declare integer variable a
- Prompt user to enter a number
- Input value into a
- If a > 0, then:
- If a % 2 == 0, display "The number is even"
- Else, display "The number is odd"
- Else, display "The number is negative"
- End


 #Program 2:
 checking character is vowel or consonant 

 The program starts with taking input from user which is a charcter data types and checks it is vowel or consonant.Here I have checked for every vowel character as ASCII value of lowercase and uppercase alphabets are different. After matching to the suitable condition it gives the output.

 Algorithm:
 - Start
- Declare a character variable a
- Prompt user to "Enter the character"
- Input the character into a
- Check if a is any of: 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'
- If true → display "The character is a vowel"
- Else → display "The character is a consonant"
- End


 #Program 3:
 switch case

This program takes a user input between 1 to 12 to select a month and displays its name using a switch statement. Each case matches a numeric input to a specific month from January to December. The break statements prevent fall-through by stopping execution after the correct output. If the input doesn’t match any month, the default case alerts the user with "INVALID CHOICE!!!!". This structure improves readability and makes handling fixed options efficient. It's a useful way to map numeric values to text-based responses interactively.

Algorithm:
- Start
- Declare an integer variable choice
- Display menu:
- Read Input:
- Use Switch Case on choice
- Default case → Display "INVALID CHOICE!!!!"
- End

#Program 4:
Basic calculator:

The program is structured in this way that it take two input from the user and save it to the variable a & b respectively. Then a menu will appear for executing the particular operation on two numbers. After giving the choice it will switched to that particular case for performing the operation. after the operation it shows the output as per function.

Algorithm:
- Start
- Input two numbers: a, b
- Display operation menu
- Input choice c
- Use switch(c) to:
- Add, subtract, multiply, or divide a and b
- End


#Program 5:
Largest among three numbers


The program starts with taking input for the three variable in integers form and checks it one by one variable throw nested if conditions after matching through all the condition it display the output which is the greatest number among the three number and that's how is concludes.

Algorithm :
- Start
- Input three integers: a, b, c
- Compare:
- Display the largest value
- End


Conclusion:
we have created different types of programs based on the decision making statement and got to know that why conditions are crucial for any kind of program.



 
