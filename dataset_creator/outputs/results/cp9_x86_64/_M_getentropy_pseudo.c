
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::random_device::_M_getentropy() const */

double __thiscall std::random_device::_M_getentropy(random_device *this)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this != 0) && (-1 < *(int *)(this + 0x10))) {
    iVar1 = ioctl(*(int *)(this + 0x10),0x80045200,&local_14);
    if ((-1 < iVar1) && (-1 < local_14)) {
      dVar2 = _DAT_00815f28;
      if (local_14 < 0x21) {
        dVar2 = (double)local_14;
      }
      goto LAB_0068f474;
    }
  }
  dVar2 = 0.0;
LAB_0068f474:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

