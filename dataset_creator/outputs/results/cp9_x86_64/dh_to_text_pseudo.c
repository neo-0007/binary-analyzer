
bool dh_to_text(BIO *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  BIGNUM *a;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0xe2,"dh_to_text");
    ERR_set_error(0x39,0xc0102,0);
    return false;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) != 0) {
      pcVar7 = "DH Public-Key";
      lVar4 = 0;
      goto LAB_004614ca;
    }
    if ((param_3 & 4) == 0) {
      pcVar7 = (char *)0x0;
      lVar4 = 0;
      lVar6 = 0;
      lVar5 = 0;
      goto LAB_00461387;
    }
    pcVar7 = "DH Parameters";
    lVar4 = 0;
    lVar6 = 0;
  }
  else {
    lVar4 = DH_get0_priv_key(param_2);
    if (lVar4 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0xf0,"dh_to_text"
                   );
      ERR_set_error(0x39,0xdd,0);
      return false;
    }
    pcVar7 = "DH Private-Key";
    lVar6 = 0;
    if ((param_3 & 2) != 0) {
LAB_004614ca:
      lVar6 = DH_get0_pub_key(param_2);
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0xf7,
                      "dh_to_text");
        ERR_set_error(0x39,0xdc,0);
        return false;
      }
    }
    if ((param_3 & 4) == 0) {
      lVar5 = 0;
      goto LAB_00461387;
    }
  }
  lVar5 = ossl_dh_get0_params(param_2);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0xfe,"dh_to_text");
    ERR_set_error(0x39,0xe2,0);
    return false;
  }
LAB_00461387:
  a = (BIGNUM *)DH_get0_p(param_2);
  if (a == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x105,"dh_to_text")
    ;
    ERR_set_error(0x39,0x9e,0);
    return false;
  }
  uVar2 = BN_num_bits(a);
  iVar3 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar7,(ulong)uVar2);
  if ((((0 < iVar3) &&
       ((lVar4 == 0 || (iVar3 = print_labeled_bignum(param_1,"private-key:",lVar4), iVar3 != 0))))
      && ((lVar6 == 0 || (iVar3 = print_labeled_bignum(param_1,"public-key:",lVar6), iVar3 != 0))))
     && ((lVar5 == 0 || (iVar3 = ffc_params_to_text(param_1,lVar5), iVar3 != 0)))) {
    lVar4 = DH_get_length(param_2);
    bVar1 = true;
    if (0 < lVar4) {
      iVar3 = BIO_printf(param_1,"recommended-private-length: %ld bits\n");
      bVar1 = 0 < iVar3;
    }
    return bVar1;
  }
  return false;
}

