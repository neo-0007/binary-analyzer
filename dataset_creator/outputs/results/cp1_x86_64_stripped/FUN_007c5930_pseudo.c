
undefined4 FUN_007c5930(long param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  
  lVar4 = (long)param_3;
  lVar1 = lVar4 + 0x80;
  if (*(int *)(param_1 + 8 + lVar1 * 4) != -1) {
    return 1;
  }
  psVar3 = (short *)FUN_007c88c0(param_1,param_3);
  if (*psVar3 == 10) {
    if ((*(byte *)(param_1 + 0x189) & 1) == 0) {
      iVar2 = FUN_00771200(10,0x80802,0);
      *(int *)(param_1 + 8 + lVar1 * 4) = iVar2;
      uVar5 = 0x1c;
      if (iVar2 < 0) {
        iVar2 = *(int *)(in_FS_OFFSET + -0x58);
        *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) & 0xfe | iVar2 == 0x61;
        goto LAB_007c5a4a;
      }
      goto LAB_007c59a8;
    }
LAB_007c5993:
    iVar2 = *(int *)(param_1 + 0x208 + lVar4 * 4);
  }
  else {
    if (*psVar3 != 2) goto LAB_007c5993;
    iVar2 = FUN_00771200(2,0x80802,0);
    *(int *)(param_1 + 8 + lVar1 * 4) = iVar2;
  }
  uVar5 = 0x10;
  if (iVar2 < 0) {
    iVar2 = *(int *)(in_FS_OFFSET + -0x58);
LAB_007c5a4a:
    *param_2 = iVar2;
    return 0xffffffff;
  }
LAB_007c59a8:
  iVar2 = FUN_007c8810(*psVar3,iVar2);
  if (iVar2 < 0) {
    iVar2 = *(int *)(in_FS_OFFSET + -0x58);
    FUN_007ad930(param_1,0);
    *(int *)(in_FS_OFFSET + -0x58) = iVar2;
    *param_2 = iVar2;
    return 0xffffffff;
  }
  iVar2 = FUN_00770f00(*(undefined4 *)(param_1 + 0x208 + lVar4 * 4),psVar3,uVar5);
  if (-1 < iVar2) {
    return 1;
  }
  FUN_007ad930(param_1,0);
  return 0;
}

