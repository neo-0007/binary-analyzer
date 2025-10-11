
undefined8
dsa2msblob_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2ms.c",0xe6,
                  "dsa2msblob_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  uVar1 = key2msblob_encode_constprop_0(param_1,param_3,param_5,param_2,EVP_PKEY_set1_DSA);
  return uVar1;
}

