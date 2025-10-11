
long FUN_0066f070(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) goto LAB_0066f201;
  puVar8 = (undefined8 *)(param_1 + 0x40);
  if (*(int *)(param_2 + 0xc0) < 9) {
LAB_0066f0b5:
    lVar10 = *(long *)(param_2 + 0x28);
  }
  else {
    puVar8 = (undefined8 *)thunk_FUN_006c31f0((long)*(int *)(param_2 + 0xc0) << 4);
    lVar10 = (long)*(int *)(param_2 + 0xc0) + -1;
    puVar9 = puVar8;
    if (lVar10 < 0) goto LAB_0066f0b5;
    do {
      *puVar9 = 0;
      puVar9[1] = 0;
      bVar11 = lVar10 != 0;
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 2;
    } while (bVar11);
    lVar10 = *(long *)(param_2 + 0x28);
  }
  if (lVar10 != 0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
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
  *(long *)(param_1 + 0x28) = lVar10;
  if (0 < iVar2) {
    lVar10 = *(long *)(param_2 + 200);
    lVar7 = 0;
    do {
      puVar9 = (undefined8 *)(lVar10 + lVar7);
      uVar5 = puVar9[1];
      *(undefined8 *)((long)puVar8 + lVar7) = *puVar9;
      ((undefined8 *)((long)puVar8 + lVar7))[1] = uVar5;
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != (long)iVar2 * 0x10);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  cVar1 = *(char *)(param_2 + 0xe1);
  *(undefined8 **)(param_1 + 200) = puVar8;
  *(int *)(param_1 + 0xc0) = iVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  if (cVar1 == '\0') {
    plVar4 = *(long **)(param_2 + 0xf0);
    if (plVar4 == (long *)0x0) goto LAB_0066f350;
    if ((char)plVar4[7] == '\0') {
      uVar6 = 0x20;
      FUN_0063d6f0(plVar4);
      if (*(code **)(*plVar4 + 0x30) != FUN_00405e50) {
        uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,0x20);
      }
    }
    else {
      uVar6 = *(undefined1 *)((long)plVar4 + 0x59);
    }
    *(undefined1 *)(param_2 + 0xe0) = uVar6;
    *(undefined1 *)(param_2 + 0xe1) = 1;
    cVar1 = *(char *)(param_1 + 0xe1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe1);
    uVar6 = *(undefined1 *)(param_2 + 0xe0);
  }
  if (cVar1 == '\0') {
    plVar4 = *(long **)(param_1 + 0xf0);
    if (plVar4 == (long *)0x0) {
LAB_0066f350:
                    /* WARNING: Subroutine does not return */
      FUN_00403826();
    }
    if ((char)plVar4[7] == '\0') {
      FUN_0063d6f0(plVar4);
      if (*(code **)(*plVar4 + 0x30) != FUN_00405e50) {
        (**(code **)(*plVar4 + 0x30))(plVar4,0x20);
      }
    }
    *(undefined1 *)(param_1 + 0xe1) = 1;
  }
  *(undefined1 *)(param_1 + 0xe0) = uVar6;
  FUN_00625160(auStack_38,param_2 + 0xd0);
  FUN_006258d0(param_1 + 0xd0,auStack_38);
  FUN_00625980(auStack_38);
  FUN_0066efe0(param_1,param_1 + 0xd0);
  FUN_00670280(param_1,2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_0066ec40(param_1,*(undefined4 *)(param_1 + 0x20));
LAB_0066f201:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

