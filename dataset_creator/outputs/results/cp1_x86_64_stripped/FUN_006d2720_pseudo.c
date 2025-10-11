
undefined8 FUN_006d2720(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_006de650(local_38,param_2,param_1);
  uVar3 = 0xffffffffffffffff;
  if (lVar2 != 0) {
    iVar1 = FUN_006d2a00(local_38,&local_40,0);
    FUN_006de940(local_38);
    uVar3 = local_40;
    if (iVar1 != 0) {
      if (iVar1 - 1U < 2) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      }
      uVar3 = 0xffffffffffffffff;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

