#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
    /*double a=15;
    double b=24;
    double z,x,y,c,d;
    x=max(a,b);
    z=min(a,b);
    y=pow(a,b);     //a^b
    c=sqrt(a);
    d=abs(-4);      // is max value 4
    //z=round(a);   //rounds decimal to nearest int
    //z=ceil(a);    //rounds upp
    //z=floor(a);   //rounds down
    
    cout<<z<<" "<<x<<" "<<y;*/
    //if statements 
    //if,else if,else(){}
    //
    //Ternary operator-?:
        //replacement to an if else statements
        //condition ? expression 1 : expression 2;
    //int i;
    //cin>>i;
    //(i%2==0) ? cout<<"EVEN NO" : cout<<"ODD NO";
        //if (i%2==0) cout even else cout odd
    //cout<<(i%2==0 ? "EVEN" : "ODD" );
    /*
    &&-AND ||-OR !-NOT(REVESE LoGICAL STATE) 
    */
    /*string funsctions
    getline(cin,name);
    name.length();      variable length
    name.clear();       to clear variable value
    name.empty();       for variable length o
    name.append();      appends the value like in python +name
    name.insert(index,value);    inserting value
    name.erase(indexstart,end);
    */
   /*loops
   while,for,do while*/
   //break- breaks out of loop
   //continue- skips the current iteration 
   //return-returns a value back to the spot where you called the corresponding function
   //overloading function- we can give same name to a unction but to due to difference in no of parameters passed we can call them accordingly
   //variable scope-local-defined in a funaction{}
   //global- accessible to all
   //arrays-a data structure that can hold multiple values that are accessed by an index number
   /*string car[]={"corvette","ford","hyundai","bmw"};
   cout<<car[1];   //calling one element
   car[0]="camareo";  // assigning new value
   string hello[4];   //array elements outside ddefn
   hello[0]="hi";

   //sizeof()-gives us the size of variables,data type,objects,class,etc in bytes    
   */
    //cout<<sizeof(car)/sizeof(string)<<"ELEMENTS";    //gives no of element in array 
    //array iterations
    /*string name[]={"Ayush","Subodh","Shreyash","Rahul"};
    for(int i=0; i < sizeof(name)/sizeof(string);i++)
    {
        cout<<"\nNAMES RE:"<<name[i];
    }*/
    //foreach loop-loop that eases the traversal over an iterable data set
    /*string name[]={"Ayush","Subodh","Shreyash","Rahul"};
    for(string student : name)
    {
        cout<<student<<'\n';
    }*/
    //fill()-fills a range of element with a specified value 
    //fill(start,end,value)
    //food[10];
    //fill(food,food+10,"HELLO");    
    //paramters variables
    //const,static
    return 0;
}