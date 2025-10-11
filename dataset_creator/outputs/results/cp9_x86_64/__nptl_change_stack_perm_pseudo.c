
int __nptl_change_stack_perm(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  
  iVar1 = mprotect((void *)(*(long *)(param_1 + 0x6a0) + *(long *)(param_1 + 0x690)),
                   *(long *)(param_1 + 0x698) - *(long *)(param_1 + 0x6a0),7);
  if (iVar1 != 0) {
    iVar1 = *(int *)(in_FS_OFFSET + -0x58);
  }
  return iVar1;
}

