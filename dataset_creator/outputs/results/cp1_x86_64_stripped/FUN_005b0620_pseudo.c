
long FUN_005b0620(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_48;
  long local_40;
  
  bVar3 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_2;
  if (param_1 != (long *)0x0) {
    bVar3 = *param_1 == 0;
  }
  lVar1 = FUN_005b0110(param_1,&local_48,param_3);
  if (lVar1 != 0) {
    param_3 = param_3 - (local_48 - *param_2);
    if ((param_3 < 1) || (lVar2 = FUN_005b08e0(lVar1 + 0x150,&local_48,param_3), lVar2 != 0)) {
      *param_2 = local_48;
      goto LAB_005b0699;
    }
    if ((bVar3) && (FUN_005b0200(lVar1), param_1 != (long *)0x0)) {
      *param_1 = 0;
    }
  }
  lVar1 = 0;
LAB_005b0699:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar1;
}

