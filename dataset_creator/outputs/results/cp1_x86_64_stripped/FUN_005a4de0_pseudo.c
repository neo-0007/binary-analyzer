
int FUN_005a4de0(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  puVar4 = &local_28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_005a4e90:
    puVar4 = (undefined8 *)0x0;
LAB_005a4e27:
    if (param_3 != 0) {
      iVar1 = FUN_005a3b90(param_3,puVar4);
      iVar2 = 1;
      if (iVar1 < 0) goto LAB_005a4e5e;
    }
    if (param_2 != 0) {
      iVar1 = FUN_005a3b90(param_2,puVar4);
      iVar2 = -(uint)(0 < iVar1);
      goto LAB_005a4e5e;
    }
  }
  else {
    uVar3 = FUN_005a8c80();
    if ((uVar3 & 2) != 0) {
      local_28 = FUN_005a8cf0(param_1);
      goto LAB_005a4e27;
    }
    if ((uVar3 & 0x200000) == 0) goto LAB_005a4e90;
  }
  iVar2 = 0;
LAB_005a4e5e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

