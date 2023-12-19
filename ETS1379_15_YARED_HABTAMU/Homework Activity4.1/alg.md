Pseudo Code 



Step 1 :Start
Step2 : Initialize variables: list, nums, sumn = 0, sqre_sumn = 0, sqre_num, sumn_sqre_num = 0, mean, variance, standardvn.
Step 3:Prompt the user: "For how many persons?"
Step 4 : Read the value for list.
Step 5 :Prompt the user: "Enter the numbers:"
Step 6 : Start a loop from i = 0 to i < list.
Step 7 : Read the value for nums.
Step 8 :- Calculate summation by adding nums to it.
    - Calculate sqre_sumn by squaring sumn.
    - Calculate sqre_num by squaring nums.
    - Update sumn_sqre_num by adding sqre_num to it.
Step 9 : End the loop.
Step 10 : Calculate variance using the formula: (sumn_sqre_num - (sqre_sumn / list)) / list.
   -Calculate mean by dividing sumn by list.
   - Calculate standardvn by taking the square root of variance.

Step 11:  Print "Mean is: " followed by the value of mean.
      -  Print "Their Standard deviation is: " followed by the value of standardvn.
