
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

undefined8 std::set_new_handler(_func_void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ::(anonymous_namespace)::__new_handler;
  LOCK();
  ::(anonymous_namespace)::__new_handler = param_1;
  UNLOCK();
  return uVar1;
}

