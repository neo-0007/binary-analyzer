
undefined8 FUN_00477590(undefined1 *param_1,ulong *param_2,long param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  if (param_3 == 0) {
    *param_2 = 0;
    return 1;
  }
  puVar6 = (undefined1 *)(param_4 << 3);
  if (puVar6 == (undefined1 *)0x0) {
    uVar4 = 1;
    uVar2 = 1;
    puVar5 = param_1;
  }
  else {
    uVar2 = 0;
    puVar5 = puVar6;
    do {
      uVar2 = uVar2 + 1;
      puVar5 = (undefined1 *)((ulong)puVar5 >> 8);
      if (puVar5 == (undefined1 *)0x0) break;
    } while (uVar2 < 8);
    uVar4 = (ulong)uVar2;
  }
  uVar1 = uVar4 + 1 + param_4;
  if (uVar1 < 0x105) {
    *param_1 = (char)uVar2;
    uVar3 = uVar4;
    do {
      param_1[uVar3] = (char)puVar6;
      puVar6 = (undefined1 *)((ulong)puVar6 >> 8);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    thunk_FUN_00713a50(param_1 + uVar4 + 1);
    *param_2 = uVar1;
    return 1;
  }
  FUN_0051f420(puVar5,param_3);
  FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0x201,"encode_string");
  FUN_0051f8f0(0x39,0xca,0);
  return 0;
}

