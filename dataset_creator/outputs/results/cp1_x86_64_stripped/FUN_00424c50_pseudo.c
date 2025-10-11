
undefined8 FUN_00424c50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_2c [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c[0] = param_1;
  if (DAT_0093fd40 == 0) {
LAB_00424ce0:
    lVar2 = FUN_00423d90(local_2c,&DAT_007dc200,0x31,0xc,FUN_00424bd0);
    uVar3 = 0;
    if (lVar2 == 0) goto LAB_00424cbd;
  }
  else {
    uVar1 = FUN_00435f40(DAT_0093fd40,local_2c);
    lVar2 = FUN_004364a0(DAT_0093fd40,uVar1);
    if (lVar2 == 0) goto LAB_00424ce0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  uVar3 = 1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
LAB_00424cbd:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

