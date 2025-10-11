
code * _dl_profile_fixup(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  uint *local_30 [2];
  
  if (param_1[0x68] == 0) {
    *param_5 = 0xffffffffffffffff;
    pcVar10 = (code *)_dl_fixup();
    return pcVar10;
  }
  puVar8 = (undefined8 *)(param_1[0x68] + (param_2 & 0xffffffff) * 0x20);
  if (*(int *)((long)puVar8 + 0x1c) != 0) {
    pcVar10 = (code *)*puVar8;
    goto LAB_007b0fb3;
  }
  lVar6 = 0;
  lVar9 = *(long *)(param_1[0xe] + 8);
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
    lVar6 = *param_1;
    lVar9 = lVar9 + lVar6;
  }
  lVar3 = *(long *)(param_1[0xd] + 8);
  uVar4 = *(ulong *)(lVar6 + (param_2 & 0xffffffff) * 0x18 + *(long *)(param_1[0x1f] + 8) + 8);
  uVar7 = uVar4 >> 0x20;
  local_30[0] = (uint *)(lVar9 + uVar7 * 0x18);
  if ((int)uVar4 != 7) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("ELFW(R_TYPE)(reloc->r_info) == ELF_MACHINE_JMP_SLOT","dl-runtime.c",0xfa,
                  "_dl_profile_fixup");
  }
  if ((*(byte *)((long)local_30[0] + 5) & 3) == 0) {
    lVar9 = param_1[0x3a];
    if ((lVar9 != 0) &&
       (lVar9 = param_1[0x5d] +
                (ulong)(*(ushort *)(uVar7 * 2 + lVar6 + *(long *)(lVar9 + 8)) & 0x7fff) * 0x18,
       *(int *)(lVar9 + 8) == 0)) {
      lVar9 = 0;
    }
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
    }
    plVar5 = (long *)_dl_lookup_symbol_x(lVar3 + lVar6 + (ulong)*local_30[0],param_1,local_30,
                                         param_1[0x73],lVar9,1);
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      LOCK();
      iVar1 = *(int *)(in_FS_OFFSET + 0x1c);
      *(int *)(in_FS_OFFSET + 0x1c) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        syscall();
      }
    }
    pcVar10 = (code *)0x0;
    if (local_30[0] != (uint *)0x0) {
      if ((*(short *)((long)local_30[0] + 6) == -0xf) || (plVar5 == (long *)0x0)) {
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar5;
      }
      pcVar10 = (code *)(lVar9 + *(long *)(local_30[0] + 2));
      bVar2 = (byte)local_30[0][1];
      goto joined_r0x007b1057;
    }
  }
  else {
    if (*(short *)((long)local_30[0] + 6) == -0xf) {
      lVar9 = 0;
    }
    else {
      lVar9 = *param_1;
    }
    bVar2 = (byte)local_30[0][1];
    pcVar10 = (code *)(lVar9 + *(long *)(local_30[0] + 2));
joined_r0x007b1057:
    if ((bVar2 & 0xf) == 10) {
      pcVar10 = (code *)(*pcVar10)();
    }
  }
  if (_dl_bind_not == 0) {
    *puVar8 = pcVar10;
    *(undefined4 *)((long)puVar8 + 0x1c) = 1;
  }
LAB_007b0fb3:
  *param_5 = 0xffffffffffffffff;
  _dl_mcount(param_3,pcVar10);
  return pcVar10;
}

