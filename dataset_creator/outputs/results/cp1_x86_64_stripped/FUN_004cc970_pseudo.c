
undefined8 FUN_004cc970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004b0cd0(param_2,0);
  if (lVar1 == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/conf/conf_lib.c",0x4b,"CONF_load_fp");
    FUN_0051f8f0(0xe,0x80007,0);
  }
  else {
    uVar2 = FUN_004cc870(param_1,lVar1,param_3);
    FUN_004ab560(lVar1);
  }
  return uVar2;
}

