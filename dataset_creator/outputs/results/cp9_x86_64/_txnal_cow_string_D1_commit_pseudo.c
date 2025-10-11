
/* _txnal_cow_string_D1_commit(void*) */

void _txnal_cow_string_D1_commit(void *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((undefined8 *)param_1 != &std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)((long)param_1 + 0x10);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0x10);
      *(int *)((long)param_1 + 0x10) = iVar3 + -1;
    }
    if (iVar3 < 1) {
      std::string::_Rep::_M_destroy((allocator *)param_1);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

