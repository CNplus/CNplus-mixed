#include <iostream>
#include <string>
using namespace std;
string in0,in1;
int pout(string text)
{
	cout << text << endl;
}
int ip()
{
	cout << "this tool need you installed curl.if you are not installed please type exit() and install curl." << endl;
	cout << "your ip is" << system("curl ipv4.ip.sb");
	return 0;
}
int exit()
{
	cout << "thanks for your using";
	exit(413);
}
int settings()
{
	int choose;
	cout << "--------------------" << endl << "welcome to CNplus-mixed IDLE settings" << endl << "欢迎使用CNplus-mixed IDLE设置" << endl << "----IDLE----" << endl << "0.修改编译器颜色" << endl << "1.修改当前IDLE窗口名称" << endl << "----user----" << endl << "2.修改用户名称" << endl << "--------------------" << endl;
	cin >> choose;
	if(choose == 0)
	{
		string seg;
		cout
	}
}
int namefind(string in0)
{
	string::size_type idx;
	idx = in0.find("ip");
	if (idx != string::npos){
		ip();
	}
	idx = in0.find("exit");
	if (idx != string::npos){
		exit();
	}
	idx = in0.find("退出");
	if (idx != string::npos){
		exit();
	}
	idx = in0.find("打印");
	if (idx != string::npos){
		if(idx != 0){
			exit(411);
		}
		for(int i = 0;i < in0.size();i++)
		{
			if(i != 0 or i != 1 or i != 2 or i != 3 or i != in0.size()){
				in1 += in0[i];
			}
		}
		pout(in1);
	}
	idx = in0.find("设置");
	if (idx != string::npos){
		settings();
	}
	return 0;
}
int main()
{
   string username = "usr";
   cout << "Welcome to CNplus-tool-mixed IDLE(vision 0.0.1-dev)." << endl << endl 
   << "Hello From https://github.com/CNplus/CNplus-mixed , https://github.com/Charlie894 , t.me/AS13379 and another editor." << endl << endl;
   cout << "Type exit() or 退出() to exit this program.If you want to see more about exit() or 退出(),please go to our wiki." << endl << endl;
   for(;;){
	cout << username << "@CNplus-IDLE" << ">>>";
	cin >> in0;
	namefind(in0); 
   }
return 0;
}
