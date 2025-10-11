
void FUN_00412da0(int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_1;
  if (((iVar1 - 0x10U & 0xffffffef) == 0 || (iVar1 - 0x40U & 0xffffffbf) == 0) || (iVar1 == 0x100))
  {
    lVar2 = *(long *)(param_1 + 10);
    if ((*(long *)(param_1 + 0xc) != 0) && (lVar2 != 0)) {
      (**(code **)(lVar2 + 0xa8))();
      lVar2 = *(long *)(param_1 + 10);
    }
    FUN_00415cd0(lVar2);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    if (iVar1 == 0x800) {
      lVar2 = *(long *)(param_1 + 10);
      if ((*(long *)(param_1 + 0xc) != 0) && (lVar2 != 0)) {
        (**(code **)(lVar2 + 0x50))();
        lVar2 = *(long *)(param_1 + 10);
      }
      FUN_0053aa50(lVar2);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      return;
    }
    if ((iVar1 - 0x1000U & 0xffffefff) == 0) {
      lVar2 = *(long *)(param_1 + 10);
      if ((*(long *)(param_1 + 0xc) != 0) && (lVar2 != 0)) {
        (**(code **)(lVar2 + 0x58))();
        lVar2 = *(long *)(param_1 + 10);
      }
      FUN_0053c570(lVar2);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      return;
    }
    if ((iVar1 - 0x200U & 0xfffffdff) == 0) {
      lVar2 = *(long *)(param_1 + 10);
      if ((*(long *)(param_1 + 0xc) != 0) && (lVar2 != 0)) {
        (**(code **)(lVar2 + 0x58))();
        lVar2 = *(long *)(param_1 + 10);
      }
      FUN_0051f9f0(lVar2);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      return;
    }
    if ((((iVar1 - 2U & 0xfffffffd) == 0) && (*(long *)(param_1 + 10) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      FUN_0053e900();
      return;
    }
  }
  return;
}

