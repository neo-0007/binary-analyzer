
int FUN_005127b0(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_2 != 1) {
    return (uint)(param_2 == 7) * 3 + -2;
  }
  if (param_4 != 0) {
    lVar1 = FUN_0053efa0();
    if (param_4 != lVar1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_meth.c",0x372,"pkey_ecd_ctrl");
      FUN_0051f8f0(0x10,0x8a,0);
      return 0;
    }
  }
  return 1;
}

