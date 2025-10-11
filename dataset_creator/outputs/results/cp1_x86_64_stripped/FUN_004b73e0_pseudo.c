
undefined8 FUN_004b73e0(undefined8 param_1,long *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] <= param_3) {
    uVar2 = 1;
    uVar1 = thunk_FUN_00713720(param_1,0,(long)param_3 << 3);
    if (*param_2 != 0) {
      thunk_FUN_00713a50(uVar1,*param_2,(long)(int)param_2[1] << 3);
      return 1;
    }
  }
  return uVar2;
}

