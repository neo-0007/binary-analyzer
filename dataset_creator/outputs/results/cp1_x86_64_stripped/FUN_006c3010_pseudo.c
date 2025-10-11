
undefined8 FUN_006c3010(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if ((char)*param_1 != '\0') {
    return 0;
  }
  if (DAT_0093ea10 == '\0') {
    LOCK();
    iVar1 = *param_1;
    bVar4 = iVar1 == 0;
    if (bVar4) {
      *param_1 = 0x100;
      iVar1 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      if (iVar1 == 1) {
        return 0;
      }
      if (iVar1 == 0x100) {
        LOCK();
        iVar2 = *param_1;
        bVar4 = iVar2 == 0x100;
        if (bVar4) {
          *param_1 = 0x10100;
          iVar2 = 0x100;
        }
        UNLOCK();
        iVar1 = 0x10100;
        if (bVar4) goto LAB_006c308a;
        if (iVar2 == 1) {
          return 0;
        }
        if (iVar2 != 0) goto LAB_006c308a;
      }
      else {
LAB_006c308a:
        FUN_0076efe0(0xca,param_1,0,iVar1,0);
      }
      LOCK();
      iVar1 = *param_1;
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *param_1 = 0x100;
        iVar1 = 0;
      }
      UNLOCK();
    }
  }
  else {
    if (*param_1 != 0) {
      uVar3 = FUN_006231b0(8);
      FUN_006c31b0(uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00624060(uVar3,&PTR_PTR_00939498,FUN_006c3170);
    }
    *param_1 = 0x100;
  }
  return 1;
}

