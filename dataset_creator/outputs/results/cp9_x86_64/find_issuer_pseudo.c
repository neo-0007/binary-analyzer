
X509 * find_issuer(long param_1,undefined8 param_2,long param_3)

{
  X509 *pXVar1;
  int iVar2;
  int iVar3;
  X509 *b;
  X509 *a;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  X509 *local_40;
  
  iVar6 = 0;
  local_40 = (X509 *)0x0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      b = (X509 *)OPENSSL_sk_value(param_2,iVar6);
      iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,b);
      pXVar1 = local_40;
      if (iVar2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x98);
        if ((*(byte *)(param_3 + 0xe8) & 0x20) == 0) {
LAB_00590e5b:
          iVar7 = 0;
          iVar2 = OPENSSL_sk_num(uVar4);
          if (0 < iVar2) {
            do {
              a = (X509 *)OPENSSL_sk_value(uVar4,iVar7);
              iVar3 = X509_cmp(a,b);
              if (iVar3 == 0) goto LAB_00590e97;
              iVar7 = iVar7 + 1;
            } while (iVar2 != iVar7);
          }
        }
        else {
          iVar2 = OPENSSL_sk_num(uVar4);
          if (iVar2 != 1) {
            uVar4 = *(undefined8 *)(param_1 + 0x98);
            goto LAB_00590e5b;
          }
        }
        iVar2 = ossl_x509_check_cert_time(param_1,b,0xffffffff);
        if (iVar2 != 0) {
          return b;
        }
        pXVar1 = b;
        if (local_40 != (X509 *)0x0) {
          uVar4 = X509_get0_notAfter(local_40);
          uVar5 = X509_get0_notAfter(b);
          iVar2 = ASN1_TIME_compare(uVar5,uVar4);
          if (iVar2 < 1) {
            pXVar1 = local_40;
          }
        }
      }
LAB_00590e97:
      local_40 = pXVar1;
      iVar6 = iVar6 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar6 < iVar2);
  }
  return local_40;
}

