// C program to Open a File,
// Write in it, read in it And Close the File

#include <stdio.h>
#include <string.h>

int main()
{

    FILE *filePointer;

    char dataToBeWritten[50] = "Open Source Software Lab";
    char dataToBeRead[50];

    filePointer = fopen("filehandler.c", "w");

    if (filePointer == NULL)
    {
        printf("filehandler.c file failed to open.");
    }
    else
    {

        printf("The file is now opened.\n");

        if (strlen(dataToBeWritten) > 0)
        {

            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        fclose(filePointer);

        printf("Data successfully written in file filehandler.c\n");
        printf("The file is now closed.");
    }

    filePointer = fopen("filehandler.c", "r");

    if (filePointer == NULL)
    {
        printf("filehandler.c file failed to open.");
    }
    else
    {

        printf("The file is now opened.\n");

        while (fgets(dataToBeRead, 50, filePointer) != NULL)
        {

            printf("%s", dataToBeRead);
        }

        fclose(filePointer);

        printf("Data successfully read from file filehandler.c\n");
        printf("The file is now closed.");
        return 0;
    }