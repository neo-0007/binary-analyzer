
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

undefined * std::set_unexpected(_func_void *param_1)

{
  undefined *puVar1;
  
  puVar1 = __cxxabiv1::__unexpected_handler;
  if (param_1 == (_func_void *)0x0) {
    param_1 = terminate;
  }
  LOCK();
  __cxxabiv1::__unexpected_handler = param_1;
  UNLOCK();
  return puVar1;
}

