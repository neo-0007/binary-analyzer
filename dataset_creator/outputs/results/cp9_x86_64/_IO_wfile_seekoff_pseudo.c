
ulong _IO_wfile_seekoff(uint *param_1,ulong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  void *__ptr;
  ulong uVar12;
  uint uVar13;
  size_t __size;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_100;
  ulong local_f8;
  void *local_e8;
  long local_e0;
  undefined8 local_d8 [3];
  uint local_c0;
  long local_a8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = *(ulong **)(param_1 + 0x28);
  if (param_4 == 0) {
    if (puVar10[6] == 0) {
      lVar9 = 0;
LAB_006f740a:
      lVar11 = *(long *)(param_1 + 0x24);
      if (lVar11 == -1) {
        lVar11 = *(long *)(param_1 + 0x36);
        if (0x827 < lVar11 - 0x932180U) {
          _IO_vtable_check();
        }
        lVar11 = (**(code **)(lVar11 + 0x80))(param_1,0,1);
        if (lVar11 == -1) goto LAB_006f7432;
      }
      uVar8 = lVar11 + lVar9;
      if (-1 < (long)uVar8) goto LAB_006f72fb;
LAB_006f7424:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    }
    else {
      uVar13 = *param_1;
      uVar8 = puVar10[4];
      uVar15 = puVar10[3];
      local_100._0_4_ = uVar13 & 0x1000;
      if ((uVar8 <= uVar15) || ((uVar13 & 0x1000) == 0)) {
LAB_006f73a6:
        uVar12 = *puVar10;
        uVar16 = puVar10[1];
        if ((uVar13 & 0x100) == 0) {
          local_f8 = puVar10[2];
LAB_006f73c8:
          uVar1 = *(undefined8 *)(param_1 + 0x26);
          iVar7 = __libio_codecvt_encoding(uVar1);
          if (uVar15 < uVar8) {
            lVar9 = *(long *)(param_1 + 0x28);
            lVar11 = *(long *)(lVar9 + 0x20);
            lVar14 = *(long *)(lVar9 + 0x18);
            __size = lVar11 - lVar14;
            if (iVar7 < 1) {
              __ptr = malloc(__size);
              local_d8[0] = *(undefined8 *)(lVar9 + 0x60);
              local_e8 = __ptr;
              local_e0 = lVar14;
              iVar7 = __libio_codecvt_out(uVar1,local_d8,lVar14,lVar11,&local_e0,__ptr,
                                          __size + (long)__ptr,&local_e8);
              if (iVar7 != 0) {
                free(__ptr);
                uVar8 = 0xffffffff;
                goto LAB_006f72fb;
              }
              lVar9 = (long)local_e8 - (long)__ptr;
              free(__ptr);
            }
            else {
              lVar9 = ((long)__size >> 2) * (long)iVar7;
            }
            if ((uint)local_100 == 0) {
              lVar9 = lVar9 + (*(long *)(param_1 + 10) - *(long *)(param_1 + 4));
            }
            else {
              lVar9 = lVar9 + (*(long *)(param_1 + 10) - *(long *)(param_1 + 8));
            }
          }
          else if (iVar7 < 1) {
            local_d8[0] = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
            iVar7 = __libio_codecvt_length
                              (uVar1,local_d8,*(undefined8 *)(param_1 + 6),*(long *)(param_1 + 4),
                               (long)(uVar12 - local_f8) >> 2);
            lVar9 = (long)iVar7 - (*(long *)(param_1 + 4) - *(long *)(param_1 + 6));
          }
          else {
            lVar9 = -(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) -
                    ((long)(uVar16 - uVar12) >> 2) * (long)iVar7;
          }
          goto LAB_006f740a;
        }
        if (uVar16 <= uVar12) {
          uVar12 = puVar10[8];
          uVar16 = puVar10[10];
          local_f8 = uVar12;
          goto LAB_006f73c8;
        }
        goto LAB_006f7424;
      }
      lVar9 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar9 - 0x932180U) {
        _IO_vtable_check();
      }
      lVar9 = (**(code **)(lVar9 + 0x80))(param_1,0,2);
      if (lVar9 != -1) {
        *(long *)(param_1 + 0x24) = lVar9;
        uVar13 = *param_1;
        puVar10 = *(ulong **)(param_1 + 0x28);
        goto LAB_006f73a6;
      }
    }
LAB_006f7432:
    uVar8 = 0xffffffffffffffff;
    goto LAB_006f72fb;
  }
  if ((puVar10[2] == puVar10[1]) && (puVar10[3] == puVar10[4])) {
    bVar6 = true;
LAB_006f71a8:
    if ((*param_1 & 0x800) != 0) goto LAB_006f6f55;
    if (puVar10[6] != 0) goto LAB_006f6f80;
LAB_006f71c0:
    if ((void *)puVar10[2] != (void *)0x0) {
      free((void *)puVar10[2]);
      *param_1 = *param_1 & 0xfffffeff;
    }
    _IO_doallocbuf(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar1;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar1;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    uVar1 = puVar2[6];
    *puVar2 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    puVar2[3] = uVar1;
    puVar2[4] = uVar1;
    puVar2[5] = uVar1;
    if (param_3 != 1) goto LAB_006f6f8a;
LAB_006f721b:
    uVar1 = *(undefined8 *)(param_1 + 0x26);
    iVar7 = __libio_codecvt_encoding(uVar1);
    if (iVar7 < 1) {
      plVar3 = *(long **)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 4);
      uVar5 = *(undefined8 *)(param_1 + 6);
      plVar3[0xb] = plVar3[0xc];
      iVar7 = __libio_codecvt_length(uVar1,plVar3 + 0xb,uVar5,uVar4,*plVar3 - plVar3[2] >> 2);
      lVar9 = *(long *)(param_1 + 6);
      *(long *)(param_1 + 2) = lVar9 + iVar7;
      (*(undefined8 **)(param_1 + 0x28))[1] = **(undefined8 **)(param_1 + 0x28);
      uVar8 = param_2 - ((*(long *)(param_1 + 4) - lVar9) - (long)iVar7);
    }
    else {
      uVar8 = (param_2 -
              (long)iVar7 * ((*(long **)(param_1 + 0x28))[1] - **(long **)(param_1 + 0x28) >> 2)) -
              (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
    }
    if (*(long *)(param_1 + 0x24) != -1) {
      uVar8 = uVar8 + *(long *)(param_1 + 0x24);
      param_3 = 0;
LAB_006f6ff0:
      _IO_free_wbackup_area(param_1);
      lVar9 = *(long *)(param_1 + 0x24);
      if (((lVar9 != -1) && (*(long *)(param_1 + 6) != 0)) && ((*param_1 & 0x100) == 0)) {
        lVar11 = *(long *)(param_1 + 0xe);
        lVar14 = (lVar11 - *(long *)(param_1 + 4)) + lVar9;
        if (((long)uVar8 < lVar9) && (lVar14 <= (long)uVar8)) {
          *(long *)(param_1 + 6) = lVar11;
          *(long *)(param_1 + 8) = lVar11;
          *(long *)(param_1 + 10) = lVar11;
          *(long *)(param_1 + 0xc) = lVar11;
          puVar2 = *(undefined8 **)(param_1 + 0x28);
          *(ulong *)(param_1 + 2) = lVar11 + (uVar8 - lVar14);
          uVar1 = puVar2[6];
          *puVar2 = uVar1;
          puVar2[1] = uVar1;
          puVar2[2] = uVar1;
          puVar2[3] = uVar1;
          puVar2[4] = uVar1;
          puVar2[5] = uVar1;
          iVar7 = adjust_wide_data(param_1,0);
          if (iVar7 == 0) {
            lVar9 = *(long *)(param_1 + 0x24);
            *param_1 = *param_1 & 0xffffffef;
            if (-1 < lVar9) {
              lVar11 = *(long *)(param_1 + 0x36);
              if (0x827 < lVar11 - 0x932180U) {
                _IO_vtable_check();
                lVar9 = *(long *)(param_1 + 0x24);
              }
              (**(code **)(lVar11 + 0x80))(param_1,lVar9,0);
            }
            goto LAB_006f72fb;
          }
          goto LAB_006f7288;
        }
      }
      if ((*param_1 & 4) == 0) {
        uVar15 = *(long *)(param_1 + 0xe) - *(long *)(param_1 + 0x10) & uVar8;
        uVar12 = uVar8 - uVar15;
        if (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe) < (long)uVar12) {
          uVar12 = 0;
          uVar15 = uVar8;
        }
        lVar9 = *(long *)(param_1 + 0x36);
        if (0x827 < lVar9 - 0x932180U) {
          _IO_vtable_check();
        }
        lVar9 = (**(code **)(lVar9 + 0x80))(param_1,uVar15,0);
        if (lVar9 < 0) goto LAB_006f7432;
        if (uVar12 == 0) {
          local_100 = 0;
        }
        else {
          lVar11 = *(long *)(param_1 + 0x36);
          if (0x827 < lVar11 - 0x932180U) {
            _IO_vtable_check();
          }
          uVar15 = uVar12;
          if (!bVar6) {
            uVar15 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe);
          }
          local_100 = (**(code **)(lVar11 + 0x70))(param_1,*(long *)(param_1 + 0xe),uVar15);
          if (local_100 < (long)uVar12) {
            if (local_100 == -1) {
              param_3 = 1;
              uVar8 = uVar12;
            }
            else {
              param_3 = 1;
              uVar8 = uVar12 - local_100;
            }
            goto LAB_006f7288;
          }
        }
        lVar11 = *(long *)(param_1 + 0xe);
        puVar2 = *(undefined8 **)(param_1 + 0x28);
        *(long *)(param_1 + 6) = lVar11;
        *(long *)(param_1 + 8) = lVar11;
        *(long *)(param_1 + 10) = lVar11;
        *(long *)(param_1 + 0xc) = lVar11;
        uVar1 = puVar2[6];
        *(ulong *)(param_1 + 2) = uVar12 + lVar11;
        *(long *)(param_1 + 4) = local_100 + lVar11;
        *puVar2 = uVar1;
        puVar2[1] = uVar1;
        puVar2[2] = uVar1;
        puVar2[3] = uVar1;
        puVar2[4] = uVar1;
        puVar2[5] = uVar1;
        iVar7 = adjust_wide_data(param_1,1);
        if (iVar7 == 0) {
          *param_1 = *param_1 & 0xffffffef;
          *(long *)(param_1 + 0x24) = local_100 + lVar9;
          goto LAB_006f72fb;
        }
      }
    }
  }
  else {
    bVar6 = false;
    if (puVar10[4] <= puVar10[3]) goto LAB_006f71a8;
LAB_006f6f55:
    iVar7 = _IO_switch_to_wget_mode(param_1);
    uVar8 = 0xffffffff;
    if (iVar7 != 0) goto LAB_006f72fb;
    puVar10 = *(ulong **)(param_1 + 0x28);
    if (puVar10[6] == 0) goto LAB_006f71c0;
LAB_006f6f80:
    if (param_3 == 1) goto LAB_006f721b;
LAB_006f6f8a:
    uVar8 = param_2;
    if (param_3 != 2) goto LAB_006f6ff0;
    lVar9 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar9 - 0x932180U) {
      _IO_vtable_check();
    }
    iVar7 = (**(code **)(lVar9 + 0x90))(param_1,local_d8);
    if ((iVar7 == 0) && ((local_c0 & 0xf000) == 0x8000)) {
      uVar8 = param_2 + local_a8;
      param_3 = 0;
      goto LAB_006f6ff0;
    }
  }
LAB_006f7288:
  _IO_unsave_markers(param_1);
  lVar9 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar9 - 0x932180U) {
    _IO_vtable_check();
  }
  uVar8 = (**(code **)(lVar9 + 0x80))(param_1,uVar8,param_3);
  if (uVar8 != 0xffffffffffffffff) {
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x24) = uVar8;
    *param_1 = *param_1 & 0xffffffef;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar1;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar1;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    uVar1 = puVar2[6];
    *puVar2 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    puVar2[3] = uVar1;
    puVar2[4] = uVar1;
    puVar2[5] = uVar1;
  }
LAB_006f72fb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar8;
}

