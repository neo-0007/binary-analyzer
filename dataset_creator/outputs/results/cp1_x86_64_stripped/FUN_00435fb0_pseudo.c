
undefined8 FUN_00435fb0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar1 = *param_1;
    uVar4 = 0;
    if (iVar1 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 2);
      iVar3 = 0;
      uVar4 = *puVar2;
      if (iVar1 != 1) {
        thunk_FUN_00713610(puVar2,puVar2 + 1,(long)(iVar1 + -1) << 3);
        iVar3 = *param_1 + -1;
      }
      *param_1 = iVar3;
    }
  }
  return uVar4;
}

