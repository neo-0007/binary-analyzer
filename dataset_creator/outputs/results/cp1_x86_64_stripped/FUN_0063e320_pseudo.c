
void FUN_0063e320(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = 0;
  uVar5 = FUN_006e1eb0(*(undefined8 *)(param_1 + 0x10));
  do {
    iVar3 = FUN_00756850(uVar7 & 0xffffffff);
    if (iVar3 == -1) {
      uVar2 = 0;
      goto LAB_0063e36b;
    }
    *(char *)(param_1 + 0x19 + uVar7) = (char)iVar3;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x80);
  uVar2 = 1;
LAB_0063e36b:
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  uVar7 = 0;
  do {
    uVar4 = FUN_00756690(uVar7 & 0xffffffff);
    *(undefined4 *)(param_1 + 0x9c + uVar7 * 4) = uVar4;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x100);
  uVar7 = 0;
  do {
    while( true ) {
      uVar1 = uVar7 + 1;
      iVar3 = 1 << ((byte)uVar7 & 0x1f);
      if (7 < uVar7) break;
      uVar8 = iVar3 << 8;
      *(short *)(param_1 + 0x49a + uVar1 * 2) = (short)uVar8;
      uVar6 = FUN_0063dd40(param_1,uVar8 & 0xffff);
      *(undefined8 *)(param_1 + 0x4b8 + uVar1 * 8) = uVar6;
      uVar7 = uVar1;
    }
    *(short *)(param_1 + 0x49a + uVar1 * 2) = (short)((uint)iVar3 >> 8);
    uVar6 = FUN_0063dd40(param_1);
    *(undefined8 *)(param_1 + 0x4b8 + uVar1 * 8) = uVar6;
    uVar7 = uVar1;
  } while (uVar1 != 0xc);
  FUN_006e1eb0(uVar5);
  return;
}

