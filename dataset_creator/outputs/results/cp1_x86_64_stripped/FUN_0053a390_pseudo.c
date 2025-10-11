
undefined4 FUN_0053a390(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x78) != (code *)0x0) {
    iVar1 = (**(code **)(lVar3 + 0x78))(param_1[1]);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = *param_1;
  }
  uVar2 = 1;
  if (*(code **)(lVar3 + 0xb0) != (code *)0x0) {
    uVar2 = (**(code **)(lVar3 + 0xb0))(param_1[1],param_2);
    lVar3 = *param_1;
  }
  if (*(code **)(lVar3 + 0x80) != (code *)0x0) {
    (**(code **)(lVar3 + 0x80))(param_1[1]);
  }
  return uVar2;
}

