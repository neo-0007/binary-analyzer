
bool dsa2text_encode(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  BIO *bio;
  long lVar3;
  BIGNUM *a;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  long local_40;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x36c,
                  "dsa2text_encode");
    ERR_set_error(0x39,0x80106,0);
    return false;
  }
  bio = (BIO *)ossl_bio_new_from_core_bio();
  if (bio == (BIO *)0x0) {
    return false;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x12d,"dsa_to_text"
                 );
    ERR_set_error(0x39,0xc0102,0);
    bVar6 = false;
    goto LAB_00461d28;
  }
  lVar3 = 0;
  if ((param_5 & 1) == 0) {
    local_40 = 0;
    if ((param_5 & 2) != 0) {
      pcVar5 = "Public-Key";
LAB_00461d6f:
      lVar4 = DSA_get0_pub_key(param_3);
      if (lVar4 == 0) {
        ERR_new();
        bVar6 = false;
        ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x142,
                      "dsa_to_text");
        ERR_set_error(0x39,0xdc,0);
        goto LAB_00461d28;
      }
      goto LAB_00461c7a;
    }
    lVar4 = 0;
    if ((param_5 & 4) != 0) {
      pcVar5 = "DSA-Parameters";
      goto LAB_00461c7e;
    }
    pcVar5 = (char *)0x0;
  }
  else {
    local_40 = DSA_get0_priv_key(param_3);
    if (local_40 == 0) {
      ERR_new();
      bVar6 = false;
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x13b,
                    "dsa_to_text");
      ERR_set_error(0x39,0xdd,0);
      goto LAB_00461d28;
    }
    lVar4 = 0;
    pcVar5 = "Private-Key";
    if ((param_5 & 2) != 0) goto LAB_00461d6f;
LAB_00461c7a:
    if ((param_5 & 4) != 0) {
LAB_00461c7e:
      lVar3 = ossl_dsa_get0_params(param_3);
      if (lVar3 == 0) {
        ERR_new();
        bVar6 = false;
        ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x149,
                      "dsa_to_text");
        ERR_set_error(0x39,0xe2,0);
        goto LAB_00461d28;
      }
    }
  }
  a = (BIGNUM *)DSA_get0_p(param_3);
  if (a == (BIGNUM *)0x0) {
    ERR_new();
    bVar6 = false;
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x150,"dsa_to_text"
                 );
    ERR_set_error(0x39,0x9e,0);
  }
  else {
    uVar1 = BN_num_bits(a);
    iVar2 = BIO_printf(bio,"%s: (%d bit)\n",pcVar5,(ulong)uVar1);
    if (((iVar2 < 1) ||
        ((local_40 != 0 && (iVar2 = print_labeled_bignum(bio,"priv:",local_40), iVar2 == 0)))) ||
       ((lVar4 != 0 && (iVar2 = print_labeled_bignum(bio,"pub: ",lVar4), iVar2 == 0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      if (lVar3 != 0) {
        iVar2 = ffc_params_to_text(bio,lVar3);
        bVar6 = iVar2 != 0;
      }
    }
  }
LAB_00461d28:
  BIO_free(bio);
  return bVar6;
}

