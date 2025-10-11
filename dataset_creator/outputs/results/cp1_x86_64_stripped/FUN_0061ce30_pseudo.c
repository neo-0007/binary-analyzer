
undefined8 FUN_0061ce30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_20;
  
  local_20 = param_3;
  if (*(long *)(*(undefined4 **)(param_1 + 0x60) + 2) != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x60);
    do {
      while (iVar2 = FUN_005b4140(param_2,*puVar3), iVar2 != 0) {
        FUN_0059ce00(*(undefined8 *)(puVar3 + 2),0,&local_20);
        plVar1 = (long *)(puVar3 + 8);
        puVar3 = puVar3 + 6;
        if (*plVar1 == 0) {
          return local_20;
        }
      }
      plVar1 = (long *)(puVar3 + 8);
      puVar3 = puVar3 + 6;
    } while (*plVar1 != 0);
  }
  return local_20;
}

