
int addr_validate_path_internal(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int local_4c;
  
  if ((param_2 == 0) || (iVar2 = OPENSSL_sk_num(param_2), iVar2 < 1)) {
    if (param_1 == 0) {
      return 0;
    }
LAB_00605e25:
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  if (param_1 == 0 && param_3 == 0) {
    return 0;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) goto LAB_00605e25;
  if (param_3 == 0) {
    lVar7 = OPENSSL_sk_value(param_2,0);
    param_3 = *(long *)(lVar7 + 0x128);
    if (param_3 == 0) {
      local_4c = 1;
      lVar6 = 0;
      goto LAB_00605e12;
    }
    iVar2 = X509v3_addr_is_canonical(param_3);
    if (iVar2 == 0) goto LAB_00605c97;
    iVar2 = 0;
LAB_00605e84:
    OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
    lVar6 = OPENSSL_sk_dup(param_3);
    local_4c = 1;
    if (lVar6 != 0) {
LAB_00605cf0:
      while( true ) {
        iVar2 = iVar2 + 1;
        iVar3 = OPENSSL_sk_num(param_2);
        if (iVar3 <= iVar2) break;
        lVar7 = OPENSSL_sk_value(param_2,iVar2);
        iVar3 = X509v3_addr_is_canonical(*(undefined8 *)(lVar7 + 0x128));
        if (iVar3 == 0) {
          if (param_1 == 0) goto LAB_0060601e;
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          *(int *)(param_1 + 0xac) = iVar2;
          *(long *)(param_1 + 0xb8) = lVar7;
          local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
          if (local_4c == 0) goto LAB_00605e12;
        }
        if (*(long *)(lVar7 + 0x128) == 0) {
          iVar4 = 0;
          iVar3 = OPENSSL_sk_num(lVar6);
          if (0 < iVar3) {
            do {
              lVar8 = OPENSSL_sk_value(lVar6,iVar4);
              if (**(int **)(lVar8 + 8) != 0) goto LAB_00605ddb;
              iVar4 = iVar4 + 1;
              iVar3 = OPENSSL_sk_num(lVar6);
            } while (iVar4 < iVar3);
          }
        }
        else {
          OPENSSL_sk_set_cmp_func(*(long *)(lVar7 + 0x128),IPAddressFamily_cmp);
          for (iVar3 = 0; iVar4 = OPENSSL_sk_num(lVar6), iVar3 < iVar4; iVar3 = iVar3 + 1) {
            lVar8 = OPENSSL_sk_value(lVar6,iVar3);
            uVar5 = OPENSSL_sk_find(*(undefined8 *)(lVar7 + 0x128),lVar8);
            lVar9 = OPENSSL_sk_value(*(undefined8 *)(lVar7 + 0x128),uVar5);
            if (lVar9 == 0) {
              if (**(int **)(lVar8 + 8) == 1) goto LAB_00605ddb;
            }
            else if (**(int **)(lVar9 + 8) == 1) {
              if (**(int **)(lVar8 + 8) != 0) {
                iVar4 = X509v3_addr_get_afi(lVar8);
                lVar10 = 4;
                if (iVar4 != 1) {
                  lVar10 = (ulong)(iVar4 == 2) << 4;
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 8) + 8);
                lVar1 = *(long *)(*(long *)(lVar9 + 8) + 8);
                if (((lVar8 != 0) && (lVar8 != lVar1)) &&
                   ((lVar1 == 0 || (iVar4 = addr_contains_part_0(lVar1,lVar8,lVar10), iVar4 == 0))))
                {
                  if (param_1 != 0) {
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = iVar2;
                    *(long *)(param_1 + 0xb8) = lVar7;
                    local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
                    if (local_4c != 0) goto LAB_00605d8d;
                    goto LAB_00605e12;
                  }
                  goto LAB_0060601e;
                }
              }
              OPENSSL_sk_set(lVar6,iVar3,lVar9);
            }
LAB_00605d8d:
          }
        }
      }
      lVar8 = *(long *)(lVar7 + 0x128);
      iVar3 = 0;
      if (lVar8 != 0) goto LAB_0060604a;
      goto LAB_00605e12;
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_addr.c",0x4b5,"addr_validate_path_internal");
    ERR_set_error(0x22,0xc0100,0);
    if (param_1 == 0) goto LAB_00605f00;
  }
  else {
    lVar7 = 0;
    iVar2 = -1;
    iVar3 = X509v3_addr_is_canonical(param_3);
    if (iVar3 != 0) goto LAB_00605e84;
    if (param_1 == 0) goto LAB_00605f00;
LAB_00605c97:
    *(undefined4 *)(param_1 + 0xb0) = 0x29;
    *(int *)(param_1 + 0xac) = iVar2;
    *(long *)(param_1 + 0xb8) = lVar7;
    local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
    if (local_4c == 0) goto LAB_00605f00;
    OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
    lVar6 = OPENSSL_sk_dup(param_3);
    if (lVar6 != 0) goto LAB_00605cf0;
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_addr.c",0x4b5,"addr_validate_path_internal");
    ERR_set_error(0x22,0xc0100,0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
LAB_00605f00:
  OPENSSL_sk_free(0);
  return 0;
LAB_0060604a:
  iVar4 = OPENSSL_sk_num(lVar8);
  if (iVar4 <= iVar3) goto LAB_00605e12;
  lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar7 + 0x128),iVar3);
  if ((**(int **)(lVar8 + 8) == 0) && (iVar4 = OPENSSL_sk_find(lVar6,lVar8), -1 < iVar4)) {
    if (param_1 == 0) goto LAB_0060601e;
    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
    *(int *)(param_1 + 0xac) = iVar2;
    *(long *)(param_1 + 0xb8) = lVar7;
    local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
    if (local_4c == 0) goto LAB_00605e12;
  }
  lVar8 = *(long *)(lVar7 + 0x128);
  iVar3 = iVar3 + 1;
  goto LAB_0060604a;
LAB_00605ddb:
  if (param_1 == 0) goto LAB_0060601e;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(int *)(param_1 + 0xac) = iVar2;
  *(long *)(param_1 + 0xb8) = lVar7;
  local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
  if (local_4c == 0) goto LAB_00605e12;
  goto LAB_00605cf0;
LAB_0060601e:
  local_4c = 0;
LAB_00605e12:
  OPENSSL_sk_free(lVar6);
  return local_4c;
}

