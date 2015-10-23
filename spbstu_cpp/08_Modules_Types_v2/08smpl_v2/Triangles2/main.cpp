#include "file.h"
#include "search.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
   setlocale(LC_ALL, "Russian");
   if (argc < 3)
   {
      cout<<"������ �������: Triangles.exe infile.txt outfile.txt"<<endl;
      return -1;
   }
   const char* inFileName = argv[1];  // ��� �������� �����
   const char* outFileName = argv[2]; // ��� ��������� �����
   int pointNum = countPoints(inFileName);
   if (pointNum < 4)
   {
      cout<<"������� ���� �� ���������� ��� � ��� ������� ���� �����"<<endl;
      return -2;
   }
   Point* pointArray = new Point[pointNum];
   if (!readPoints(inFileName, pointArray, pointNum))
   {
      cout<<"����������� ������ ��� ����� ����� �� �����"<<endl;
      return -3;
   }
   const int maxTrNum = 3;
   Triangle trArray[maxTrNum];
   searchLargestTriangles(pointArray, pointNum, trArray, maxTrNum);
   if (!writeTriangles(outFileName, trArray, maxTrNum))
   {
      cout<<"�� ������� �������� ��������� � �������� ����"<<endl;
      return -4;
   }
   cout<<"��������� ������� ���������"<<endl;
   delete[] pointArray;
   return 0;
}