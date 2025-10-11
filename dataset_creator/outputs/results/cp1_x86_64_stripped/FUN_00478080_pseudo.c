
undefined4 FUN_00478080(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && (iVar1 = FUN_00477ff0(param_1,param_4), iVar1 != 0)) {
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0x20) {
      FUN_00565700(param_1 + 8,param_2);
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/macs/poly1305_prov.c",0x54,"poly1305_setkey");
    FUN_0051f8f0(0x39,0x69,0);
  }
  return 0;
}

