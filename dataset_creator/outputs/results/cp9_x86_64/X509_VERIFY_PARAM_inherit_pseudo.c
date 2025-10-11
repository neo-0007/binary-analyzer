
/* WARNING: Type propagation algorithm not settling */

int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to,X509_VERIFY_PARAM *from)

{
  int iVar1;
  time_t tVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  stack_st_ASN1_OBJECT *policies;
  long lVar11;
  
  if (from == (X509_VERIFY_PARAM *)0x0) {
    return 1;
  }
  uVar7 = (uint)to->inh_flags | (uint)from->inh_flags;
  if ((uVar7 & 0x10) != 0) {
    *(undefined4 *)&to->inh_flags = 0;
  }
  if ((uVar7 & 8) != 0) {
    return 1;
  }
  iVar8 = from->purpose;
  iVar1 = from->trust;
  if ((uVar7 & 1) == 0) {
    if ((uVar7 & 2) != 0) {
      bVar6 = false;
      goto LAB_005960b6;
    }
    if ((iVar8 != 0) && (to->purpose == 0)) {
      to->purpose = iVar8;
    }
    iVar8 = from->depth;
    if ((iVar1 == 0) || (to->trust != 0)) {
      if (iVar8 != -1) goto LAB_00596060;
LAB_0059606a:
      iVar1 = *(int *)&from->field_0x2c;
joined_r0x0059606e:
      if (iVar1 != -1) goto LAB_00596070;
    }
    else {
      to->trust = iVar1;
      if (iVar8 != -1) {
LAB_00596060:
        if (to->depth != -1) goto LAB_0059606a;
        iVar1 = *(int *)&from->field_0x2c;
        to->depth = iVar8;
        goto joined_r0x0059606e;
      }
      if (*(int *)&from->field_0x2c == -1) {
        bVar6 = false;
        goto LAB_00595f68;
      }
LAB_00596070:
      if (*(int *)&to->field_0x2c == -1) {
        iVar8 = *(int *)&from->field_0x2c;
        bVar6 = false;
        goto LAB_00595f65;
      }
    }
    uVar10 = to->flags;
    bVar6 = false;
joined_r0x00596084:
    if ((uVar10 & 2) == 0) {
      bVar5 = false;
      goto LAB_00595f77;
    }
    if ((uVar7 & 4) == 0) {
      policies = from->policies;
      to->flags = uVar10 | from->flags;
    }
    else {
      to->flags = 0;
      policies = from->policies;
      to->flags = from->flags;
    }
LAB_00595fa9:
    if (policies == (stack_st_ASN1_OBJECT *)0x0) {
LAB_005961c0:
      iVar8 = (int)from[1].check_time;
      if (iVar8 == 0) {
        if (from[1].name != (char *)0x0) {
          pcVar9 = to[1].name;
          if (bVar6) goto LAB_005961ff;
          goto LAB_00595fdc;
        }
LAB_0059623b:
        uVar10 = from[1].flags;
        if (uVar10 != 0) {
          if (!bVar6) goto LAB_00595ff1;
          goto LAB_0059624d;
        }
      }
      else {
        if (!bVar6) goto LAB_005960e8;
        pcVar9 = from[1].name;
        *(int *)&to[1].check_time = iVar8;
        if (pcVar9 != (char *)0x0) {
          pcVar9 = to[1].name;
          goto LAB_005961ff;
        }
        uVar10 = from[1].flags;
        if (uVar10 == 0) {
          lVar11 = *(long *)&from[1].depth;
          if (lVar11 == 0) {
            return 1;
          }
          goto LAB_0059617a;
        }
LAB_0059624d:
        uVar4._0_4_ = from[1].purpose;
        uVar4._4_4_ = from[1].trust;
        iVar8 = X509_VERIFY_PARAM_set1_email(to,uVar10,uVar4);
        if (iVar8 == 0) {
          return 0;
        }
      }
      lVar11 = *(long *)&from[1].depth;
      if (lVar11 == 0) {
        return 1;
      }
      if (bVar6) goto LAB_0059617a;
    }
    else {
      if ((bVar6) || (to->policies == (stack_st_ASN1_OBJECT *)0x0)) {
        iVar8 = X509_VERIFY_PARAM_set1_policies(to,policies);
        if (iVar8 == 0) {
          return 0;
        }
        goto LAB_005961c0;
      }
      if ((int)from[1].check_time == 0) {
        pcVar9 = from[1].name;
      }
      else {
LAB_005960e8:
        pcVar9 = from[1].name;
        if ((int)to[1].check_time == 0) {
          *(int *)&to[1].check_time = (int)from[1].check_time;
        }
      }
      if (pcVar9 != (char *)0x0) {
        pcVar9 = to[1].name;
LAB_00595fdc:
        if (pcVar9 == (char *)0x0) {
          bVar6 = false;
          pcVar9 = (char *)0x0;
LAB_005961ff:
          OPENSSL_sk_pop_free(pcVar9,str_free);
          to[1].name = (char *)0x0;
          if (from[1].name != (char *)0x0) {
            pcVar9 = (char *)OPENSSL_sk_deep_copy(from[1].name,str_copy,str_free);
            to[1].name = pcVar9;
            if (pcVar9 == (char *)0x0) {
              return 0;
            }
          }
          goto LAB_0059623b;
        }
      }
      uVar10 = from[1].flags;
      if (uVar10 != 0) {
LAB_00595ff1:
        if (to[1].flags == 0) {
          bVar6 = false;
          goto LAB_0059624d;
        }
      }
      if (*(long *)&from[1].depth == 0) {
        return 1;
      }
    }
    if (*(long *)&to[1].depth != 0) {
      return 1;
    }
  }
  else {
    if ((uVar7 & 2) == 0) {
      if (iVar8 != 0) {
        to->purpose = iVar8;
      }
      iVar8 = from->depth;
      if (iVar1 != 0) {
        to->trust = iVar1;
      }
      if (iVar8 != -1) {
        to->depth = iVar8;
      }
      iVar8 = *(int *)&from->field_0x2c;
      bVar6 = true;
      if (iVar8 != -1) {
LAB_00595f65:
        *(int *)&to->field_0x2c = iVar8;
      }
LAB_00595f68:
      uVar10 = to->flags;
      goto joined_r0x00596084;
    }
    bVar6 = true;
LAB_005960b6:
    to->trust = iVar1;
    iVar1 = from->depth;
    to->purpose = iVar8;
    bVar5 = true;
    to->depth = iVar1;
    *(undefined4 *)&to->field_0x2c = *(undefined4 *)&from->field_0x2c;
    uVar10 = to->flags;
LAB_00595f77:
    tVar2 = from->check_time;
    uVar10 = uVar10 & 0xfffffffffffffffd;
    to->flags = uVar10;
    to->check_time = tVar2;
    if ((uVar7 & 4) != 0) {
      to->flags = 0;
      uVar10 = 0;
    }
    policies = from->policies;
    to->flags = uVar10 | from->flags;
    if (!bVar5) goto LAB_00595fa9;
    iVar8 = X509_VERIFY_PARAM_set1_policies(to,policies);
    if (iVar8 == 0) {
      return 0;
    }
    *(int *)&to[1].check_time = (int)from[1].check_time;
    OPENSSL_sk_pop_free(to[1].name,str_free);
    to[1].name = (char *)0x0;
    if (from[1].name != (char *)0x0) {
      pcVar9 = (char *)OPENSSL_sk_deep_copy(from[1].name,str_copy,str_free);
      to[1].name = pcVar9;
      if (pcVar9 == (char *)0x0) {
        return 0;
      }
    }
    uVar3._0_4_ = from[1].purpose;
    uVar3._4_4_ = from[1].trust;
    iVar8 = X509_VERIFY_PARAM_set1_email(to,from[1].flags,uVar3);
    if (iVar8 == 0) {
      return 0;
    }
  }
  lVar11 = *(long *)&from[1].depth;
LAB_0059617a:
  iVar8 = X509_VERIFY_PARAM_set1_ip(to,lVar11,from[1].policies);
  return (int)(iVar8 != 0);
}

