#include <iostream>
#include <vector>
#include <cmath>



double mean(std::vector<double> data){
	double sum = 0.0;
	int size = data.size();
	for(int i = 0; i < size; i++){
		sum += data[i];
	}
	double mean = sum / size;
	return mean;
}

double stddev(std::vector<double> data){
	double mean1 = mean(data);
	int size = data.size();
	double sum = 0.0;
	for(int i = 0; i < size; i++){
		sum += pow((data[i] - mean1), 2); 
	} 
	double result = sum / size;
	double stddev = pow(result, 0.5);
	return stddev;
}


int main(){
	// For testing
	std::vector<double> vector;
	vector.push_back(1.156);
	vector.push_back(1.4);
	vector.push_back(1.6);
	vector.push_back(18);
	double mean1 = mean(vector);
	double stddev1 = stddev(vector);
	std::cout<< mean1 << std::endl;
	std::cout<< stddev1 << std::endl;

}
