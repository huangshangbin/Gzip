#pragma once

#include "private/decompress.hpp"
#include "private/compress.hpp"
#include "private/utils.hpp"


#include <string>

using namespace std;

class GzipUtils
{
public:
	static bool isCompressData(const char* buffer, unsigned long bufferSize)
	{
		return gzip::is_compressed(buffer, bufferSize);
	}

	static bool isCompressData(string data)
	{
		return gzip::is_compressed(data.c_str(), data.length());
	}

	static string compress(const char* buffer, unsigned long bufferSize)
	{
		gzip::Compressor comp(Z_DEFAULT_COMPRESSION);
		std::string output;
		comp.compress(output, buffer, bufferSize);

		return std::move(output);
	}

	static string compress(string data)
	{
		gzip::Compressor comp(Z_DEFAULT_COMPRESSION);
		std::string output;
		comp.compress(output, data.c_str(), data.length());

		return std::move(output);
	}

	static string decompress(const char* buffer, unsigned long bufferSize)
	{
		gzip::Decompressor decomp;
		std::string output;
		decomp.decompress(output, buffer, bufferSize);

		return std::move(output);
	}

	static string decompress(string data)
	{
		gzip::Decompressor decomp;
		std::string output;
		decomp.decompress(output, data.c_str(), data.length());

		return std::move(output);
	}
};