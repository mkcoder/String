//
//  String.c
//  String
//
//  Created by Khalil's on 4/2/15.
//  Copyright (c) 2015 Muhammad Khan. All rights reserved.
//

#include "String.h"

struct str {
    char * string;
    int length;
};

StringPtr string(const char * string)
{
    StringPtr returnString = malloc(sizeof(struct str));
    int s_len =  returnString->length = (int)strlen(string);
    returnString->string = malloc(sizeof(char)*s_len);
    
    strcpy(returnString->string, string);
    return returnString;
}

StringPtr newString(StringPtr oldString, const char * newString)
{
    free(oldString->string);
    free(oldString);
    
    return string(newString);
}

int length(StringPtr string)
{
    return string->length;
}

char * getString(StringPtr strObject)
{
    return strObject->string;
}
