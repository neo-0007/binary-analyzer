
void FUN_0063b2f0(long *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  lVar2 = param_3 + param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *param_1;
  uVar8 = *(ulong *)(lVar4 + -0x10);
  uVar11 = (param_4 - param_3) + *(long *)(lVar4 + -0x18);
  lVar7 = *(long *)(lVar4 + -0x18) - lVar2;
  if (uVar8 < uVar11) {
LAB_0063b351:
    puVar6 = (undefined8 *)FUN_0063af10(uVar11,uVar8,&local_41);
    if (param_2 == 0) {
      puVar9 = (undefined4 *)*param_1;
    }
    else {
      puVar9 = (undefined4 *)*param_1;
      if (param_2 == 1) {
        *(undefined4 *)(puVar6 + 3) = *puVar9;
      }
      else {
        FUN_00771ea0(puVar6 + 3,puVar9,param_2,0x3fffffffffffffff);
        puVar9 = (undefined4 *)*param_1;
      }
    }
    puVar10 = puVar6 + 3;
    if (lVar7 != 0) {
      puVar3 = (undefined4 *)((long)puVar6 + (param_4 + param_2) * 4 + 0x18);
      if (lVar7 == 1) {
        *puVar3 = puVar9[lVar2];
      }
      else {
        FUN_00771ea0(puVar3,puVar9 + lVar2,lVar7,0x3fffffffffffffff);
        puVar9 = (undefined4 *)*param_1;
      }
    }
    if ((undefined8 *)(puVar9 + -6) != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = puVar9 + -2;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = puVar9[-2];
        puVar9[-2] = iVar5 + -1;
      }
      if (iVar5 < 1) {
        thunk_FUN_007104f0(puVar9 + -6,&local_41);
      }
    }
    *param_1 = (long)puVar10;
LAB_0063b3bb:
    if (puVar6 == &DAT_009452c0) goto LAB_0063b3c4;
  }
  else {
    if (0 < *(int *)(lVar4 + -8)) {
      uVar8 = *(ulong *)(*param_1 + -0x10);
      goto LAB_0063b351;
    }
    puVar10 = (undefined8 *)*param_1;
    if ((lVar7 != 0) && (param_4 != param_3)) {
      puVar9 = (undefined4 *)((long)puVar10 + lVar2 * 4);
      puVar3 = (undefined4 *)((long)puVar10 + (param_4 + param_2) * 4);
      if (lVar7 != 1) {
        FUN_00771ed0(puVar3,puVar9,lVar7,0x3fffffffffffffff);
        puVar10 = (undefined8 *)*param_1;
        goto LAB_0063b447;
      }
      puVar6 = puVar10 + -3;
      *puVar3 = *puVar9;
      goto LAB_0063b3bb;
    }
LAB_0063b447:
    if (puVar10 == (undefined8 *)&DAT_009452d8) goto LAB_0063b3c4;
  }
  *(undefined4 *)(puVar10 + -1) = 0;
  puVar10[-3] = uVar11;
  *(undefined4 *)((long)puVar10 + uVar11 * 4) = 0;
LAB_0063b3c4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

