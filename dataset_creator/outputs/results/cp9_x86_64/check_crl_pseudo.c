
bool check_crl(long param_1,X509_CRL *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  EVP_PKEY *r;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 == 0) {
    if (iVar3 < iVar2 + -1) {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3 + 1);
    }
    else {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
      iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar5,lVar5);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x21;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return false;
        }
      }
    }
    if (lVar5 == 0) {
      return true;
    }
  }
  lVar1._0_4_ = param_2[1].idp_flags;
  lVar1._4_4_ = param_2[1].idp_reasons;
  if (lVar1 == 0) {
    if ((*(ulong *)(lVar5 + 0xe8) & 0x200000002) == 2) {
      *(undefined4 *)(param_1 + 0xb0) = 0x23;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xd0);
    if ((uVar4 & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2c;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
      uVar4 = *(uint *)(param_1 + 0xd0);
    }
    if (((uVar4 & 8) == 0) &&
       (iVar3 = check_crl_path(param_1,*(undefined8 *)(param_1 + 0xc0)), iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x36;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
    if (((ulong)param_2[1].akid & 2) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
  }
  if (((*(byte *)(param_1 + 0xd0) & 0x40) == 0) &&
     (iVar3 = check_crl_time(param_1,param_2,1), iVar3 == 0)) {
    return false;
  }
  r = (EVP_PKEY *)X509_get0_pubkey(lVar5);
  if (r == (EVP_PKEY *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
  }
  else {
    iVar3 = X509_CRL_check_suiteb(param_2,r,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
    iVar3 = X509_CRL_verify(param_2,r);
    if (0 < iVar3) {
      return true;
    }
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  return iVar3 != 0;
}

