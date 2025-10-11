
ulong nscd_gethst_r(undefined8 param_1,undefined8 param_2,uint param_3,ulong *param_4,long param_5,
                   ulong param_6,undefined8 *param_7,undefined4 *param_8)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 *puVar17;
  size_t sVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  void *pvVar23;
  size_t sVar24;
  int iVar25;
  void *pvVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  undefined1 auStack_158 [8];
  ulong local_150;
  size_t local_148;
  ulong local_140;
  ulong local_138;
  long local_130;
  uint local_124;
  ulong local_120;
  ulong *local_118;
  ulong local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  void *local_f0;
  undefined4 *local_e8;
  size_t local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  uint local_c0;
  int local_bc;
  uint local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  size_t local_80;
  ulong local_78;
  long local_70;
  long local_40;
  
  puVar21 = auStack_158;
  local_c8 = param_7;
  local_e8 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = param_6;
  local_118 = param_4;
  local_f8 = param_5;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c0 = param_3;
  if (__nss_have_localdomain < 0) {
LAB_00776ea0:
    plVar9 = (long *)__nscd_get_map_ref(0xd,"hosts",&__hst_map_handle,&local_ac);
    local_bc = 0;
    local_124 = local_c0 & 0xfffffffd;
    local_130 = 4;
    if (local_124 != 4) {
      local_130 = 0x10;
    }
    local_108 = local_130 * 2;
    local_150 = CONCAT44((int)local_130,(uint)(local_124 != 4) * 8 + 2);
    local_110 = (ulong)(-(int)local_f8 & 7);
    local_140 = local_f8 + local_110;
    puVar21 = auStack_158;
    lStack_100 = local_108;
LAB_00776f48:
    uVar3 = local_c0;
    uVar7 = local_d0;
    uVar5 = local_d8;
    if (plVar9 == (long *)0xffffffffffffffff) goto LAB_00777131;
    *(undefined8 *)(puVar21 + -8) = 0x776f74;
    lVar10 = __nscd_cache_search(uVar3,uVar7,uVar5,plVar9,0x20);
    if (lVar10 == 0) goto LAB_00777131;
    lVar15 = *plVar9;
    uStack_a0 = *(undefined8 *)(lVar10 + 0x20);
    local_a8 = *(undefined8 *)(lVar10 + 0x18);
    uVar5 = uStack_a0;
    local_98 = *(undefined8 *)(lVar10 + 0x28);
    uStack_90 = *(undefined8 *)(lVar10 + 0x30);
    uVar7 = uStack_90;
    uStack_a0._4_4_ = (int)((ulong)uStack_a0 >> 0x20);
    uStack_90._0_4_ = (int)*(undefined8 *)(lVar10 + 0x30);
    uStack_a0 = uVar5;
    uStack_90 = uVar7;
    if (*(uint *)(lVar15 + 8) != local_ac) {
      uVar30 = 0xfffffffe;
      goto LAB_0077709d;
    }
    pvVar26 = (void *)(lVar10 + 0x38);
    uVar29 = (long)(int)uStack_a0 + (long)pvVar26;
    local_f0 = (void *)(uVar29 + (long)uStack_a0._4_4_ * 4);
    local_e0 = (long)((int)uStack_90 * 4);
    if (local_124 != 4) {
      local_98._4_4_ = (int)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
      if (local_98._4_4_ == 4) {
        local_f0 = (void *)((long)local_f0 + (long)((int)uStack_90 * 4));
      }
      local_e0 = (long)((int)uStack_90 << 4);
    }
    local_138 = lVar10 + 0x18 + (long)*(int *)(lVar10 + 4);
    if (local_138 < (long)local_f0 + local_e0) {
      uVar30 = 0xffffffff;
      goto LAB_0077709d;
    }
    iVar8 = -1;
LAB_00777037:
    puVar6 = local_118;
    uVar30 = (ulong)local_a8._4_4_;
    *local_c8 = 0;
    if (local_a8._4_4_ == -1) {
      __nss_not_use_nscd_hosts = 1;
      goto LAB_00777080;
    }
    if (local_a8._4_4_ != 1) {
      uVar30 = 0;
      *local_e8 = uStack_90._4_4_;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
      goto LAB_00777080;
    }
    sVar24 = (size_t)(int)uStack_a0;
    uVar19 = (ulong)(-((int)local_f8 + (int)(sVar24 + local_110)) & 7);
    local_148 = (long)((int)uStack_90 << 4);
    if (local_120 <
        (long)((int)uStack_90 << 4) + (long)(uStack_a0._4_4_ + 2 + (int)uStack_90) * 8 +
        sVar24 + local_110 + uVar19) {
LAB_007771e9:
      uVar30 = 0x22;
      *local_e8 = 0xffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    }
    else {
      lVar10 = (long)(uStack_a0._4_4_ + 1) * 8;
      puVar2 = (ulong *)(local_140 + lVar10);
      local_118[3] = (ulong)puVar2;
      uVar19 = (long)(puVar2 + ((int)uStack_90 + 1)) + uVar19 + sVar24;
      local_118[2] = local_150;
      *local_118 = (ulong)(puVar2 + ((int)uStack_90 + 1));
      local_118[1] = local_140;
      puVar12 = puVar2;
      if (0 < (int)uStack_90) {
        uVar27 = (ulong)(int)uStack_90;
        if ((int)uStack_90 == 1) {
          uVar14 = 0;
          uVar28 = uVar19;
LAB_0077730b:
          puVar2[uVar14] = uVar28;
        }
        else {
          puVar11 = (ulong *)(lVar10 + local_110 + local_f8);
          puVar12 = puVar11;
          uVar28 = uVar19;
          uVar14 = local_130 + uVar19;
          do {
            puVar13 = puVar12 + 2;
            *puVar12 = uVar28;
            puVar12[1] = uVar14;
            puVar12 = puVar13;
            uVar28 = uVar28 + local_108;
            uVar14 = uVar14 + lStack_100;
          } while (puVar11 + (uVar27 & 0xfffffffffffffffe) != puVar13);
          uVar14 = uVar27 & 0xfffffffffffffffe;
          uVar28 = local_130 * uVar14 + uVar19;
          if (uVar14 != uVar27) goto LAB_0077730b;
        }
        uVar19 = uVar19 + uVar27 * local_130;
        puVar12 = puVar2 + (long)((int)uStack_90 + 1) + -1;
      }
      *puVar12 = 0;
      if (pvVar26 == (void *)0x0) {
        local_80 = sVar24;
        local_88 = *local_118;
        if (uStack_a0._4_4_ < 1) {
          iVar22 = 3;
          iVar25 = 2;
          puVar20 = puVar21;
          if (local_124 == 4) goto LAB_00777414;
LAB_007773c0:
          puVar21 = puVar20;
          if (local_98._4_4_ == 4) {
            sVar18 = (size_t)((int)uStack_90 << 2);
            for (puVar20 = puVar21; puVar20 != puVar21 + -(sVar18 + 0x17 & 0xfffffffffffff000);
                puVar20 = puVar20 + -0x1000) {
              *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
            }
            uVar27 = (ulong)((uint)(sVar18 + 0x17) & 0xff0);
            lVar10 = -uVar27;
            puVar21 = puVar20 + lVar10;
            if (uVar27 != 0) {
              *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
            }
            sVar24 = sVar24 + sVar18;
            (&local_80)[uVar30 * 2] = sVar18;
            (&local_88)[uVar30 * 2] = (ulong)(puVar20 + lVar10 + 0xf) & 0xfffffffffffffff0;
            uVar30 = (ulong)iVar25;
            iVar25 = iVar22;
          }
          (&local_88)[uVar30 * 2] = *puVar2;
          (&local_80)[uVar30 * 2] = local_148;
          lVar10 = local_148 + sVar24;
        }
        else {
          local_70 = (long)uStack_a0._4_4_ * 4;
          for (puVar20 = puVar21; puVar20 != puVar21 + -(local_70 + 0x17U & 0xfffffffffffff000);
              puVar20 = puVar20 + -0x1000) {
            *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
          }
          uVar30 = (ulong)((uint)(local_70 + 0x17U) & 0xff0);
          lVar10 = -uVar30;
          puVar21 = puVar20 + lVar10;
          if (uVar30 != 0) {
            *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
          }
          sVar24 = sVar24 + local_70;
          iVar25 = 3;
          uVar29 = (ulong)(puVar20 + lVar10 + 0xf) & 0xfffffffffffffff0;
          iVar22 = 4;
          uVar30 = 2;
          local_78 = uVar29;
          puVar20 = puVar20 + lVar10;
          if (local_124 != 4) goto LAB_007773c0;
LAB_00777414:
          (&local_88)[uVar30 * 2] = *puVar2;
          (&local_80)[uVar30 * 2] = (long)((int)uStack_90 * 4);
          lVar10 = (long)((int)uStack_90 * 4) + sVar24;
        }
        *(undefined8 *)(puVar21 + -8) = 0x777441;
        lVar15 = __readvall(iVar8,&local_88,iVar25);
        if (lVar10 == lVar15) goto LAB_00777487;
      }
      else {
        pvVar23 = (void *)*local_118;
        *(undefined8 *)(puVar21 + -8) = 0x77746d;
        memcpy(pvVar23,pvVar26,sVar24);
        sVar24 = local_e0;
        pvVar23 = local_f0;
        pvVar26 = *(void **)puVar6[3];
        *(undefined8 *)(puVar21 + -8) = 0x777487;
        memcpy(pvVar26,pvVar23,sVar24);
LAB_00777487:
        puVar4 = (undefined8 *)local_118[1];
        if ((long)uStack_a0._4_4_ < 1) {
          sVar18 = 0;
          sVar24 = local_e0;
          puVar17 = puVar4;
        }
        else {
          lVar10 = 0;
          sVar18 = 0;
          do {
            uVar30 = (ulong)*(uint *)(uVar29 + lVar10 * 4);
            puVar4[lVar10] = uVar19;
            lVar10 = lVar10 + 1;
            uVar19 = uVar19 + uVar30;
            sVar18 = sVar18 + uVar30;
          } while (lVar10 != uStack_a0._4_4_);
          sVar24 = local_e0 + sVar18;
          puVar17 = puVar4 + lVar10;
        }
        *puVar17 = 0;
        if (sVar24 + (long)local_f0 <= local_138) {
          if (uVar19 <= local_f8 + local_120) {
            if (local_f0 == (void *)0x0) {
              if (sVar18 != 0) {
                uVar5 = *puVar4;
                local_e0 = sVar18;
                *(undefined8 *)(puVar21 + -8) = 0x7776be;
                sVar24 = __readall(iVar8,uVar5);
                if (local_e0 != sVar24) goto LAB_00777446;
              }
            }
            else {
              pvVar26 = (void *)*puVar4;
              pvVar23 = (void *)((long)local_f0 + local_e0);
              *(undefined8 *)(puVar21 + -8) = 0x777528;
              memcpy(pvVar26,pvVar23,sVar18);
              if (*(char *)((*local_118 - 1) + (long)(int)uStack_a0) != '\0') goto LAB_00777544;
              if (0 < (long)uStack_a0._4_4_) {
                lVar10 = 0;
                do {
                  if (*(char *)(*(long *)(local_118[1] + lVar10 * 8) +
                               (ulong)(*(int *)(uVar29 + lVar10 * 4) - 1)) != '\0')
                  goto LAB_00777544;
                  lVar10 = lVar10 + 1;
                } while (lVar10 != uStack_a0._4_4_);
              }
            }
            uVar30 = 0;
            *local_c8 = local_118;
            goto LAB_00777080;
          }
          if ((local_f0 != (void *)0x0) && (*(uint *)(*plVar9 + 8) != local_ac)) goto LAB_00777556;
          goto LAB_007771e9;
        }
        if (local_f0 != (void *)0x0) {
LAB_00777544:
          if (*(uint *)(*plVar9 + 8) != local_ac) {
LAB_00777556:
            uVar30 = 0xfffffffe;
            goto LAB_00777080;
          }
        }
      }
LAB_00777446:
      uVar30 = 0xffffffff;
    }
LAB_00777080:
    if (iVar8 != -1) {
      *(undefined8 *)(puVar21 + -8) = 0x77708e;
      __close_nocancel(iVar8);
    }
    do {
      if (plVar9 == (long *)0xffffffffffffffff) goto LAB_007770b0;
      lVar15 = *plVar9;
LAB_0077709d:
      uVar3 = *(uint *)(lVar15 + 8);
      if (uVar3 == local_ac) {
        LOCK();
        plVar1 = plVar9 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
LAB_00777220:
          *(undefined8 *)(puVar21 + -8) = 0x777228;
          __nscd_unmap(plVar9);
        }
        goto LAB_007770b0;
      }
      local_ac = uVar3;
      if (((uVar3 & 1) == 0) && (local_bc = local_bc + 1, local_bc != 5)) {
        if ((int)uVar30 != -1) goto LAB_00776f48;
        LOCK();
        plVar1 = plVar9 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) goto LAB_00777220;
LAB_0077710a:
        uVar30 = 0xffffffff;
        goto LAB_007770b0;
      }
      LOCK();
      plVar1 = plVar9 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        *(undefined8 *)(puVar21 + -8) = 0x777238;
        __nscd_unmap(plVar9);
      }
      if ((int)uVar30 == -1) goto LAB_0077710a;
      plVar9 = (long *)0xffffffffffffffff;
LAB_00777131:
      uVar3 = local_c0;
      uVar7 = local_d0;
      uVar5 = local_d8;
      *(undefined8 *)(puVar21 + -8) = 0x777157;
      iVar8 = __nscd_open_socket(uVar7,uVar5,uVar3,&local_a8,0x20);
      if (iVar8 != -1) goto code_r0x00777163;
      __nss_not_use_nscd_hosts = 1;
      uVar30 = 0xffffffff;
    } while( true );
  }
  if (__nss_have_localdomain == 0) {
    pcVar16 = getenv("LOCALDOMAIN");
    if (pcVar16 == (char *)0x0) {
      __nss_have_localdomain = -1;
      goto LAB_00776ea0;
    }
    __nss_have_localdomain = 1;
  }
  __nss_not_use_nscd_hosts = 1;
  uVar30 = 0xffffffff;
LAB_007770b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar30 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar21 + -8) = __nscd_gethostbyname_r;
  __stack_chk_fail_local();
code_r0x00777163:
  local_138 = 0xffffffffffffffff;
  uVar29 = 0;
  pvVar26 = (void *)0x0;
  local_e0 = 0;
  local_f0 = (void *)0x0;
  goto LAB_00777037;
}

