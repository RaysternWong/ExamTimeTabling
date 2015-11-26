#include "unity.h"
#include "RatioChecking.h"

void setUp(void){}
void tearDown(void){}

/**    int isTheRatioWithin20Percent(int currentNum, int targetNum)
*    
*
*        NumberStudent - targetNum    x   100 %    < 20          , return 1
*        -------------------------     
*               targetNum
*
********************************************************************************
*
*        NumberStudent - targetNum    x   100 %    >= 20         , return 0
*        -------------------------
*               targetNum
*
* if targetNum == 0, return 0, because it will cause exception
*/ 






void test_isTheRatioWithin20Percent_given_currentNum_140_targetNum_0_should_return_0_because_it_cause_exception(void){
  
  int ans = isTheRatioWithin20Percent(140, 0);
  TEST_ASSERT_EQUAL(0, ans);
}

void test_isTheRatioWithin20Percent_given_currentNum_0_targetNum_140_should_return_0_because_it_is_violation(void){
  
  int ans = isTheRatioWithin20Percent(0, 140);
  TEST_ASSERT_EQUAL(0, ans);
}

void test_isTheRatioWithin20Percent_given_currentNum_140_targetNum_100_should_return_0(void){
  
  int ans = isTheRatioWithin20Percent(140, 100);
  TEST_ASSERT_EQUAL(1, ans);
}