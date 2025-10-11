
long FUN_0066fa20(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) goto LAB_0066fbb0;
  puVar7 = (undefined8 *)(param_1 + 0x40);
  if (*(int *)(param_2 + 0xc0) < 9) {
LAB_0066fa65:
    lVar9 = *(long *)(param_2 + 0x28);
  }
  else {
    puVar7 = (undefined8 *)thunk_FUN_006c31f0((long)*(int *)(param_2 + 0xc0) << 4);
    lVar9 = (long)*(int *)(param_2 + 0xc0) + -1;
    puVar8 = puVar7;
    if (lVar9 < 0) goto LAB_0066fa65;
    do {
      lVar9 = lVar9 + -1;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 2;
    } while (lVar9 != -1);
    lVar9 = *(long *)(param_2 + 0x28);
  }
  if (lVar9 != 0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    }
  }
  FUN_00670280(param_1,0);
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)(param_1 + 0x40)) {
    if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
      thunk_FUN_007104f0();
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  FUN_006702d0(param_1);
  iVar2 = *(int *)(param_2 + 0xc0);
  *(long *)(param_1 + 0x28) = lVar9;
  if (0 < iVar2) {
    lVar9 = *(long *)(param_2 + 200);
    lVar6 = 0;
    do {
      puVar8 = (undefined8 *)(lVar9 + lVar6);
      uVar4 = puVar8[1];
      *(undefined8 *)((long)puVar7 + lVar6) = *puVar8;
      ((undefined8 *)((long)puVar7 + lVar6))[1] = uVar4;
      lVar6 = lVar6 + 0x10;
    } while ((long)iVar2 * 0x10 != lVar6);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  cVar1 = *(char *)(param_2 + 0xe4);
  *(undefined8 **)(param_1 + 200) = puVar7;
  *(int *)(param_1 + 0xc0) = iVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  if (cVar1 == '\0') {
    plVar3 = *(long **)(param_2 + 0xf0);
    if (plVar3 == (long *)0x0) goto LAB_0066fca0;
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
    *(undefined1 *)(param_2 + 0xe4) = 1;
    cVar1 = *(char *)(param_1 + 0xe4);
    *(undefined4 *)(param_2 + 0xe0) = uVar5;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe4);
    uVar5 = *(undefined4 *)(param_2 + 0xe0);
  }
  if (cVar1 == '\0') {
    plVar3 = *(long **)(param_1 + 0xf0);
    if (plVar3 == (long *)0x0) {
LAB_0066fca0:
                    /* WARNING: Subroutine does not return */
      FUN_00403826();
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
    *(undefined1 *)(param_1 + 0xe4) = 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  FUN_00625160(auStack_38,param_2 + 0xd0);
  FUN_006258d0(param_1 + 0xd0,auStack_38);
  FUN_00625980(auStack_38);
  FUN_0066f990(param_1,param_1 + 0xd0);
  FUN_00670280(param_1,2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_0066f6e0(param_1,*(undefined4 *)(param_1 + 0x20));
LAB_0066fbb0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

