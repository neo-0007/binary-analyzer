
undefined8 check_crl_time(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  ASN1_TIME *pAVar3;
  long lVar4;
  time_t *t;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  t = (time_t *)(*(long *)(param_1 + 0x20) + 8);
  if (((uVar1 & 2) == 0) && (t = (time_t *)0x0, (uVar1 & 0x200000) != 0)) {
    return 1;
  }
  pAVar3 = (ASN1_TIME *)X509_CRL_get0_lastUpdate(param_2);
  iVar2 = X509_cmp_time(pAVar3,t);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0xf;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    lVar4 = X509_CRL_get0_nextUpdate(param_2);
    if (lVar4 == 0) goto LAB_00591ef6;
    pAVar3 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
    iVar2 = X509_cmp_time(pAVar3,t);
    if (iVar2 == 0) goto LAB_00591ee0;
    if (-1 < iVar2) goto LAB_00591ef6;
LAB_00591eb0:
    if ((*(byte *)(param_1 + 0xd0) & 2) != 0) goto LAB_00591e55;
    if (param_3 == 0) {
      return 0;
    }
LAB_00591ec0:
    *(undefined4 *)(param_1 + 0xb0) = 0xc;
LAB_00591eea:
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    if (iVar2 < 1) {
      lVar4 = X509_CRL_get0_nextUpdate(param_2);
      if (lVar4 != 0) {
        pAVar3 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
        iVar2 = X509_cmp_time(pAVar3,t);
        if (iVar2 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          goto LAB_00591ee0;
        }
        if (iVar2 < 0) goto LAB_00591eb0;
      }
    }
    else {
      if (param_3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xb0) = 0xb;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = X509_CRL_get0_nextUpdate(param_2);
      if (lVar4 == 0) goto LAB_00591ef6;
      pAVar3 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
      iVar2 = X509_cmp_time(pAVar3,t);
      if (iVar2 == 0) {
LAB_00591ee0:
        *(undefined4 *)(param_1 + 0xb0) = 0x10;
        goto LAB_00591eea;
      }
      if (-1 < iVar2) goto LAB_00591ef6;
      if ((*(byte *)(param_1 + 0xd0) & 2) == 0) goto LAB_00591ec0;
    }
LAB_00591e55:
    if (param_3 == 0) {
      return 1;
    }
  }
LAB_00591ef6:
  *(undefined8 *)(param_1 + 200) = 0;
  return 1;
}

