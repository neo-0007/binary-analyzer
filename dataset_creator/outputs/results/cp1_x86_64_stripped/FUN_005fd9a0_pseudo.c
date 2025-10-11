
undefined4
FUN_005fd9a0(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == (undefined1 *)0x0) && (DAT_00942800 != '\0')) {
    param_4 = &DAT_00942800;
  }
  lVar3 = FUN_00595e60();
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0x1fff < param_3) {
      param_3 = 0x1fff;
    }
    iVar1 = FUN_00595e70(lVar3,param_4,0,param_1,param_2,param_3);
    if ((iVar1 < 0) ||
       ((param_5 != 0 &&
        (iVar1 = FUN_00595fe0(lVar3,param_4,0,auStack_2048,param_2,param_3,param_1), iVar1 < 0)))) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_005968f0(lVar3);
      FUN_004227b0(auStack_2048,0x2000);
    }
    FUN_00595cd0(lVar3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

