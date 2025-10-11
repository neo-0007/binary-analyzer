
undefined8
FUN_00461d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2ms.c",0xe6,
                 "dsa2msblob_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  uVar1 = FUN_00461c50(param_1,param_3,param_5,param_2,FUN_0040f330);
  return uVar1;
}

