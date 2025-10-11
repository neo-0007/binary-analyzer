
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exception() */

undefined4 std::uncaught_exception(void)

{
  long lVar1;
  
  lVar1 = __cxa_get_globals();
  return CONCAT31((int3)((uint)*(int *)(lVar1 + 8) >> 8),*(int *)(lVar1 + 8) != 0);
}

