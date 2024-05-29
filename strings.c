// // strstr method
// #include <stdio.h>
// #include <string.h>

// int main() {
//   const char *str = "This is a string";
//   const char *sub = "a";
//   char *result = strstr(str, sub);

//  printf("%s",result);

//   return 0;
// }

// // strchr method in c 
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str[] = "Hello, world!";
//   char ch = 'o';

//   char *result = strchr(str, ch);

//   if (result != NULL) {
//     printf("Character '%c' found at %p\n", ch, result);
//   } else {
//     printf("Character '%c' not found.\n", ch);
//   }

//   return 0;
// }

// // strspn in c
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[] = "123abcdef";
//   char str2[] = "123abc";

//   size_t length = strspn(str1, str2);

//   printf("Length of initial segment matching '%s' in '%s': %zu\n", str2, str1, length);

//   return 0;
// }

// //strtok in c
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str[] = "This? is? a? string?, with? delimiters";
//   char *delim = "?, ";

//   char *token;

//   token = strtok(str, delim);  // First call, tokenize on ", "

//   while (token != NULL) {
//     printf("Token: %s\n", token);
//     token = strtok(NULL, delim);  // Subsequent calls, use NULL for string
//   }

//   return 0;
// }

// //sprintf method in c
// #include <stdio.h>
// int main()
// {
// char buffer[50];
// int a = 10, b = 20, c;
// c = a + b;
// sprintf(buffer, "Sum of %d and %d is %d", a, b, c);
// // The string "sum of 10 and 20 is 30" is stored into buffer instead
// // of printing on stdout
// printf("%s", buffer);
// return 0;
// }

