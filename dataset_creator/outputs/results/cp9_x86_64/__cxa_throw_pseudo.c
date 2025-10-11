
void __cxa_throw(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  puVar2 = (undefined4 *)__cxa_init_primary_exception(param_1,param_2,param_3);
  *puVar2 = 1;
  _Unwind_RaiseException(puVar2 + 0x18);
  __cxa_begin_catch(puVar2 + 0x18);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

