#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <food.h>
#define PROJECT_NAME "FoodOrderManagement"

void testdel();

int main()
{

  if (CUE_SUCCESS != CU_initialize_registry())
  return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "deletefood", testdel);
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}

void testdel(void)
{
  CU_ASSERT(1 == deletefood(7)); //pass case
  CU_ASSERT(1 == deletefood(20)); //fail case
}
