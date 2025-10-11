
uint FUN_00409a30(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    uVar1 = FUN_00409920();
    if (uVar1 < 0x11) {
      uVar2 = FUN_004a27d0(param_2,auStack_48,uVar1);
      if (uVar1 == uVar2) {
        iVar3 = FUN_00538a80(param_1,0,0,0,auStack_48,0xffffffff);
        if (iVar3 != 0) goto LAB_00409a9c;
      }
    }
    uVar2 = 0xffffffff;
  }
LAB_00409a9c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

