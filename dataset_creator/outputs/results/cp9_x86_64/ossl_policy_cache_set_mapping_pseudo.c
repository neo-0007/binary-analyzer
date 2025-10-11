
undefined4 ossl_policy_cache_set_mapping(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = 0;
  plVar1 = *(long **)(param_1 + 0x108);
  iVar4 = OPENSSL_sk_num(param_2);
  if (iVar4 == 0) {
LAB_00603448:
    uVar8 = 0xffffffff;
  }
  else {
    for (; iVar4 = OPENSSL_sk_num(param_2), iVar7 < iVar4; iVar7 = iVar7 + 1) {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
      iVar4 = OBJ_obj2nid((ASN1_OBJECT *)puVar5[1]);
      if ((iVar4 == 0x2ea) || (iVar4 = OBJ_obj2nid((ASN1_OBJECT *)*puVar5), iVar4 == 0x2ea))
      goto LAB_00603448;
      puVar6 = (uint *)ossl_policy_cache_find_data(plVar1,*puVar5);
      if (puVar6 == (uint *)0x0) {
        if ((uint *)*plVar1 != (uint *)0x0) {
          puVar6 = (uint *)ossl_policy_data_new(0,*puVar5,*(uint *)*plVar1 & 0x10);
          if (puVar6 == (uint *)0x0) goto LAB_00603470;
          lVar2 = plVar1[1];
          uVar3 = *(undefined8 *)(*plVar1 + 0x10);
          *puVar6 = *puVar6 | 6;
          *(undefined8 *)(puVar6 + 4) = uVar3;
          iVar4 = OPENSSL_sk_push(lVar2,puVar6);
          if (iVar4 != 0) goto LAB_00603383;
          ossl_policy_data_free(puVar6);
          uVar8 = 0;
          goto LAB_0060344e;
        }
      }
      else {
        *puVar6 = *puVar6 | 1;
LAB_00603383:
        iVar4 = OPENSSL_sk_push(*(undefined8 *)(puVar6 + 6),puVar5[1]);
        if (iVar4 == 0) {
LAB_00603470:
          uVar8 = 0;
          goto LAB_0060344e;
        }
        puVar5[1] = 0;
      }
    }
    uVar8 = 1;
  }
LAB_0060344e:
  OPENSSL_sk_pop_free(param_2,POLICY_MAPPING_free);
  return uVar8;
}

