// C program to perform basic operations on file
# include <stdio.h>
# include <string.h>

int main( )
{
	// Declare the file pointer
	FILE *filePointer ;
	char dataToBeWritten[50]
		= "Simran Shilky";

	filePointer = fopen("SimranTest.c", "w") ;
	if ( filePointer == NULL )
	{
		printf( "File failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		if ( strlen ( dataToBeWritten ) > 0 )
		{
			
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		
		fclose(filePointer) ;
		
		printf("Data successfully written in file SimranTest.c\n");
		printf("The file is now closed.") ;
	}
	return 0;		
}

