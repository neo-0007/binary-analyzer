
undefined4 buffered_vfprintf(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  int *piVar10;
  long in_FS_OFFSET;
  undefined1 local_8028 [32768];
  
  puVar4 = &stack0xffffffffffffffd8;
  do {
    puVar8 = puVar4;
    *(undefined8 *)(puVar8 + -0x1000) = *(undefined8 *)(puVar8 + -0x1000);
    puVar4 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != local_8028);
  *(undefined8 *)(puVar8 + 0x6ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 **)(puVar8 + -0x1220) = puVar8 + -0x1010;
  *(undefined1 **)(puVar8 + -0x1218) = puVar8 + -0x1010;
  *(undefined8 *)(puVar8 + -0x1228) = 0x796a06;
  iVar5 = _IO_fwide(param_1,1);
  if (iVar5 != 1) {
    uVar6 = 0xffffffff;
    goto LAB_00796b4e;
  }
  *(undefined1 **)(puVar8 + -0x1150) = puVar8 + -0x1110;
  *(uint **)(puVar8 + -0x1028) = param_1;
  *(undefined1 **)(puVar8 + -0x10e8) = puVar8 + 0x6ff0;
  uVar1 = param_1[0x1d];
  *(undefined8 *)(puVar8 + -0x10f8) = *(undefined8 *)(puVar8 + -0x1220);
  *(undefined8 *)(puVar8 + -0x10f0) = *(undefined8 *)(puVar8 + -0x1218);
  *(uint *)(puVar8 + -0x117c) = uVar1;
  *(undefined4 *)(puVar8 + -0x1130) = 1;
  *(undefined4 *)(puVar8 + -0x11f0) = 0xfbad8004;
  *(undefined8 *)(puVar8 + -0x1168) = 0;
  *(undefined1 **)(puVar8 + -0x1118) = _IO_helper_jumps;
  *(undefined8 *)(puVar8 + -0x1228) = 0x796a96;
  uVar6 = __vfwprintf_internal(puVar8 + -0x11f0,param_2,param_3,param_4);
  *(uint **)(puVar8 + -0x1208) = param_1;
  *(code **)(puVar8 + -0x1210) = funlockfile;
  *(undefined8 *)(puVar8 + -0x1228) = 0x796ab2;
  __libc_cleanup_push_defer(puVar8 + -0x1210);
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar10 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar10 + 2) != lVar2) {
      LOCK();
      iVar5 = *piVar10;
      if (iVar5 == 0) {
        *piVar10 = 1;
      }
      UNLOCK();
      if (iVar5 != 0) {
        *(undefined8 *)(puVar8 + -0x1228) = 0x796c05;
        __lll_lock_wait_private();
      }
      piVar10 = *(int **)(param_1 + 0x22);
      *(long *)(piVar10 + 2) = lVar2;
    }
    lVar2 = *(long *)(puVar8 + -0x1150);
    piVar10[1] = piVar10[1] + 1;
    lVar9 = *(long *)(lVar2 + 0x18);
    iVar5 = (int)(*(long *)(lVar2 + 0x20) - lVar9 >> 2);
    if (0 < iVar5) goto LAB_00796adc;
LAB_00796b19:
    if ((*param_1 & 0x8000) == 0) {
      piVar10 = *(int **)(param_1 + 0x22);
      iVar5 = piVar10[1];
      piVar10[1] = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        piVar10[2] = 0;
        piVar10[3] = 0;
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = 0;
        UNLOCK();
        if (1 < iVar5) {
          *(undefined8 *)(puVar8 + -0x1228) = 0x796c15;
          __lll_lock_wake_private();
        }
      }
    }
  }
  else {
    lVar9 = *(long *)(*(long *)(puVar8 + -0x1150) + 0x18);
    iVar5 = (int)(*(long *)(*(long *)(puVar8 + -0x1150) + 0x20) - lVar9 >> 2);
    if (0 < iVar5) {
LAB_00796adc:
      lVar2 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar2 - 0x932180U) {
        *(undefined8 *)(puVar8 + -0x1228) = 0x796bdd;
        _IO_vtable_check();
        lVar9 = *(long *)(*(long *)(puVar8 + -0x1150) + 0x18);
      }
      pcVar3 = *(code **)(lVar2 + 0x38);
      *(undefined8 *)(puVar8 + -0x1228) = 0x796b0e;
      iVar7 = (*pcVar3)(param_1,lVar9,(long)iVar5);
      if (iVar5 != iVar7) {
        uVar6 = 0xffffffff;
      }
      goto LAB_00796b19;
    }
  }
  *(undefined8 *)(puVar8 + -0x1228) = 0x796b4e;
  __libc_cleanup_pop_restore(puVar8 + -0x1210);
LAB_00796b4e:
  if (*(long *)(puVar8 + 0x6ff8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -0x1228) = &UNK_00796c1f;
    __stack_chk_fail_local();
  }
  return uVar6;
}

