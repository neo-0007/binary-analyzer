
undefined8 X509v3_addr_is_canonical(long param_1)

{
  undefined1 *__s2;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  size_t __n;
  long in_FS_OFFSET;
  int local_a4;
  undefined1 local_88 [16];
  undefined1 local_78 [15];
  undefined1 local_69 [17];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_00605c10:
    uVar12 = 1;
  }
  else {
    iVar4 = 0;
    do {
      iVar3 = OPENSSL_sk_num(param_1);
      if (iVar3 + -1 <= iVar4) {
        local_a4 = 0;
        goto LAB_006059af;
      }
      puVar6 = (undefined8 *)OPENSSL_sk_value(param_1,iVar4);
      puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar4 + 1);
      iVar3 = *(int *)*puVar6;
      iVar5 = *(int *)*puVar7;
      iVar2 = iVar5;
      if (iVar3 <= iVar5) {
        iVar2 = iVar3;
      }
      iVar2 = bcmp(*(void **)((int *)*puVar6 + 2),*(void **)((int *)*puVar7 + 2),(long)iVar2);
      if (iVar2 == 0) {
        iVar2 = iVar3 - iVar5;
      }
      iVar4 = iVar4 + 1;
    } while (iVar2 < 0);
LAB_00605b70:
    uVar12 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_006059af:
  iVar4 = OPENSSL_sk_num(param_1);
  if (iVar4 <= local_a4) goto LAB_00605c10;
  iVar3 = 4;
  lVar8 = OPENSSL_sk_value(param_1,local_a4);
  iVar4 = X509v3_addr_get_afi(lVar8);
  if (iVar4 != 1) {
    iVar3 = (uint)(iVar4 == 2) << 4;
  }
  if ((lVar8 == 0) || (piVar9 = *(int **)(lVar8 + 8), piVar9 == (int *)0x0)) goto LAB_00605b70;
  if (*piVar9 != 0) {
    if (*piVar9 != 1) goto LAB_00605b70;
    uVar12 = *(undefined8 *)(piVar9 + 2);
    iVar4 = OPENSSL_sk_num(uVar12);
    if (iVar4 == 0) goto LAB_00605b70;
    __n = (size_t)iVar3;
    iVar4 = 0;
    while( true ) {
      iVar5 = OPENSSL_sk_num(uVar12);
      if (iVar5 + -1 <= iVar4) break;
      iVar5 = iVar4 + 1;
      piVar9 = (int *)OPENSSL_sk_value(uVar12,iVar4);
      uVar10 = OPENSSL_sk_value(uVar12,iVar5);
      iVar4 = extract_min_max(piVar9,local_88,local_78,iVar3);
      if (iVar4 == 0) goto LAB_00605b70;
      __s2 = local_69 + 1;
      iVar4 = extract_min_max(uVar10,__s2,local_58,iVar3);
      if (iVar4 == 0) goto LAB_00605b70;
      iVar4 = bcmp(local_88,__s2,__n);
      if (-1 < iVar4) goto LAB_00605b70;
      iVar4 = bcmp(local_88,local_78,__n);
      if (0 < iVar4) goto LAB_00605b70;
      iVar4 = bcmp(__s2,local_58,__n);
      if ((0 < iVar4) || (iVar3 == 0)) goto LAB_00605b70;
      puVar11 = __s2 + __n;
      do {
        cVar1 = puVar11[-1];
        puVar11[-1] = cVar1 + -1;
        if (cVar1 != '\0') break;
        puVar11 = puVar11 + -1;
      } while (local_69 + (__n - (iVar3 - 1)) != puVar11);
      iVar4 = bcmp(local_78,__s2,__n);
      if (-1 < iVar4) goto LAB_00605b70;
      iVar4 = iVar5;
      if (*piVar9 == 1) {
        iVar5 = range_should_be_prefix(local_88,local_78,iVar3);
        if (-1 < iVar5) goto LAB_00605b70;
      }
    }
    iVar4 = OPENSSL_sk_num(uVar12);
    piVar9 = (int *)OPENSSL_sk_value(uVar12,iVar4 + -1);
    if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
      iVar4 = extract_min_max(piVar9,local_88,local_78,iVar3);
      if (iVar4 == 0) goto LAB_00605b70;
      iVar4 = bcmp(local_88,local_78,(long)iVar3);
      if (0 < iVar4) goto LAB_00605b70;
      iVar4 = range_should_be_prefix(local_88,local_78,iVar3);
      if (-1 < iVar4) goto LAB_00605b70;
    }
  }
  local_a4 = local_a4 + 1;
  goto LAB_006059af;
}

