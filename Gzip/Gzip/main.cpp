#include <iostream>

using namespace std;


#include <gzip/GzipUtils.hpp>


int main()
{
	string compressData = GzipUtils::compress("huangshangbin");

	if (GzipUtils::isCompressData(compressData.c_str(), compressData.length()))
	{
		cout << compressData << "  ��ѹ������" << endl;
	}
	else
	{
		cout << compressData << "  ����ѹ������" << endl;
	}

	if (GzipUtils::isCompressData("huangshangbin"))
	{
		cout << "huangshangbin  ��ѹ������" << endl;
	}
	else
	{
		cout << "huangshangbin  ����ѹ������" << endl;
	}
	
	cout << "Դ����:" << GzipUtils::decompress(compressData.c_str(), compressData.length()) << endl;

	int a;
	cin >> a;

	return 0;
}