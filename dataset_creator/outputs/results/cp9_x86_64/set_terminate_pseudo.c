
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

undefined * std::set_terminate(_func_void *param_1)

{
  undefined *puVar1;
  
  puVar1 = __cxxabiv1::__terminate_handler;
  if (param_1 == (_func_void *)0x0) {
    param_1 = __gnu_cxx::__verbose_terminate_handler;
  }
  LOCK();
  __cxxabiv1::__terminate_handler = param_1;
  UNLOCK();
  return puVar1;
}

