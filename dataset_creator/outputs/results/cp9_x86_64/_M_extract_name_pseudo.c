
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_name(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, int&, wchar_t const**, unsigned
   long, std::ios_base&, std::_Ios_Iostate&) const */

wstreambuf *
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::_M_extract_name
          (undefined8 param_1,wstreambuf *param_2,undefined8 param_3,long *param_4,
          undefined8 param_5,int *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  wchar_t wVar10;
  ctype *pcVar11;
  ulong uVar12;
  size_t sVar13;
  char cVar14;
  byte bVar15;
  wstreambuf *pwVar16;
  undefined1 *puVar17;
  int *piVar19;
  long lVar20;
  wstreambuf *pwVar21;
  byte bVar22;
  wstreambuf *pwVar23;
  long in_FS_OFFSET;
  byte bVar24;
  undefined1 auStack_98 [12];
  int local_8c;
  int *local_88;
  uint *local_80;
  ulong local_78;
  wstreambuf *local_70;
  long *local_68;
  undefined8 local_60;
  wstreambuf *local_58;
  undefined8 local_50;
  long local_40;
  undefined1 *puVar18;
  
  puVar17 = auStack_98;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_6;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  pcVar11 = use_facet<std::ctype<wchar_t>>((locale *)(param_9 + 0xd0));
  uVar12 = param_8 * 4 + 0x17;
  puVar18 = auStack_98;
  puVar5 = auStack_98;
  while (puVar18 != auStack_98 + -(uVar12 & 0xfffffffffffff000)) {
    puVar17 = puVar5 + -0x1000;
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    puVar18 = puVar5 + -0x1000;
    puVar5 = puVar5 + -0x1000;
  }
  uVar12 = (ulong)((uint)uVar12 & 0xff0);
  lVar4 = -uVar12;
  if (uVar12 != 0) {
    *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
  }
  piVar19 = (int *)((ulong)(puVar17 + lVar4 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2d1c;
  cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                    ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_58,
                     (istreambuf_iterator *)&local_68);
  if (cVar6 == '\0') {
    *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2d59;
    iVar8 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_58);
    if (param_8 != 0) {
      lVar20 = 0;
      pwVar23 = (wstreambuf *)0x0;
LAB_006a2d8e:
      do {
        if (**(int **)(param_7 + lVar20 * 8) != iVar8) {
          local_70 = (wstreambuf *)CONCAT44(local_70._4_4_,iVar8);
          pcVar3 = *(code **)(*(long *)pcVar11 + 0x30);
          *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2d7d;
          iVar9 = (*pcVar3)(pcVar11);
          iVar8 = (int)local_70;
          if ((int)local_70 != iVar9) {
            lVar20 = lVar20 + 1;
            if (param_8 == lVar20) break;
            goto LAB_006a2d8e;
          }
        }
        piVar19[(long)pwVar23] = (int)lVar20;
        pwVar23 = pwVar23 + 1;
        lVar20 = lVar20 + 1;
      } while (param_8 != lVar20);
      local_78 = 0;
      while ((wstreambuf *)0x1 < pwVar23) {
        lVar20 = (long)*piVar19;
        pwVar2 = *(wchar_t **)(param_7 + lVar20 * 8);
        *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2dce;
        uVar12 = wcslen(pwVar2);
        pwVar16 = (wstreambuf *)0x1;
        do {
          pwVar2 = *(wchar_t **)(param_7 + (long)piVar19[(long)pwVar16] * 8);
          *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2df1;
          local_70 = pwVar16;
          sVar13 = wcslen(pwVar2);
          if (sVar13 < uVar12) {
            uVar12 = sVar13;
          }
          pwVar16 = local_70 + 1;
        } while (pwVar16 < pwVar23);
        if (*(ulong *)(local_58 + 0x10) < *(ulong *)(local_58 + 0x18)) {
          *(ulong *)(local_58 + 0x10) = *(ulong *)(local_58 + 0x10) + 4;
          pwVar16 = local_58;
        }
        else {
          local_70 = local_58;
          pcVar3 = *(code **)(*(long *)local_58 + 0x50);
          *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2f42;
          (*pcVar3)();
          pwVar16 = local_70;
        }
        local_78 = local_78 + 1;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        if (uVar12 <= local_78) goto LAB_006a2d20;
        if (*(int **)(pwVar16 + 0x10) < *(int **)(pwVar16 + 0x18)) {
          iVar8 = **(int **)(pwVar16 + 0x10);
        }
        else {
          pcVar3 = *(code **)(*(long *)pwVar16 + 0x48);
          *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2f7a;
          iVar8 = (*pcVar3)();
        }
        if (iVar8 == -1) {
          local_58 = (wstreambuf *)0x0;
        }
        cVar14 = local_68 != (long *)0x0 && (int)local_60 == -1;
        cVar6 = (int)local_60 == -1;
        if ((bool)cVar14) {
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar9 = *(int *)local_68[2];
          }
          else {
            local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,cVar14);
            pcVar3 = *(code **)(*local_68 + 0x48);
            *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2f6c;
            iVar9 = (*pcVar3)();
            cVar14 = (byte)local_70;
          }
          cVar6 = '\0';
          if (iVar9 == -1) {
            local_68 = (long *)0x0;
            cVar6 = cVar14;
          }
        }
        if ((iVar8 == -1) == (bool)cVar6) goto LAB_006a2d20;
        pwVar21 = (wstreambuf *)0x0;
        pwVar16 = (wstreambuf *)(local_78 * 4);
        while( true ) {
          iVar9 = -1;
          iVar8 = *(int *)(pwVar16 + *(long *)(param_7 + lVar20 * 8));
          if (local_58 != (wstreambuf *)0x0) {
            if (*(int **)(local_58 + 0x10) < *(int **)(local_58 + 0x18)) {
              iVar9 = **(int **)(local_58 + 0x10);
            }
            else {
              pcVar3 = *(code **)(*(long *)local_58 + 0x48);
              *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2f2a;
              local_70 = pwVar16;
              iVar9 = (*pcVar3)();
              pwVar16 = local_70;
            }
            if (iVar9 == -1) {
              local_58 = (wstreambuf *)0x0;
            }
          }
          if (iVar8 == iVar9) {
            pwVar21 = pwVar21 + 1;
          }
          else {
            pwVar23 = pwVar23 + -1;
            piVar19[(long)pwVar21] = piVar19[(long)pwVar23];
          }
          if (pwVar23 <= pwVar21) break;
          lVar20 = (long)piVar19[(long)pwVar21];
        }
      }
      if (pwVar23 == (wstreambuf *)0x1) {
        local_70 = local_58;
        *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2f99;
        wstreambuf::sbumpc(local_58);
        local_8c = *piVar19;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        pwVar2 = *(wchar_t **)(param_7 + (long)local_8c * 8);
        uVar12 = local_78 + 1;
        *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a2fbd;
        sVar13 = wcslen(pwVar2);
        if (uVar12 < sVar13) {
          bVar24 = (int)local_60 == -1;
          pwVar23 = local_70;
          do {
            bVar22 = 1;
            if (pwVar23 != (wstreambuf *)0x0) {
              if (*(int **)(pwVar23 + 0x10) < *(int **)(pwVar23 + 0x18)) {
                iVar8 = **(int **)(pwVar23 + 0x10);
              }
              else {
                local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,bVar24);
                pcVar3 = *(code **)(*(long *)pwVar23 + 0x48);
                *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a3119;
                iVar8 = (*pcVar3)(pwVar23);
                bVar24 = (byte)local_70;
              }
              bVar22 = 0;
              if (iVar8 == -1) {
                local_58 = (wstreambuf *)0x0;
                bVar22 = 1;
              }
            }
            bVar7 = local_68 != (long *)0x0 & bVar24;
            bVar15 = bVar24;
            if (bVar7 != 0) {
              if ((int *)local_68[2] < (int *)local_68[3]) {
                iVar8 = *(int *)local_68[2];
              }
              else {
                local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,bVar24);
                pcVar3 = *(code **)(*local_68 + 0x48);
                *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a312b;
                iVar8 = (*pcVar3)();
                bVar15 = (byte)local_70;
              }
              if (iVar8 == -1) {
                local_68 = (long *)0x0;
                bVar24 = bVar7;
              }
              else {
                bVar24 = 0;
              }
            }
            if (bVar24 == bVar22) goto LAB_006a2d20;
            wVar1 = pwVar2[uVar12];
            wVar10 = L'\xffffffff';
            if (local_58 != (wstreambuf *)0x0) {
              if (*(wchar_t **)(local_58 + 0x10) < *(wchar_t **)(local_58 + 0x18)) {
                wVar10 = **(wchar_t **)(local_58 + 0x10);
              }
              else {
                local_70 = (wstreambuf *)CONCAT71(local_70._1_7_,bVar15);
                pcVar3 = *(code **)(*(long *)local_58 + 0x48);
                *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a313d;
                wVar10 = (*pcVar3)();
                bVar15 = (byte)local_70;
              }
              if (wVar10 == L'\xffffffff') {
                local_58 = (wstreambuf *)0x0;
              }
            }
            if (wVar1 != wVar10) goto LAB_006a2d20;
            if (*(ulong *)(local_58 + 0x10) < *(ulong *)(local_58 + 0x18)) {
              *(ulong *)(local_58 + 0x10) = *(ulong *)(local_58 + 0x10) + 4;
              pwVar23 = local_58;
              bVar24 = bVar15;
            }
            else {
              local_78 = CONCAT71(local_78._1_7_,bVar15);
              local_70 = local_58;
              pcVar3 = *(code **)(*(long *)local_58 + 0x50);
              *(undefined8 *)(puVar17 + lVar4 + -8) = 0x6a30d9;
              (*pcVar3)(local_58);
              pwVar23 = local_70;
              bVar24 = (byte)local_78;
            }
            uVar12 = uVar12 + 1;
            local_50 = CONCAT44(local_50._4_4_,0xffffffff);
          } while (uVar12 < sVar13);
        }
        if (sVar13 == uVar12) {
          *local_88 = local_8c;
          goto LAB_006a2d27;
        }
      }
    }
  }
LAB_006a2d20:
  *local_80 = *local_80 | 4;
LAB_006a2d27:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + lVar4 + -8) = &UNK_006a314d;
  __stack_chk_fail_local();
}

