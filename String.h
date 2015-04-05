//
//  String.h
//  String
//
//  Created by Khalil's on 4/2/15.
//  Copyright (c) 2015 Muhammad Khan. All rights reserved.
//

#ifndef __String__String__
#define __String__String__

#include <stdio.h>
#include <stdlib.h>
#include <String.h>

typedef struct str* StringPtr;

StringPtr string(const char * string);
StringPtr newString(StringPtr oldString, const char * newString);
int length(StringPtr strObject);
char * getString(StringPtr strObject);
char ** split(StringPtr strObject, const char stringSplitOption);

#endif /* defined(__String__String__) */
