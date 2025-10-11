
undefined8
FUN_00461b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2ms.c",0xe5,"dsa2pvk_encode")
    ;
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_00461a80(param_1,param_3,param_2,FUN_0040f330,param_6);
  return uVar1;
}

