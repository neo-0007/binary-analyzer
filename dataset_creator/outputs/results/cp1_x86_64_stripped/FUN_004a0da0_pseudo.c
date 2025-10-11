
undefined8
FUN_004a0da0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (param_1 == (undefined8 *)0x0) {
    param_1 = &local_38;
  }
  lVar2 = FUN_004a0d00(param_5);
  if (lVar2 == 0) {
    iVar1 = FUN_005b5400(param_1,param_2,param_3,param_4,(uint)DAT_0093bc88 & 0x2806);
  }
  else {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x20) & 2) == 0) {
      uVar4 = uVar4 & DAT_0093bc88;
    }
    iVar1 = FUN_005b4d90(param_1,param_2,param_3,param_4,uVar4,*(undefined8 *)(lVar2 + 8),
                         *(undefined8 *)(lVar2 + 0x10));
  }
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

