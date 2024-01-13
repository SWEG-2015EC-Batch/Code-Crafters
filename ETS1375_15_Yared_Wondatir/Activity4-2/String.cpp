//1D array practical questions from Q1-7
#include <iostream>
#include <cmath>
#include <cstring>
#include <array>
using namespace std;

int main(){
    //string 1st
/*    string Name, vowel="aeiou";
   char name;
   int count = 0,count2=0;
   cout<<"Enter your name ";
   cin>>Name;
   for (int i = 0; i < Name.size(); i++)
   {
    
    for (int j = 0; j < vowel.size(); j++)
    {
        name= tolower(Name[i]);
        if (name==vowel[j])
        {
            count++;
        }
        
        
    }
    }
    count2=((Name.size())-count);
   cout<<"The number of vowel letters in your name is "<<count<<endl;
   cout<<"The number of consonant letters in your name is "<<count2;
*/  




  //string 2nd  
/*  string word;
  cout<<"Enter a word:  ";
  cin>>word;
  int n= word.size(),x=0;
  for (int i = 0; i <n ; i++)
  {
   if ((word[i])!=(word[n-1-i]))
   {
     x=1;
     break;
   } 
  }
   if (x)
   {
     cout<<word<<" is NOT a palindrome!"<<endl;
   }
   else
   {
    cout<<word<<" is a palindrome!"<<endl;
   }
*/




  //string 3rd
/*  string word;
  cout << "Enter a word :";
  getline(cin, word);


  for (char x:word)
  {
    if (isalpha(x))
      cout << x;
    else
      continue;
*/


   //string 4th
/*   char word[]="what the heck";
   
  char* store= strtok(word, " ");
   while (store)
   {
     cout<<store<<endl;
     store= strtok(NULL, " ");
   }
*/



   //string 5th
/*   string Name, vowel="AEIOU";
   char name;
   int count = 0,count3=0,count4=0,count5=0;
   cout<<"Enter a string ";
   cin>>Name;
   for (int i = 0; i < Name.size(); i++)
   {
    name= toupper(Name[i]);
    if ((isalpha(name)==1))
    {
        for (int j = 0; j < vowel.size(); j++)
        {
            if(name==vowel[j])
            {count++;}
            
        }
    }
        
    
    else if ((isdigit(name))==1)
        {
            count3++;
        }
        else
        {
            count4++;
        }
    }
    count5=((Name.size())-count-count3-count4);
   cout<<"The number of vowel letters in the string is "<<count<<endl;
   cout<<"The number of consonant letters in the string is "<<count5<<endl;
   cout<<"The number of digits l in the string is "<<count3<<endl;
   cout<<"The number of special characters in the string is "<<count4<<endl;
*/



    //string 6
/*   string input;
   cout << "Enter a line of text: ";
   getline(std::cin, input);

   int charFreq[256] = {0}; 

   for (int i = 0; i < input.length(); i++) {
       charFreq[input[i]]++; 
   }

   char mostFrequentChar = '\0';
   char leastFrequentChar = '\0';
   int maxFreq = 0;
   int minFreq = input.length() + 1;

   for (int i = 0; i < 256; i++) {
       if (charFreq[i] > 0) {
           if (charFreq[i] > maxFreq) {
               maxFreq = charFreq[i];
               mostFrequentChar = static_cast<char>(i);
           }
           if (charFreq[i] < minFreq) {
               minFreq = charFreq[i];
               leastFrequentChar = static_cast<char>(i);
           }
       }
   }

   cout << "Character with largest frequency: " << mostFrequentChar << " (Frequency: " << maxFreq << ")" << std::endl;
   cout << "Character with smallest frequency: " << leastFrequentChar << " (Frequency: " << minFreq << ")" << std::endl;
*/  

   
  //string 7th
/*  char name[5][20], temp[5];
  int i,j;
  for (i = 0; i < 5; i++)
  {
    cout<<"Enter the name of person"<<i+1<<": ";
    cin>>name[i];
  }
  for (i = 5; i >0; i--)
  {
    for (j = 0; j<=i; j++)
    {
        if (strcmp(name[j],name[j+1])>0)
        {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
        
    }
}
   cout<<"The alphabetical orderof the names:"<<endl;
  for (i = 0; i < 5; i++)
  {
    cout<<name[i]<<endl;
  }
*/



    //string 8th
/*   char text[30];
    cout<<"enter a word: ";
    cin>>text;
    
    cout<<"UPPERCASE version: "<<strupr(text)<<endl;
    cout<<"LOWERCASE version: "<<strlwr(text)<<endl;
*/


    //string 9th
/*    char favTvProgram[][30]={{"Seifu-Show"},{}};
    strcpy(favTvProgram[1],"EMS-Eletawi");
*/


   //string 10th
/*   char pass [][9]={{'a','2','3','r','h','5','!','a'},
                    {}};
    int count=0;
    cout<<"Please Enter your password (8digits-expected):  ";
    for (int i = 0; i < 8; i++)
    {
        
        cin>>pass[1][i];
        if ((pass[0][i])==(pass[1][i]))
        {
            count++;
        }
        
    }
    if (count==8)
    {
        cout<<"PASSWORD CONFIRMED!"<<endl;
    }
    else
    {
        cout<<"INCORECT PASSWORD!"<<endl;
    }
*/

    //string 11th
/*    string x, y, z;
  cout << "Enter the first name " << endl;
  cin >> x;
  cout << "Enter the second name " << endl;
  cin >> y;
  cout << "Enter the third name " << endl;
  cin >> z;
  char name1, name2, name3;
  for (int i = 0;i < 2;i++)
  {
    name1 = x[0];
    name2 = y[0];
    name3 = z[0];
  }
  cout << "The user initial is " << name1 << " " << name2 << " " << name3;
*/


    //string 12
/*    char mcq[][11]={{'A','A','B','B','C','C','D','D','A','B'},
                    {}};
    int count=0;
    for (int i = 0; i <10; i++)
        {
          yared:
          char temp;
          cout<<"Enter your answer for question number "<<i+1<<":  "<<endl;
          cin>>temp;
          temp= toupper(temp);
          mcq[1][i]= temp;
          if (((isalpha(temp))!= true))
          {
            cout<<"Invalid input, please try again"<<endl;
            goto yared;
          }
        }
    
    for (int i = 0; i < 10; i++)
    {
        char c = mcq[0][i], d= mcq[1][i];
        if (c==d)
        {
            count++;
            cout<<i+1<<", "<<mcq[1][i]<<" ,CORRECT";
        }
        else
        {
            cout<<i+1<<", "<<mcq[1][i]<<" ,INCORRECT";
        }
    cout<<endl;  
    }
    cout<<"SCORE: "<<count<<" out of 10";
*/


    

    return 0;
}