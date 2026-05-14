# DSA Quick Revision Sheet (C++)


## Time Complexity Cheat Sheet

| Complexity | Meaning | Example | 
|------------|---------|---------|
| O(1)	     | Constant |HashMap lookup|
|O(log n)	|Divide by half	|Binary Search|
|O(n)	|Linear traversal	|Array traversal|
|O(n log n)	|Efficient sorting	|Merge Sort|
|O(n²)	|Nested loops	|Bubble Sort|

## 📌 Arrays
| Operation	| Complexity|
|-----------|-----------|
|Access	|O(1)|
|Search|	O(n)|
|Insert/Delete End	|O(1)|
|Insert/Delete Middle	|O(n)|

## 📌 Two Pointer Technique
When to Use
- Sorted arrays
- Palindrome problems
- Pair sum problems

Pattern
```
int i = 0;
int j = n - 1;

while(i < j){

    if(condition){
        i++;
    }
    else{
        j--;
    }
}
```

## 📌 Sliding Window
Used For
- Subarray problems
- Substring problems

Fixed Window
```
windowSum += arr[i];

windowSum -= arr[i-k];
```

## 📌 Prefix Sum
Formula
```
prefix[i] = prefix[i-1] + arr[i];
```
Subarray Sum
```
sum(l,r) = prefix[r] - prefix[l-1]
```

📌 HashMap
Syntax
```
unordered_map<int,int> mp;
```
Frequency Count
```
mp[arr[i]]++;
```
Complexity
|Operation	|Complexity|
|-----------| --------|
|Insert	|O(1)|
|Search|	O(1)|

## 📌 Strings
Reverse String
```
reverse(s.begin(), s.end());
```
Convert to Lowercase
```
tolower(c);
```
Check Alphanumeric
```
isalnum(c);
```
Remove Spaces
```
s.erase(remove(s.begin(), s.end(), ' '), s.end());
```
## 📌 stringstream
Use
- Convert sentence into words.
```
stringstream ss(s);

string word;

while(ss >> word){
    cout << word << endl;
}
```

## 📌 STL Important Functions
Sort
```
sort(v.begin(), v.end());
```
Reverse
```
reverse(v.begin(), v.end());
```
Max Element
```
*max_element(v.begin(), v.end());
```
Min Element
```
*min_element(v.begin(), v.end());
```

## 📌 Linked List Basics
Node Structure
```
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
```

## 📌 Linked List Insertion
Beginning
```
newNode->next = head;
head = newNode;
```
End

Traverse till:
```
temp->next == NULL
```
then:
```
temp->next = newNode;
```

## 📌 Linked List Deletion
Delete Beginning
```
Node* temp = head;

head = head->next;

delete temp;
```
Delete End

Reach: second last node

then:
```
delete temp->next;
```
temp->next = NULL;

## 📌 Reverse Linked List
3 Pointer Method
```
prev
curr
nextNode
```
Core Logic
```
curr->next = prev;
```
## 📌 Slow & Fast Pointer
Used In
- Middle of LL
- Cycle Detection
- Palindrome LL

Pattern
```
slow = slow->next;
fast = fast->next->next;
```

## 📌 Floyd Cycle Detection

Key Idea

If cycle exists:
```
fast eventually meets slow
```
## 📌 Binary Search
Condition
```
while(low <= high)
```

Mid
```
mid = low + (high - low)/2;
```

## 📌 Why NOT
```
(low + high)/2
```

Because:
```
integer overflow possible
```

## 📌 Recursion Basics
Base Case

Stops recursion.
```
if(n == 0)
    return;
```

## 📌 Stack
LIFO: Last In First Out.

Operations: 
- push()
- pop()
- top()

## 📌 Queue
FIFO: First In First Out.

Operations
- push()
- pop()
- front()

## 📌 Sorting Algorithms
|Algorithm	|Best|	Worst|
|----------|-----|-------|
|Bubble Sort	|O(n)	|O(n²)|
|Selection Sort|	O(n²)	|O(n²)|
|Insertion Sort	|O(n)	|O(n²)|
|Merge Sort	|O(n log n)	|O(n log n)|
|Quick Sort	|O(n log n)	|O(n²)|

## 📌 Important Problem Solving Steps
1. Understand Problem
2. Think Brute Force
3. Optimize
4. Dry Run
5. Analyze Complexity

## 📌 Common Interview Mistakes

❌ Forgetting edge cases

❌ Wrong loop condition

❌ Null pointer access

❌ Integer overflow

❌ Not explaining approach

## 📌 Golden DSA Rule
First make it work, then optimize it💻