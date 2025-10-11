
long FUN_006c4140(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_b8 [24];
  uint local_a0;
  long local_88;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_c4 = 0;
  uVar1 = FUN_006c3ea0();
  iVar2 = FUN_0076ebb0(uVar1,0x541b,&local_c4);
  if ((iVar2 != 0) || (lVar3 = (long)local_c4, local_c4 < 0)) {
    local_c0 = FUN_006c3ea0(param_1);
    local_bc = 1;
    iVar2 = FUN_0076e410(&local_c0,1,0);
    if (0 < iVar2) {
      uVar1 = FUN_006c3ea0(param_1);
      iVar2 = FUN_0076d7f0(uVar1,local_b8);
      if ((iVar2 == 0) && ((local_a0 & 0xf000) == 0x8000)) {
        uVar1 = FUN_006c3ea0(param_1);
        lVar3 = FUN_0076db00(uVar1,0,1);
        lVar3 = local_88 - lVar3;
        goto LAB_006c41e5;
      }
    }
    lVar3 = 0;
  }
LAB_006c41e5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

