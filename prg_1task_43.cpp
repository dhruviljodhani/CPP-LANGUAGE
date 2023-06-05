#include<iostream>
using namespace std;
int main()
{
   int studentname,rollno,maths,computer,physics,chemistry,biology;
   float total,percentage;
    
   cout<<"\n student name :";
   
  
   cout<<"\n rollno:";
   cin>>rollno;

   cout<<"\nsubject";

   cout<<"\n \t maths:";
   cin>>maths;
   
   cout<<"\n \t computer:";
   cin>>computer;

   cout<<"\n \t physics:";
   cin>>physics;
   
   cout<<"\n \t chemistry:";
   cin>>chemistry;

   cout<<"\n \t biology:";
   cin>>biology;
   
   total=maths+computer+physics+chemistry+biology;
   cout<<"\ntotal is:"<<total;

   percentage=total/500*100;
   cout<<"\npercentage is :"<<percentage;

   if(percentage>=75)
      {
          cout<<"\ngrade A";
      }
      else if(percentage>=60 && percentage<=75)
         {
            cout<<"\n grade B";
         }
         else if(percentage>=45 && percentage<=60)
           {
              cout<<"\n grade C";
           }
           else if(percentage>=35 && percentage<=45)
             {
                cout<<"\n grade D";
             }
                else
                 {
                    cout<<"\n fail";
                 }
}
