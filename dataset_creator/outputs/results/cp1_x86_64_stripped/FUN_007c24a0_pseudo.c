
ulong FUN_007c24a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  uVar2 = FUN_007c3f90();
  if ((int)uVar2 == 0) {
    *param_7 = 1;
  }
  else {
    lVar3 = FUN_00778500();
    if (lVar3 != 0) {
      uVar1 = FUN_007c2120(lVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
      FUN_00778a10(lVar3);
      return (ulong)uVar1;
    }
    *param_6 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    *param_7 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

