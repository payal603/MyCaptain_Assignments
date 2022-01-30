/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include &lt;fstream&gt;
#include &lt;string&gt;
#include &lt;cctype&gt;
#include &lt;conio.h&gt;
#include &lt;stdlib.h&gt;
 
using namespace std;
 
 
struct id
{
    string name;
    string no ;
    int gpa ;
};
 
struct node
{
   id data ;
   node * next ;
   node * back ;
};
 
class SDB
{
private :
    node * first , *last , *new_node ;
    long int type ;
    int counter ; int flag = 0 ;
public:
 
    SDB(){first = last = NULL ; int  counter = 1; }
 
    int Construct ( long int i ,string n ,string x , long double y )
    {
        if ( first == NULL)
        {
        type = i ;
        new_node = new node ;
        new_node -&gt; data.name = n;
        new_node -&gt; data.no = x ;
        new_node -&gt; data.gpa = y ;
        new_node -&gt; next = NULL;
        new_node -&gt; back = NULL;
        first = new_node ;
        last = new_node ;
        counter++ ;
        return 1 ;
        }
        else
        {
            cout &lt;&lt; "  You used create option previously \n " ;
            return 0 ;
        }
    }
 
    int insertelement ( string n , string x , long double y )
    {
 
        new_node = new node ;
        new_node -&gt; data.name = n;
        new_node -&gt; data.no = x ;
        new_node -&gt; data.gpa = y ;
 
        if( first != NULL)
        {
 
        switch ( type )
        {
          case 1 :
 
            if ( first -&gt; data.name&#91;0] &gt;= n&#91;0])
            {
                first -&gt; back = new_node ;
                new_node -&gt; next = first ;
                new_node -&gt; back = NULL ;
                first = new_node ;
                counter++ ;
                return 1 ;
            }
 
           else if ( last -&gt; data.name&#91;0] &lt;= n&#91;0] )
            {
                last -&gt; next = new_node ;
                new_node -&gt; next = NULL ;
                new_node -&gt; back = last ;
                last = new_node ;
                counter++ ;
                return 1 ;
            }
            else
            {
                node * current = first ;
                node * cur_next = current-&gt; next ;
 
                for ( ; cur_next -&gt; next != NULL ; )
                {
                    current = current -&gt; next ;
                    cur_next = cur_next -&gt;next ;
 
                    if( cur_next -&gt; data.name&#91;0] &gt;= n&#91;0])
                        break ;
                }
 
                     cur_next -&gt; back  = new_node ;
                     new_node -&gt; next  = cur_next ;
                     new_node -&gt; back = current ;
                     current -&gt; next = new_node ;
                     counter++ ;
                     return 1 ;
 
            }
            break ;
 
          case 2 :
 
            if ( first -&gt; data.no &gt;= x)
            {
                first -&gt; back = new_node ;
                new_node -&gt; next = first ;
                new_node -&gt; back = NULL ;
                first = new_node ;
                counter++ ;
                return 1 ;
            }
 
           else if ( last -&gt; data.no &lt;= x )
            {
                last -&gt; next = new_node ;
                new_node -&gt; next = NULL ;
                new_node -&gt; back = last ;
                last = new_node ;
                counter++ ;
                return 1 ;
            }
            else
            {
                node * current = first ;
                node * cur_next = current-&gt; next ;
 
                for ( ; cur_next -&gt; next != NULL ; )
                {
                    current = current -&gt; next ;
                    cur_next = cur_next -&gt;next ;
 
                    if( cur_next -&gt; data.no &gt;= x)
                        break ;
                }
 
                     cur_next -&gt; back  = new_node ;
                     new_node -&gt; next  = cur_next ;
                     new_node -&gt; back = current ;
                     current -&gt; next = new_node ;
                     counter++ ;
                     return 1 ;
            }
            break ;
 
        }
        }
        else
            {
            cout &lt;&lt; " Please use  create option first \n";
            return 0 ;
            }
    }
 
 
    int deleteelement (string  x )
    {
        if ( first != NULL)
        {
          node * del_first = first ;
          node * del_last = last;
          node * del_next = del_first -&gt; next ;
          node * del_back = last -&gt; back ;
 
          if ( first -&gt; data.no == x )
          {
           first = del_next ;
           delete (del_first);
           counter-- ;
           return 1;
          }
 
          else if (  last -&gt; data.no == x)
          {
              last = del_back;
              last -&gt; next = NULL ;
              delete (del_last);
              counter-- ;
              return 1;
          }
          else
          {
 
          for ( ; del_first -&gt;next != NULL ; )
          {
              del_first = del_first -&gt; next ;
              del_back = del_first -&gt; back ;
              del_next = del_first -&gt; next ;
 
 
              if ( x == del_first -&gt; data.no)
              {
                  del_next -&gt; back = del_first -&gt;back ;
                  del_back -&gt; next = del_first -&gt;next;
                  delete (del_first);
                  flag = 1 ;
                  counter-- ;
                  return 1;
              }
          }
          }
 
          if ( flag == 0 ) {
            cout &lt;&lt; "Wrong ID \n" ;
            return 3;
          }
        }
        else
        {
            cout &lt;&lt; "Empty database !!\n";
            return 0;
        }
    }
 
    void print ( void )
    {
         cout &lt;&lt; "   Name\t\tID\tGPA\n\n";
         node* pri_ele = first ;
 
         for (  ; pri_ele != NULL ; )
         {
             cout &lt;&lt; pri_ele-&gt; data.name &lt;&lt; "\t" &lt;&lt; pri_ele -&gt;data.no &lt;&lt; "\t" &lt;&lt; pri_ele-&gt;data.gpa &lt;&lt; endl ;
             pri_ele = pri_ele-&gt; next ;
         }
     }
 
 
    int savefile ( void )
    {
         node *save = first ;
         int fs = 0 ;
         ofstream fout("save.txt") ;
 
         if (!fout.is_open())  // failed to open file
         {
           cout &lt;&lt; "Could not open the file " &lt;&lt; "save.txt" &lt;&lt; endl;
           return 0 ;
 
          }
         fout &lt;&lt; " Name\t\tID\tGPA\n\n";
 
         for (  ; save != NULL ; )
         {
             fout &lt;&lt; save-&gt; data.name &lt;&lt; "\t" &lt;&lt; save -&gt;data.no &lt;&lt; "\t" &lt;&lt; save -&gt;data.gpa &lt;&lt; endl ;
             save = save-&gt; next ;
             fs = 1 ;
         }
         fout.close();
         if (fs == 0)
         {
             cout &lt;&lt; "Empty database !! \n";
             return 0 ;
         }
         else
         {
             cout &lt;&lt; "Done \n";
            return 1 ;
         }
      }
 
    int searchelement ( string x)
    {
       node* sch = first ;
       int f = 0;
 
       if ( first == NULL )
       {
           cout &lt;&lt; "Empty Database \n";
           return 0 ;
       }
       else
       {
           while ( sch != NULL)
           {
               if( sch -&gt; data.no == x  )
               {
                   cout &lt;&lt;sch -&gt; data.name &lt;&lt; "\t" &lt;&lt; sch -&gt; data.no &lt;&lt; "\t" &lt;&lt; sch -&gt; data.gpa &lt;&lt; endl ;
                   f = 1;
                   return 1;
                   break ;
               }
               sch = sch -&gt;next;
           }
          if (f == 0)
          {
              cout &lt;&lt; "Wrong ID \n" ;
            return 3;
          }
       }
 
 
   }
 
   void help ( void )
   {
   system("CLS");
       cout &lt;&lt; "This program considered as simple database of students in collage , you can make it ordered by name or by ID , there are some functions help you to create a database : \n"
            &lt;&lt; "Crate Function : \n"
            &lt;&lt; "You must use this is function at first to create database ,in this function you must enter type of order ( name or ID ) , if you want to insert another data you can use insert function \n"
            &lt;&lt; "Insert/Delete/Search Functions :\n"
            &lt;&lt; "In this function you can insert/delete/search on any number of data , you must use this functions after using create function \n"
            &lt;&lt; "Save Function :\n"
            &lt;&lt; "You can save data in file after you finish your work ,be attention the folder of program must contain (save.text)\n "
            &lt;&lt; "Thanks for reading \n" ;
   }
 
};
 
 
void show (void) ;
int check_num(int x = 0);
int menu ();
 
 
int main()
{
     show();
     SDB obj ;
     long int type , test  , num_cases  ;
     long  int num_insert , num_del ,num_search ,check_insert , check_del ,check_search ;
     long double gpa;
     string name , id ;
 
     test = 1;
 
     cout &lt;&lt; "  Enter your choice: \n";
     num_cases = check_num(3);
 
 
     while(  test == 1 )
      {
       switch ( num_cases )
        {
        case 1 :
system("CLS");
                cout &lt;&lt; "You chose 1 to create a database, Please enter the Name, ID and GPA of the student\n";
 
                getline(cin ,name);
                while ( name&#91;0] &lt; 65 or name&#91;0] &gt; 122)
                 {
                  cout &lt;&lt; "  Wrong input !\n";
                  getline(cin ,name);
                 }
 
                 getline(cin ,id);
 
                 while ( !(cin &gt;&gt; gpa) or gpa &gt; 4)
                 {
                  cin.clear();
                  while ( cin.get() != '\n') continue;
                  cout &lt;&lt; " Wrong input !\n";
                 }
                 while ( cin.get() != '\n') continue;
 
                cout &lt;&lt; "  What type of database arrangement you want ? \n "
                     &lt;&lt;   " 1-Name     2-ID \n";
                type = check_num(2);
 
                obj.Construct(type , name , id , gpa);
 
                num_cases = menu();
 
                break ;
 
        case 2 :
system("CLS");
               cout &lt;&lt; "  You chose 2 to insert data , Please enter number of students you want to save . \n" ;
 
               check_insert = 1 ;
               num_insert = check_num(0) ;
 
               for ( int j = 1 ; j &lt;= num_insert ; j++)
               {
                   if ( check_insert == 1)
                   {
                   cout &lt;&lt; " Please enter name of student , Please enter the Name, ID and GPA of the student\n";
                   getline(cin ,name);
 
                   while ( name&#91;0] &lt; 65 or name&#91;0] &gt; 122)
                   {
                   cout &lt;&lt; "  Wrong Name ! \n";
                   getline(cin ,name);
                   }
 
                   getline(cin ,id);
 
                   while ( !(cin &gt;&gt; gpa) or gpa &gt; 4)
                   {
                    cin.clear();
                    while ( cin.get() != '\n') continue;
                    cout &lt;&lt; " Wrong input !\n";
                   }
                   while ( cin.get() != '\n') continue;
 
                  check_insert = obj.insertelement(name , id , gpa);
                  }
               }
                    num_cases = menu();
 
                 break;
 
        case 3 :
system("CLS");
              cout &lt;&lt; "You chose 3 to delete data, Please enter number of students you want to delete  \n";
 
              check_del = 1 ;
              num_del = check_num(0);
 
               for ( int k = 1 ; k &lt;= num_del ; k++)
               {
                   if ( check_del != 0)
                   {
 
                   cout &lt;&lt; "Please enter ID of student \n";
                   getline(cin , id);
                   check_del = obj.deleteelement(id);
                   if ( check_del == 3) k-- ;
                   }
               }
 
                num_cases = menu();
 
                 break;
 
           case 4 :
system("CLS");
               cout &lt;&lt; "You chose 4 to search on data,Please enter number of students you want to search on \n";
               check_search = 1 ;
               num_search = check_num();
 
               for ( int l = 1 ; l &lt;= num_search ; l++)
               {
                   if ( check_search != 0 )
                   {
                   cout &lt;&lt; " Please enter ID of student \n";
                   getline(cin , id);
                   check_search = obj.searchelement(id);
                   if ( check_search == 3) l--;
                   }
               }
 
            num_cases = menu();
                 break;
 
 
           case 5 :
           system("CLS");
               obj.print() ;
               num_cases = menu();
                break ;
 
           case 6 :
system("CLS");
                int save_cheak ;
                save_cheak =obj.savefile();
                num_cases = menu();
 
                break ;
 
           case 7 :
 
                obj.help();
                num_cases = menu();
                break ;
 
           case 8 :
 
                exit(EXIT_SUCCESS);
                    break ;
 
           default :
 
            cout &lt;&lt; "Wrong input ! \n";
            cout &lt;&lt; "Enter your choice: \n";
            num_cases = check_num(3);
            break ;
         }
  }
 
 
    return 0;
}
 
 
int check_num(int x )
{
  int num ;
 
    switch ( x )
      {
 
       case 1 :
       case 2 :
 
               while ( !(cin &gt;&gt; num) or  num &gt; 2)
               {
               cin.clear();
               while ( cin.get() != '\n') continue;
               cout &lt;&lt; " Wrong input !\n";
               }
               while ( cin.get() != '\n') continue;
               break ;
       case 3 :
              while (  !(cin &gt;&gt; num) or  num &gt; 8)
               {
               cin.clear();
               while ( cin.get() != '\n') continue;
               cout &lt;&lt; " Wrong input !\n";
               }
               while ( cin.get() != '\n') continue;
               break ;
 
       default :
 
              while (  !(cin &gt;&gt; num)  )
               {
               cin.clear();
               while ( cin.get() != '\n') continue;
               cout &lt;&lt; " Wrong input !\n";
               }
               while ( cin.get() != '\n') continue;
               break ;
 
      }
 
    return num ;
}
int login();
void show (void)
{
login();
 
 
       cout &lt;&lt;"\n\t      ------WELCOME TO DATABASE MANAGEMENT SYSTEM------                           \n\n";
 
 
  cout &lt;&lt; "********************************************************************************\n"
       &lt;&lt; "********************************************************************************\n"
       &lt;&lt; "***  1- Create Database                                                      ***\n"
       &lt;&lt; "***  2- Insert Data                                                          ***\n"
       &lt;&lt; "***  3- Delete Data                                                          ***\n"
       &lt;&lt; "***  4- Search on Data                                                       ***\n"
       &lt;&lt; "***  5- Print Data                                                           ***\n"
       &lt;&lt; "***  6- Save                                                                 ***\n"
       &lt;&lt; "***  7- Help                                                                 ***\n"
       &lt;&lt; "***  8- Exit                                                                 ***\n"
       &lt;&lt; "********************************************************************************\n"
       &lt;&lt; "********************************************************************************\n";
  }
 
int menu()
{
        int num_cases;
        cout &lt;&lt; "  Do you want to do another operation?\n "
             &lt;&lt; " 1- Yes   2-No \n";
 
         int t =  check_num(1);
 
         if ( t == 1)
            {
            system("cls");
            show();
            cout &lt;&lt; "Enter your choice: \n";
            num_cases = check_num(3);
            return num_cases;
            }
         else
            return 8 ;
}
 
int login ()
{
//Low Protection Login Code
    /*string userName;
    string userPassword;
    int loginAttempt = 0;
 
    while (loginAttempt &lt; 5)
    {
        cout &lt;&lt; "\n\tPlease enter your user name: ";
        cin &gt;&gt; userName;
        cout &lt;&lt; "\n\tPlease enter your user password: ";
        cin &gt;&gt; userPassword;
        
 
        if (userName == "greg" &amp;&amp; userPassword == "pass")
        {
            cout &lt;&lt; "\n\tWelcome Greg!\n";
            //cp nsb
            break;
        }
        else if (userName == "code" &amp;&amp; userPassword == "projects")
        {
            cout &lt;&lt; "\n\tWelcome Admin!\n";
            break;
        }
        else
        {
            cout &lt;&lt; "Invalid login attempt. Please try again.\n" &lt;&lt; '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout &lt;&lt; "Too many login attempts! The program will now terminate.";
            return 0;
    }
 
    cout &lt;&lt; "\n\tThank you for logging in.\n\n";
    system("PAUSE");
    system("CLS"); */
    string pass ="";
   char ch;
   cout &lt;&lt; "\n\n\n\n\t\t\t\t     Database Management System";
   cout &lt;&lt; "\n\n\n\n\n\n\n\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout &lt;&lt; '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout &lt;&lt; "\n\n\t\t\t\t\tAccess Granted \n";
   }else{
      cout &lt;&lt; "\n\n\t\t\t\t\tAccess Aborted...Press Any Key To Try Again\n";
      ch = _getch();
      system("CLS");
      login();
   }
   system("PAUSE");
   system("CLS");
}
 
 
 