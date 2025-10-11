
bool X509v3_addr_canonize(undefined8 param_1)

{
  undefined1 *__s1;
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  IPAddressOrRange *a;
  IPAddressOrRange *a_00;
  undefined1 *puVar6;
  int *piVar7;
  size_t __n;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_c4;
  int local_a0;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [15];
  undefined1 auStack_69 [17];
  undefined1 local_58 [24];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar3 = OPENSSL_sk_num(param_1);
    if (iVar3 <= iVar8) {
      OPENSSL_sk_set_cmp_func(param_1,IPAddressFamily_cmp);
      OPENSSL_sk_sort(param_1);
      iVar8 = X509v3_addr_is_canonical(param_1);
      bVar10 = iVar8 != 0;
LAB_00606325:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return bVar10;
    }
    lVar5 = OPENSSL_sk_value(param_1,iVar8);
    if (**(int **)(lVar5 + 8) == 1) {
      iVar9 = 4;
      iVar3 = X509v3_addr_get_afi(lVar5);
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 8) + 8);
      if (iVar3 != 1) {
        iVar9 = (uint)(iVar3 == 2) << 4;
      }
      __n = (size_t)iVar9;
      OPENSSL_sk_sort(uVar2);
      local_c4 = 0;
      while (iVar3 = OPENSSL_sk_num(uVar2), local_c4 < iVar3 + -1) {
        a = (IPAddressOrRange *)OPENSSL_sk_value(uVar2,local_c4);
        iVar3 = local_c4 + 1;
        a_00 = (IPAddressOrRange *)OPENSSL_sk_value(uVar2,iVar3);
        iVar4 = extract_min_max(a,local_88,local_78,iVar9);
        if (iVar4 == 0) goto LAB_00606323;
        __s1 = auStack_69 + 1;
        iVar4 = extract_min_max(a_00,__s1,local_58,iVar9);
        if ((((iVar4 == 0) || (iVar4 = bcmp(local_88,local_78,__n), 0 < iVar4)) ||
            (iVar4 = bcmp(__s1,local_58,__n), 0 < iVar4)) ||
           (iVar4 = bcmp(local_78,__s1,__n), -1 < iVar4)) goto LAB_00606323;
        if (iVar9 == 0) {
LAB_006062f0:
          iVar4 = range_should_be_prefix(local_88,local_58,iVar9);
          if (iVar4 < 0) {
            iVar4 = make_addressRange_part_0(&local_90,local_88,local_58,iVar9);
          }
          else {
            iVar4 = make_addressPrefix(&local_90,local_88,iVar4);
          }
          if (iVar4 == 0) goto LAB_00606323;
          local_a0 = local_c4;
          OPENSSL_sk_set(uVar2,local_c4,local_90);
          OPENSSL_sk_delete(uVar2,iVar3);
          IPAddressOrRange_free(a);
          IPAddressOrRange_free(a_00);
        }
        else {
          puVar6 = __s1 + __n;
          do {
            cVar1 = puVar6[-1];
            puVar6[-1] = cVar1 + -1;
            if (cVar1 != '\0') break;
            puVar6 = puVar6 + -1;
          } while (puVar6 != auStack_69 + (__n - (iVar9 - 1)));
          iVar4 = bcmp(local_78,__s1,__n);
          local_a0 = iVar3;
          if (iVar4 == 0) goto LAB_006062f0;
        }
        local_c4 = local_a0;
      }
      iVar3 = OPENSSL_sk_num(uVar2);
      piVar7 = (int *)OPENSSL_sk_value(uVar2,iVar3 + -1);
      if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
        iVar3 = extract_min_max(piVar7,auStack_69 + 1,local_58,iVar9);
        if ((iVar3 == 0) || (iVar3 = bcmp(auStack_69 + 1,local_58,(long)iVar9), 0 < iVar3)) {
LAB_00606323:
          bVar10 = false;
          goto LAB_00606325;
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

