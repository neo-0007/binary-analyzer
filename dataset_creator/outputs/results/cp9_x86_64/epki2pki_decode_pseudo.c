
uint epki2pki_decode(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5,code *param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  BIO *a;
  X509_SIG *a_00;
  undefined8 uVar3;
  long lVar4;
  PKCS8_PRIV_KEY_INFO *p8;
  uchar *ptr;
  long len;
  long in_FS_OFFSET;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  int local_54c;
  long *local_548;
  uchar *local_540;
  X509_ALGOR *local_538;
  ulong local_530;
  undefined4 *local_528;
  uchar *local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  char local_448 [1032];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_548 = (long *)0x0;
  local_540 = (uchar *)0x0;
  local_538 = (X509_ALGOR *)0x0;
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if (a != (BIO *)0x0) {
    uVar2 = 1;
    iVar1 = asn1_d2i_read_bio(a,&local_548);
    BIO_free(a);
    if (-1 < iVar1) {
      ptr = (uchar *)local_548[1];
      len = *local_548;
      local_540 = ptr;
      CRYPTO_free(local_548);
      ERR_set_mark();
      a_00 = d2i_X509_SIG((X509_SIG **)0x0,&local_540,len);
      if (a_00 == (X509_SIG *)0x0) {
        ERR_pop_to_mark();
      }
      else {
        local_530 = 0;
        ERR_clear_last_mark();
        iVar1 = (*param_6)(local_448,0x400,&local_530,0,param_7);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/encode_decode/decode_epki2pki.c",0x60,
                        "epki2pki_decode");
          ERR_set_error(0x39,0x9f,0);
          uVar2 = 0;
        }
        else {
          local_520 = (uchar *)0x0;
          local_54c = 0;
          X509_SIG_get0(a_00,&local_538,&local_528);
          uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
          lVar4 = PKCS12_pbe_crypt_ex(local_538,local_448,local_530 & 0xffffffff,
                                      *(undefined8 *)(local_528 + 2),*local_528,&local_520,
                                      &local_54c,0,uVar3,0);
          if (lVar4 != 0) {
            CRYPTO_free(ptr);
            len = (long)local_54c;
            ptr = local_520;
          }
          uVar2 = (uint)(lVar4 != 0);
          local_538 = (X509_ALGOR *)0x0;
        }
        X509_SIG_free(a_00);
      }
      ERR_set_mark();
      local_540 = ptr;
      p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_540,len);
      ERR_pop_to_mark();
      if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
        iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_538,p8);
        if (iVar1 != 0) {
          local_520 = (uchar *)CONCAT44(local_520._4_4_,2);
          OBJ_obj2txt(local_448,0x32,local_538->algorithm,0);
          OSSL_PARAM_construct_utf8_string(&local_588,"data-type",local_448,0);
          local_518 = local_588;
          uStack_510 = uStack_580;
          local_508 = local_578;
          uStack_500 = uStack_570;
          local_4f8 = local_568;
          OSSL_PARAM_construct_utf8_string(&local_588,"data-structure","PrivateKeyInfo",0);
          local_4d0 = local_568;
          local_4f0 = local_588;
          uStack_4e8 = uStack_580;
          local_4e0 = local_578;
          uStack_4d8 = uStack_570;
          OSSL_PARAM_construct_octet_string(&local_588,"data",ptr,len);
          local_4c8 = local_588;
          uStack_4c0 = uStack_580;
          local_4b8 = local_578;
          uStack_4b0 = uStack_570;
          local_4a8 = local_568;
          OSSL_PARAM_construct_int(&local_588,"type",&local_520);
          local_480 = local_568;
          local_4a0 = local_588;
          uStack_498 = uStack_580;
          local_490 = local_578;
          uStack_488 = uStack_570;
          OSSL_PARAM_construct_end(&local_588);
          local_458 = local_568;
          local_478 = local_588;
          uStack_470 = uStack_580;
          local_468 = local_578;
          uStack_460 = uStack_570;
          uVar2 = (*param_4)(&local_518,param_5);
        }
      }
      PKCS8_PRIV_KEY_INFO_free(p8);
      CRYPTO_free(ptr);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

