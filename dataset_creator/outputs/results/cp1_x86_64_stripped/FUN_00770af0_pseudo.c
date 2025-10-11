
undefined8 FUN_00770af0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0076e620("/sys/kernel/mm/transparent_hugepage/enabled",0);
  if (iVar1 != -1) {
    lVar2 = FUN_0076e770(iVar1,auStack_38,0x18);
    FUN_0076e4b0(iVar1);
    if (lVar2 == 0x17) {
      iVar1 = thunk_FUN_00712780(auStack_38,"[always] madvise never\n");
      uVar3 = 0;
      if (iVar1 == 0) goto LAB_00770b48;
      iVar1 = thunk_FUN_00712780(auStack_38,"always [madvise] never\n");
      uVar3 = 1;
      if (iVar1 == 0) goto LAB_00770b48;
      iVar1 = thunk_FUN_00712780(auStack_38,"always madvise [never]\n");
      if (iVar1 == 0) {
        uVar3 = 2;
        goto LAB_00770b48;
      }
    }
  }
  uVar3 = 3;
LAB_00770b48:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

