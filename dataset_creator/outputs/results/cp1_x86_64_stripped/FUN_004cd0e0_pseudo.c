
undefined4 FUN_004cd0e0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_004b0cd0(param_2,0);
  if (lVar2 != 0) {
    uVar1 = FUN_004ccfa0(param_1,lVar2);
    FUN_004ab560(lVar2);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/conf/conf_lib.c",0x182,"NCONF_dump_fp");
  FUN_0051f8f0(0xe,0x80007,0);
  return 0;
}

