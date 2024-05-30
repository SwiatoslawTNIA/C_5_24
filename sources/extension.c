#include "extension.h"
const int STR_LENGTH = 120;
// int read_file(FILE *p)
// {
//   fflush(p);
//   char * str = malloc(sizeof(char) * STR_LENGTH);
//   if(str == NULL) 
//   {
//     fprintf(stderr, "Out of memory");
//     return -1;
//   }//retrieve the information line by line
//   while(fgets(str, STR_LENGTH, p) != EOF)
//   {
//     //display the values:
//     char date[11];//day:month:year
//     unsigned int counter = 0, index = 0;
//     for(int i = 0; str[i] != NULL; ++i)
//     {
//       if(str[i] == '@')
//       {
//         ++counter;
//       }
//       if (str[i] == '@' && counter == 1)
//       {
//         ++index;
//         break;
//       }
//       else
//       {
//         counter = 0;
//       }
//       ++index;
//     }
//     //now the index points to the starting position of the date in the string
//     //parse the date:
//     strcpy(date, str[index]);
    
//   }

// }
