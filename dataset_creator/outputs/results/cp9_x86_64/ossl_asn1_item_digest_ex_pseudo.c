
int ossl_asn1_item_digest_ex
              (ASN1_ITEM *param_1,EVP_MD *param_2,ASN1_VALUE *param_3,uchar *param_4,uint *param_5,
              undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ENGINE *e;
  undefined8 uVar4;
  EVP_MD *type;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  iVar1 = ASN1_item_i2d(param_3,&local_48,param_1);
  iVar2 = 0;
  if ((-1 < iVar1) && (local_48 != (uchar *)0x0)) {
    lVar3 = EVP_MD_get0_provider(param_2);
    type = param_2;
    if (lVar3 == 0) {
      iVar2 = EVP_MD_get_type(param_2);
      e = ENGINE_get_digest_engine(iVar2);
      if (e == (ENGINE *)0x0) {
        uVar4 = EVP_MD_get0_name(param_2);
        type = (EVP_MD *)EVP_MD_fetch(param_6,uVar4,param_7);
      }
      else {
        ENGINE_finish(e);
      }
    }
    iVar2 = 0;
    if (type != (EVP_MD *)0x0) {
      iVar2 = EVP_Digest(local_48,(long)iVar1,param_4,param_5,type,(ENGINE *)0x0);
    }
    CRYPTO_free(local_48);
    if (type != param_2) {
      EVP_MD_free(type);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

