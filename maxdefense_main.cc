


#include "maxdefense.hh"
#include "timer.hh"
#include <bits/stdc++.h>
// helper function to print out the time for exhaustive with size of n
void time_testing_greedy(int n)
{
	auto all_armors = load_armor_database("armor.csv");
	auto filtered_armors = filter_armor_vector(*all_armors, 1, 5000, n);
	Timer timer;
	greedy_max_defense(*filtered_armors, INT_MAX);
	double elapsed = timer.elapsed();
	std::cout << "The n is " << n << std::endl;
	std::cout << "elapsed time = " << elapsed << " seconds for greedy_max_defense"
						<< std::endl;

}
// helper function to print out the time for exhaustive with size of n
void time_testing_exhaustive(int n)
{
	auto all_armors = load_armor_database("armor.csv");
	auto filtered_armors = filter_armor_vector(*all_armors, 1, 5000, n);
	Timer timer;
	exhaustive_max_defense(*filtered_armors,INT_MAX);
	double elapsed = timer.elapsed();
	std::cout << "The n is " << n << std::endl;
	std::cout << "elapsed time = " << elapsed << " seconds for exhaustive_max_defense"
						<< std::endl;

}

int main()
{
	// Changing n to change the size for testing
	//testing for greedy_max_defense
	time_testing_greedy(1);
	time_testing_greedy(2);
	time_testing_greedy(4);
	time_testing_greedy(8);
	time_testing_greedy(10);
	time_testing_greedy(100);
	time_testing_greedy(500);
	time_testing_greedy(1000);
	time_testing_greedy(2000);
	time_testing_greedy(4000);
	time_testing_greedy(10000);
	//testing for exhaustive_max_defense
	time_testing_exhaustive(1);
	time_testing_exhaustive(2);
	time_testing_exhaustive(4);
	time_testing_exhaustive(8);
	time_testing_exhaustive(10);
	time_testing_exhaustive(16);
	time_testing_exhaustive(20);
	time_testing_exhaustive(21);
	time_testing_exhaustive(22);
	time_testing_exhaustive(23);
	time_testing_exhaustive(24);
	return 0;
}
