
void FUN_006259d0(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  
  bVar9 = 0;
  uVar8 = *(ulong *)(param_2 + 0x10);
  *param_1 = param_3;
  *(ulong *)(param_1 + 4) = uVar8;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar7 = uVar8 * 8;
  if (0xfffffffffffffff < uVar8) {
    lVar7 = -1;
  }
                    /* try { // try from 00625a24 to 00625b5d has its CatchHandler @ 00625b8d */
  lVar7 = thunk_FUN_006c31f0(lVar7);
  uVar6 = *(ulong *)(param_1 + 4);
  *(long *)(param_1 + 2) = lVar7;
  uVar8 = uVar6;
  if (uVar6 != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_2 + 8) + lVar5 * 8);
      *(long *)(lVar7 + lVar5 * 8) = lVar3;
      if (lVar3 == 0) {
LAB_00625a44:
        if (uVar6 <= lVar5 + 1U) goto LAB_00625a88;
      }
      else {
        if (DAT_0093ea10 != '\0') {
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          goto LAB_00625a44;
        }
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        uVar6 = *(ulong *)(param_1 + 4);
        if (uVar6 <= lVar5 + 1U) goto LAB_00625a88;
      }
      lVar5 = lVar5 + 1;
      lVar7 = *(long *)(param_1 + 2);
    } while( true );
  }
LAB_00625aa8:
  lVar7 = thunk_FUN_006c31f0(uVar8);
  *(long *)(param_1 + 6) = lVar7;
  if (*(long *)(param_1 + 4) == 0) {
LAB_00625b00:
    puVar2 = (undefined8 *)thunk_FUN_006c31f0(0x60);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar7 = 0;
    *puVar2 = 0;
    puVar2[0xb] = 0;
    uVar8 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8)) +
                    0x60U >> 3);
    puVar2 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar9 * -2 + 1;
    }
    do {
      if (*(long *)(*(long *)(param_2 + 0x20) + lVar7) == 0) {
        return;
      }
      lVar3 = thunk_FUN_007129d0();
      lVar5 = *(long *)(param_1 + 8);
      uVar4 = thunk_FUN_006c31f0(lVar3 + 1);
      *(undefined8 *)(lVar5 + lVar7) = uVar4;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + lVar7);
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x20) + lVar7);
      lVar7 = lVar7 + 8;
      thunk_FUN_00713a50(*puVar2,*puVar1,lVar3 + 1);
    } while (lVar7 != 0x60);
    return;
  }
  lVar5 = 0;
  do {
    lVar3 = *(long *)(*(long *)(param_2 + 0x18) + lVar5 * 8);
    *(long *)(lVar7 + lVar5 * 8) = lVar3;
    if (lVar3 == 0) {
LAB_00625ac4:
      if (*(ulong *)(param_1 + 4) <= lVar5 + 1U) goto LAB_00625b00;
    }
    else {
      if (DAT_0093ea10 != '\0') {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        goto LAB_00625ac4;
      }
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      if (*(ulong *)(param_1 + 4) <= lVar5 + 1U) goto LAB_00625b00;
    }
    lVar5 = lVar5 + 1;
    lVar7 = *(long *)(param_1 + 6);
  } while( true );
LAB_00625a88:
  uVar8 = uVar6 * 8;
  if (0xfffffffffffffff < uVar6) {
    uVar8 = 0xffffffffffffffff;
  }
  goto LAB_00625aa8;
}

