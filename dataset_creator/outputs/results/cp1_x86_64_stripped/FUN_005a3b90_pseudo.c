
ulong FUN_005a3b90(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] == 0x17) {
    uVar3 = 0;
    if (*param_1 != 0xd) goto LAB_005a3bc5;
  }
  else if ((param_1[1] != 0x18) || (*param_1 != 0xf)) {
    uVar3 = 0;
    goto LAB_005a3bc5;
  }
  lVar4 = 0;
  do {
    uVar3 = FUN_00546750(*(undefined1 *)(*(long *)(param_1 + 2) + lVar4));
    if ((int)uVar3 == 0) goto LAB_005a3bc5;
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < *param_1 + -1);
  uVar3 = 0;
  if (*(char *)(*(long *)(param_1 + 2) + -1 + (long)*param_1) != 'Z') goto LAB_005a3bc5;
  lVar4 = FUN_005a3b70(0,0,param_2);
  if (lVar4 == 0) {
LAB_005a3c86:
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_005b7fc0(&local_28,&local_24,param_1,lVar4);
    if (iVar1 == 0) goto LAB_005a3c86;
    uVar2 = 1;
    if (-1 < local_28) {
      uVar2 = (local_24 >> 0x1f & 2U) - 1;
    }
  }
  FUN_005b7380(lVar4);
  uVar3 = (ulong)uVar2;
LAB_005a3bc5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

