#include <iostream>
#include<fstream>
#include<windows.h>


using namespace std;

void readinput();
void writeinput();

class todo{
char work[100];
public:

	void display(){
	
		cout<<work;
	}
	
	void add(char *copy)
	{
		strcpy(task,copy);	
	}

};


class taskdata
{

public:
int notcompleted,completed;

taskdata(){
readinput();
}

~taskdata(){
writeinput();
}

}taskd;

void readdata(){

ifstream fin("taskfile.txt", ios::in|ios::out);

if(!fin){
taskd.notcompleted=0;
taskd.completed=0;
}

else {
fin.read((char*)&taskd,sizeof(taskd));
}
fin.close();
}

void writedata(){
ofstream fout("taskfile.txt", ios::out);
fout.write((char*)&taskd,  sizeof(taskd));
}

void report()
{
cout<<"Usage:-\n$./todo add\"todo item\"
#Add a new todo\n$./todo Is	#Show
remaining todos\n$./todo del NUMBER   #Delete a todo\n$./todo report	#Statistics\n";
}

void solve(int argn , char* args[])
{
if(argn==1)
report();


else{
todo object;
string type = args[1];

if(type=="add")
{
if(argn==2)
{cout<<"Error: Missing todo string Nothing added!\n";
return ;
}
cout<<"Added todo:\""<<argn[2]<<"\"\n";
ifstream a("taskfile.txt", ios::in);
ofstream aa2("taskfile2.txt", ios::out);
object.add(args[2]);
aa2.write((char*)&object, sizeof(object));
int temp = taskd.notcompleted;
if(ff)
while(temp--){
a.read((char*)&object, sizeof(object));
aa2.write((char*)&object, sizeof(object));
}
aa2.close();
a.close();
remove("taskfile.txt");
rename("taskfile2.txt", "taskfile.txt");
taskd.notcompleted++;
}

else if(type=="ls"){
if(taskd.notcompleted==0)
{
cout<<"There are no pending todos!\n";
return ;
}
	
ifstream a("tastfile.txt", ios::in);
if(a)
{
int temp = taskd.notcompleted;
while(temp--){
a.read((char*)&object, sizeof(object));
cout<<"["<<temp+1<<"]\"";
object.display();
cout<<"\"\n";
}
}
a.close();
}

else if(type=="report"){

std::time_t t=std::time(0);
std::tm* now = std::localtime(&t);
cout<<now->tm_mday<<'/'<<(now->tm_mon+1)<<'/'<<(now->tm_year+1900);
cout<<"Pending: "<<taskd.notcompleted<<"Completed: "<<taskd.completed<<"\n";
}

else if(type=="help")
report();

else if(type=="done")
{

if(argn==2)
{
cout<<"Error: Missing NUMBER ofr marking todo as done.\n";
return ;
}

int num=0;
for(int i=0; i<strlen(args[2]); i++)
num=num*10+args[2][i]-48;

if(todod.notcompleted && num>0)
cout<<"Marked todo#"<<num<<"as done.\n";
}
else{
cout<<"Error:todo#"<<num<<"does not exist.\n";
return ;
}

ifstream a("taskfile.txt", ios::in);
ofstream aa2("taskfile2.txt", ios::out);
int temp = taskd.notcompleted;

if(a)
while(temp--){
aa.read((char*)&object, sizeof(object));
if((temp+1)==num)
continue;

aa2.write((char*)object, sizeof(ob));
}

aa2.close();
a.close();
remove("filetask.txt");
rename("filetask2.txt", "filetask.txt");
taskd.notcompleted--;
taskd.completed++;
}

else if(type=="del"){

if(argn==2){
cout<<"Error: Missing NUMBER for deleting todo.\n";
return ;
}
int num=0;
for(int i=0; i<strlen(args[2][i]); i++)
num=num*10+args[2][i]-48;

if(num<=taskd.notcompleted && num >0)
cout<<"Deleted todo#"<<num<<"\n";

}


else
{
cout<<"Error:todo#"<<num<<"does not exist. Nothing deleted.\n";
return ;
}
ifstream a("taskfile.txt", ios::in);
ofstream aa2("taskfile", ios::out);

int temp=taskd.notcompleted;

if(a)
while(temp--){

ff.read((char*)&object, sizeof(object));
if((temp+1)==num)
continue;

aa2.write*((char*)&object, sizeof(object));
}
else
cout<<"No Such Task!\n";

aa2.close();
a.close();
remove("filetask.txt");
rename("filetask1.txt", "filetask.txt");
taskd.notcompleted--;
}


int main(int argc, char* argv[])
{

	solve(argn, args);
    return 0;
}
