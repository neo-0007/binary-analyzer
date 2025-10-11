
int FUN_0056c040(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  if (param_2 < param_4) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_none.c",0x2a,"RSA_padding_check_none");
    FUN_0051f8f0(4,0x6d,0);
    param_2 = -1;
  }
  else {
    lVar1 = thunk_FUN_00713720(param_1,0,(long)(param_2 - param_4));
    thunk_FUN_00713a50(lVar1 + ((long)param_2 - (long)param_4),param_3);
  }
  return param_2;
}

