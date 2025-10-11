
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__destroy_ios_failure(void*) */

void std::__destroy_ios_failure(void *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
  if ((code *)**param_1 == ios_base::failure::~failure) {
    *(undefined ***)param_1 = &PTR__failure_0092c910;
    lVar4 = *(long *)((long)param_1 + 8);
    if ((allocator *)(lVar4 + -0x18) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        piVar1 = (int *)(lVar4 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(lVar4 + -8);
        *(int *)(lVar4 + -8) = iVar2 + -1;
      }
      if (iVar2 < 1) {
        string::_Rep::_M_destroy((allocator *)(lVar4 + -0x18));
      }
    }
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      exception::~exception((exception *)param_1);
      return;
    }
  }
  else if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006c0fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**param_1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

