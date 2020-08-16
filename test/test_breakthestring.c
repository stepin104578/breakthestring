#include "unity.h"
#include "breakthestring.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_breakstr(void)
{
  TEST_ASSERT_EQUAL_STRING("my" "name" "is" "edcast" "future" "skills", breakthestring("my_name_is_edcast_future_skills") );
  TEST_ASSERT_EQUAL_STRING("this" "is" "a" "great" "task", breakthestring("this_is_a_great_task") );
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
/* Run Test functions */
  RUN_TEST(test_breakstr);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

