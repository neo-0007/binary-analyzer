
ulong check_policy(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  stack_st_X509 *certs;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    certs = *(stack_st_X509 **)(param_1 + 0x98);
    if (*(int *)(param_1 + 0xf8) == 0) {
LAB_0059021d:
      iVar1 = X509_policy_check((X509_POLICY_TREE **)(param_1 + 0xa0),(int *)(param_1 + 0xa8),certs,
                                *(stack_st_ASN1_OBJECT **)(*(long *)(param_1 + 0x20) + 0x30),
                                *(uint *)(*(long *)(param_1 + 0x20) + 0x18));
      if (*(int *)(param_1 + 0xf8) != 0) {
        OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
      }
      if (iVar1 != 0) {
        if (iVar1 == -1) {
          uVar5 = 0;
          for (iVar1 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98)), iVar1 < iVar3;
              iVar1 = iVar1 + 1) {
            lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar1);
            if ((*(byte *)(lVar4 + 0xe9) & 8) != 0) {
              *(int *)(param_1 + 0xac) = iVar1;
              *(long *)(param_1 + 0xb8) = lVar4;
              *(undefined4 *)(param_1 + 0xb0) = 0x2a;
              uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (uVar2 == 0) {
                return (ulong)uVar2;
              }
              uVar5 = 1;
            }
          }
          if ((int)uVar5 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/x509/x509_vfy.c",0x688,"check_policy");
            ERR_set_error(0xb,0xc0103,0);
            return uVar5;
          }
        }
        else {
          if (iVar1 == -2) {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x005903ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            return uVar5;
          }
          if (iVar1 != 1) {
            ERR_new();
            ERR_set_debug("../crypto/x509/x509_vfy.c",0x694,"check_policy");
            ERR_set_error(0xb,0xc0103,0);
            return 0;
          }
          if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 8) != 0) {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            iVar1 = (**(code **)(param_1 + 0x38))(2,param_1);
            return (ulong)(iVar1 != 0);
          }
        }
        goto LAB_005901e2;
      }
    }
    else {
      iVar1 = OPENSSL_sk_push(certs,0);
      if (iVar1 != 0) {
        certs = *(stack_st_X509 **)(param_1 + 0x98);
        goto LAB_0059021d;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x6a7,"check_policy");
    uVar5 = 0xffffffff;
    ERR_set_error(0xb,0xc0100,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
  }
  else {
LAB_005901e2:
    uVar5 = 1;
  }
  return uVar5;
}

