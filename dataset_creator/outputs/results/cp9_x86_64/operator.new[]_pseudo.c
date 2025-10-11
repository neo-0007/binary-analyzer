
/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 006ad198 to 006ad19c has its CatchHandler @ 006ad1a2 */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

