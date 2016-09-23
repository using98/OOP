#pragma once 
#include "string.h"
class Bus
{
	/*char name[50]; */  
	int nomer1;
	int nomer2;
	int god;
	int probeg;
public: 
	Bus();
	Bus(/*char*,*/ int,int,int,int);
		void setNomer1(int);
		void setNomer2(int);
		void setGod(int);
		void setProbeg(int);
		/*void setName(char*); */ 
		~Bus(void);
		void print(); 
	/*	char* getName(void);   */ 
		int getNomer1(void); 
		int getNomer2(void);
		int getGod(void);
		int getProbeg(void);
}; 
