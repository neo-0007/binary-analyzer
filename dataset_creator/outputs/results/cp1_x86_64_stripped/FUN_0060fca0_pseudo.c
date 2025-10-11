
undefined8 FUN_0060fca0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  FUN_0060faf0(*param_2,param_3,param_4,"Permitted");
  lVar1 = param_2[1];
  if ((*param_2 != 0) && (lVar1 != 0)) {
    FUN_004ab870(param_3,&DAT_008243ea);
    lVar1 = param_2[1];
  }
  FUN_0060faf0(lVar1,param_3,param_4,"Excluded");
  return 1;
}

