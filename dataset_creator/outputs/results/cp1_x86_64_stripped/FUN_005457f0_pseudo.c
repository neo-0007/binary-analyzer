
long * FUN_005457f0(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  uVar7 = *(uint *)(param_1 + 3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((ulong)(param_1[7] << 8) / (ulong)uVar7 < (ulong)param_1[5]) {
LAB_005458c8:
    plVar5 = (long *)FUN_005454d0(param_1,param_2,&local_48);
    plVar1 = (long *)*plVar5;
    if (plVar1 != (long *)0x0) {
      plVar6 = (long *)*plVar1;
      *plVar1 = param_2;
      param_1[0xf] = param_1[0xf] + 1;
      goto LAB_005458f0;
    }
    plVar6 = (long *)FUN_0041ad90(0x18,"../crypto/lhash/lhash.c",0x8f);
    if (plVar6 != (long *)0x0) {
      *plVar6 = param_2;
      plVar6[1] = 0;
      plVar6[2] = local_48;
      *plVar5 = (long)plVar6;
      plVar6 = (long *)0x0;
      param_1[0xe] = param_1[0xe] + 1;
      param_1[7] = param_1[7] + 1;
      goto LAB_005458f0;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    uVar3 = *(uint *)((long)param_1 + 0x24);
    uVar4 = *(uint *)((long)param_1 + 0x1c);
    lVar8 = *param_1;
    if (uVar2 + 1 < uVar3) {
      *(uint *)(param_1 + 4) = uVar2 + 1;
LAB_0054585d:
      param_1[8] = param_1[8] + 1;
      plVar6 = (long *)(lVar8 + (ulong)uVar2 * 8);
      plVar1 = (long *)(lVar8 + (ulong)(uVar2 + uVar3) * 8);
      *(uint *)(param_1 + 3) = uVar7 + 1;
      *plVar1 = 0;
      lVar8 = *plVar6;
      while (lVar8 != 0) {
        while ((ulong)uVar2 != *(ulong *)(lVar8 + 0x10) % (ulong)uVar4) {
          *plVar6 = *(long *)(lVar8 + 8);
          *(long *)(lVar8 + 8) = *plVar1;
          *plVar1 = lVar8;
          lVar8 = *plVar6;
          if (lVar8 == 0) goto LAB_005458c8;
        }
        plVar6 = (long *)(lVar8 + 8);
        lVar8 = *plVar6;
      }
      goto LAB_005458c8;
    }
    plVar6 = (long *)FUN_0041ade0(lVar8,(ulong)(uVar4 * 2) << 3,"../crypto/lhash/lhash.c",0x102);
    if (plVar6 != (long *)0x0) {
      *param_1 = (long)plVar6;
      thunk_FUN_00713720(plVar6 + uVar4,0,(ulong)uVar4 << 3);
      param_1[9] = param_1[9] + 1;
      uVar7 = *(uint *)(param_1 + 3);
      *(uint *)((long)param_1 + 0x24) = uVar4;
      lVar8 = *param_1;
      *(uint *)((long)param_1 + 0x1c) = uVar4 * 2;
      *(undefined4 *)(param_1 + 4) = 0;
      goto LAB_0054585d;
    }
  }
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
LAB_005458f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

