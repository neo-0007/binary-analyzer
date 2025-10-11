
EVP_PKEY *
pem_read_bio_key(BIO *param_1,long *param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  BIO_METHOD *type;
  BIO *b;
  EVP_PKEY *pEVar7;
  long in_FS_OFFSET;
  int local_a4;
  EVP_PKEY *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  b = (BIO *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
  local_a4 = (int)lVar4;
  if (local_a4 < 0) {
    type = (BIO_METHOD *)BIO_f_readbuffer();
    b = BIO_new(type);
    if (b == (BIO *)0x0) {
      pEVar7 = (EVP_PKEY *)0x0;
      goto LAB_00543136;
    }
    param_1 = BIO_push(b,param_1);
    lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
    local_a4 = (int)lVar4;
  }
  if (param_3 == (code *)0x0) {
    param_3 = PEM_def_callback;
  }
  iVar1 = ossl_pw_set_pem_password_cb(local_78,param_3,param_4);
  if (iVar1 == 0) {
LAB_00543116:
    pEVar7 = (EVP_PKEY *)0x0;
  }
  else {
    iVar1 = ossl_pw_enable_passphrase_caching(local_78);
    if (iVar1 == 0) goto LAB_00543116;
    ERR_set_mark();
    local_80 = (EVP_PKEY *)0x0;
    lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
    if ((int)lVar4 < 0) {
LAB_005432f0:
      lVar4 = BIO_ctrl(param_1,0x80,(long)local_a4,(void *)0x0);
      if (-1 < (int)lVar4) {
        pEVar7 = (EVP_PKEY *)
                 pem_read_bio_key_legacy_constprop_0
                           (param_1,param_2,local_78,param_5,param_6,param_7);
        if (pEVar7 != (EVP_PKEY *)0x0) goto LAB_00543287;
      }
      ERR_clear_last_mark();
      goto LAB_00543116;
    }
    lVar5 = OSSL_DECODER_CTX_new_for_pkey(&local_80,&DAT_007fb1ae,0,0,param_7,param_5,param_6);
    if (lVar5 == 0) goto LAB_005432f0;
    iVar1 = OSSL_DECODER_CTX_set_pem_password_cb(lVar5,ossl_pw_pem_password,local_78);
    if (iVar1 != 0) {
      ERR_set_mark();
      while( true ) {
        iVar1 = (int)lVar4;
        iVar3 = OSSL_DECODER_from_bio(lVar5,param_1);
        if ((iVar3 != 0) && (local_80 != (EVP_PKEY *)0x0)) {
          ERR_pop_to_mark();
          iVar1 = evp_keymgmt_util_has(local_80,param_7);
          if (iVar1 == 0) {
            EVP_PKEY_free(local_80);
            local_80 = (EVP_PKEY *)0x0;
            ERR_new();
            ERR_set_debug("../crypto/pem/pem_pkey.c",0x51,"pem_read_bio_key_decoder");
            ERR_set_error(9,0x7e,0);
          }
          else if (param_2 != (long *)0x0) {
            EVP_PKEY_free((EVP_PKEY *)*param_2);
            *param_2 = (long)local_80;
          }
          goto LAB_00543275;
        }
        lVar4 = BIO_ctrl(param_1,2,0,(void *)0x0);
        if ((int)lVar4 != 0) break;
        lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
        if (((int)lVar4 < 0) || ((int)lVar4 <= iVar1)) break;
        uVar6 = ERR_peek_error();
        uVar2 = (uint)uVar6 & 0x7fffffff;
        if ((uVar6 & 0x80000000) == 0) {
          uVar2 = (uint)uVar6 & 0x7fffff;
        }
        if (uVar2 != 0x8010c) break;
        ERR_pop_to_mark();
        ERR_set_mark();
      }
      ERR_clear_last_mark();
    }
LAB_00543275:
    OSSL_DECODER_CTX_free(lVar5);
    pEVar7 = local_80;
    if (local_80 == (EVP_PKEY *)0x0) goto LAB_005432f0;
LAB_00543287:
    ERR_pop_to_mark();
  }
  ossl_pw_clear_passphrase_data(local_78);
  if (b != (BIO *)0x0) {
    BIO_pop(b);
    BIO_free(b);
  }
LAB_00543136:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

