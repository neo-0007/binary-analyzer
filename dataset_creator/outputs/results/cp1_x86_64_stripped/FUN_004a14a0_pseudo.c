
long FUN_004a14a0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == -1) {
    param_3 = thunk_FUN_007129d0(param_2);
  }
  if (param_1 != (undefined8 *)0x0) {
    lVar4 = FUN_0051c930(&local_48,param_2,param_3);
    if (lVar4 != 0) {
      iVar2 = FUN_0051a180(local_48);
      if (iVar2 == 0) {
        lVar4 = 0;
      }
      FUN_0051a5a0(local_48);
      *param_1 = local_48;
      goto LAB_004a1550;
    }
    *param_1 = 0;
  }
  iVar2 = FUN_004a13c0();
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      lVar4 = FUN_004a13f0(iVar2);
      if ((*(byte *)(lVar4 + 8) & 1) == 0) {
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        iVar3 = thunk_FUN_007129d0(uVar1);
        if ((param_3 == iVar3) && (iVar3 = FUN_0041ca00(uVar1,param_2,(long)param_3), iVar3 == 0))
        goto LAB_004a1550;
      }
    } while (iVar2 != 0);
  }
  lVar4 = 0;
LAB_004a1550:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

