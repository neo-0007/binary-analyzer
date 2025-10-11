
void FUN_00637f00(long *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  lVar2 = param_3 + param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *param_1;
  uVar7 = *(ulong *)(lVar4 + -0x10);
  uVar10 = (param_4 - param_3) + *(long *)(lVar4 + -0x18);
  lVar9 = *(long *)(lVar4 + -0x18) - lVar2;
  if (uVar7 < uVar10) {
LAB_00637f5e:
    puVar5 = (undefined8 *)FUN_00637be0(uVar10,uVar7,&local_41);
    puVar6 = puVar5 + 3;
    if (param_2 != 0) {
      puVar6 = puVar5 + 3;
      if (param_2 == 1) {
        *(undefined1 *)(puVar5 + 3) = *(undefined1 *)*param_1;
      }
      else {
        puVar6 = (undefined8 *)thunk_FUN_00713a50(puVar6,(undefined1 *)*param_1,param_2);
      }
    }
    if (lVar9 != 0) {
      puVar8 = (undefined1 *)(param_2 + 0x18 + param_4 + (long)puVar5);
      if (lVar9 == 1) {
        *puVar8 = *(undefined1 *)(lVar2 + *param_1);
      }
      else {
        thunk_FUN_00713a50(puVar8,(undefined1 *)(lVar2 + *param_1),lVar9);
      }
    }
    lVar2 = *param_1;
    if ((undefined8 *)(lVar2 + -0x18) != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = (int *)(lVar2 + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(lVar2 + -8);
        *(int *)(lVar2 + -8) = iVar3 + -1;
      }
      if (iVar3 < 1) {
        thunk_FUN_007104f0((undefined8 *)(lVar2 + -0x18),&local_41);
      }
    }
    *param_1 = (long)puVar6;
LAB_00637fd2:
    if (puVar5 == &DAT_009452a0) goto LAB_00637fdb;
  }
  else {
    if (0 < *(int *)(lVar4 + -8)) {
      uVar7 = *(ulong *)(*param_1 + -0x10);
      goto LAB_00637f5e;
    }
    puVar6 = (undefined8 *)*param_1;
    if ((lVar9 != 0) && (param_4 != param_3)) {
      puVar8 = (undefined1 *)((long)puVar6 + param_4 + param_2);
      if (lVar9 != 1) {
        thunk_FUN_00713610(puVar8,(undefined1 *)((long)puVar6 + lVar2),lVar9);
        puVar6 = (undefined8 *)*param_1;
        goto LAB_00638065;
      }
      *puVar8 = *(undefined1 *)((long)puVar6 + lVar2);
      puVar6 = (undefined8 *)*param_1;
      puVar5 = puVar6 + -3;
      goto LAB_00637fd2;
    }
LAB_00638065:
    if (puVar6 == (undefined8 *)&DAT_009452b8) goto LAB_00637fdb;
  }
  *(undefined4 *)(puVar6 + -1) = 0;
  puVar6[-3] = uVar10;
  *(undefined1 *)((long)puVar6 + uVar10) = 0;
LAB_00637fdb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

