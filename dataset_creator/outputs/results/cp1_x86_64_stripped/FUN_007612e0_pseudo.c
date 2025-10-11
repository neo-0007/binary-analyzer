
undefined8 * FUN_007612e0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = thunk_FUN_007129d0();
  if (DAT_0094aa58 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_007101b0(uVar2 + 0x11);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = uVar2;
      *puVar3 = 0;
      thunk_FUN_00713a50(puVar3 + 2,param_1,uVar2);
      *(undefined1 *)((long)puVar3 + uVar2 + 0x10) = 0;
      DAT_0094aa58 = puVar3;
      return puVar3 + 2;
    }
  }
  else {
    puVar3 = DAT_0094aa58;
    do {
      puVar4 = puVar3;
      if (uVar2 <= (ulong)puVar4[1]) {
        puVar3 = (undefined8 *)((long)puVar4 + puVar4[1] + (0x10 - uVar2));
        iVar1 = thunk_FUN_00713570(param_1,puVar3,uVar2);
        if (iVar1 == 0) {
          return puVar3;
        }
      }
      puVar3 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
    puVar3 = (undefined8 *)FUN_007101b0(uVar2 + 0x11);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = uVar2;
      *puVar3 = 0;
      thunk_FUN_00713a50(puVar3 + 2,param_1,uVar2);
      *(undefined1 *)((long)puVar3 + uVar2 + 0x10) = 0;
      *puVar4 = puVar3;
      return puVar3 + 2;
    }
  }
  return (undefined8 *)0x0;
}

