
void do_i2r_name_constraints_constprop_0_isra_0
               (undefined8 param_1,BIO *param_2,uint param_3,undefined8 param_4)

{
  GENERAL_NAME *gen;
  ASN1_IA5STRING *pAVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  void *ptr;
  void *ptr_00;
  long lVar5;
  int iVar6;
  
  iVar2 = OPENSSL_sk_num();
  if (0 < iVar2) {
    BIO_printf(param_2,"%*s%s:\n",(ulong)param_3,&DAT_008343a2,param_4);
  }
  iVar2 = 0;
  while( true ) {
    iVar3 = OPENSSL_sk_num(param_1);
    if (iVar3 <= iVar2) break;
    if (iVar2 != 0) {
      BIO_puts(param_2,"\n");
    }
    puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar2);
    BIO_printf(param_2,"%*s",(ulong)(param_3 + 2),&DAT_008343a2);
    gen = (GENERAL_NAME *)*puVar4;
    if (gen->type == 7) {
      pAVar1 = (gen->d).rfc822Name;
      iVar3 = pAVar1->length;
      if (iVar3 < 0x10) {
        iVar6 = 4;
        if (iVar3 < 5) {
          iVar6 = iVar3;
        }
        lVar5 = (long)iVar6;
      }
      else {
        lVar5 = 0x10;
        iVar6 = 0x10;
      }
      ptr = (void *)ossl_ipaddr_to_asc(pAVar1->data);
      ptr_00 = (void *)ossl_ipaddr_to_asc(pAVar1->data + lVar5,iVar3 - iVar6);
      if ((ptr != (void *)0x0) && (ptr_00 != (void *)0x0)) {
        BIO_printf(param_2,"IP:%s/%s",ptr,ptr_00);
      }
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
    }
    else {
      GENERAL_NAME_print(param_2,gen);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

