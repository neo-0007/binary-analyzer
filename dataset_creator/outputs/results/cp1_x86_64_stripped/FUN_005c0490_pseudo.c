
undefined8 FUN_005c0490(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  plVar3 = (long *)FUN_0041aec0(0x10,"../crypto/bio/bss_mem.c",0x6f);
  if (plVar3 != (long *)0x0) {
    lVar4 = FUN_004c4fd0(param_2);
    *plVar3 = lVar4;
    if (lVar4 == 0) {
      FUN_0041ad60(plVar3,"../crypto/bio/bss_mem.c",0x74);
      return 0;
    }
    puVar5 = (undefined8 *)FUN_0041aec0(0x20,"../crypto/bio/bss_mem.c",0x77);
    plVar3[1] = (long)puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_004c4ff0(*plVar3);
      FUN_0041ad60(plVar3,"../crypto/bio/bss_mem.c",0x79);
    }
    else {
      puVar1 = (undefined8 *)*plVar3;
      uVar6 = 1;
      uVar2 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      uVar2 = puVar1[3];
      puVar5[2] = puVar1[2];
      puVar5[3] = uVar2;
      *(undefined8 *)(param_1 + 0x28) = 0x100000001;
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      *(long **)(param_1 + 0x40) = plVar3;
    }
  }
  return uVar6;
}

