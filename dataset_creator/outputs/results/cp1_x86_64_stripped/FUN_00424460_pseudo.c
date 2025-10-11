
undefined4 FUN_00424460(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = local_48;
  FUN_00419fe0(0x40,0);
  local_48[0] = param_1;
  if (DAT_0093fd30 != 0) {
    local_58[0] = 1;
    local_50 = local_48;
    lVar2 = FUN_00545b60(DAT_0093fd30,local_58);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(lVar2 + 8) + 0x10);
      goto LAB_00424508;
    }
  }
  puVar3 = (uint *)FUN_00423d90(&local_60,&DAT_007d7b20,0x4d7,4,FUN_004236b0);
  if (puVar3 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_008de2f0 + (ulong)*puVar3 * 0x28);
  }
LAB_00424508:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

