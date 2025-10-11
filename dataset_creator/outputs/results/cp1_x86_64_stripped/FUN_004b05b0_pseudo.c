
undefined8 FUN_004b05b0(long param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = '\0';
  lVar1 = FUN_00771d50(param_2,0xffffffffffffffff,param_3,*(undefined8 *)(param_1 + 0x40));
  uVar2 = 0;
  if ((lVar1 != 0) && (*param_2 != '\0')) {
    uVar2 = thunk_FUN_007129d0(param_2);
  }
  return uVar2;
}

