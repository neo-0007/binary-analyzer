
undefined8 __malloc_thp_mode(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __open64_nocancel("/sys/kernel/mm/transparent_hugepage/enabled",0);
  if (iVar1 != -1) {
    lVar2 = __read_nocancel(iVar1,acStack_38,0x18);
    __close_nocancel(iVar1);
    if (lVar2 == 0x17) {
      iVar1 = strcmp(acStack_38,"[always] madvise never\n");
      uVar3 = 0;
      if (iVar1 == 0) goto LAB_00767148;
      iVar1 = strcmp(acStack_38,"always [madvise] never\n");
      uVar3 = 1;
      if (iVar1 == 0) goto LAB_00767148;
      iVar1 = strcmp(acStack_38,"always madvise [never]\n");
      if (iVar1 == 0) {
        uVar3 = 2;
        goto LAB_00767148;
      }
    }
  }
  uVar3 = 3;
LAB_00767148:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

