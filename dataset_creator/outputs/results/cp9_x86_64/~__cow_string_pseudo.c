
/* std::__cow_string::~__cow_string() */

void __thiscall std::__cow_string::~__cow_string(__cow_string *this)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)this;
  if ((allocator *)(lVar3 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(lVar3 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(lVar3 + -8);
      *(int *)(lVar3 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(lVar3 + -0x18));
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

