
undefined8 internal_verify(long param_1)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  EVP_PKEY *r;
  X509 *pXVar4;
  int iVar5;
  X509 *pXVar6;
  bool bVar7;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar5 = iVar1 + -1;
  pXVar3 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
  *(int *)(param_1 + 0xac) = iVar5;
  pXVar6 = (X509 *)0x0;
  if (((*(int *)(param_1 + 0xf8) == 0) &&
      (iVar2 = ossl_x509_likely_issued(pXVar3,pXVar3), pXVar6 = pXVar3, iVar2 != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0)) {
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      pXVar4 = pXVar3;
      if (pXVar3 == (X509 *)0x0) {
        pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(X509 **)(param_1 + 0xb8) = pXVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar5 = iVar1 + -2;
      *(int *)(param_1 + 0xac) = iVar5;
      pXVar3 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
    }
  }
  if (iVar5 < 0) {
    return 1;
  }
  do {
    if (pXVar6 != (X509 *)0x0) {
      iVar1 = iVar5 + 1;
      if (pXVar6 == pXVar3) {
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x40) == 0) ||
           (((ulong)pXVar6[1].name & 0x2000) == 0)) goto LAB_00591ada;
        iVar1 = iVar5;
        if (((ulong)pXVar6[1].name & 0x10) != 0) {
          iVar2 = ossl_x509_signing_allowed(pXVar6,pXVar3);
          goto joined_r0x00591b5f;
        }
      }
      else {
        iVar2 = ossl_x509_signing_allowed(pXVar6,pXVar3);
joined_r0x00591b5f:
        if (iVar2 != 0) {
          *(int *)(param_1 + 0xac) = iVar1;
          *(X509 **)(param_1 + 0xb8) = pXVar6;
          *(int *)(param_1 + 0xb0) = iVar2;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      r = (EVP_PKEY *)X509_get0_pubkey(pXVar6);
      if (r == (EVP_PKEY *)0x0) {
        *(int *)(param_1 + 0xac) = iVar1;
        *(X509 **)(param_1 + 0xb8) = pXVar6;
        *(undefined4 *)(param_1 + 0xb0) = 6;
      }
      else {
        iVar1 = X509_verify(pXVar3,r);
        if (0 < iVar1) goto LAB_00591ada;
        *(int *)(param_1 + 0xac) = iVar5;
        pXVar4 = pXVar3;
        if (pXVar3 == (X509 *)0x0) {
          pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
        }
        *(X509 **)(param_1 + 0xb8) = pXVar4;
        *(undefined4 *)(param_1 + 0xb0) = 7;
      }
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
LAB_00591ada:
    iVar1 = ossl_x509_check_cert_time(param_1,pXVar3,iVar5);
    if (iVar1 == 0) {
      return 0;
    }
    *(X509 **)(param_1 + 0xc0) = pXVar6;
    *(X509 **)(param_1 + 0xb8) = pXVar3;
    *(int *)(param_1 + 0xac) = iVar5;
    iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    bVar7 = iVar5 == 0;
    iVar5 = iVar5 + -1;
    if (bVar7) {
      return 1;
    }
    pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
    pXVar6 = pXVar3;
    pXVar3 = pXVar4;
  } while( true );
}

