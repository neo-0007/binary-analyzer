
void FUN_006703b0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1 + 0x40;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if ((*(long *)(param_1 + 200) != lVar7) && (*(long *)(param_1 + 200) != 0)) {
    thunk_FUN_007104f0();
  }
  lVar6 = *(long *)(param_2 + 200);
  if (lVar6 == param_2 + 0x40) {
    *(long *)(param_1 + 200) = lVar7;
    lVar6 = 0;
    *(undefined4 *)(param_1 + 0xc0) = 8;
    while( true ) {
      puVar1 = (undefined8 *)(lVar7 + lVar6);
      puVar5 = (undefined8 *)(*(long *)(param_2 + 200) + lVar6);
      lVar6 = lVar6 + 0x10;
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      if (lVar6 == 0x80) break;
      lVar7 = *(long *)(param_1 + 200);
    }
  }
  else {
    *(long *)(param_2 + 200) = param_2 + 0x40;
    *(long *)(param_1 + 200) = lVar6;
    uVar2 = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_2 + 0xc0) = 8;
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
  }
  FUN_006258d0(param_1 + 0xd0,param_2 + 0xd0);
  return;
}

