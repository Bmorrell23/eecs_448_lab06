#include "UnitTest.h"
#include <vector>
#include <iostream>

UnitTest::UnitTest()
{

}
UnitTest::~UnitTest()
{

}
//Note the

bool UnitTest::emptyTest1()
{
	Queue q1;
	return(q1.isEmpty() == true);
}

bool UnitTest::emptyTest2()
{
	Queue q1;
	q1.enqueue(1);
	return(q1.isEmpty() == false);
}

bool UnitTest::emptyTest3()
{
	Queue q1;
	q1.enqueue(50);
	q1.dequeue();
	return(q1.isEmpty() == true);
}


bool UnitTest::peekFront_Test1()
{
  Queue q;

  q.enqueue(1);
  q.enqueue(50);
  q.enqueue(100);
  return(q.peekFront() == 1);
}

bool UnitTest::peekFront_Test2()
{
  Queue q;

  q.enqueue(1);
  q.enqueue(50);
  q.enqueue(100);
  q.dequeue();
  return(q.peekFront() == 50);
}

bool UnitTest::peekFront_Test3()
{
	Queue q;

  q.enqueue(1);
  q.enqueue(50);
  q.enqueue(100);
  q.peekFront();
  return(q.peekFront() == 1);
}

bool UnitTest::peekFront_Test4()
{
	Queue q;

  try
  {
    q.peekFront();
  }
  catch(std::runtime_error e)
  {
      return(true);
  }
}

bool UnitTest::peekFront_Test5()
{
	Queue q;
  q.enqueue(50);
  q.dequeue();
  try
  {
    if(q.peekFront() == NULL)
    {
      return(true);
    }
  }
  catch(std::runtime_error e)
  {
    return(true);
  }
}

bool UnitTest::peekFront_Test6()
{
	Queue q;
  q.enqueue(50);
	return(q.peekFront() == 50);
}

bool UnitTest::dequeue_Test1()
{
	Queue q;
  try
  {
  		q.dequeue();
  }
  catch(std::runtime_error e)
  {
    return(true);
  }
}

bool UnitTest::dequeue_Test2()
{
	Queue q;
	q.enqueue(50);
	q.dequeue();
  try
  {
  		q.dequeue();
  }
  catch(std::runtime_error e)
  {
    return(true);
  }
}


bool UnitTest::deconstructor_Test1()
{
	Queue q;
  q.enqueue(1);
  q.enqueue(50);
  q.enqueue(100);
  q.~Queue();

	return(q.isEmpty());
}




