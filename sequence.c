#include <stdio.h>
#include <mach/boolean.h>
#include <stdbool.h>



int main() {
    int number;
   /* printf("Reads a Number.\n");*/
    scanf("%d",&number);
    
    
    if(number <= 0){
        printf("ERROR_1");
    }
    else {
        bool ha = false;
       
        int arr[number];
        for(int i = 0; i < number; i++){
            if (1 != scanf("%d", &arr[i])) {
                printf("ERROR_2\n");
                ha = true;
                break;
            }
        }
        
        if (!ha) {
        
        bool isAscending = true;
        bool isDescending = true;
        bool isEqual = true;
        bool notDescending = true;
        bool notAscending = true;
        for(int i = 0; i < (sizeof(arr)/ sizeof(arr[0]))-1; i++){
            
            isAscending = isAscending && arr[i]<arr[i+1];
            notDescending = notDescending && arr[i]<=arr[i+1];
            isDescending = isDescending && arr[i]>arr[i+1];
            isEqual = isEqual && arr[i] == arr[i+1];
            notAscending = notAscending && arr[i]>=arr[i+1];
        }
        if(isAscending){
            printf("Ascending.\n");
        }
        else if(isEqual){
            printf("Equal.\n");
        }
        else if (notDescending){
            printf("Not Descending.\n");
        }
        else if(isDescending){
            printf("Descending.\n");
        }
        else if(notAscending){
            printf("Not Ascending.\n");
        }
     }
   }
    return 0;
}
