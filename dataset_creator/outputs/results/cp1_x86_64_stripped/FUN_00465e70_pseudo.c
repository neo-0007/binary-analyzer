
undefined8 FUN_00465e70(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043b840();
  if ((int)uVar2 != 0) {
    if ((((param_1 != (long *)0x0) && (param_2 != 0)) && (*(long *)(param_2 + 0x58) == *param_1)) &&
       (iVar1 = FUN_00511630(param_2), iVar1 != 0)) {
      FUN_00511590(param_1[2]);
      param_1[2] = param_2;
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0x6b,"ecx_set_peer");
    FUN_0051f8f0(0x39,0xc0103,0);
    uVar2 = 0;
  }
  return uVar2;
}

