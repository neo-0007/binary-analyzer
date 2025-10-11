
ulong do_x509_check(X509 *param_1,char *param_2,size_t param_3,uint param_4,int param_5,
                   undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  GENERAL_NAMES *a;
  int *piVar4;
  X509_NAME *name;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  code *local_68;
  undefined4 local_54;
  int local_3c;
  
  uVar9 = param_4 & 0xffff7fff;
  if (param_5 == 1) {
    local_54 = 0x16;
    local_68 = equal_email;
    local_3c = 0x30;
LAB_00588b0a:
    if (param_3 == 0) {
      param_3 = strlen(param_2);
    }
    a = (GENERAL_NAMES *)X509_get_ext_d2i(param_1,0x55,(int *)0x0,(int *)0x0);
    if (a != (GENERAL_NAMES *)0x0) goto LAB_00588b39;
  }
  else {
    local_54 = 4;
    local_68 = equal_case;
    local_3c = 0;
    if (param_5 != 2) goto LAB_00588b0a;
    if (param_3 < 2) {
      local_68 = equal_nocase;
      local_54 = 0x16;
      if ((param_4 & 2) == 0) {
        local_68 = equal_wildcard;
      }
      local_3c = 0xd;
      goto LAB_00588b0a;
    }
    if (*param_2 == '.') {
      uVar9 = uVar9 | 0x8000;
    }
    if ((uVar9 & 2) == 0) {
      a = (GENERAL_NAMES *)X509_get_ext_d2i(param_1,0x55,(int *)0x0,(int *)0x0);
      local_68 = equal_wildcard;
    }
    else {
      a = (GENERAL_NAMES *)X509_get_ext_d2i(param_1,0x55,(int *)0x0,(int *)0x0);
      local_68 = equal_nocase;
    }
    local_54 = 0x16;
    local_3c = 0xd;
    if (a == (GENERAL_NAMES *)0x0) goto LAB_00588c54;
LAB_00588b39:
    bVar1 = false;
    for (iVar7 = 0; iVar3 = OPENSSL_sk_num(a), iVar7 < iVar3; iVar7 = iVar7 + 1) {
      piVar4 = (int *)OPENSSL_sk_value(a,iVar7);
      iVar3 = *piVar4;
      if (iVar3 == 2) {
        if (param_5 == 2) {
LAB_00588b53:
          uVar8 = *(undefined8 *)(piVar4 + 2);
LAB_00588b57:
          uVar2 = do_check_string(uVar8,local_54,local_68,uVar9,param_2,param_3,param_6);
          if (uVar2 != 0) {
            GENERAL_NAMES_free(a);
            return (ulong)uVar2;
          }
          bVar1 = true;
        }
      }
      else if (iVar3 < 3) {
        if (iVar3 == 0) {
          iVar3 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(piVar4 + 2));
          if (((iVar3 == 0x4b8) && (param_5 == 1)) && (**(int **)(*(long *)(piVar4 + 2) + 8) == 0xc)
             ) {
            local_54 = 0;
            uVar8 = *(undefined8 *)(*(int **)(*(long *)(piVar4 + 2) + 8) + 2);
            goto LAB_00588b57;
          }
        }
        else if ((iVar3 == 1) && (param_5 == 1)) goto LAB_00588b53;
      }
      else if ((iVar3 == 7) && (param_5 == 7)) goto LAB_00588b53;
    }
    GENERAL_NAMES_free(a);
    if ((bVar1) && ((uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (local_3c == 0) {
    return 0;
  }
LAB_00588c54:
  if ((uVar9 & 0x20) == 0) {
    name = X509_get_subject_name(param_1);
    iVar7 = -1;
    while (iVar7 = X509_NAME_get_index_by_NID(name,local_3c,iVar7), -1 < iVar7) {
      ne = X509_NAME_get_entry(name,iVar7);
      pAVar5 = X509_NAME_ENTRY_get_data(ne);
      uVar6 = do_check_string(pAVar5,0xffffffff,local_68,uVar9,param_2,param_3,param_6);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
  }
  return 0;
}

