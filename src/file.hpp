#include <stdio.h>
#include <string>

#ifndef LIME_FILE_H
#define LIME_FILE_H

typedef enum
{
	FILE_WAV = 1,     ///< Microsoft WAVE
	FILE_FLAC,        ///< Free Lossless Audio Codec
	FILE_VORBIS,      ///< Ogg Vorbis
	FILE_OPUS,        ///< Ogg Opus
	FILE_MP3,         ///< Mp3
	FILE_MIDI,        ///< Midi and midilike
	FILE_MOD,         ///< MOD and modlike
	FMT_NETWORK,      ///< Network http stream
} FILE_audioformat;

namespace File {
	int GetFileType(const std::string& file);
	int Move(const char* filein, const char* fileout);
	int Copy(const char* filein, const char* fileout);
	int Exists(const char* filepath);
}

namespace FIO {
	int Exists(const std::string& filepath);
}
#endif
