
undefined8 FUN_004b7470(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_004b8240(param_1,param_3);
  if (lVar1 != 0) {
    thunk_FUN_00713a50(*param_1,param_2,(long)param_3 << 3);
    *(int *)(param_1 + 1) = param_3;
    FUN_004b8490(param_1);
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/bn/bn_intern.c",0xbf,"bn_set_words");
  FUN_0051f8f0(3,0xc0100,0);
  return 0;
}

