
void Poly1305_Update(long param_1,undefined8 *param_2,ulong param_3)

{
  void *__dest;
  code *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  pcVar1 = *(code **)(param_1 + 0xe8);
  puVar7 = param_2;
  if (lVar2 != 0) {
    uVar8 = 0x10 - lVar2;
    __dest = (void *)(param_1 + 0xd0 + lVar2);
    if (param_3 < uVar8) {
      memcpy(__dest,param_2,param_3);
      uVar8 = lVar2 + param_3;
      goto LAB_0054f0fb;
    }
    puVar7 = (undefined8 *)((long)param_2 + uVar8);
    param_3 = lVar2 + -0x10 + param_3;
    memcpy(__dest,param_2,uVar8);
    (*pcVar1)(param_1,param_1 + 0xd0,0x10,1);
  }
  uVar4 = param_3 & 0xfffffffffffffff0;
  uVar6 = (uint)param_3 & 0xf;
  uVar8 = (ulong)uVar6;
  if (0xf < uVar4) {
    (*pcVar1)(param_1,puVar7,uVar4,1);
    puVar7 = (undefined8 *)((long)puVar7 + uVar4);
  }
  if (uVar8 != 0) {
    if (uVar6 < 8) {
      if ((param_3 & 4) == 0) {
        if (((param_3 & 0xf) != 0) &&
           (*(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)puVar7, (param_3 & 2) != 0)) {
          *(undefined2 *)(param_1 + 0xce + uVar8) = *(undefined2 *)((long)puVar7 + (uVar8 - 2));
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)puVar7;
        *(undefined4 *)(param_1 + 0xcc + uVar8) = *(undefined4 *)((long)puVar7 + (uVar8 - 4));
      }
    }
    else {
      uVar4 = param_1 + 0xd8U & 0xfffffffffffffff8;
      *(undefined8 *)(param_1 + 0xd0) = *puVar7;
      *(undefined8 *)(param_1 + 200 + uVar8) = *(undefined8 *)((long)puVar7 + (uVar8 - 8));
      lVar2 = (param_1 + 0xd0) - uVar4;
      uVar6 = (int)lVar2 + uVar6 & 0xfffffff8;
      if (7 < uVar6) {
        uVar3 = 0;
        do {
          uVar5 = (ulong)uVar3;
          uVar3 = uVar3 + 8;
          *(undefined8 *)(uVar4 + uVar5) = *(undefined8 *)((long)puVar7 + (uVar5 - lVar2));
        } while (uVar3 < uVar6);
      }
    }
  }
LAB_0054f0fb:
  *(ulong *)(param_1 + 0xe0) = uVar8;
  return;
}

