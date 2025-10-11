
bool ossl_x509_check_cert_time(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ASN1_TIME *pAVar3;
  long lVar4;
  uint uVar5;
  ulong uVar7;
  time_t *t;
  ulong uVar6;
  
  uVar6 = param_3 & 0xffffffff;
  uVar5 = (uint)param_3;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  t = (time_t *)(*(long *)(param_1 + 0x20) + 8);
  if (((uVar7 & 2) == 0) && (t = (time_t *)0x0, (uVar7 & 0x200000) != 0)) {
    return true;
  }
  pAVar3 = (ASN1_TIME *)X509_get0_notBefore(param_2);
  uVar1 = X509_cmp_time(pAVar3,t);
  if (-1 < (int)(~uVar5 | uVar1)) {
    return false;
  }
  if (uVar1 == 0) {
    if ((int)uVar5 < 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    lVar4 = param_2;
    if (param_2 == 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar6);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0xd;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  else {
    if ((int)uVar1 < 1) goto LAB_00590c27;
    if ((int)uVar5 < 0) {
      uVar7 = (ulong)*(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
      uVar7 = param_3 & 0xffffffff;
    }
    lVar4 = param_2;
    if (param_2 == 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar7);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 9;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  if (iVar2 == 0) {
    return false;
  }
LAB_00590c27:
  pAVar3 = (ASN1_TIME *)X509_get0_notAfter(param_2);
  iVar2 = X509_cmp_time(pAVar3,t);
  if ((iVar2 < 1) && ((param_3 >> 0x1f & 1) != 0)) {
    return false;
  }
  if (iVar2 == 0) {
    if ((int)uVar5 < 0) {
      uVar5 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    if (param_2 == 0) {
      param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar5);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 0xe;
  }
  else {
    if (-1 < iVar2) {
      return true;
    }
    if ((int)uVar5 < 0) {
      uVar5 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    if (param_2 == 0) {
      param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar5);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 10;
  }
  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  return iVar2 != 0;
}

