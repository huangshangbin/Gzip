#include <iostream>

using namespace std;


#include <gzip/GzipUtils.hpp>


int main()
{
	string compressData = GzipUtils::compress("huangshangbin");

	if (GzipUtils::isCompressData(compressData.c_str(), compressData.length()))
	{
		cout << compressData << "  是压缩数据" << endl;
	}
	else
	{
		cout << compressData << "  不是压缩数据" << endl;
	}

	if (GzipUtils::isCompressData("huangshangbin"))
	{
		cout << "huangshangbin  是压缩数据" << endl;
	}
	else
	{
		cout << "huangshangbin  不是压缩数据" << endl;
	}
	
	cout << "源数据:" << GzipUtils::decompress(compressData.c_str(), compressData.length()) << endl;

	int a;
	cin >> a;

	return 0;
}