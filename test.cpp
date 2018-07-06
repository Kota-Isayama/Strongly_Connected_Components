/*
 * test.cpp
 *
 * Author: Ervin Dervishaj
 * Email: vindervishaj@gmail.com
 */


#include <ctime>
#include <iostream>
#include <fstream>
#include <boost/graph/graph_utility.hpp>
#include "SCC.hpp"
using namespace std;

int main(){
//	ofstream outfile;
//	outfile.open("graph.txt", ofstream::out);

	clock_t start = clock();

	DirectedGraph g = gen_rand_graph(5, 0.5, 149);

	clock_t end = clock();

	cout << "Time elapsed: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl << endl;

	boost::print_graph(g.g);

//	outfile.close();

//	tarjan_scc(g);
}
