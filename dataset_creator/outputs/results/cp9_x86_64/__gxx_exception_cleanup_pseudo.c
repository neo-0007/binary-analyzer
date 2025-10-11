
/* __gxx_exception_cleanup(_Unwind_Reason_Code, _Unwind_Exception*) */

void __gxx_exception_cleanup(uint param_1,long param_2)

{
  int *piVar1;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    __cxxabiv1::__terminate(*(_func_void **)(param_2 + -0x38));
  }
  LOCK();
  piVar1 = (int *)(param_2 + -0x60);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))(param_2 + 0x20);
    }
    __cxa_free_exception(param_2 + 0x20);
    return;
  }
  return;
}

