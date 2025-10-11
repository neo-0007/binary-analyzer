
int X509_CRL_sort(X509_CRL *crl)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar1._0_4_ = crl->idp_flags;
  uVar1._4_4_ = crl->idp_reasons;
  OPENSSL_sk_sort(uVar1);
  while( true ) {
    uVar3._0_4_ = crl->idp_flags;
    uVar3._4_4_ = crl->idp_reasons;
    iVar4 = OPENSSL_sk_num(uVar3);
    if (iVar4 <= iVar6) break;
    uVar2._0_4_ = crl->idp_flags;
    uVar2._4_4_ = crl->idp_reasons;
    lVar5 = OPENSSL_sk_value(uVar2,iVar6);
    *(int *)(lVar5 + 0x34) = iVar6;
    iVar6 = iVar6 + 1;
  }
  crl->sha1_hash[8] = '\x01';
  crl->sha1_hash[9] = '\0';
  crl->sha1_hash[10] = '\0';
  crl->sha1_hash[0xb] = '\0';
  return 1;
}

