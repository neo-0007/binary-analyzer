
undefined4
FUN_007c5880(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar2 = FUN_00778500();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
    *(undefined4 *)(*(long *)(in_FS_OFFSET + -0x70) + 0x1f0) = 0xffffffff;
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
  }
  else {
    uVar1 = FUN_007c4c00(lVar2,param_1,param_2,param_3,param_4,param_5,param_6,0,0,0,0,0);
    FUN_00778a10(lVar2);
  }
  return uVar1;
}

