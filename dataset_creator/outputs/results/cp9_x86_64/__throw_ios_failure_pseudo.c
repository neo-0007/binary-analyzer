
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_ios_failure(char const*, int) */

void std::__throw_ios_failure(char *param_1,int param_2)

{
  failure_abi_cxx11_ *this;
  char *pcVar1;
  long in_FS_OFFSET;
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  this = (failure_abi_cxx11_ *)__cxa_allocate_exception(0x30);
  if (param_2 == 0) {
    local_28 = iostream_category();
    local_30[0] = 1;
  }
  else {
    local_28 = _V2::generic_category();
    local_30[0] = param_2;
  }
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 00404216 to 0040421a has its CatchHandler @ 00404265 */
  ios_base::failure[abi:cxx11]::failure(this,pcVar1,(error_code *)local_30);
  *(undefined ***)this = &PTR____ios_failure_0092c708;
  pcVar1 = (char *)runtime_error::what((runtime_error *)this);
                    /* try { // try from 00404239 to 0040423d has its CatchHandler @ 00404254 */
  __construct_ios_failure(this + 0x20,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&__ios_failure::typeinfo,__ios_failure::~__ios_failure);
}

