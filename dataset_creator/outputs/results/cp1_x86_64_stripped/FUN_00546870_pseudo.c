
bool FUN_00546870(undefined8 param_1,uint param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = true;
  if ((-1 < (int)param_2) && (bVar2 = false, (int)param_2 < 0x1f)) {
    iVar1 = FUN_005472b0(param_1,&local_30);
    if (iVar1 != 0) {
      iVar1 = FUN_00547aa0(param_1);
      if (iVar1 != 0) {
        iVar1 = FUN_005472b0(param_1,&local_28);
        if (iVar1 != 0) {
          bVar2 = true;
          if (local_30 != local_28) {
            iVar1 = FUN_005477a0(param_1,param_2 | 0xa0,1);
            bVar2 = iVar1 != 0;
          }
          goto LAB_00546896;
        }
      }
    }
    bVar2 = false;
  }
LAB_00546896:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

