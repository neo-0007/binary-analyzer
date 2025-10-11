
long FUN_006cab00(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_10 [2];
  
  if ((((*(byte *)(param_2 + 199) & 0x40) == 0) || (*(char *)(param_2 + 0xdf) == '\0')) &&
     (*(long *)(param_2 + 0x38) == 0)) {
    if (DAT_00945617 != '\b') goto FUN_0040466f;
    if ((*(byte *)(param_2 + 199) & 0x40) != 0) {
      *(undefined1 *)(param_2 + 0xdf) = 0;
    }
    *(undefined8 **)(param_2 + 0x38) = local_10;
    local_10[0] = *(undefined8 *)(param_2 + 0x90);
  }
  lVar2 = 0;
  do {
    while( true ) {
      puVar3 = *(undefined8 **)(param_1 + lVar2 * 8);
      puVar6 = *(undefined8 **)(param_2 + lVar2 * 8);
      if (*(char *)(param_1 + 0xd8 + lVar2) != '\0') goto FUN_0040466f;
      if (*(char *)(param_2 + 0xd8 + lVar2) == '\0') break;
      if (puVar3 != (undefined8 *)0x0) {
        if ((&DAT_00945610)[lVar2] != '\b') goto FUN_0040466f;
        *puVar3 = puVar6;
      }
LAB_006cab4b:
      lVar2 = lVar2 + 1;
      if (lVar2 == 0x11) goto LAB_006cabf8;
    }
    if ((puVar6 == (undefined8 *)0x0 || puVar3 == (undefined8 *)0x0) || (puVar3 == puVar6))
    goto LAB_006cab4b;
    bVar1 = (&DAT_00945610)[lVar2];
    uVar4 = (ulong)bVar1;
    if (bVar1 < 8) {
      if ((bVar1 & 4) == 0) {
        if (bVar1 != 0) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
          if ((bVar1 & 2) != 0) {
            *(undefined2 *)((long)puVar3 + (uVar4 - 2)) =
                 *(undefined2 *)((long)puVar6 + (uVar4 - 2));
          }
        }
      }
      else {
        *(undefined4 *)puVar3 = *(undefined4 *)puVar6;
        *(undefined4 *)((long)puVar3 + (uVar4 - 4)) = *(undefined4 *)((long)puVar6 + (uVar4 - 4));
      }
      goto LAB_006cab4b;
    }
    lVar2 = lVar2 + 1;
    *puVar3 = *puVar6;
    *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = *(undefined8 *)((long)puVar6 + (uVar4 - 8));
    lVar5 = (long)puVar3 - (long)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((long)puVar6 - lVar5);
    puVar3 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulong)((uint)bVar1 + (int)lVar5 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (lVar2 != 0x11);
LAB_006cabf8:
  lVar2 = 0;
  if ((((*(byte *)(param_1 + 199) & 0x40) == 0) || (*(char *)(param_1 + 0xdf) == '\0')) &&
     (*(long *)(param_1 + 0x38) == 0)) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
    if (((*(byte *)(param_2 + 199) & 0x40) == 0) || (*(char *)(param_2 + 0xdf) == '\0')) {
      if (DAT_00945617 != '\b') {
FUN_0040466f:
                    /* WARNING: Subroutine does not return */
        FUN_00404713();
      }
      puVar3 = (undefined8 *)*puVar3;
    }
    lVar2 = (long)puVar3 + (*(long *)(param_2 + 0xd0) - *(long *)(param_1 + 0x90));
  }
  return lVar2;
}

