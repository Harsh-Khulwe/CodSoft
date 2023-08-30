#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string name;
    int grade, n;

    cout<<"Enter the number of students: ";
    cin>>n;

    int min = INT_MAX, max = 0, sum = 0;

    for(int i = 0; i < n; i++)
    {
        cout<<"\nEnter the name of student "<<i + 1<<": ";
        cin>>name;
        cout<<"Enter the grade of student "<<i + 1<<": ";
        cin>>grade;

        if(grade > max)
            max = grade;

        if(grade < min)
            min = grade;

        sum = sum + grade;
    }

    cout<<"\n\tThe average grade of the students is "<<(float)sum / n<<endl;
    cout<<"\tThe highest grade is "<<max<<endl;
    cout<<"\tThe lowest grade is "<<min<<endl;

    return 0;
}
