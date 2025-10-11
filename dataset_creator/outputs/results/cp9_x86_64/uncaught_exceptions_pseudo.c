
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exceptions() */

undefined4 std::uncaught_exceptions(void)

{
  long lVar1;
  
  lVar1 = __cxa_get_globals();
  return *(undefined4 *)(lVar1 + 8);
}

