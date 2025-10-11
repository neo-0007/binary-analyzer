
int x509_pubkey_ex_d2i_ex
              (ASN1_VALUE **param_1,uchar **param_2,long param_3,undefined8 param_4,int param_5,
              int param_6,char param_7,ASN1_TLC *param_8,undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  X509_ALGOR *pXVar4;
  ASN1_BIT_STRING *pAVar5;
  uchar *puVar6;
  undefined8 uVar7;
  ASN1_VALUE *pAVar8;
  uchar *ptr;
  long in_FS_OFFSET;
  uchar *local_88;
  long local_80;
  char local_78 [56];
  long local_40;
  
  pAVar8 = *param_1;
  puVar6 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pAVar8 == (ASN1_VALUE *)0x0) {
    iVar1 = x509_pubkey_ex_new_ex(param_1,param_4,param_9,param_10);
    if (iVar1 == 0) goto LAB_0059b041;
    pAVar8 = *param_1;
  }
  if (*(long *)pAVar8 == 0) {
    pXVar4 = X509_ALGOR_new();
    *(X509_ALGOR **)pAVar8 = pXVar4;
    if (pXVar4 != (X509_ALGOR *)0x0) goto LAB_0059ae7c;
LAB_0059b00e:
    ERR_new();
    uVar7 = 0x90;
LAB_0059b026:
    ERR_set_debug("../crypto/x509/x_pubkey.c",uVar7,"x509_pubkey_ex_d2i_ex");
    iVar1 = 0;
    ERR_set_error(0xd,0xc0100,0);
    goto LAB_0059b041;
  }
LAB_0059ae7c:
  if (*(long *)(pAVar8 + 8) == 0) {
    pAVar5 = ASN1_BIT_STRING_new();
    *(ASN1_BIT_STRING **)(pAVar8 + 8) = pAVar5;
    if (pAVar5 == (ASN1_BIT_STRING *)0x0) goto LAB_0059b00e;
  }
  iVar1 = ASN1_item_ex_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_18,param_5,param_6,param_7,
                           param_8);
  if (iVar1 < 1) goto LAB_0059b041;
  lVar3 = (long)*param_2 - (long)puVar6;
  if (lVar3 == 0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/x509/x_pubkey.c",0x9c,"x509_pubkey_ex_d2i_ex");
    ERR_set_error(0xd,0xc0103,0);
    goto LAB_0059b041;
  }
  pAVar8 = *param_1;
  EVP_PKEY_free(*(EVP_PKEY **)(pAVar8 + 0x10));
  *(undefined8 *)(pAVar8 + 0x10) = 0;
  ERR_set_mark();
  iVar1 = x509_pubkey_decode(pAVar8 + 0x10,pAVar8);
  if (iVar1 == -1) {
    ERR_clear_last_mark();
    ptr = (uchar *)0x0;
    lVar3 = 0;
  }
  else if ((iVar1 < 1) && (((byte)pAVar8[0x28] & 1) == 0)) {
    local_80 = lVar3;
    if (param_6 == 0) {
      ptr = (uchar *)0x0;
    }
    else {
      puVar6 = (uchar *)CRYPTO_memdup(puVar6,lVar3,"../crypto/x509/x_pubkey.c");
      if (puVar6 == (uchar *)0x0) {
        ERR_new();
        uVar7 = 0xc2;
        goto LAB_0059b026;
      }
      *puVar6 = '0';
      ptr = puVar6;
    }
    local_88 = puVar6;
    iVar2 = OBJ_obj2txt(local_78,0x32,(ASN1_OBJECT *)**(undefined8 **)pAVar8,0);
    if (iVar2 < 1) {
      ERR_clear_last_mark();
      lVar3 = 0;
    }
    else {
      lVar3 = OSSL_DECODER_CTX_new_for_pkey
                        (pAVar8 + 0x10,"DER","SubjectPublicKeyInfo",local_78,0x86,
                         *(undefined8 *)(pAVar8 + 0x18),*(undefined8 *)(pAVar8 + 0x20));
      if (((lVar3 == 0) || (iVar2 = OSSL_DECODER_from_data(lVar3,&local_88,&local_80), iVar2 == 0))
         || (local_80 == 0)) goto LAB_0059b0ec;
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0xe0,"x509_pubkey_ex_d2i_ex");
      ERR_set_error(0xd,0x72,0);
    }
  }
  else {
    ptr = (uchar *)0x0;
    lVar3 = 0;
LAB_0059b0ec:
    ERR_pop_to_mark();
    iVar1 = 1;
  }
  OSSL_DECODER_CTX_free(lVar3);
  CRYPTO_free(ptr);
LAB_0059b041:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

