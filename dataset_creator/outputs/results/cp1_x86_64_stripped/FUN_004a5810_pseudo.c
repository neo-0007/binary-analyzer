
int FUN_004a5810(undefined8 param_1,long *param_2,long param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = (int)*(undefined8 *)(param_3 + 8);
  iVar2 = FUN_004a55d0(param_1,0,&local_44,param_3);
  bVar1 = 1 < local_44 - 0x10U;
  bVar4 = local_44 != -3;
  if (iVar2 == -1) {
    iVar2 = 0;
    goto LAB_004a58d3;
  }
  iVar3 = 0;
  if (iVar2 == -2) {
    iVar3 = 2;
    iVar2 = 0;
  }
  if (param_4 == -1) {
    param_4 = local_44;
  }
  if (param_2 == (long *)0x0) {
LAB_004a58cf:
    if (!bVar1 || !bVar4) goto LAB_004a58d3;
  }
  else {
    if (bVar1 && bVar4) {
      FUN_004a1e10(param_2,iVar3,iVar2,param_4,param_5);
    }
    FUN_004a55d0(param_1,*param_2,&local_44,param_3);
    if (iVar3 == 0) {
      *param_2 = *param_2 + (long)iVar2;
      goto LAB_004a58cf;
    }
    FUN_004a1f10(param_2);
    if (!bVar1 || !bVar4) goto LAB_004a58d3;
  }
  iVar2 = FUN_004a1f30(iVar3,iVar2,param_4);
LAB_004a58d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

