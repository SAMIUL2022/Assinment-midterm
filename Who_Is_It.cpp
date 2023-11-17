#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
int id;
 char Name[100];
 char  Section ;
  int Mark ;
Student(int id, char Name[], char Section,int Mark)
{
this->id=id;
strcpy(this->Name,Name);
this->Section=Section;
this->Mark=Mark;


}

};

int main ()

{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {int mx=INT_MIN;
    int studentID=0;
    char Nam[100];
    char section;
    
for (int i = 0; i < 3; i++)
{
         int id; 
      char Name[100];
       char Section;
       int Mark;
    
    cin>>id>>Name>>Section>>Mark;
    
    
    Student k(id,Name,Section,Mark);
    
    
 
    if (mx < k.Mark || (mx == k.Mark && k.id < studentID))
            {
                studentID = k.id;
                strcpy(Nam, k.Name);
                section=k.Section;
                mx = k.Mark;
            }
 

    
    }
cout<<studentID<<" "<<Nam<<" "<<section<<" "<<mx<<endl;
    }
      
    return 0;
}