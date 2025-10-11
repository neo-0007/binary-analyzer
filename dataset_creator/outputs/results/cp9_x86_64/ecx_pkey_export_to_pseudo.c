
undefined4 ecx_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar4 = OSSL_PARAM_BLD_new();
  if (lVar4 == 0) {
    return 0;
  }
  iVar2 = OSSL_PARAM_BLD_push_octet_string
                    (lVar4,&DAT_007da6af,lVar1 + 0x11,*(undefined8 *)(lVar1 + 0x58));
  if (iVar2 == 0) {
LAB_00505220:
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x50) == 0) {
      uVar6 = 2;
    }
    else {
      uVar6 = 3;
      iVar2 = OSSL_PARAM_BLD_push_octet_string
                        (lVar4,&DAT_007c4ad5,*(long *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
      if (iVar2 == 0) goto LAB_00505220;
    }
    uVar5 = OSSL_PARAM_BLD_to_param(lVar4);
    uVar3 = (*param_3)(param_2,uVar6,uVar5);
  }
  OSSL_PARAM_BLD_free(lVar4);
  OSSL_PARAM_free(uVar5);
  return uVar3;
}

