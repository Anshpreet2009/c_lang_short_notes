#include <stdio.h>
#include <string.h>

//With the typedef function:
//We can give nicknames to already existing datatypes
//The usual format is:
//typedef  data_type  new_name_for_data_type;
//Here's an example:

typedef char string[100];

//Make sure to specify the size as well

int main(){

    string name = "My name";

    printf("%s", name);

    return 0; 
}


