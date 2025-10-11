
undefined8 FUN_0062d670(long *param_1,long *param_2,ulong param_3,uint param_4)

{
  undefined2 *puVar1;
  char cVar2;
  uint *puVar3;
  
  if ((param_4 & 2) != 0) {
    puVar1 = (undefined2 *)*param_2;
    if ((ulong)(param_2[1] - (long)puVar1) < 3) {
      return 1;
    }
    *(undefined1 *)(puVar1 + 1) = 0xbf;
    *puVar1 = 0xbbef;
    *param_2 = *param_2 + 3;
  }
  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)param_1[1]) {
    do {
      if (param_3 < *puVar3) {
        return 2;
      }
      cVar2 = FUN_0062cbc0();
      if (cVar2 == '\0') {
        return 1;
      }
      puVar3 = (uint *)(*param_1 + 4);
      *param_1 = (long)puVar3;
    } while (puVar3 != (uint *)param_1[1]);
  }
  return 0;
}

