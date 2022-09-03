#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int n, now;
    vector<int> marks;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &now);
        marks.push_back(now);
    }

    for(int i = 0; i<n; i++){
        if(marks.at(i)>89){
            printf("Student %d: A+\n", i+1);
        }else  if(marks.at(i)>79){
            printf("Student %d: A\n", i+1);
        }else  if(marks.at(i)>69){
            printf("Student %d: A-\n", i+1);
        }else  if(marks.at(i)>59){
            printf("Student %d: B+\n", i+1);
        }else  if(marks.at(i)>49){
            printf("Student %d: B-\n", i+1);
        }else  if(marks.at(i)>39){
            printf("Student %d: C\n", i+1);
        }else  if(marks.at(i)>34){
            printf("Student %d: D\n", i+1);
        }else{
            printf("Student %d: F\n", i+1);
        }
    }
    return 0;
}
