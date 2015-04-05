//
//  main.c
//  String
//
//  Created by Khalil's on 4/2/15.
//  Copyright (c) 2015 Muhammad Khan. All rights reserved.
//

#include <stdio.h>
#include "String.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    StringPtr myString = string("Hello, World");
    printf("%s\n", getString(myString));
    printf("myString is %d characters long\n", length(myString));
    
    
    myString = newString(myString, "Bye, World!");
    printf("%s\n", getString(myString));
    printf("myString is %d characters long\n", length(myString));
    
    myString = newString(myString, "another string, with a memory leak");
    printf("%s\n", getString(myString));
    printf("myString is %d characters long\n", length(myString));
    
    
    return 0;
}
