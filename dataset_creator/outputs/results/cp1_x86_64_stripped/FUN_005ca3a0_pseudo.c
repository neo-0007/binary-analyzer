
undefined8 FUN_005ca3a0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041c9c0(param_1,"on");
  if ((iVar1 == 0) || (iVar1 = FUN_0041c9c0(param_1,&DAT_0080b58b), iVar1 == 0)) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = FUN_0041c9c0(param_1,"off");
  if ((iVar1 != 0) && (iVar1 = FUN_0041c9c0(param_1,"false"), iVar1 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_def.c",0xca,"parsebool");
    FUN_0051f8f0(0xe,0x7a,0);
    return 0;
  }
  *param_2 = 0;
  return 1;
}

