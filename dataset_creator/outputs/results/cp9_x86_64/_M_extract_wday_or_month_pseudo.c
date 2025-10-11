
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_wday_or_month(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, int&, wchar_t const**, unsigned
   long, std::ios_base&, std::_Ios_Iostate&) const */

wstreambuf *
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_wday_or_month
          (undefined8 param_1,wstreambuf *param_2,ulong param_3,long *param_4,undefined8 param_5,
          int *param_6,wstreambuf *param_7,long param_8,long param_9,uint *param_10)

{
  code *pcVar1;
  wchar_t *__s;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ctype *pcVar8;
  size_t sVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar13;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  wstreambuf *pwVar18;
  byte bVar19;
  wstreambuf *pwVar20;
  wstreambuf *pwVar21;
  ulong uVar22;
  wstreambuf *pwVar23;
  long in_FS_OFFSET;
  byte bVar24;
  undefined1 auStack_98 [7];
  byte local_91;
  int local_90;
  int local_8c;
  int *local_88;
  uint *local_80;
  wstreambuf *local_78;
  wstreambuf *local_70;
  long *local_68;
  undefined8 local_60;
  wstreambuf *local_58;
  ulong local_50;
  long local_40;
  undefined1 *puVar12;
  undefined1 *puVar14;
  
  puVar11 = auStack_98;
  local_70 = param_7;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_6;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  pcVar8 = use_facet<std::ctype<wchar_t>>((locale *)(param_9 + 0xd0));
  uVar22 = param_8 * 8 + 0x17;
  puVar12 = auStack_98;
  puVar14 = auStack_98;
  while (puVar12 != auStack_98 + -(uVar22 & 0xfffffffffffff000)) {
    puVar11 = puVar14 + -0x1000;
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    puVar12 = puVar14 + -0x1000;
    puVar14 = puVar14 + -0x1000;
  }
  uVar22 = (ulong)((uint)uVar22 & 0xff0);
  lVar2 = -uVar22;
  puVar15 = puVar11 + lVar2;
  puVar13 = puVar11 + lVar2;
  puVar14 = puVar11 + lVar2;
  if (uVar22 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  pwVar20 = (wstreambuf *)((ulong)(puVar11 + lVar2 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar11 + lVar2 + -8) = 0x6a3218;
  cVar3 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                    ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_58,
                     (istreambuf_iterator *)&local_68);
  if (cVar3 == '\0') {
    pwVar23 = (wstreambuf *)0x0;
    uVar22 = 0;
    *(undefined8 *)(puVar11 + lVar2 + -8) = 0x6a3467;
    iVar7 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_58);
    pwVar21 = local_70;
    pwVar18 = (wstreambuf *)(param_8 * 2);
    if ((wstreambuf *)(param_8 * 2) == (wstreambuf *)0x0) {
      uVar16 = local_50 & 0xffffffff;
      uVar10 = 0;
      pwVar18 = local_58;
    }
    else {
LAB_006a34a9:
      do {
        local_70 = pwVar18;
        local_78 = pwVar20;
        if (**(int **)(pwVar21 + (long)pwVar23 * 8) != iVar7) {
          pcVar1 = *(code **)(*(long *)pcVar8 + 0x30);
          *(undefined8 *)(puVar11 + lVar2 + -8) = 0x6a349a;
          iVar6 = (*pcVar1)(pcVar8);
          if (iVar7 != iVar6) {
            pwVar23 = pwVar23 + 1;
            pwVar20 = local_78;
            pwVar18 = local_70;
            if (local_70 == pwVar23) break;
            goto LAB_006a34a9;
          }
        }
        *(int *)(local_78 + uVar22 * 4) = (int)pwVar23;
        uVar22 = uVar22 + 1;
        pwVar23 = pwVar23 + 1;
        pwVar20 = local_78;
        pwVar18 = local_70;
      } while (local_70 != pwVar23);
      pwVar20 = local_78;
      if (uVar22 == 0) {
        uVar16 = local_50 & 0xffffffff;
        uVar10 = 0;
        uVar22 = 0;
        puVar15 = puVar11 + lVar2;
        pwVar18 = local_58;
        pwVar23 = (wstreambuf *)0x0;
      }
      else {
        local_70 = local_58;
        local_78 = pwVar21;
        *(undefined8 *)(puVar11 + lVar2 + -8) = 0x6a352b;
        wstreambuf::sbumpc(local_58);
        pwVar21 = local_78;
        uVar10 = uVar22 * 8 + 0x17;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        puVar15 = puVar11 + lVar2;
        while (puVar13 != puVar11 + (lVar2 - (uVar10 & 0xfffffffffffff000))) {
          puVar14 = puVar15 + -0x1000;
          *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          puVar13 = puVar15 + -0x1000;
          puVar15 = puVar15 + -0x1000;
        }
        uVar10 = (ulong)((uint)uVar10 & 0xff0);
        lVar2 = -uVar10;
        puVar15 = puVar14 + lVar2;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        }
        local_78 = local_70;
        uVar10 = 0;
        local_70 = (wstreambuf *)((ulong)(puVar14 + lVar2 + 0xf) & 0xfffffffffffffff0);
        do {
          __s = *(wchar_t **)(pwVar21 + (long)*(int *)(pwVar20 + uVar10 * 4) * 8);
          *(undefined8 *)(puVar14 + lVar2 + -8) = 0x6a35ae;
          sVar9 = wcslen(__s);
          *(size_t *)
           ((wstreambuf *)((ulong)(puVar14 + lVar2 + 0xf) & 0xfffffffffffffff0) + uVar10 * 8) =
               sVar9;
          uVar10 = uVar10 + 1;
        } while (uVar22 != uVar10);
        uVar16 = 0xffffffff;
        uVar22 = 1;
        pwVar18 = local_78;
        pwVar23 = local_70;
      }
    }
  }
  else {
    uVar16 = local_50 & 0xffffffff;
    uVar10 = 0;
    uVar22 = 0;
    puVar15 = puVar11 + lVar2;
    pwVar21 = local_70;
    pwVar18 = local_58;
    pwVar23 = (wstreambuf *)0x0;
  }
  bVar24 = (int)local_60 == -1;
  do {
    iVar7 = (int)uVar16;
    cVar3 = iVar7 == -1;
    bVar4 = pwVar18 != (wstreambuf *)0x0 && (bool)cVar3;
    bVar19 = cVar3;
    if ((bool)bVar4) {
      if (*(int **)(pwVar18 + 0x10) < *(int **)(pwVar18 + 0x18)) {
        iVar6 = **(int **)(pwVar18 + 0x10);
      }
      else {
        local_90 = CONCAT31(local_90._1_3_,bVar24);
        local_78 = (wstreambuf *)CONCAT71(local_78._1_7_,cVar3);
        local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,bVar4);
        pcVar1 = *(code **)(*(ulong *)pwVar18 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x6a364c;
        local_8c = iVar7;
        iVar6 = (*pcVar1)();
        bVar24 = (byte)local_90;
        cVar3 = (byte)local_78;
        bVar4 = (byte)local_70;
        iVar7 = local_8c;
      }
      if (iVar6 == -1) {
        local_58 = (wstreambuf *)0x0;
        bVar19 = bVar4;
      }
      else {
        bVar19 = 0;
      }
    }
    bVar5 = local_68 != (long *)0x0 & bVar24;
    bVar4 = bVar24;
    if (bVar5 == 0) {
LAB_006a3282:
      if (bVar19 == bVar4) break;
    }
    else {
      if ((int *)local_68[2] < (int *)local_68[3]) {
        iVar6 = *(int *)local_68[2];
      }
      else {
        local_8c = CONCAT31(local_8c._1_3_,cVar3);
        local_78 = (wstreambuf *)CONCAT71(local_78._1_7_,bVar19);
        local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,bVar5);
        pcVar1 = *(code **)(*local_68 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x6a35f9;
        local_91 = bVar24;
        local_90 = iVar7;
        iVar6 = (*pcVar1)();
        bVar24 = local_91;
        bVar5 = (byte)local_70;
        bVar19 = (byte)local_78;
        cVar3 = (char)local_8c;
        iVar7 = local_90;
      }
      if (iVar6 == -1) {
        local_68 = (long *)0x0;
        bVar4 = bVar5;
        goto LAB_006a3282;
      }
      if (bVar19 == 0) break;
    }
    if ((local_58 != (wstreambuf *)0x0) && (cVar3 != '\0')) {
      if (*(int **)(local_58 + 0x10) < *(int **)(local_58 + 0x18)) {
        iVar7 = **(int **)(local_58 + 0x10);
      }
      else {
        local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,bVar24);
        pcVar1 = *(code **)(*(ulong *)local_58 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x6a3626;
        iVar7 = (*pcVar1)();
        bVar24 = (byte)local_70;
      }
      if (iVar7 == -1) {
        local_58 = (wstreambuf *)0x0;
      }
    }
    if (uVar10 == 0) goto LAB_006a3380;
    uVar16 = 0;
    uVar17 = 0;
    do {
      while (*(ulong *)(pwVar23 + uVar16 * 8) <= uVar22) {
        uVar17 = uVar17 + 1;
LAB_006a32c0:
        uVar16 = uVar16 + 1;
        if (uVar10 <= uVar16) goto LAB_006a32f8;
      }
      if (*(int *)(*(long *)(pwVar21 + (long)*(int *)(pwVar20 + uVar16 * 4) * 8) + uVar22 * 4) ==
          iVar7) goto LAB_006a32c0;
      uVar10 = uVar10 - 1;
      *(int *)(pwVar20 + uVar16 * 4) = *(int *)(pwVar20 + uVar10 * 4);
      *(ulong *)(pwVar23 + uVar16 * 8) = *(ulong *)(pwVar23 + uVar10 * 8);
    } while (uVar16 < uVar10);
LAB_006a32f8:
    if (uVar17 == uVar10) break;
    if (*(ulong *)(local_58 + 0x10) < *(ulong *)(local_58 + 0x18)) {
      *(ulong *)(local_58 + 0x10) = *(ulong *)(local_58 + 0x10) + 4;
      pwVar18 = local_58;
    }
    else {
      local_78 = (wstreambuf *)CONCAT71(local_78._1_7_,bVar24);
      local_70 = local_58;
      pcVar1 = *(code **)(*(ulong *)local_58 + 0x50);
      *(undefined8 *)(puVar15 + -8) = 0x6a341e;
      (*pcVar1)();
      pwVar18 = local_70;
      bVar24 = (byte)local_78;
    }
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    uVar22 = uVar22 + 1;
    uVar16 = 0xffffffff;
  } while( true );
  if (uVar10 == 1) {
    uVar10 = *(ulong *)pwVar23;
joined_r0x006a3505:
    if (uVar10 == uVar22) {
LAB_006a343f:
      iVar7 = *(int *)pwVar20;
      if ((int)param_8 <= iVar7) {
        iVar7 = iVar7 - (int)param_8;
      }
      *local_88 = iVar7;
      goto LAB_006a3387;
    }
  }
  else if (uVar10 == 2) {
    if (*(ulong *)pwVar23 != uVar22) {
      uVar10 = *(ulong *)(pwVar23 + 8);
      goto joined_r0x006a3505;
    }
    goto LAB_006a343f;
  }
LAB_006a3380:
  *local_80 = *local_80 | 4;
LAB_006a3387:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar15 + -8) = &UNK_006a3679;
    __stack_chk_fail_local();
  }
  return local_58;
}

