
/* std::(anonymous namespace)::__x86_rdrand(void*) */

int std::(anonymous_namespace)::__x86_rdrand(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  iVar3 = 100;
  while( true ) {
    iVar1 = rdrand();
    bVar4 = (bool)rdrandIsValid();
    iVar2 = iVar1;
    if (bVar4) {
      iVar2 = 1;
    }
    if (iVar2 != 0) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      __throw_runtime_error("random_device: rdrand failed");
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

