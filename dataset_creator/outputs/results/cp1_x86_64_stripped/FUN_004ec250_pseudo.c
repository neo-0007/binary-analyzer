
bool FUN_004ec250(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_34;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  local_30 = (int *)0x0;
  FUN_004a8930(0,&local_34,&local_30,param_1);
  if (local_34 == 6) {
    iVar1 = FUN_00423da0(local_30);
    bVar3 = iVar1 == 0x494;
  }
  else {
    bVar3 = false;
    if (local_34 == 0x10) {
      local_28 = *(undefined8 *)(local_30 + 2);
      lVar2 = FUN_004ea020(0,&local_28,(long)*local_30);
      if (lVar2 != 0) {
        iVar1 = FUN_004ef870(lVar2);
        bVar3 = iVar1 == 0x494;
      }
      FUN_004efd00(lVar2);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

