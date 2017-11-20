#define BLACK 0
#define BLUE 1

/*unsigned int OSprintf(char *text, unsigned int lineNumber)
{
	char *videoMemory = (char *) 0x000b8000; //begining of video memory in protected mode
	unsigned int i = 0;
	i= lineNumber*80*2; //SizeUnsignedInt is 1byte. there are 25,80char lines. each char takes up 2 bytes
	                    
	while(*videoMemory !=0)
	{
		if(*text == '\n')
		{
			lineNumber++;
			i=(lineNumber*80*2);
			*text++;
		}
		
		else
		{
			videoMemory[i]=*text;
			*text++;
			i++;
			videoMemory[i] = 0x07; //0x07 is white text on black background
			i++;
		}
	}
	return(0);
}*/

void OSprintf(char info)
{
	unsigned int location = 0;
	char *buffer = (char *) 0x000b8000;
	buffer[location]= info;
	buffer[location+1] = 0x07;
}

int sum3(int a, int b, int c)
{
	return a+b+c;
}

void kernel_main()
{
	OSprintf('a');
}
