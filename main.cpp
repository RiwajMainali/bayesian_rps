/*
CSCE 2110 Section 002/213
Group 6 - Project 2
Rock Paper Scissors
Description: Main Function
*/

// Includes
#include "master.hpp"
#include <string>

// Main Function

int main(int argc, char* argv[])
{
  bool b_NOARGS = argc <= 1;
  bool b_DEBUG = argc > 2 && !std::strcmp(argv[2], "-DEBUG");
  
  if(b_DEBUG)
  {
    std::cout << "**** DEBUG MODE ACTIVE ****" << std::endl;
  }
  
  if(!b_NOARGS)
  {
    if(std::stol(argv[1]) <= 0)
    {
      std::cout << "You entered a number of rounds < or = 0." << std::endl;
      std::cout << "When executing please oberve documentation." << std::endl;
      exit(1);
    } 
    unsigned long num_rounds = std::stol(argv[1]);
  
    // Create a data structure to track wins, losses and ties for each algo.
    tracker record;
    
    //DEBUGGING LOGIC
    // currently splits 50/50 to test data structure and output
    if(b_DEBUG)
    {
      DEBUG(num_rounds, record);
    }
    
    //NON-DEBUGGING COMPETITIVE LOGIC
    for(unsigned long i = 0; i < num_rounds; i++)
    {
      
    }
    
    // Display the statistical results of the matches
    record.print_results();
    
  }
  else
  {
    std::cout << "No arguments provided. Please enter the number of trials "
      << " to run as an argument." << std::endl;
  }
  
  
  return 0;
}