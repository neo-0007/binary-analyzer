
undefined8 FUN_0060d5d0(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    lVar1 = FUN_0061dcb0(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_0059d500(param_2);
  }
  if (lVar1 == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/x509/v3_crld.c",0x38,"gnames_from_sectname");
    FUN_0051f8f0(0x22,0x96,0);
  }
  else {
    uVar2 = FUN_00613210(0,param_1,lVar1);
    if (*param_2 == '@') {
      FUN_0061dd50(param_1,lVar1);
      return uVar2;
    }
    FUN_00436430(lVar1,FUN_0059cb40);
  }
  return uVar2;
}

