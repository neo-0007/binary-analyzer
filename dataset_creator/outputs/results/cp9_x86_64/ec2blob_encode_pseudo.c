
undefined8 ec2blob_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2blob.c",0xaf,
                  "ec2blob_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  uVar1 = key2blob_encode_constprop_0(param_1,param_3,param_2);
  return uVar1;
}

