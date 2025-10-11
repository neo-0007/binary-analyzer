
undefined8 FUN_00526860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = FUN_004098f0();
  pcVar1 = *(code **)(lVar4 + 0x100);
  if (pcVar1 == (code *)0x0) {
    iVar3 = FUN_004098b0(param_1);
    if (iVar3 == 0) {
      FUN_0054c450(param_3,param_2,param_4,lVar4,param_1 + 0x28,*(undefined8 *)(lVar4 + 0xf8));
    }
    else {
      FUN_0054c300();
    }
  }
  else {
    uVar2 = FUN_004098b0(param_1);
    (*pcVar1)(param_3,param_2,param_4,lVar4,param_1 + 0x28,uVar2);
  }
  return 1;
}

