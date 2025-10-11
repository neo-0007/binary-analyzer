
/* std::(anonymous namespace)::__x86_rdseed(void*) */

ulong std::(anonymous_namespace)::__x86_rdseed(void *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = rdseed();
  bVar4 = (bool)rdseedIsValid();
  iVar2 = 99;
  if (bVar4) {
LAB_0068ee6e:
    uVar3 = (ulong)local_14;
  }
  else {
    do {
      local_14 = rdseed();
      bVar4 = (bool)rdseedIsValid();
      if (bVar4) goto LAB_0068ee6e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __throw_runtime_error("random_device: rdseed failed");
    }
    uVar3 = (*(code *)param_1)(0);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

