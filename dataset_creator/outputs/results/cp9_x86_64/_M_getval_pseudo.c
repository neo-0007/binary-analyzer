
/* std::random_device::_M_getval() */

ulong __thiscall std::random_device::_M_getval(random_device *this)

{
  int iVar1;
  ulong uVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t __nbytes;
  uint *__buf;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(this + 8) != (code *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0068f381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(this + 8))(*(undefined8 *)this);
      return uVar2;
    }
LAB_0068f3f3:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  __nbytes = 4;
  __buf = &local_24;
  do {
    while( true ) {
      sVar3 = read(*(int *)(this + 0x10),__buf,__nbytes);
      iVar1 = (int)sVar3;
      if (iVar1 < 1) break;
      __buf = (uint *)((long)__buf + (long)iVar1);
      __nbytes = __nbytes - (long)iVar1;
      if (__nbytes == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (ulong)local_24;
        }
        goto LAB_0068f3f3;
      }
    }
    if (iVar1 != -1) break;
    piVar4 = __errno_location();
  } while (*piVar4 == 4);
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("random_device could not be read");
}

