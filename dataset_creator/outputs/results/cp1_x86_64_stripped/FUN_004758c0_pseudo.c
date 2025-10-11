
undefined8 FUN_004758c0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_4 != 0) && (iVar1 = FUN_00475680(param_1,param_4), iVar1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0xf1) == '\0') {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/macs/blake2_mac_impl.c",0x75,"blake2_mac_init");
      FUN_0051f8f0(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = FUN_00475560(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_0044fea0(param_1,param_1 + 0xf0,param_1 + 0x130);
  return uVar2;
}

