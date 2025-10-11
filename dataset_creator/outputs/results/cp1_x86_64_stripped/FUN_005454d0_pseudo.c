
long * FUN_005454d0(long *param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  LOCK();
  param_1[0xc] = param_1[0xc] + 1;
  UNLOCK();
  uVar1 = *(uint *)((long)param_1 + 0x24);
  *param_3 = uVar4;
  uVar5 = uVar4 % (ulong)uVar1;
  iVar3 = (int)uVar5;
  if (uVar5 < *(uint *)(param_1 + 4)) {
    iVar3 = (int)(uVar4 % (ulong)*(uint *)((long)param_1 + 0x1c));
  }
  pcVar2 = (code *)param_1[1];
  plVar7 = (long *)(*param_1 + (long)iVar3 * 8);
  puVar6 = (undefined8 *)*plVar7;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      LOCK();
      param_1[0x14] = param_1[0x14] + 1;
      UNLOCK();
      if (puVar6[2] == uVar4) {
        LOCK();
        param_1[0xd] = param_1[0xd] + 1;
        UNLOCK();
        iVar3 = (*pcVar2)(*puVar6,param_2);
        if (iVar3 == 0) {
          return plVar7;
        }
      }
      plVar7 = puVar6 + 1;
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != (undefined8 *)0x0);
  }
  return plVar7;
}

