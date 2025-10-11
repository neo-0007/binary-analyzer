
/* std::__iosfail_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

void __thiscall
std::__iosfail_type_info::__do_upcast
          (__iosfail_type_info *this,__class_type_info *param_1,void **param_2)

{
  char cVar1;
  
  cVar1 = __is_ios_failure_handler(param_1);
  if (cVar1 != '\0') {
    *param_2 = (void *)((long)*param_2 + 0x20);
    return;
  }
  __cxxabiv1::__class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2);
  return;
}

