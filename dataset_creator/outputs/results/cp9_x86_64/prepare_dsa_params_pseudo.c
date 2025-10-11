
undefined8
prepare_dsa_params(DSA *param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ASN1_STRING *a;
  
  lVar2 = DSA_get0_p();
  lVar3 = DSA_get0_q(param_1);
  lVar4 = DSA_get0_g(param_1);
  if ((((param_3 == 0) || (lVar2 == 0)) || (lVar3 == 0)) || (lVar4 == 0)) {
    *param_4 = 0;
    uVar5 = 1;
    *param_5 = 0xffffffff;
  }
  else {
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x229,
                    "encode_dsa_params");
      ERR_set_error(0x39,0xc0100,0);
      uVar5 = 0;
    }
    else {
      iVar1 = i2d_DSAparams(param_1,&a->data);
      a->length = iVar1;
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x230,
                      "encode_dsa_params");
        ERR_set_error(0x39,0xc0100,0);
        ASN1_STRING_free(a);
        uVar5 = 0;
      }
      else {
        *param_5 = 0x10;
        uVar5 = 1;
        *param_4 = a;
      }
    }
  }
  return uVar5;
}

