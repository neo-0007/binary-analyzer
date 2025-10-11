
int x509_name_ex_d2i(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,int param_5,
                    int param_6,char param_7,ASN1_TLC *param_8)

{
  uchar *__src;
  stack_st_X509_NAME_ENTRY *psVar1;
  X509_NAME *a;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uchar *local_58;
  ASN1_VALUE *local_50;
  X509_NAME *local_48;
  long local_40;
  
  __src = (uchar *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ASN1_VALUE *)0x0;
  if (0x100000 < param_3) {
    param_3 = 0x100000;
  }
  local_48 = (X509_NAME *)0x0;
  uVar5 = (ulong)(uint)(int)param_7;
  local_58 = __src;
  iVar2 = ASN1_item_ex_d2i(&local_50,&local_58,param_3,(ASN1_ITEM *)local_it_5,param_5,param_6,
                           param_7,param_8);
  if (iVar2 < 1) goto LAB_0059a6e6;
  if (*param_1 != 0) {
    x509_name_ex_free(param_1,0,uVar5,param_8);
  }
  iVar2 = x509_name_ex_new(&local_48,0);
  a = local_48;
  if (iVar2 == 0) {
    if (local_48 != (X509_NAME *)0x0) goto LAB_0059a72d;
  }
  else {
    iVar2 = BUF_MEM_grow(local_48->bytes,(long)local_58 - (long)__src);
    if (CONCAT44(extraout_var,iVar2) != 0) {
      memcpy(a->bytes->data,__src,(long)local_58 - (long)__src);
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(local_50), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        uVar6 = OPENSSL_sk_value(local_50,iVar2);
        for (iVar3 = 0; iVar4 = OPENSSL_sk_num(uVar6), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          lVar7 = OPENSSL_sk_value(uVar6,iVar3);
          psVar1 = a->entries;
          *(int *)(lVar7 + 0x10) = iVar2;
          iVar4 = OPENSSL_sk_push(psVar1,lVar7);
          if (iVar4 == 0) {
            X509_NAME_free(a);
            goto LAB_0059a6a7;
          }
          OPENSSL_sk_set(uVar6,iVar3,0);
        }
      }
      CRYPTO_free(a->canon_enc);
      a->canon_enc = (uchar *)0x0;
      iVar2 = OPENSSL_sk_num(a->entries);
      if (iVar2 == 0) {
        a->canon_enclen = 0;
      }
      else {
        iVar2 = x509_name_canon_part_0(a);
        if (iVar2 == 0) goto LAB_0059a72d;
      }
      OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_free);
      a->modified = 0;
      *param_1 = (long)a;
      *param_2 = local_58;
      iVar2 = 1;
      goto LAB_0059a6e6;
    }
LAB_0059a72d:
    X509_NAME_free(a);
  }
LAB_0059a6a7:
  OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_pop_free);
  ERR_new();
  ERR_set_debug("../crypto/x509/x_name.c",0xcf,"x509_name_ex_d2i");
  ERR_set_error(0xd,0x8010a,0);
  iVar2 = 0;
LAB_0059a6e6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

