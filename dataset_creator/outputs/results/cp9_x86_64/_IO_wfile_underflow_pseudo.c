
undefined4 _IO_wfile_underflow(uint *param_1)

{
  undefined1 *__dest;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  ulong __n;
  size_t __n_00;
  size_t sVar13;
  int *piVar14;
  undefined *puVar15;
  void *pvVar16;
  long in_FS_OFFSET;
  void *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *param_1;
  if ((uVar12 & 0x10) == 0) {
    if ((uVar12 & 4) != 0) {
      *param_1 = uVar12 | 0x20;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
      uVar7 = 0xffffffff;
      goto LAB_006f68f8;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if ((undefined4 *)*puVar2 < (undefined4 *)puVar2[1]) {
      uVar7 = *(undefined4 *)*puVar2;
      goto LAB_006f68f8;
    }
    pvVar11 = *(void **)(param_1 + 2);
    pvVar16 = *(void **)(param_1 + 4);
    uVar3 = *(undefined8 *)(param_1 + 0x26);
    if (pvVar11 < pvVar16) {
      uVar1 = puVar2[6];
      puVar2[0xc] = puVar2[0xb];
      *puVar2 = uVar1;
      puVar2[2] = uVar1;
      local_60 = pvVar11;
      iVar8 = __libio_codecvt_in(uVar3,puVar2 + 0xb,pvVar11,pvVar16,&local_60,uVar1,puVar2[7],
                                 puVar2 + 1);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
      *(void **)(param_1 + 2) = local_60;
      puVar5 = (undefined4 *)**(undefined8 **)(param_1 + 0x28);
      if (puVar5 < (undefined4 *)(*(undefined8 **)(param_1 + 0x28))[1]) {
        uVar7 = *puVar5;
        goto LAB_006f68f8;
      }
      if (iVar8 != 2) {
        memmove(*(void **)(param_1 + 0xe),local_60,*(long *)(param_1 + 4) - (long)local_60);
        lVar10 = *(long *)(param_1 + 0xe);
        lVar4 = *(long *)(param_1 + 2);
        *(long *)(param_1 + 6) = lVar10;
        *(long *)(param_1 + 2) = lVar10;
        *(long *)(param_1 + 4) = (*(long *)(param_1 + 4) + lVar10) - lVar4;
        goto LAB_006f67f6;
      }
    }
    else {
      lVar10 = *(long *)(param_1 + 0xe);
      *(long *)(param_1 + 6) = lVar10;
      *(long *)(param_1 + 2) = lVar10;
      *(long *)(param_1 + 4) = lVar10;
LAB_006f67f6:
      if (lVar10 == 0) {
        if (*(void **)(param_1 + 0x12) != (void *)0x0) {
          free(*(void **)(param_1 + 0x12));
          *param_1 = *param_1 & 0xfffffeff;
        }
        _IO_doallocbuf(param_1);
        lVar10 = *(long *)(param_1 + 0xe);
        *(long *)(param_1 + 6) = lVar10;
        *(long *)(param_1 + 2) = lVar10;
        *(long *)(param_1 + 4) = lVar10;
      }
      *(long *)(param_1 + 0xc) = lVar10;
      *(long *)(param_1 + 8) = lVar10;
      *(long *)(param_1 + 10) = lVar10;
      if (*(long *)(*(long *)(param_1 + 0x28) + 0x30) == 0) {
        pvVar11 = *(void **)(*(long *)(param_1 + 0x28) + 0x40);
        if (pvVar11 != (void *)0x0) {
          free(pvVar11);
          *param_1 = *param_1 & 0xfffffeff;
        }
        _IO_wdoallocbuf(param_1);
      }
      puVar6 = stdout;
      if ((*param_1 & 0x202) != 0) {
        uVar12 = *(uint *)stdout;
        puVar15 = stdout;
        if ((uVar12 & 0x8000) == 0) {
          lVar10 = *(long *)(in_FS_OFFSET + 0x10);
          piVar14 = *(int **)(stdout + 0x88);
          if (*(long *)(piVar14 + 2) != lVar10) {
            LOCK();
            iVar8 = *piVar14;
            if (iVar8 == 0) {
              *piVar14 = 1;
            }
            UNLOCK();
            if (iVar8 != 0) {
              __lll_lock_wait_private();
            }
            puVar15 = stdout;
            piVar14 = *(int **)(puVar6 + 0x88);
            *(long *)(piVar14 + 2) = lVar10;
            uVar12 = *(uint *)puVar15;
          }
          piVar14[1] = piVar14[1] + 1;
          if ((uVar12 & 0x288) == 0x280) {
LAB_006f6d3d:
            lVar10 = *(long *)(puVar15 + 0xd8);
            if (0x827 < lVar10 - 0x932180U) {
              _IO_vtable_check();
              puVar15 = stdout;
            }
                    /* try { // try from 006f6d70 to 006f6dc9 has its CatchHandler @ 006f6df3 */
            (**(code **)(lVar10 + 0x18))(puVar15,0xffffffff);
          }
          if ((*(uint *)puVar6 & 0x8000) == 0) {
            piVar14 = *(int **)(puVar6 + 0x88);
            iVar8 = piVar14[1];
            piVar14[1] = iVar8 + -1;
            if (iVar8 + -1 == 0) {
              piVar14[2] = 0;
              piVar14[3] = 0;
              LOCK();
              iVar8 = *piVar14;
              *piVar14 = 0;
              UNLOCK();
              if (1 < iVar8) {
                __lll_lock_wake_private();
              }
            }
          }
        }
        else if ((uVar12 & 0x288) == 0x280) goto LAB_006f6d3d;
      }
      _IO_switch_to_get_mode(param_1);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      uVar1 = puVar2[6];
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      puVar2[3] = uVar1;
      puVar2[4] = uVar1;
      puVar2[5] = uVar1;
      sVar13 = 0;
LAB_006f69df:
      lVar10 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar10 - 0x932180U) {
        _IO_vtable_check();
      }
      uVar9 = (**(code **)(lVar10 + 0x70))
                        (param_1,*(long *)(param_1 + 4),
                         *(long *)(param_1 + 0x10) - *(long *)(param_1 + 4));
      if ((long)uVar9 < 1) {
        if (uVar9 == 0 && sVar13 == 0) {
          uVar7 = 0xffffffff;
          param_1[0x24] = 0xffffffff;
          param_1[0x25] = 0xffffffff;
          *param_1 = *param_1 | 0x10;
        }
        else {
          *param_1 = *param_1 | 0x20;
          if (sVar13 == 0) goto LAB_006f6931;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
          uVar7 = 0xffffffff;
        }
        goto LAB_006f68f8;
      }
      lVar10 = *(long *)(param_1 + 4);
      *(ulong *)(param_1 + 4) = lVar10 + uVar9;
      if (*(long *)(param_1 + 0x24) != -1) {
        *(ulong *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + uVar9;
      }
      lVar4 = *(long *)(param_1 + 0x28);
      pvVar11 = *(void **)(param_1 + 2);
      *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar4 + 0x58);
      *(void **)(param_1 + 6) = pvVar11;
      if (sVar13 == 0) {
        iVar8 = __libio_codecvt_in(uVar3,lVar4 + 0x58,pvVar11,lVar10 + uVar9,&local_60,
                                   *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x38),
                                   lVar4 + 8);
LAB_006f6a78:
        sVar13 = 0;
        pvVar11 = local_60;
      }
      else {
        __n = 0x10 - sVar13;
        if (uVar9 < 0x10 - sVar13) {
          __n = uVar9;
        }
        __dest = local_58 + sVar13;
        pvVar11 = mempcpy(__dest,pvVar11,__n);
        sVar13 = sVar13 + __n;
        iVar8 = __libio_codecvt_in(uVar3,lVar4 + 0x58,local_58,pvVar11,&local_60,
                                   *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x38),
                                   lVar4 + 8);
        if (sVar13 == 0) goto LAB_006f6a78;
        lVar10 = (long)local_60 - (long)__dest;
        if (lVar10 < 0) {
          lVar10 = 0;
        }
        pvVar11 = (void *)(lVar10 + *(long *)(param_1 + 2));
      }
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      *(void **)(param_1 + 2) = pvVar11;
      if (puVar2[1] != puVar2[6]) {
        uVar7 = *(undefined4 *)*puVar2;
        goto LAB_006f68f8;
      }
      if (iVar8 != 2) {
        if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("status == __codecvt_partial","wfileops.c",0x120,"_IO_wfile_underflow");
        }
        if (sVar13 == 0) {
          pvVar16 = *(void **)(param_1 + 6);
          __n_00 = *(long *)(param_1 + 4) - (long)pvVar11;
          if (pvVar11 <= pvVar16) {
            if (__n_00 < 0x10) {
              memcpy(local_58,pvVar11,__n_00);
              goto LAB_006f69d2;
            }
            goto LAB_006f6920;
          }
          memmove(pvVar16,pvVar11,__n_00);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(size_t *)(param_1 + 4) = *(long *)(param_1 + 4) - __n_00;
        }
        else {
          lVar10 = (long)local_60 - (long)local_58;
          __n_00 = sVar13;
          if (lVar10 != 0) {
            __n_00 = sVar13 - lVar10;
            memmove(local_58,local_60,__n_00);
          }
          if (__n_00 == 0x10) goto LAB_006f6920;
          pvVar16 = *(void **)(param_1 + 6);
LAB_006f69d2:
          *(void **)(param_1 + 2) = pvVar16;
          *(void **)(param_1 + 4) = pvVar16;
          sVar13 = __n_00;
        }
        goto LAB_006f69df;
      }
    }
LAB_006f6920:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    *param_1 = *param_1 | 0x20;
  }
LAB_006f6931:
  uVar7 = 0xffffffff;
LAB_006f68f8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}

