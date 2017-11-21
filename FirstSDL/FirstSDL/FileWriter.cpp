#include "FileWriter.h"

using namespace std;

FileWriter::FileWriter()
{
}


FileWriter::~FileWriter()
{
}

void FileWriter::writeData(char * text)
{
	
	SDL_RWops *file = SDL_RWFromFile(text, "wb");	
	if (file != NULL) {
		size_t len = SDL_strlen(text);
		SDL_RWwrite(file, "Ahoj", 2, len);
		file->close(file);
	}
	
	
	

}
