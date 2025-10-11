
void FUN_0067e720(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,long param_5
                 ,undefined8 param_6,long param_7,int *param_8)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 != 0) {
    iVar3 = (int)param_5 - (int)param_7;
    uVar1 = FUN_0067e5a0(param_6,(int)param_4,param_2,param_3,param_7,iVar3 + param_7);
    iVar2 = 0;
    if ((long)(*param_8 - iVar3) != 0) {
      thunk_FUN_00713a50(uVar1,param_5,(long)(*param_8 - iVar3));
      iVar2 = *param_8 - iVar3;
    }
    *param_8 = iVar2 + ((int)uVar1 - (int)param_6);
    return;
  }
  iVar2 = FUN_0067e5a0(param_6,(int)param_4,param_2,param_3,param_7,*param_8 + param_7);
  *param_8 = iVar2 - (int)param_6;
  return;
}

