#include <stdio.h>

int main(){
    //For writing files, there is a built-in struct called FILE, its format is:
    //FILE *pVariableName = fopen("name of file", "mode");
    //The mode can be either "w" or "r"
    //"w" means write, "r" means read

    FILE *pFile = fopen("output.txt", "w");  //fopen means file open

    char text[] = "This file has been successfully written\n";



    if (pFile == NULL){
        printf("Error opening file\n");
        return 1;  //If a non-zero value is returned, it closes the program prematurely
    }

    fprintf(pFile, "%s", text); //fprintf means file printf
                                //It prints the statement to a specific file
                                //The usual format is fprintf(filePointer, format-specifier, text content);

    fclose(pFile);

    pFile = NULL;


    
    //For reading the files, make sure you have closed all files, including the ones you are supposed to read
    //Just make sure to turn the mode to "r" in the fopen function
    FILE *pRead = fopen("output.txt", "r");

    char buffer[1024] = {0};  //Making a buffer variable is good as it makes reading the file much faster

    if (pRead == NULL){
        printf("Error reading the file\n");
        return 1;
    }

    //Here is the code for reading the file, the usual format is:
    //while(fgets(buffer, size of buffer, file pointer) != NULL){perform this action}
    while(fgets(buffer, sizeof(buffer), pRead) != NULL){
        printf("%s", buffer);
        printf("This file is being successfully read");
    }

    fclose(pFile);  //Make sure to close every file that you open so that there is no performance overhead

    return 0;
}


