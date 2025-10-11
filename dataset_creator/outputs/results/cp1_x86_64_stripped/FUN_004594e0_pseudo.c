
undefined8 FUN_004594e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004ee3f0();
  if (lVar1 != 0) {
    uVar2 = FUN_004eaa90(param_1,param_2);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x2c1,
               "ec_spki_pub_to_der");
  FUN_0051f8f0(0x39,0xdc,0);
  return 0;
}

