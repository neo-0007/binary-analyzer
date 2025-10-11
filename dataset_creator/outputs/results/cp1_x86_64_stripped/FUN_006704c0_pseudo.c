
void FUN_006704c0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  
  puVar6 = (undefined8 *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  puVar7 = (undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  puVar8 = *(undefined8 **)(param_1 + 200);
  puVar3 = *(undefined8 **)(param_2 + 200);
  if (puVar8 == puVar6) {
    if (puVar3 == puVar7) {
      do {
        uVar5 = puVar7[1];
        uVar2 = *puVar6;
        puVar8 = puVar6 + 2;
        uVar4 = puVar6[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar5;
        *puVar7 = uVar2;
        puVar7[1] = uVar4;
        puVar6 = puVar8;
        puVar7 = puVar7 + 2;
      } while ((undefined8 *)(param_1 + 0xc0) != puVar8);
      goto LAB_006705c3;
    }
    if (puVar8 != puVar6) goto LAB_00670598;
LAB_00670563:
    lVar9 = param_1;
    lVar10 = param_2;
    if (puVar8 == puVar6) {
      puVar6 = puVar7;
      puVar8 = puVar3;
      lVar9 = param_2;
      lVar10 = param_1;
    }
    thunk_FUN_00713610(lVar9 + 0x40,lVar10 + 0x40,0x80);
    *(undefined8 **)(lVar10 + 200) = puVar8;
    *(undefined8 **)(lVar9 + 200) = puVar6;
  }
  else {
LAB_00670598:
    if (puVar3 == puVar7) goto LAB_00670563;
    *(undefined8 **)(param_1 + 200) = puVar3;
    *(undefined8 **)(param_2 + 200) = puVar8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0xc0) = uVar1;
LAB_006705c3:
  FUN_00625160(auStack_48,param_1 + 0xd0);
  FUN_006258d0(param_1 + 0xd0,param_2 + 0xd0);
  FUN_006258d0(param_2 + 0xd0,auStack_48);
  FUN_00625980(auStack_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

