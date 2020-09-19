#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_evenodd(void);
void test_angstrom(void);
void test_prime(void);
void test_circlearea(void);
void test_circlepm(void);
void test_squarearea(void);
void test_squarepm(void);
void test_rectarea(void);
void test_rectpm(void);
void test_triarea(void);
void test_tripm(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite,"add", test_add);
  CU_add_test(suite,"subtract", test_subtract);
  CU_add_test(suite,"multiply", test_multiply);
  CU_add_test(suite,"divide", test_divide);
  CU_add_test(suite,"factorial",test_factorial );
    CU_add_test(suite,"isangstrom",test_angstrom );
    CU_add_test(suite,"isprime",test_prime );
    CU_add_test(suite,"even_odd",test_evenodd );
    CU_add_test(suite,"circle_area",test_circlearea );
    CU_add_test(suite,"circle_pm",test_circlepm );
    CU_add_test(suite,"square_area",test_squarearea );
    CU_add_test(suite,"square_pm",test_squarepm);
    CU_add_test(suite,"rect_area",test_rectarea );
    CU_add_test(suite,"rect_pm",test_rectpm );
    CU_add_test(suite,"tri_area",test_triarea );
    CU_add_test(suite,"tri_pm",test_tripm );
  
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_factorial(void){
  CU_ASSERT(120==factorial(5));
}

void test_angstrom(void){
  CU_ASSERT(1==isangstrom(153));
}
void test_prime(void){
  CU_ASSERT(0==isprime(7));
}
void test_evenodd(void){
  CU_ASSERT(1==even_odd(18));
}

void test_circlearea(void){
  CU_ASSERT(314==circle_area(10));
}
void test_circlepm(void){
  CU_ASSERT(628==circle_pm(100));
}
void test_squarearea(void){
  CU_ASSERT(16==square_area(4));
}
void test_squarepm(void){
  CU_ASSERT(16==square_pm(4));
}
void test_rectarea(void){
  CU_ASSERT(18==rect_area(9,2));
}
void test_rectpm(void){
  CU_ASSERT(22==rect_pm(9,2));
}
void test_triarea(void){
  CU_ASSERT(27.712812==tri_area(8,8,8));
}
void test_tripm(void){
  CU_ASSERT(24==tri_pm(8,8,8));
}
