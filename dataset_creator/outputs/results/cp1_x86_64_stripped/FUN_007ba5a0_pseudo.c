
void FUN_007ba5a0(long *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  uint *local_10;
  
  lVar10 = *(long *)(param_1[0xe] + 8);
  lVar2 = *param_1;
  lVar9 = 0;
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
    lVar10 = lVar10 + lVar2;
    lVar9 = lVar2;
  }
  lVar3 = *(long *)(param_1[0xd] + 8);
  plVar8 = (long *)(*(long *)(param_1[0x1f] + 8) + (ulong)param_2 * 0x18 + lVar9);
  uVar4 = plVar8[1];
  lVar5 = *plVar8;
  uVar7 = uVar4 >> 0x20;
  local_10 = (uint *)(lVar10 + uVar7 * 0x18);
  if ((int)uVar4 != 7) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("ELFW(R_TYPE)(reloc->r_info) == ELF_MACHINE_JMP_SLOT","dl-runtime.c",0x3f,
                 "_dl_fixup");
  }
  if ((*(byte *)((long)local_10 + 5) & 3) == 0) {
    lVar10 = param_1[0x3a];
    if ((lVar10 != 0) &&
       (lVar10 = param_1[0x5d] +
                 (ulong)(*(ushort *)(uVar7 * 2 + lVar9 + *(long *)(lVar10 + 8)) & 0x7fff) * 0x18,
       *(int *)(lVar10 + 8) == 0)) {
      lVar10 = 0;
    }
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
    }
    plVar8 = (long *)FUN_007b82e0(lVar3 + lVar9 + (ulong)*local_10,param_1,&local_10,param_1[0x73],
                                  lVar10,1);
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      LOCK();
      iVar1 = *(int *)(in_FS_OFFSET + 0x1c);
      *(int *)(in_FS_OFFSET + 0x1c) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        syscall();
      }
    }
    pcVar6 = (code *)0x0;
    if (local_10 == (uint *)0x0) goto LAB_007ba6db;
    if ((*(short *)((long)local_10 + 6) == -0xf) || (plVar8 == (long *)0x0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar8;
    }
  }
  else {
    lVar10 = lVar2;
    if (*(short *)((long)local_10 + 6) == -0xf) {
      lVar10 = 0;
    }
  }
  pcVar6 = (code *)(lVar10 + *(long *)(local_10 + 2));
  if ((local_10[1] & 0xf) == 10) {
    pcVar6 = (code *)(*pcVar6)();
  }
LAB_007ba6db:
  if (DAT_0094b0a8 == 0) {
    *(code **)(lVar5 + lVar2) = pcVar6;
  }
  return;
}

