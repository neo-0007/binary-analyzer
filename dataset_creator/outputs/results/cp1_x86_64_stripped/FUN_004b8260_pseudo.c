
undefined8 * FUN_004b8260(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN_004b7e80(param_2,4);
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar3 == 0) {
    iVar2 = *(int *)(param_2 + 1);
  }
  if (param_2 != param_1) {
    lVar4 = FUN_004b8240(param_1,iVar2);
    if (lVar4 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      iVar3 = *(int *)(param_2 + 1);
      if (0 < iVar3) {
        thunk_FUN_00713a50(*param_1,*param_2,(long)iVar2 << 3);
        iVar3 = *(int *)(param_2 + 1);
      }
      uVar1 = *(undefined4 *)(param_2 + 2);
      *(int *)(param_1 + 1) = iVar3;
      *(undefined4 *)(param_1 + 2) = uVar1;
    }
  }
  return param_1;
}

