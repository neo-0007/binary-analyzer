
undefined4
FUN_0053a5d0(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if (*(code **)(lVar3 + 0x78) != (code *)0x0) {
    iVar1 = (**(code **)(lVar3 + 0x78))(lVar4);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = *param_1;
    lVar4 = param_1[1];
  }
  uVar2 = (**(code **)(lVar3 + 0x48))(lVar4,param_2,param_3,param_4,param_5,param_6);
  if (*(code **)(*param_1 + 0x80) != (code *)0x0) {
    (**(code **)(*param_1 + 0x80))(param_1[1]);
  }
  return uVar2;
}

