
undefined8
FUN_00779700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0077a770(5,&DAT_0094acc0);
  if (cVar1 != '\0') {
    *param_1 = DAT_0094acc0;
    uVar2 = FUN_00778b30(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0xffffffff;
}

