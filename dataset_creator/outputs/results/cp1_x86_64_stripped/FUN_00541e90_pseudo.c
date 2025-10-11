
undefined8 FUN_00541e90(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) ||
     (((iVar1 = FUN_004b7e80(param_2,2), iVar1 != 0 && (iVar1 = FUN_004b7e80(param_2,1), iVar1 == 0)
       ) || (param_2 = FUN_004b82e0(param_2), param_2 != 0)))) {
    FUN_004b7f20(*param_1);
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

