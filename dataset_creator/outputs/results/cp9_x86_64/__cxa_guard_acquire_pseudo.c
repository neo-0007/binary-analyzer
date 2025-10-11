
undefined8 __cxa_guard_acquire(uint *param_1)

{
  uint uVar1;
  recursive_init_error *this;
  ulong uVar2;
  bool bVar3;
  
  if ((char)*param_1 != '\0') {
    return 0;
  }
  if (__libc_single_threaded == '\0') {
    uVar2 = 0;
    LOCK();
    bVar3 = *param_1 == 0;
    if (bVar3) {
      *param_1 = 0x100;
    }
    else {
      uVar2 = (ulong)*param_1;
    }
    UNLOCK();
    while (!bVar3) {
      if ((int)uVar2 == 1) {
        return 0;
      }
      if ((int)uVar2 == 0x100) {
        LOCK();
        uVar1 = *param_1;
        bVar3 = uVar1 == 0x100;
        if (bVar3) {
          *param_1 = 0x10100;
          uVar1 = 0x100;
        }
        UNLOCK();
        uVar2 = 0x10100;
        if (bVar3) goto LAB_006acfda;
        if (uVar1 == 1) {
          return 0;
        }
        if (uVar1 != 0) goto LAB_006acfda;
      }
      else {
LAB_006acfda:
        syscall(0xca,param_1,0,uVar2,0);
      }
      uVar2 = 0;
      LOCK();
      bVar3 = *param_1 == 0;
      if (bVar3) {
        *param_1 = 0x100;
      }
      else {
        uVar2 = (ulong)*param_1;
      }
      UNLOCK();
    }
  }
  else {
    if (*param_1 != 0) {
      this = (recursive_init_error *)__cxa_allocate_exception(8);
      __gnu_cxx::recursive_init_error::recursive_init_error(this);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&__gnu_cxx::recursive_init_error::typeinfo,
                  __gnu_cxx::recursive_init_error::~recursive_init_error);
    }
    *param_1 = 0x100;
  }
  return 1;
}

