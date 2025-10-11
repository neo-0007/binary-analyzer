
undefined8 FUN_004da380(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_0041ad90(0x20,"../crypto/dsa/dsa_pmeth.c",0x28);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = 0xe000000800;
    puVar3[3] = 0;
    *(undefined8 **)(param_1 + 0x98) = puVar3;
    *(undefined8 **)(param_1 + 0x68) = puVar3 + 2;
    puVar1 = *(undefined4 **)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x70) = 2;
    *(undefined4 *)puVar3 = *puVar1;
    *(undefined4 *)((long)puVar3 + 4) = puVar1[1];
    uVar2 = *(undefined8 *)(puVar1 + 6);
    puVar3[1] = *(undefined8 *)(puVar1 + 2);
    puVar3[3] = uVar2;
    return 1;
  }
  return 0;
}

