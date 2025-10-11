
ulong FUN_006003a0(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  uVar1 = FUN_005ff610();
  if ((int)uVar1 == 1) {
    uVar2 = FUN_004abd40(*(undefined8 *)(param_1 + 0x58),3,0,auStack_38);
    lVar3 = FUN_004a55c0(0,auStack_38,uVar2,param_3);
    *param_2 = lVar3;
    uVar1 = (ulong)(lVar3 != 0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

