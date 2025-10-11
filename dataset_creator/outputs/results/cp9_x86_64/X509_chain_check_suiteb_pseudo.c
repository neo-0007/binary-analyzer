
ulong X509_chain_check_suiteb(uint *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_4;
  if ((param_4 & 0x30000) == 0) {
LAB_0058c0a8:
    uVar6 = 0;
    goto LAB_0058c07e;
  }
  bVar8 = param_2 == 0;
  if (bVar8) {
    param_2 = OPENSSL_sk_value(param_3,0);
  }
  uVar7 = (uint)bVar8;
  uVar4 = X509_get0_pubkey(param_2);
  if (param_3 == 0) {
    uVar6 = check_suite_b(uVar4,0xffffffff,&local_48);
    goto LAB_0058c07e;
  }
  lVar5 = X509_get_version(param_2);
  if (lVar5 == 2) {
    uVar6 = check_suite_b(uVar4,0xffffffff);
    if ((int)uVar6 == 0) {
      for (; iVar2 = OPENSSL_sk_num(param_3), (int)uVar7 < iVar2; uVar7 = uVar7 + 1) {
        uVar3 = X509_get_signature_nid(param_2);
        param_2 = OPENSSL_sk_value(param_3,uVar7);
        lVar5 = X509_get_version(param_2);
        if (lVar5 != 2) {
          uVar6 = 0x38;
          goto LAB_0058c072;
        }
        uVar4 = X509_get0_pubkey(param_2);
        uVar6 = check_suite_b(uVar4,uVar3,&local_48);
        if ((int)uVar6 != 0) goto LAB_0058c150;
      }
      uVar3 = X509_get_signature_nid(param_2);
      uVar6 = check_suite_b(uVar4,uVar3,&local_48);
      if ((int)uVar6 == 0) goto LAB_0058c0a8;
LAB_0058c150:
      if ((int)uVar6 - 0x3bU < 2) {
        uVar1 = (uVar7 - 1) + (uint)(uVar7 == 0);
        goto LAB_0058c164;
      }
    }
    else {
      uVar7 = 0;
      uVar1 = 0;
      if ((int)uVar6 - 0x3bU < 2) {
LAB_0058c164:
        uVar7 = uVar1;
        if ((int)uVar6 == 0x3c) {
          uVar6 = uVar6 & 0xffffffff;
          if (local_48 != param_4) {
            uVar6 = 0x3d;
          }
        }
        else {
          uVar6 = 0x3b;
        }
      }
    }
  }
  else {
    uVar7 = 0;
    uVar6 = 0x38;
  }
LAB_0058c072:
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar7;
  }
LAB_0058c07e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

