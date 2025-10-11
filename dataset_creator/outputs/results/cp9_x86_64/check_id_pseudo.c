
bool check_id(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
LAB_005907bd:
    if ((*(long *)(lVar7 + 0x50) != 0) &&
       (iVar3 = X509_check_email(uVar1,*(long *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),0),
       iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 == 0) {
        lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0x3f;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) goto LAB_00590848;
    }
    if ((*(long *)(lVar7 + 0x60) != 0) &&
       (iVar3 = X509_check_ip(uVar1,*(long *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68),0),
       iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar7 = *(long *)(param_1 + 8);
      if (lVar7 == 0) {
        lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar7;
      *(undefined4 *)(param_1 + 0xb0) = 0x40;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      return iVar3 != 0;
    }
    bVar2 = true;
  }
  else {
    iVar3 = OPENSSL_sk_num();
    if (*(void **)(lVar7 + 0x48) != (void *)0x0) {
      CRYPTO_free(*(void **)(lVar7 + 0x48));
      *(undefined8 *)(lVar7 + 0x48) = 0;
    }
    iVar8 = 0;
    if (iVar3 < 1) {
      if (iVar3 == 0) goto LAB_005907bd;
    }
    else {
      do {
        uVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar7 + 0x38),iVar8);
        iVar4 = X509_check_host(uVar1,uVar5,0,*(undefined4 *)(lVar7 + 0x40),lVar7 + 0x48);
        if (0 < iVar4) goto LAB_005907bd;
        iVar8 = iVar8 + 1;
      } while (iVar3 != iVar8);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar6;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar3 != 0) goto LAB_005907bd;
LAB_00590848:
    bVar2 = false;
  }
  return bVar2;
}

