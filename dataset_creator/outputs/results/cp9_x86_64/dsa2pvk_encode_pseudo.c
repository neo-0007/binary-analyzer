
undefined8
dsa2pvk_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
              undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2ms.c",0xe5,"dsa2pvk_encode"
                 );
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    return 0;
  }
  uVar1 = key2pvk_encode_part_0(param_1,param_3,param_2,EVP_PKEY_set1_DSA,param_6);
  return uVar1;
}

