// #include <stdio.h>

// int main(){


//     char str[100];

//     int len=0,left=0,right,flag=1;


//     printf("Enter any string");

//     fgets(str,100,stdin);


//     while(str[len] !='\0' ){

//         if(str[len] =='\n' ){

//             str[len]='\0';

//             break;
//         }

//         len++;
//     }

// right=len-1;

// while(left<right){

//     if(str[left]!=str[right] ){
//         flag=0;
//         break;
//     }

//     left++;
//     right--;
// }


// if(flag==1)

// printf("the givan string is a palindrome");

// else
// printf("the  given string is not  a palindrome");




//     return 0;
// }



#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter string:\n ");

   
    char ch;
    while ((ch = getchar()) != '\n') {
        str[len] = ch;
        len++;
    }
    str[len] = '\0';

    int left = 0, right = len - 1, flag = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
