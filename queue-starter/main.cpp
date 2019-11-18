/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "UnitTest.h"

int main()
{

  std::cout << "...... Morrell Test Suite ......\n\n";
	std::cout << "!Note! Most of these tests are simultaneously testing enqueue function.\n\n";

	UnitTest t1;

	std::cout << "...... Empty Tests......\n";
	if(t1.emptyTest1())
	{
		std::cout << "Test 1: Newly created Queue is empty: PASSED\n";
	}
	else
	{
		std::cout << "Test 1: Newly created Queue is empty: FAILED\n";
	}

	if(t1.emptyTest2())
	{
		std::cout << "Test 2: Enqueing a value makes the Queue not empty: PASSED\n";
	}
	else
	{
		std::cout << "Test 2: Enqueing a value makes the Queue not empty: FAILED\n";
	}

	if(t1.emptyTest3())
	{
		std::cout << "Test 3: Enqueing 1 then Dequeing makes the Queue empty: PASSED\n";
	}
	else
	{
		std::cout << "Test 3: Enqueing 1 then Dequeing makes the Queue empty: FAILED\n";
	}

	std::cout << "\n...... peekFront Tests......\n";
	if(t1.peekFront_Test1())
	{
		std::cout << "Test 4: Enqueing 3 ints, peekFront() returns first enqueued integer: PASSED\n";
	}
	else
	{
		std::cout << "Test 4: Enqueing 3 ints peekFront() returns first enqueued integer: FAILED\n";
	}

	if(t1.peekFront_Test2())
	{
		std::cout << "Test 5: Enqueing 3 ints, then Dequeing, peekFront() returns second Enqueued int: PASSED\n";
	}
	else
	{
		std::cout << "Test 5: Enqueing 3 ints, then Dequeing, peekFront() returns second Enqueued int: FAILED\n";
	}

	if(t1.peekFront_Test3())
	{
		std::cout << "Test 6: Enqueing 3 ints, peekFront() will not change the Queue: PASSED\n";
	}
	else
	{
		std::cout << "Test 6: Enqueing 3 ints, peekFront() will not change the Queue: FAILED\n";
	}

	if(t1.peekFront_Test4())
	{
		std::cout << "Test 7: peekFront() will throw runtime_error on empty Queue: PASSED\n";
	}
	else
	{
		std::cout << "Test 7: peekFront() will throw runtime_error on empty Queue: FAILED\n";
	}

	if(t1.peekFront_Test5())
	{
		std::cout << "Test 8: Enqueing 50 on empty Queue, then Dequeing, peekFront will throw runtime_error: PASSED\n";
	}
	else
	{
		std::cout << "Test 8: Enqueing 50 on empty Queue, peekFront will throw runtime_error: FAILED\n";
	}

	if(t1.peekFront_Test6())
	{
		std::cout << "Test 9: Enqueing int on empty Queue, peekFront will return that int: PASSED\n";
	}
	else
	{
		std::cout << "Test 9: Enqueing int on empty Queue, peekFront will return that int: FAILED\n";
	}

	std::cout << "\n...... dequeue Tests......\n";
	if(t1.dequeue_Test1())
	{
		std::cout << "Test 10: Dequeing empty Queue throws runtime_error: PASSED\n";
	}
	else
	{
		std::cout << "Test 10: Dequeing empty Queue throws runtime_error: FAILED\n";
	}

	if(t1.dequeue_Test2())
	{
		std::cout << "Test 11: Enqueing 50 on empty Queue, then Dequeing, then Dequeing again on empty Queue throws runtime_error: PASSED\n";
	}
	else
	{
		std::cout << "Test 11: Enqueing 50 on empty Queue, then Dequeing, then Dequeing again on empty Queue throws runtime_error: FAILED\n";
	}

	std::cout << "\n...... deconstructor Test......\n";
	if(t1.deconstructor_Test1())
	{
		std::cout << "Test 12: Enqueing 3 ints, calling ~Queue() deletes all entries in Queue: PASSED\n";
	}
	else
	{
		std::cout << "Test 12: Enqueing 3 ints, calling ~Queue() deletes all entries in Queue: FAILED\n";
	}




	return(0);
}
