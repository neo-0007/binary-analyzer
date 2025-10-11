
long FUN_005a06f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  int *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_2;
  iVar1 = FUN_00435f40();
  if (-1 < iVar1) {
    if (1 < *param_2 - 1U) {
      lVar4 = FUN_004364a0(param_1,iVar1);
      goto LAB_005a07c0;
    }
    iVar2 = FUN_00436480(param_1);
    if (iVar1 < iVar2) {
      do {
        local_48 = FUN_004364a0(param_1,iVar1);
        iVar3 = FUN_0059f650(&local_48,&local_50);
        lVar4 = local_48;
        if (iVar3 != 0) break;
        if (*local_50 == 1) {
          iVar3 = FUN_0059e700(*(undefined8 *)(local_48 + 8),*(undefined8 *)(local_50 + 2));
        }
        else {
          if (*local_50 != 2) goto LAB_005a07c0;
          iVar3 = FUN_0059e660(*(undefined8 *)(local_48 + 8),*(undefined8 *)(local_50 + 2));
        }
        if (iVar3 == 0) goto LAB_005a07c0;
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
  }
  lVar4 = 0;
LAB_005a07c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

