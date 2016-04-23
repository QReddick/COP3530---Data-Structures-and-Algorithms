#include <iostream> 
#include <vector> 
#include <list> 
#include <algorithm>
#include "mitra.h" 
#include <string>


int LIS_Helper(int arr[], int arr_size, int *result_size) {
	
	// if the size of the array is only 1, it's resulting subsquence is only 1
	if (n == 1) {
		return 1;
	}

	// result_ending is the length of the LIS ending with arr[arr_size - 1]
	int result, result_ending = 1;


	// rescursively get all LIS ending with arr[0] to arr[arr_size - 1]
	for (int i = 1; i < arr_size; i++) {
		res = LongestIncreasingSubsequence(arr, i, result_size);

		if (arr[i-1] < arr[arr_size - 1] && result + 1 > result_ending) {
			result_ending = result + 1;
		}
	} 

	/*Compare result_ending with the overal result_size
		update the overall result_size if needed */
	if (*result_size < result_ending) {
		*result_size = result_ending;
	}

	// return length of LIS ending with arr[arr_size - 1]
	return result_ending;
}

int LIS(int arr[], int arr_size) {

	//res will be the size of the longest subsquence found
	int res = 1;

	// find the longest subsequence
	LIS_Helper(arr, n, &res);


	// return res
	return res;
}

int main(int argc, char** argv)
{
	int numberOfRealms; 
	std::string charm; 
	int magiCount; 
	std::string magiOrder; 
	int numberOfCharms = 1; //the charm can change, but only one can exist at a time. 
		
	std::cin>>numberOfRealms; // recieve number of realms
 
	
	/*iterate for the  number of realms and attributes of input stream*/ 
	for(int i =0; i < numberOfRealms; ++i)
	{ 
		 
		/*start to recieve arguments*/ 
 
		std::getline(std::cin, charm); //recieves name of charm 
		int numberOfMagi; 	
		std::cin >> numberOfMagi; //recieves number of Magi in realm 
		std::getline(std::cin, magiOrder);  // recieves array of Magi as a string *parse later*
	}
	
	/* argument recpetion complete*/ 
 
	/*quinton*/
	//find the Longest Increasing Subsequence of the Magi Order
	/*joe or bradon?*/
	//that sequence indicated how many changes you can make the Charm Name

	/*working on this*/
	//function for Edit distance between one realm and all the others -- Do this for all realms

		return 0; 
}

