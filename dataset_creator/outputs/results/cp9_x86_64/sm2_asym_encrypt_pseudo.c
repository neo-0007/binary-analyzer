
ulong sm2_asym_encrypt(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = ossl_prov_digest_md(param_1 + 2);
  if ((lVar2 == 0) &&
     (lVar2 = ossl_prov_digest_fetch(param_1 + 2,*param_1,&DAT_007cb3f0,0), lVar2 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = ossl_sm2_ciphertext_size(param_1[1],lVar2,param_6,param_3);
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/asymciphers/sm2_enc.c",0x5d,"sm2_asym_encrypt");
      ERR_set_error(0x39,0x9e,0);
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  uVar3 = ossl_sm2_encrypt(param_1[1],lVar2,param_5,param_6,param_2,param_3);
  return uVar3;
}

