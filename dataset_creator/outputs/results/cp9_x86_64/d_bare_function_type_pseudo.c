
undefined8 d_bare_function_type(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (**(char **)(param_1 + 0x18) == 'J') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    lVar2 = d_parmlist(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    goto LAB_006b8427;
  }
  lVar1 = d_type(param_1);
  if ((lVar1 == 0) || (lVar2 = d_parmlist(param_1), lVar2 == 0)) {
    return 0;
  }
LAB_006b8427:
  uVar3 = d_make_comp(param_1,0x29,lVar1,lVar2);
  return uVar3;
}

