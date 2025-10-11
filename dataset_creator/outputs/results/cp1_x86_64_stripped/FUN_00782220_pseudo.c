
void FUN_00782220(undefined4 param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined2 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0x19;
  local_48 = param_1;
  iVar2 = FUN_0076e410(&local_48,1,param_2 & 0xffffffff);
  if ((iVar2 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 4)) {
    FUN_00767f90(0,&local_58);
    lVar1 = local_50 + 500000;
    lVar3 = local_58 * 1000 + param_2;
    while ((iVar2 = FUN_0076e410(&local_48,1,param_2 & 0xffffffff), iVar2 == -1 &&
           (*(int *)(in_FS_OFFSET + -0x58) == 4))) {
      FUN_00767f90(0,&local_58);
      param_2 = (lVar3 + lVar1 / 1000000) - ((local_50 + 500000) / 1000000 + local_58 * 1000);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

