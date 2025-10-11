
undefined8 FUN_004649e0(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = FUN_0043b840();
  if (((iVar2 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar3 = FUN_004d6140(param_2);
    lVar4 = FUN_004d6140(uVar1);
    if (((lVar3 == 0) || (lVar4 == 0)) || (iVar2 = FUN_005422f0(lVar3,lVar4,1), iVar2 == 0)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/dh_exch.c",0x7b,"dh_match_params");
      FUN_0051f8f0(0x39,0xcb,0);
    }
    else {
      iVar2 = FUN_004d5ea0(param_2);
      if (iVar2 != 0) {
        FUN_004d5b70(*(undefined8 *)(param_1 + 0x10));
        *(long *)(param_1 + 0x10) = param_2;
        return 1;
      }
    }
  }
  return 0;
}

