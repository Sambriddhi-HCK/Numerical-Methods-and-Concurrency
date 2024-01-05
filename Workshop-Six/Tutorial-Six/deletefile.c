/*WAP that deletes a file named "todelete.txt". Ensure proper
handling for successful file deletion.*/
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("delete.txt","r");
    
    //check if the file is opened successfully
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1; // exit with an error code
    }

    if(remove("delete.txt") == 0){
        printf("File deleted successfully!");
    }else{
        printf("Unable to delete");
    }
    return 0;
}