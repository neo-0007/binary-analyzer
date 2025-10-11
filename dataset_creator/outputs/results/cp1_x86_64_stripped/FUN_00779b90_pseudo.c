
undefined4 * FUN_00779b90(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = DAT_0094acf0 == 0;
  if (bVar5) {
    DAT_0094acf0 = 1;
  }
  UNLOCK();
  puVar4 = DAT_0094acf8;
  puVar1 = DAT_0094acf8;
  if (!bVar5) {
    FUN_00709590(&DAT_0094acf0);
    puVar4 = DAT_0094acf8;
    puVar1 = DAT_0094acf8;
  }
  for (; puVar2 = DAT_0094acf8, DAT_0094acf8 = puVar1, puVar4 != (undefined4 *)0x0;
      puVar4 = *(undefined4 **)(puVar4 + 0x84)) {
    iVar3 = thunk_FUN_00712ab0(puVar4 + 0x86,param_1,param_2);
    if ((iVar3 == 0) && (*(char *)((long)puVar4 + param_2 + 0x218) == '\0')) goto LAB_00779c52;
    puVar1 = DAT_0094acf8;
    DAT_0094acf8 = puVar2;
  }
  puVar4 = (undefined4 *)FUN_007101b0(param_2 + 0x219);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    thunk_FUN_00713a50(puVar4 + 0x86,param_1,param_2);
    DAT_0094acf8 = puVar4;
    *(undefined1 *)((long)puVar4 + param_2 + 0x218) = 0;
    *(undefined8 *)(puVar4 + 0x82) = 0;
    *(undefined4 **)(puVar4 + 0x84) = puVar2;
  }
LAB_00779c52:
  iVar3 = DAT_0094acf0;
  LOCK();
  DAT_0094acf0 = 0;
  UNLOCK();
  if (1 < iVar3) {
    FUN_00709660(&DAT_0094acf0);
    return puVar4;
  }
  return puVar4;
}

