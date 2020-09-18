#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
  TEST_ASSERT_EQUAL(1, prime(5));
  TEST_ASSERT_EQUAL(1, prime(3));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(-1, prime(0));
  TEST_ASSERT_EQUAL(-1, prime(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, prime(-5));
  TEST_ASSERT_EQUAL(-1, prime(-10));
}
void test_notprime(void)
{
  TEST_ASSERT_EQUAL(0, prime(0));
  TEST_ASSERT_EQUAL(0, prime(1));

}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);
  RUN_TEST(test_notprime);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
