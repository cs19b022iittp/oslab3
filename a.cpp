
#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
	while(1){
		fstream f1;
		fstream f2;
		fstream f3;
		fstream f4;
		fstream fm;
		string line;
		f1.open("/home/fac1/f1.txt");
		f2.open("/home/fac2/f2.txt");
		f3.open("/home/fac3/f3.txt");
		f4.open("/home/fac4/f4.txt");
		//fm.open("marks.txt");
		printf("1 -view\n2 - logout\n");
		int x;
		cin>>x;
		vector<vector<int>> res(4,vector<int>(4));
		int i=0,j;
		int sum = 0;
		switch(x){
			case 1:{
				
				f1.seekg(0,ios::beg);
				i=0;
				getline(f1,line);
				while(f1){
					getline(f1,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[0][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[0][i] = line;
					//i++;
					//if(i==4)
					//	break;
				}
				i = 0;
				f2.seekg(0,ios::beg);
				getline(f2,line);
				while(f2){
					getline(f2,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[1][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[1][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f3.seekg(0,ios::beg);
				getline(f3,line);
				while(f3){
					getline(f3,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[2][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[2][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f4.seekg(0,ios::beg);
				getline(f4,line);
				while(f4){
					getline(f4,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[3][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[3][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				fm.open("marks.txt",ios::trunc | ios::out | ios::in);
			/*	cout<<"   f1  f2  f3  f4"<<endl;
				//for(int i=0;i<2;i++){
				i=0;
				while(fm){
					cout<<"s"<<i+1<<" ";
					for(int j=0;j<4;j++){
						fm<<res[j][i]<<endl;
						cout<<res[j][i]<<"  ";
					}
					i++;
					cout<<endl;
					fm<<endl;
					if(i==4)
						break;
				}
				*/
				cout<<"\tf1\tf2\tf3\tf4\ttotal"<<endl;
				//for(int i=0;i<2;i++){
				i=0;
				int sum =0;
				fm<<"\tf1\tf2\tf3\tf4\ttotal"<<endl;
				while(fm){
					cout<<"s"<<i+1<<"\t";
					fm<<"s"+to_string(i+1)+"\t";
					for(int j=0;j<4;j++){
						fm<<res[j][i]<<"\t";
						cout<<res[j][i]<<"\t";
						sum += res[j][i];
					}
					i++;
					cout<<sum<<endl;
					//cout<<endl;
					fm<<sum<<endl;
					sum = 0;
					if(i==4){
						//cout<<sum<<endl;
						//fm<<sum<<endl;
						//sum = 0;
						break;
					}
				}
				
				fm.close();
				f1.close();
				f2.close();
				f3.close();
				f4.close();
				break;
				}
			
			
			case 2:
				f2.close();
				f1.close();
				f3.close();
				f4.close();
				fm.close();
				exit(0);
				break;
			default:
				printf("Enter the input correctly\n");
				f2.close();
				f1.close();
				f3.close();
				f4.close();
		}
	}
	return 0;

}
