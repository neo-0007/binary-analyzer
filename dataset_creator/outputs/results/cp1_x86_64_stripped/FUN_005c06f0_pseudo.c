
void FUN_005c06f0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != (long *)0x0) {
    lVar1 = ((undefined8 *)param_1[1])[1];
    if (lVar1 != *(long *)(*param_1 + 8)) {
      thunk_FUN_00713610(*(long *)(*param_1 + 8),lVar1,*(undefined8 *)param_1[1]);
      puVar2 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)*param_1;
      *puVar3 = *puVar2;
      puVar2[1] = puVar3[1];
    }
    return;
  }
  return;
}

