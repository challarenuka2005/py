#include <iostream>
using namespace std;
int main()
{
    char vowels[] {'a','e','i','o','u'};
    cout<<"first vowel is:"<<vowels[0]<<endl;
    cout<<"last vowel is:"<<vowels[4];
    //cin>>vowels[5] out of bounds dont do this
    double temp[]{90,90.7,95,95.6,98};
    cout<<"the first teperature is:"<<temp[0]<<endl;
    temp[0]=100;// set new first temperature 
    cout<<"the new first temperature is:"<<temp[0]<<endl;
    int score[5]{100,80,70,60,50};
    cout<<"first score at 0:"<<score[0]<<endl;
     cout<<"second score at 1:"<<score[1]<<endl;   
    cout<<"third score at 2:"<<score[2]<<endl;
    cout<<"fourth score at 3:"<<score[3]<<endl;
    cout<<"fifth score at 4:"<<score[4]<<endl;
    cout<<"enter five test scores:";
    cin>>score[0];
    cin>>score[1];
    cin>>score[2];
    cin>>score[3];
    cin>>score[4];
    cout<<"updated scores:";
    cout<<"first score at 0:"<<score[0]<<endl;
     cout<<"second score at 1:"<<score[1]<<endl;   
    cout<<"third score at 2:"<<score[2]<<endl;
    cout<<"fourth score at 3:"<<score[3]<<endl;
    cout<<"fifth score at 4:"<<score[4]<<endl;
    
    cout<<"name of the array is:"<<score<<endl;
    
    return 0;
}