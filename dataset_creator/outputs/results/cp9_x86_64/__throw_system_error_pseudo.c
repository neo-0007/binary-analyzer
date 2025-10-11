
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_system_error(int) */

void std::__throw_system_error(int param_1)

{
  runtime_error *this;
  long in_FS_OFFSET;
  undefined1 *local_50 [2];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x20);
                    /* try { // try from 00404301 to 00404303 has its CatchHandler @ 0040436a */
  (**(code **)(::(anonymous_namespace)::generic_category_instance + 0x20))
            ((string *)local_50,&::(anonymous_namespace)::generic_category_instance,param_1);
                    /* try { // try from 0040430f to 00404313 has its CatchHandler @ 00404352 */
  runtime_error::runtime_error(this,(string *)local_50);
  if (local_50[0] != local_40) {
    operator_delete(local_50[0]);
  }
  *(int *)(this + 0x10) = param_1;
  *(long **)(this + 0x18) = &::(anonymous_namespace)::generic_category_instance;
  *(undefined ***)this = &PTR__system_error_0092c8d0;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&system_error::typeinfo,system_error::~system_error);
}

