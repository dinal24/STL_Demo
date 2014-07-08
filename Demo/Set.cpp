#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename Container>
void printContainer(const Container& c)
{
  cout << "----------------\n";
  for( typename Container::const_iterator i = c.begin(); i != c.end(); ++i )
  {
    cout << *i << endl;
  }
  cout << "----------------\n";
}

void setDemo()
{
  set<string> s;
  s.insert( "bear" );
  s.insert( "puppy" );
  s.insert( "cat" );
  s.insert( "hamster" );
  s.insert( "cat" );


  cout << "The original set:\n";
  printContainer< set<string> >( s ); 


  set<string>::iterator it = s.find( "puppy" );
  s.erase ( it );
  s.erase ( s.find( "bear" ) );


  cout << "After deleting bear and puppy from the set:\n";
  printContainer< set<string> >( s ); 



  cout << "The size of the set is: " << s.size() << endl
       << "maximum number of elements in the set:          " << s.max_size() << endl;



  // multiset 
  multiset<string> ms;
  ms.insert("bear");
  ms.insert("puppy");
  ms.insert("cat");
  ms.insert("hamster");
  ms.insert("cat");


  cout << "The multiset:\n";
  printContainer< multiset<string> >( ms ); 

  ms.erase( ms.find( "cat" ) );
  
  cout << "The multiseti after deleting cat:\n";
  printContainer< multiset<string> >( ms ); 

}

/*
int main()
{
  setDemo();
  return 0;
}

*/