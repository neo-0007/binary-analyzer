
int FUN_005acb50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  for (iVar4 = 0; iVar2 = FUN_00436480(param_1), iVar1 = iVar3, iVar4 < iVar2; iVar4 = iVar4 + 1) {
    local_38 = FUN_004364a0(param_1,iVar4);
    iVar1 = FUN_004a59a0(&local_38,param_2,&DAT_00912ba0,0xffffffff,0xffffffff);
    if (iVar1 < 0) break;
    iVar3 = iVar3 + iVar1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

