
long * ossl_policy_level_add_node(long param_1,long param_2,long param_3,ulong *param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((param_4[1] != 0) && (param_4[1] <= *param_4)) {
    return (long *)0x0;
  }
  plVar2 = (long *)CRYPTO_zalloc(0x18,"../crypto/x509/pcy_node.c",0x47);
  if (plVar2 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/pcy_node.c",0x49,"ossl_policy_level_add_node");
    ERR_set_error(0x22,0xc0100,0);
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
joined_r0x0061b989:
    if (param_5 != 0) {
      uVar3 = param_4[4];
      if (uVar3 == 0) {
        uVar3 = OPENSSL_sk_new_null();
        param_4[4] = uVar3;
        if (uVar3 == 0) {
          ERR_new(0);
          uVar5 = 0x66;
          goto LAB_0061b9a1;
        }
      }
      iVar1 = OPENSSL_sk_push(uVar3,param_2);
      if (iVar1 == 0) {
        ERR_new();
        uVar5 = 0x6a;
        goto LAB_0061b9a1;
      }
    }
    *param_4 = *param_4 + 1;
    plVar6 = plVar2;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = plVar2;
        goto joined_r0x0061b989;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        lVar4 = ossl_policy_node_cmp_new();
        *(long *)(param_1 + 8) = lVar4;
        if (lVar4 != 0) goto LAB_0061b923;
        ERR_new(0);
        uVar5 = 0x58;
      }
      else {
LAB_0061b923:
        iVar1 = OPENSSL_sk_push(lVar4,plVar2);
        if (iVar1 != 0) goto joined_r0x0061b989;
        ERR_new();
        uVar5 = 0x5c;
      }
LAB_0061b9a1:
      ERR_set_debug("../crypto/x509/pcy_node.c",uVar5,"ossl_policy_level_add_node");
      ERR_set_error(0x22,0xc0100,0);
    }
    plVar6 = (long *)0x0;
    ossl_policy_node_free(plVar2);
  }
  return plVar6;
}

