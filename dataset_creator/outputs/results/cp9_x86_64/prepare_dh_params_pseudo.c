
undefined8
prepare_dh_params(DH *param_1,int param_2,undefined8 param_3,undefined8 *param_4,undefined4 *param_5
                 )

{
  int iVar1;
  ASN1_STRING *a;
  undefined8 uVar2;
  
  a = ASN1_STRING_new();
  if (a == (ASN1_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x1c1,
                  "prepare_dh_params");
    ERR_set_error(0x39,0xc0100,0);
    uVar2 = 0;
  }
  else {
    if (param_2 == 0x398) {
      iVar1 = i2d_DHxparams();
      a->length = iVar1;
    }
    else {
      iVar1 = i2d_DHparams(param_1,&a->data);
      a->length = iVar1;
    }
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x1cb,
                    "prepare_dh_params");
      ERR_set_error(0x39,0xc0100,0);
      ASN1_STRING_free(a);
      return 0;
    }
    a->type = 0x10;
    uVar2 = 1;
    *param_4 = a;
    *param_5 = 0x10;
  }
  return uVar2;
}

