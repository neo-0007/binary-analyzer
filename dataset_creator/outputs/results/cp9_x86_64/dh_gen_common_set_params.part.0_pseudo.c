
ulong dh_gen_common_set_params_part_0(long param_1,undefined8 param_2)

{
  char *__s1;
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = OSSL_PARAM_locate_const(param_2,"type");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 4) {
LAB_0046ce8a:
      ERR_new();
      uVar5 = 0x217;
      goto LAB_0046ce9b;
    }
    __s1 = *(char **)(lVar3 + 0x10);
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = strcmp(__s1,"default");
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x3c) = (uint)(iVar2 == 0x1000);
    }
    else {
      iVar2 = ossl_dh_gen_type_name2id(__s1,iVar2);
      *(int *)(param_1 + 0x3c) = iVar2;
      if (iVar2 == -1) goto LAB_0046ce8a;
    }
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"group");
  if (lVar3 != 0) {
    if (((*(int *)(lVar3 + 8) == 4) && (*(long *)(lVar3 + 0x10) != 0)) &&
       (lVar3 = ossl_ffc_name_to_dh_named_group(), lVar3 != 0)) {
      iVar2 = ossl_ffc_named_group_get_uid(lVar3);
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 != 0) goto LAB_0046cf3e;
    }
    ERR_new();
    uVar5 = 0x224;
LAB_0046ce9b:
    ERR_set_debug("../providers/implementations/keymgmt/dh_kmgmt.c",uVar5,"dh_gen_common_set_params"
                 );
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
LAB_0046cf3e:
  lVar3 = OSSL_PARAM_locate_const(param_2,"pbits");
  if ((lVar3 != 0) && (uVar4 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x18), (int)uVar4 == 0)) {
    return uVar4;
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"priv_len");
  if (lVar3 == 0) {
    return 1;
  }
  iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x4c);
  return (ulong)(iVar2 != 0);
}

