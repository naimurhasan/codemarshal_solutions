# Problem 01
<div class="col-md-9 col-md-pull-3">

<div id="main">

<div class="panel panel-default panel-problem">

<div style="position: relative;" class="panel-body">

<div class="h1">গ্রেডিং পদ্ধতি ( Grading Method )</div>

CPU: 1s  
Memory: 1024MB

<div class="desc">

মনে করো তোমার শিক্ষককে তুমি সাহায্য করছো। তোমার শিক্ষক তোমাকে একটি গ্রেডার বানাতে বলেছে। তিনি তোমাকে N জন শিক্ষার্থীর প্রাপ্ত নম্বর দিবেন এবং তোমাকে N জন ছাত্রের প্রত্যেকের প্রাপ্ত গ্রেড বলতে হবে। শিক্ষার্থীরা কত নাম্বার পেলে তাদেরকে কি গ্রেড দেওয়া হবে তার বিস্তারিত একটা তালিকা নিচে দেওয়া আছে।

Suppose You are helping your teacher. So, your teacher asked you to make a grader. He will give you obtained marks of N students. You have to tell him what is the grade for each of the N students. The detailed grading policy is given in the following chart:

<pre style="position: relative;">Marks             Grade
-------------------------
90 - 100              A+
80 -  89              A
70 ­-  79              A­-
60 ­-  69              B+
50 ­-  59              B­-
40 ­-  49              C
35 ­-  39              D
 0 ­-  34              F
</pre>

</div>

<div class="specs">  

<div class="spec">

### ইনপুটের বর্ণনা

<div class="spec-body">

ইনপুটের শুরুতে একটি সংখ্যা **N ( 1<=N<=10000 )** দেয়া থাকবে যেটি গ্রেডপ্রাপ্ত ছাত্রদের সংখ্যা নির্দেশ করে। পরবর্তী **N** সংখ্যক লাইনের প্রতিটিতে একটি করে সংখ্যা **X ( 0 <= X <= 100 )** থাকবে যেটিতে প্রতিটি শিক্ষার্থীর প্রাপ্ত নম্বর লেখা থাকবে।

</div>

</div>

<div class="spec">

### Input Specification

<div class="spec-body">

Input starts with an integer **N ( 1<=N<=10000 )** denoting the number of students. Next **N** lines will have a single integer **X ( 0 <= X <= 100 )** which is the marks obtained by that particular student.

</div>

</div>

<div class="spec">

### আউটপুট এর বর্ণনা

<div class="spec-body">

প্রত্যেক ছাত্রের জন্য, তার ক্রমিক নম্বর এবং প্রাপ্ত গ্রেড প্রিন্ট করো।

</div>

</div>

<div class="spec">

### Output Specification

<div class="spec-body">

For each student, print the student id and obtained grade.

</div>

</div>

</div>

<div class="samples">

### Sample

<table class="table table-sample">

<thead>

<tr>

<th>Input</th>

<th>Output</th>

</tr>

</thead>

<tbody>

<tr>

<td class="sample-input">5<br/> 90<br/> 45<br/> 80<br/> 35<br/> 34</td>

<td class="sample-output"><br/>Student 1: A+<br/> Student 2: C<br/> Student 3: A<br/> Student 4: D<br/> Student 5: F</td>

</tr>

</tbody>

</table>

</div>

</div>

</div>

</div>

</div>

### Solution
```cpp
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, now;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &now);
        if(now>89){
            printf("Student %d: A+\n", i+1);
        }else  if(now>79){
            printf("Student %d: A\n", i+1);
        }else  if(now>69){
            printf("Student %d: A-\n", i+1);
        }else  if(now>59){
            printf("Student %d: B+\n", i+1);
        }else  if(now>49){
            printf("Student %d: B-\n", i+1);
        }else  if(now>39){
            printf("Student %d: C\n", i+1);
        }else  if(now>34){
            printf("Student %d: D\n", i+1);
        }else{
            printf("Student %d: F\n", i+1);
        }
    }
    return 0;
}
```


# Problem 02 : Solution
- বৃত্তের ভিতরে বিন্দু ( Point Inside Circle )
```cpp
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void isInside(int cx, int cy, int r, int x,int y, int caseNo){
    int distance = sqrt( pow( (x - cx), 2 ) + pow( (y - cy), 2 ) );
    if(distance<r){
        printf("Case %d: yes\n", caseNo);
    }else{
        printf("Case %d: no\n", caseNo);
    }
}

int main()
{
    int n, a, b, c, d, e;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        isInside(a, b, c, d, e, i+1);
    }
    return 0;
}
```

# Problem 03 : Solution
- ছোট থেকে বড়! ( Lower to Upper! )
```cpp
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    char c;
    scanf("%d%c", &n, &c);

    for(int i = 0; i<n; i++){
        vector<char>input;
        string line;
        getline(cin, line);
        for(int j = 0; j<line.size(); j++){
            input.push_back(toupper(line[j]));
        }
        printf("Case %d: ", i+1);
        for(int j = 0; j<input.size(); j++){
            printf("%c", input[j]);
        }
        printf("\n");
    }
    return 0;
}

```
