//---------------------------------------------------------------------------------------------------------------------
// c.c
//
// A to-do list application
// <... May have multiple lines.>
//
//---------------------------------------------------------------------------------------------------------------------
//
#include "c.h"
#include "extension.c"
void check(void);
//---------------------------------------------------------------------------------------------------------------------
///
/// This is an example header comment. Here, you explain, what the
/// function does. Copypaste and adapt it!
///
/// @param numbers an array to check
/// @param length The length of the array. If this text is too long you can
///
/// @return the highest number
//
int main(void)
{
  fprintf(stdout, "Hello World");
  check();
  return 0;
}
void check(void)
{
  struct Example
  {
    int type;
    char *value;
    long double resumee;
  };
  struct Example example1 = { 3, "Jeremy", 5432.432433};
  struct Example *po = &example1;
  fprintf(stdout, "%p ,\t\t %p\n", (void *)&example1, (void *)&(po->type));//the addresses on the left are the same
  
  int arr[] = {1,2,3,4};
  int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int *p = &arr[2];//p pointer to the second element
  // fprintf(stdout, "\n%d %d", ++*p, 2[arr]);
  fprintf(stdout, "%p %p",(void *)*( a + 2), (void *)&a[2][0]);//the address of the first element in the third row;
  char *pointer[10];//an array of 10 pointers to type char
  char (*pointer_2)[10];//a pointer to an array of 10 elems of type char
  *p++;
  // fprintf(stdout, "%d", *p);
}
//we will store the date in the format: task@@date\n
//the data will be displayed from the current day, 7 days upfront.
//we retrieve the information each time we need it, we can add new information, remove, change, etc... 
// int run(void)//returns -1 upon memory error
// {
//   FILE *f_p = fopen("sources.txt", "rw");
//   if(f_p == NULL)//if the file cannot be found
//   {
//    system("touch sources.txt");
//   }
//   int result = read_file(f_p);
//   return result;
// }
