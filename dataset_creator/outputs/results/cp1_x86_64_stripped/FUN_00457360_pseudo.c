
undefined4 FUN_00457360(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_004d8d70();
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x265,
                 "dsa_pki_priv_to_der");
    FUN_0051f8f0(0x39,0xdd,0);
    return 0;
  }
  lVar2 = FUN_0049fa60(lVar2,0);
  if (lVar2 != 0) {
    uVar1 = FUN_004a76d0(lVar2,param_2);
    FUN_004a2300(lVar2);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x269,
               "dsa_pki_priv_to_der");
  FUN_0051f8f0(0x39,0xa0,0);
  return 0;
}

