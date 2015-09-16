//
//  main.c
//  Caesar Cipher
//
//  Created by Pradeep  Wason on 16/09/15.
//  Copyright (c) 2015 Mw. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[100];
    int i=0;
    int diff = 0;
    
    printf("Enter string : ");
    scanf("%s", str);
    
    printf("Enter cipher difference : ");
    scanf("%d", &diff);

    while (str[i]) {
        printf("%d\n",str[i++]+ diff);
    }
    return 0;
}
