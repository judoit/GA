#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
void testByChar()
{
    fstream testByCharFile;
    char c;
    testByCharFile.open("/home/jdi/index",ios::in);
    while(!testByCharFile.eof())
    {
        testByCharFile>>c;
        cout<<c;
    }
    testByCharFile.close();
}
void testByLine()
{   vector<string> str;
    char buffer[256];
    fstream outFile;
    outFile.open("/home/jdi/index",ios::in);
    cout<<"inFile.txt"<<"--- all file is as follows:---"<<endl;
    while(!outFile.eof())
    {
        outFile.getline(buffer,256,'\n');//getline(char *,int,char) 表示该行字符达到256个或遇到换行就结束
        str.push_back(buffer);
        cout<<buffer<<endl;
    }
    cout << "文件总共有行数为： "<< str.size();
    outFile.close();
}
void read_data(const char *file_name)
{
    ifstream fsf(file_name);
    string sline;
    vector<vector<string>> str;
    int i=0;
    while (!fsf.eof())
    {
        getline(fsf, sline);
        string a,b;
        stringstream ss;
        ss << sline;
        ss >> a >> b
    }
    fsf.close();
}
int main()
{
   cout<<endl<<"逐个字符的读取文件：testByChar() "<<endl<<endl;
   testByChar();
   cout<<endl<<"将文件每行内容存储到字符串中，再输出字符串 ：testByLine()"<<endl<<endl;
   testByLine();
   read_data("/home/jdi/index");
}
/**********************
运行结果
逐个字符的读取文件：testByChar()
1a2b3c4d5e6f7g8h9i10j11k12l13m14n15o16p17q18r19s20t21u22v23w24x25y26zz
将文件每行内容存储到字符串中，再输出字符串 ：testByLine()
inFile.txt--- all file is as follows:---
 1      a
 2      b
 3      c
 4      d
 5      e
 6      f
 7      g
 8      h
 9      i
10      j
11      k
12      l
13      m
14      n
15      o
16      p
17      q
18      r
19      s
20      t
21      u
22      v
23      w
24      x
25      y
26      z
Process returned 0 (0x0)   execution time : 0.484 s
Press any key to continue.
*************************************************/
