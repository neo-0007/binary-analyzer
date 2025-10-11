
undefined8 FUN_00533800(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_00536c00(param_1,2,0,&local_24);
    if (0 < iVar1) {
      if (local_24 == 0x80) {
        uVar2 = 0x3a;
      }
      else if (local_24 == 0x40) {
        uVar2 = 0x78;
      }
      else if (local_24 == 0x28) {
        uVar2 = 0xa0;
      }
    }
    FUN_00409920(param_1);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = FUN_004a2880(param_2,uVar2,param_1 + 0x18);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

