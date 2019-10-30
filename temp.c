#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>


int temp () 
{
        sqlite3 *db;
        
        char *zErrMsg = 0;
        int status;

        status = sqlite3_open("test.db", &db);
        
        if (status != 0) {
                fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
                printf("Status: %d\n", status);
                exit(0);
        } else {
                fprintf(stderr, "Opened database successfully\n");
                printf("Status: %d\n", status);
        }

        sqlite3_close(db);
        return 0;
}