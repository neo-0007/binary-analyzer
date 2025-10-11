
undefined4 FUN_005cb850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = FUN_004b0b90(param_2,&DAT_007e606a);
  if (lVar4 == 0) {
    uVar2 = FUN_0051e9f0();
    uVar3 = uVar2 & 0x7fffffff;
    if ((uVar2 & 0x80000000) == 0) {
      uVar3 = uVar2 & 0x7fffff;
    }
    if (uVar3 != 0x80) {
      FUN_0051f420();
      FUN_0051f540("../crypto/conf/conf_def.c",0xb5,"def_load");
      FUN_0051f8f0(0xe,0x80002,0);
      return 0;
    }
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/conf/conf_def.c",0xb3,"def_load");
    FUN_0051f8f0(0xe,0x72,0);
  }
  else {
    uVar1 = FUN_005ca530(param_1,lVar4,param_3);
    FUN_004ab560(lVar4);
  }
  return uVar1;
}

