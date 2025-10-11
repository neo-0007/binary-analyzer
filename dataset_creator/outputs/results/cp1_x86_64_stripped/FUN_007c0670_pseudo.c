
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007c0670(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (DAT_0094b578 != 0) {
      iVar1 = FUN_007c8270(2,&DAT_0094b540,0);
      if (-1 < iVar1) {
        DAT_0094b578 = 0;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = FUN_006e83e0(0x1b,&DAT_0094b4a0,0);
          return uVar2;
        }
        goto LAB_007c083a;
      }
      goto LAB_007c0830;
    }
    uVar2 = 0;
  }
  else {
    if ((DAT_0094b578 == 0) ||
       ((iVar1 = FUN_007c8270(2,&DAT_0094b540,0), -1 < iVar1 &&
        (iVar1 = FUN_006e83e0(0x1b,&DAT_0094b4a0,0), -1 < iVar1)))) {
      DAT_0094b570 = param_2 >> 1;
      local_c8 = FUN_007c0620;
      local_40 = 0x10000004;
      local_c0 = 0xffffffffffffffff;
      DAT_0094b560 = param_4;
      _DAT_0094b568 = param_3;
      DAT_0094b578 = param_1;
      iVar1 = FUN_006e83e0(0x1b,&local_c8,&DAT_0094b4a0);
      if (-1 < iVar1) {
        local_d8 = 0;
        iVar1 = FUN_007c0840();
        lStack_e0 = (long)(int)(1000000 / (long)iVar1);
        local_e8 = local_d8;
        lStack_d0 = lStack_e0;
        uVar2 = FUN_007c8270(2,&local_e8,&DAT_0094b540);
        goto LAB_007c078d;
      }
    }
LAB_007c0830:
    uVar2 = 0xffffffff;
  }
LAB_007c078d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_007c083a:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

