
undefined4
FUN_00463e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar2 = FUN_0043bf50();
    if (lVar2 != 0) {
      uVar1 = FUN_00463680(lVar2,param_3,param_5);
      FUN_004ab560(lVar2);
      return uVar1;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x369,
                 "dhx2text_encode");
    FUN_0051f8f0(0x39,0x80106,0);
  }
  return 0;
}

