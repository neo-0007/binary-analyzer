
undefined8 d_ref_qualifier(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = **(char **)(param_1 + 0x18);
  if ((cVar1 != 'R') && (cVar1 != 'O')) {
    return param_2;
  }
  uVar3 = 0x20;
  iVar2 = *(int *)(param_1 + 0x48) + 3;
  if (cVar1 == 'R') {
    iVar2 = *(int *)(param_1 + 0x48) + 2;
    uVar3 = 0x1f;
  }
  *(int *)(param_1 + 0x48) = iVar2;
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  uVar3 = d_make_comp(param_1,uVar3,param_2,0);
  return uVar3;
}

