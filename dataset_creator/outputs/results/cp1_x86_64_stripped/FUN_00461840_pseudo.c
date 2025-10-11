
undefined8 FUN_00461840(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2blob.c",0xaf,
                 "ec2blob_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  uVar1 = FUN_00461720(param_1,param_3,param_2);
  return uVar1;
}

