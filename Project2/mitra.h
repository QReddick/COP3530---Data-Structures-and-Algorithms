#ifndef MITRA_H_1234
#define MITRA_H_1234

#include <string>
#include <iostream>
#include <vectors>
#include <iterator>
#include <list>
#include <algorithm>

//using namespace std;

class Node
{
	public:
    
		std::string charm; 
		Node* travelPath; 
		int magiCounts; 
		int orderOfMagi[]; 
		
		Node()
		{
			charm = " "; 
			int magiCount = 0; 
			travelPath = NULL; 
		}
		
		Node(std::string s, int c)
		{
			charm = s; 
			magiCounts = c; 
			travelPath = NULL; 
		}
		Node(std::string s, int c, int arr[], Node* p)
		{
			charm = s; 
			magiCounts = c; 

			/*flipped assignment of orderofMagi and arr because of incompatible integer types*/ 
			arr = orderOfMagi;   //recieved array  will inherit orderOfMagi as passed input

			travelPath = p; 
		} 

}; 

#endif
