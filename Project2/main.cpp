#include <mitra.h>

//using namespace std;


// arr[] of size m
int lis(int arr[], int m) {

	int *lis, i, j, max = 0;

	lis = (int*) malloc(sizeof(int) * m);

	for (i = 0; i < m; i++) {
		lis[i] = 1;
	}

	
	for (i = 1; i < m; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] > arr[j] && lis[i] < lis[j] +1) {
				lis[i] = lis[j] + 1;
			}
		}
	}

	for (i = 0; i < m; i++) {
		if (max < lis[i]) {
			max = lis[i];
		}
	}
	
	return max;

}

int edit_distance(std::string s1, std::string s2, int x, int y) // where x and y are length of string 1 and 2.
{
    int distance[x+1][y+1]; //array created in runtime
    
    for(int i = 0; i <= x; ++i)
    {
        for(int j = 0; j <= y; ++j)
        {  
            if(i ==0)
                distance[i][j] = j;
            else if(j ==0)
                distance[i][j] = i;
            else if(s1[i-1] == s2[j-1])
                distance[i][j] = distance[i-1][j-1];
            else
            {   
                distance[i][j] = 1 + std::min(std::min(distance[i][j-1], distance[i-1][j]), distance[i-1][j-1]);
            }
            
        }
    }
    
    return distance[x][y];
}


int main(int argc, char** argv)
{
	int numberOfRealms; 
	std::string charm; 
	int magiCount; 
	int magiOrder[]; 
	int numberOfCharms = 1; //the charm can change, but only one can exist at a time. 
		
	std::cin>>numberOfRealms; // recieve number of realms
 
	
	/*iterate for the  number of realms and attributes of input stream*/ 
	for(int i =0; i < numberOfRealms; ++i)
	{ 
		 
		/*start to recieve arguments*/ 
 
		std::getline(std::cin, charm); //recieves name of charm 
		int numberOfMagi; 	
		std::cin >> numberOfMagi; //recieves number of Magi in realm 
		
		// get magiOrder 
		int g = 0; 
		while(i < numberOfMagi && std::cin>>magiOrder[g]) {
			g++;
		}
		// find size of magiOrder
		int n = sizeof(magiOrder)/sizeof(magiOrder[0]);
		lis(magiOrder, n);
		/////std::getline(std::cin, magiOrder);  // recieves array of Magi as a string *parse later*
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
