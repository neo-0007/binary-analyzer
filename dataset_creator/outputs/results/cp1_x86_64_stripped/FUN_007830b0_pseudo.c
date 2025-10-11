
int FUN_007830b0(undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 param_4,long param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  if (0x400 < param_2) {
    return -1;
  }
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  iVar2 = FUN_00782350(param_3,param_1,param_2);
  if (-1 < iVar2) {
    iVar3 = FUN_00782220(iVar2,5000);
    if (0 < iVar3) {
      do {
        lVar4 = FUN_0076d9c0(iVar2,param_4,param_5);
        if (lVar4 != -1) break;
      } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
      if (param_5 == lVar4) {
        return iVar2;
      }
    }
    FUN_0076e4b0(iVar2);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  return -1;
}

