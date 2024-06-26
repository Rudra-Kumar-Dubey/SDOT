//Code by Group 15 

//This is an crypto arithimetic problem so will need to use different concepts for it like permutation, recursion, 
//vector, node structures etc. 
//Lets see how it works

#include <iostream> 
#include <vector>
using namespace std; 

// vector stores 1 corresponding to index number which is already assigned to any char, otherwise stores 0 
vector<int> store(10); 

// creating a node structure to store char and its corresponding integer
struct node
{ 
   char c; 
   int v; 
}; 


int num1,num2,num3;

// function check for correct solution 
int check(node* array, const int count, string add1, string add2, string sum) 
{ 
    int val1 = 0, val2 = 0, val3 = 0, m = 1, j, i; 
    // calculate number corresponding to first string 
    for (i = add1.length() - 1; i >= 0; i--) 
    { 
        char ch = add1[i];   
        for (j = 0; j < count; j++) 
             if (array[j].c == ch) 
             break; 
        val1 += m * array[j].v;      
        m *= 10; 
    } 
    m = 1; 
    // calculate number corresponding to second string 
    for (i = add2.length() - 1; i >= 0; i--) 
    { 
        char ch = add2[i]; 
        for (j = 0; j < count; j++) 
            if (array[j].c == ch) 
                break; 
        val2 += m * array[j].v; 
        m *= 10; 
    } 
    m = 1; 
    // calculate number corresponding to third string 

    for (i = sum.length() - 1; i >= 0; i--) 
    { 
        char ch = sum[i]; 
        for (j = 0; j < count; j++) 
            if (array[j].c == ch) 
                break; 
        val3 += m * array[j].v; 
        m *= 10; 
    } 
    // sum of first two number equal to third return true 
    if (val3 == (val1 + val2))
        return 1; 
    // else return false 
    return 0; 
} 

// Recursive function to check solution for all permutations 
bool recursion(const int count, node* array, int n, string add1, string add2, string sum) 
{ 
    // Base case 
    if (n == count - 1)  
    { 
        // check for all numbers not used yet 
        for (int i = 0; i < 10; i++) 
        { 
            // if not used 
            if (store[i] == 0) 
            { 
                // assign char at index n integer i 
                array[n].v = i; 
                // if solution found 
                if (check(array, count, add1, add2, sum) == 1) 
                { 
                    cout<< "\nSolution found: "; 
                    cout<<endl;
                    for (int j = 0; j < count; j++) 
                        cout << " " << array[j].c << "="
                             << array[j].v<<endl; 
                      cout << add1 << " = ";
                  for (int i=0; i< add1.length(); i++)
                    {
                       for (int j = 0; j < count; j++) 
                        {
                            if (add1.at(i) == array[j].c)
                            {
                            num1=num1*10+(array[j].v);
                            cout<<array[j].v;
                            }
                        }
                      
                    }
                  cout<<endl;
                    cout << add2 << " = ";
                     for (int i=0; i< add2.length(); i++)
                    {
                       for (int j = 0; j < count; j++) 
                        {
                            if (add2.at(i) == array[j].c)
                            {
                            num2=num2*10+(array[j].v);
                            cout<<array[j].v;
                            }
                        }
                      
                    }
                    cout<<endl;
                  
                    cout << sum << " = ";
                     for (int i=0; i< sum.length(); i++)
                    {
                       for (int j = 0; j < count; j++) 
                        {
                            if (sum.at(i) == array[j].c)
                            {
                            num3=num3*10+(array[j].v);
                            cout<<array[j].v;
                            }
                        }
                      
                    }
                     cout<<endl << "Therefore," <<endl;
                       cout << add1 << " + " << add2 << " = " <<sum <<endl;
                    cout<< num1 << " + " << num2 << " = " << num3 <<endl;
                      

                    return true; 
                } 
            } 
        } 
        return false; 
    } 
    for (int i = 0; i < 10; i++) 
    { 
        // if ith integer not used yet 
        if (store[i] == 0) 
        { 
            // assign char at index n integer i 
            array[n].v = i;
            // mark it as not available for other char 
            store[i] = 1; 
            // call recursion function 
            if (recursion(count, array, n + 1, add1, add2, sum)) 
                return true; 
            // backtrack for all other possible solutions 
            store[i] = 0; 
        } 
    } 
    return false; 
} 

bool cryptarithm(string add1, string add2, string sum) 
{ 
    // count to store number of unique char 
    int count = 0; 
    // Length of all three strings 
    int l1 = add1.length(); 
    int l2 = add2.length(); 
    int l3 = sum.length(); 
    // vector to store frequency of each char  in string
    vector<int> freq(26); 
    for (int i = 0; i < l1; i++) 
        ++freq[add1[i] - 'A'];  
    for (int i = 0; i < l2; i++) 
        ++freq[add2[i] - 'A']; 
    for (int i = 0; i < l3; i++) 
        ++freq[sum[i] - 'A']; 
    // count number of unique char in the string
    for (int i = 0; i < 26; i++) 
        if (freq[i] > 0) 
            count++; 

    // solution not possible for count greater than 10 
    if (count > 10) 
    { 
        cout<< "Invalid strings"; 
        return 0; 
    } 
    // array of nodes 
    node array[count]; 
    // store all unique char in array 
    for (int i = 0, j = 0; i < 26; i++) 
    { 
        if (freq[i] > 0) 
        { 
            array[j].c = char(i + 'A'); 
            j++; 
        } 
    } 
    return recursion(count, array, 0, add1, add2, sum); 
} 

int main() 
{ 
    string add1 = "APPLE"; 

    string add2 = "LEMON"; 

    string sum = "BANANA"; 

    if (cryptarithm(add1, add2, sum) == false) 
        cout<< "No solution"; 
    return 0;
}
