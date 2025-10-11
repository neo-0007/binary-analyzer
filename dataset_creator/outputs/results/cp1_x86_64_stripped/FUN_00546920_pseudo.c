
bool FUN_00546920(undefined8 param_1,int param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (param_2 < 0) {
LAB_00546989:
    iVar1 = FUN_00547790(param_1);
    if (iVar1 != 0) {
      iVar1 = (*param_3)(param_1,param_4,&local_34);
      if (iVar1 != 0) {
        if ((local_34 & 0x80) != 0) {
          iVar1 = FUN_005477a0(param_1,0,1);
          if (iVar1 == 0) goto LAB_00546956;
        }
        iVar1 = FUN_00547aa0(param_1);
        if (iVar1 != 0) {
          iVar1 = FUN_005477a0(param_1,2,1);
          if (iVar1 != 0) {
            iVar1 = FUN_00546870(param_1,param_2);
            bVar2 = iVar1 != 0;
            goto LAB_00546958;
          }
        }
      }
    }
  }
  else if (param_2 < 0x1f) {
    iVar1 = FUN_00547790();
    if (iVar1 != 0) goto LAB_00546989;
  }
LAB_00546956:
  bVar2 = false;
LAB_00546958:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

