
void add_module(byte *param_1,void *param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  longlong lVar6;
  size_t __n;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t *psVar11;
  size_t *psVar13;
  ushort uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  char cVar19;
  byte *pbVar20;
  byte *__nptr;
  long in_FS_OFFSET;
  size_t local_98;
  undefined8 local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  void *local_60;
  byte *local_58 [3];
  long local_40;
  size_t *psVar12;
  
  uVar3 = _nl_C_locobj._120_8_;
  uVar2 = _nl_C_locobj._104_8_;
  psVar12 = &local_98;
  psVar11 = &local_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *param_1;
  lVar5 = (long)(char)bVar1;
  uVar14 = *(ushort *)(_nl_C_locobj._104_8_ + lVar5 * 2);
  while ((uVar14 & 0x2000) != 0) {
    bVar1 = param_1[1];
    lVar5 = (long)(char)bVar1;
    param_1 = param_1 + 1;
    uVar14 = *(ushort *)(_nl_C_locobj._104_8_ + lVar5 * 2);
  }
  psVar13 = &local_98;
  pbVar18 = param_1;
  local_60 = param_2;
  if (bVar1 != 0) {
    while (pbVar15 = pbVar18 + 1, (uVar14 & 0x2000) == 0) {
      *pbVar18 = (byte)*(undefined4 *)(uVar3 + lVar5 * 4);
      lVar5 = (long)(char)pbVar18[1];
      psVar13 = &local_98;
      if (pbVar18[1] == 0) goto LAB_006cb190;
      pbVar18 = pbVar15;
      uVar14 = *(ushort *)(uVar2 + lVar5 * 2);
    }
    lVar5 = (long)(char)pbVar18[1];
    *pbVar18 = 0;
    uVar14 = *(ushort *)(uVar2 + lVar5 * 2);
    pbVar20 = pbVar15;
    while ((uVar14 & 0x2000) != 0) {
      lVar5 = (long)(char)pbVar20[1];
      pbVar20 = pbVar20 + 1;
      uVar14 = *(ushort *)(uVar2 + lVar5 * 2);
    }
    psVar13 = &local_98;
    pbVar17 = pbVar15;
    if ((char)lVar5 != '\0') {
      while( true ) {
        __nptr = pbVar20 + 1;
        pbVar16 = pbVar17 + 1;
        if ((uVar14 & 0x2000) != 0) break;
        *pbVar17 = (byte)*(undefined4 *)(uVar3 + lVar5 * 4);
        lVar5 = (long)(char)pbVar20[1];
        psVar13 = &local_98;
        if (pbVar20[1] == 0) goto LAB_006cb190;
        uVar14 = *(ushort *)(uVar2 + lVar5 * 2);
        pbVar17 = pbVar16;
        pbVar20 = __nptr;
      }
      *pbVar17 = 0;
      while( true ) {
        uVar9 = (ulong)(char)*__nptr;
        if ((*(byte *)(uVar2 + 1 + uVar9 * 2) & 0x20) == 0) break;
        __nptr = __nptr + 1;
      }
      pbVar20 = pbVar16;
      if (*__nptr == 0) {
LAB_006cafb0:
        *pbVar20 = 0;
        pbVar10 = pbVar20 + 1;
        iVar4 = 1;
      }
      else {
        do {
          pbVar10 = pbVar20;
          __nptr = __nptr + 1;
          pbVar20 = pbVar10 + 1;
          *pbVar10 = (byte)uVar9;
          bVar1 = *__nptr;
          uVar9 = (ulong)bVar1;
          if (bVar1 == 0) goto LAB_006cafb0;
        } while ((*(byte *)(uVar2 + 1 + (long)(char)bVar1 * 2) & 0x20) == 0);
        *pbVar20 = 0;
        pbVar10 = pbVar10 + 2;
        local_80 = param_3;
        local_78 = pbVar15;
        local_70 = pbVar16;
        local_68 = pbVar17;
        lVar6 = strtoll((char *)__nptr,(char **)local_58,10);
        iVar4 = (int)lVar6;
        pbVar15 = local_78;
        pbVar16 = local_70;
        param_3 = local_80;
        pbVar17 = local_68;
        if ((local_58[0] == __nptr) || (iVar4 < 1)) {
          iVar4 = 1;
        }
      }
      local_90 = CONCAT44(param_4,iVar4);
      psVar13 = &local_98;
      if (pbVar17[1] != 0) {
        if (pbVar17[1] == 0x2f) {
          param_3 = (byte *)0x0;
        }
        local_98 = (long)pbVar10 - (long)pbVar16;
        if ((long)local_98 < 4) {
          local_78 = (byte *)0x3;
          cVar19 = '\x03';
        }
        else {
          local_78 = (byte *)((ulong)(*(int *)(pbVar10 + -4) != 0x6f732e) * 3);
          cVar19 = (*(int *)(pbVar10 + -4) != 0x6f732e) * '\x03';
        }
        local_88 = param_3;
        local_80 = pbVar16;
        local_70 = pbVar17;
        local_68 = pbVar15;
        __n = strnlen((char *)param_1,(long)pbVar15 - (long)param_1);
        pbVar17 = local_68;
        local_68 = local_70;
        pbVar20 = local_80;
        psVar13 = &local_98;
        while (psVar12 != (size_t *)((long)&local_98 - (__n + 0x18 & 0xfffffffffffff000))) {
          psVar11 = (size_t *)((long)psVar13 + -0x1000);
          *(undefined8 *)((long)psVar13 + -8) = *(undefined8 *)((long)psVar13 + -8);
          psVar12 = (size_t *)((long)psVar13 + -0x1000);
          psVar13 = (size_t *)((long)psVar13 + -0x1000);
        }
        uVar9 = (ulong)((uint)(__n + 0x18) & 0xff0);
        lVar5 = -uVar9;
        if (uVar9 != 0) {
          *(undefined8 *)((long)psVar11 + -8) = *(undefined8 *)((long)psVar11 + -8);
        }
        local_70 = local_78;
        *(undefined1 *)((long)((ulong)((long)psVar11 + lVar5 + 0xf) & 0xfffffffffffffff0) + __n) = 0
        ;
        local_80 = pbVar17;
        local_78 = pbVar20;
        *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb0c6;
        local_58[0] = (byte *)memcpy((void *)((ulong)((long)psVar11 + lVar5 + 0xf) &
                                             0xfffffffffffffff0),param_1,__n);
        *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb0e1;
        pvVar7 = tfind(local_58,(void **)&__gconv_alias_db,__gconv_alias_compare);
        pbVar20 = local_70;
        psVar13 = (size_t *)((long)psVar11 + lVar5);
        if (pvVar7 == (void *)0x0) {
          local_70 = local_68;
          local_68 = local_88;
          *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb113;
          puVar8 = (undefined8 *)
                   calloc(1,(size_t)(local_88 + (long)(pbVar10 + (0x38 - (long)param_1)) +
                                    (long)pbVar20));
          psVar13 = (size_t *)((long)psVar11 + lVar5);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = puVar8 + 7;
            *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb12d;
            pvVar7 = mempcpy(puVar8 + 7,param_1,(long)pbVar15 - (long)param_1);
            puVar8[1] = pvVar7;
            *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb144;
            pvVar7 = mempcpy(pvVar7,local_80,(long)local_70 - (long)pbVar18);
            pbVar18 = local_68;
            puVar8[3] = pvVar7;
            puVar8[2] = local_90;
            pbVar15 = local_78;
            if (local_68 != (byte *)0x0) {
              local_68 = local_78;
              *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb1d8;
              pvVar7 = mempcpy(pvVar7,local_60,(size_t)pbVar18);
              pbVar15 = local_68;
            }
            *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb172;
            pvVar7 = mempcpy(pvVar7,pbVar15,local_98);
            if (cVar19 != '\0') {
              *(undefined4 *)((long)pvVar7 + -1) = s_libnss__s__d__d_so_008240e1._15_4_;
            }
            *(undefined8 *)((long)psVar11 + lVar5 + -8) = 0x6cb18d;
            insert_module(puVar8,1);
            psVar13 = (size_t *)((long)psVar11 + lVar5);
          }
        }
      }
    }
  }
LAB_006cb190:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)psVar13 + -8) = 0x6cb1e9;
    __stack_chk_fail_local();
  }
  return;
}

