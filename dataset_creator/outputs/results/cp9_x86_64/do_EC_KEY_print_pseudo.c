
undefined8 do_EC_KEY_print(BIO *param_1,EC_KEY *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  point_conversion_form_t pVar3;
  EC_GROUP *x;
  EC_POINT *pEVar4;
  long lVar5;
  BIGNUM *pBVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined8 local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = (void *)0x0;
  if ((param_2 == (EC_KEY *)0x0) || (x = EC_KEY_get0_group(param_2), x == (EC_GROUP *)0x0)) {
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("../crypto/ec/ec_ameth.c",300,"do_EC_KEY_print");
    ERR_set_error(0x10,0xc0102,0);
    goto LAB_004daf6d;
  }
  if (param_4 == 2) {
    lVar5 = 0;
    lVar7 = 0;
    pcVar8 = "ECDSA-Parameters";
LAB_004dae6d:
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) goto LAB_004daf10;
    uVar2 = EC_GROUP_order_bits(x);
    iVar1 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar8,(ulong)uVar2);
    if (((iVar1 < 1) ||
        ((lVar7 != 0 &&
         ((iVar1 = BIO_printf(param_1,"%*spriv:\n",(ulong)param_3,&DAT_008343a2), iVar1 < 1 ||
          (iVar1 = ASN1_buf_print(param_1,local_50,lVar7,param_3 + 4), iVar1 == 0)))))) ||
       ((lVar5 != 0 &&
        ((iVar1 = BIO_printf(param_1,"%*spub:\n",(ulong)param_3,&DAT_008343a2), iVar1 < 1 ||
         (iVar1 = ASN1_buf_print(param_1,local_48,lVar5,param_3 + 4), iVar1 == 0))))))
    goto LAB_004daf10;
    uVar9 = 1;
    iVar1 = ECPKParameters_print(param_1,x,param_3);
    if (iVar1 == 0) goto LAB_004daf10;
  }
  else {
    pEVar4 = EC_KEY_get0_public_key(param_2);
    if (pEVar4 == (EC_POINT *)0x0) {
      lVar5 = 0;
LAB_004dafce:
      if (param_4 == 0) {
        pBVar6 = EC_KEY_get0_private_key(param_2);
        if (pBVar6 == (BIGNUM *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = EC_KEY_priv2buf(param_2,&local_50);
          if (lVar7 == 0) goto LAB_004db0a8;
        }
        pcVar8 = "Private-Key";
      }
      else {
        lVar7 = 0;
        pcVar8 = "Public-Key";
      }
      goto LAB_004dae6d;
    }
    pVar3 = EC_KEY_get_conv_form(param_2);
    lVar5 = EC_KEY_key2buf(param_2,pVar3,&local_48,0);
    if (lVar5 != 0) goto LAB_004dafce;
LAB_004db0a8:
    lVar7 = 0;
LAB_004daf10:
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("../crypto/ec/ec_ameth.c",0x15c,"do_EC_KEY_print");
    ERR_set_error(0x10,0x80010,0);
  }
  CRYPTO_clear_free(local_50,lVar7,"../crypto/ec/ec_ameth.c",0x15d);
  CRYPTO_free(local_48);
LAB_004daf6d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar9;
}

