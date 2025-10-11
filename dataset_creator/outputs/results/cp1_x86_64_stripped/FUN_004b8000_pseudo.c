
long * FUN_004b8000(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0xc) < param_2) {
    if (param_2 < 0x800000) {
      iVar1 = FUN_004b7e80(param_1,2);
      if (iVar1 == 0) {
        iVar1 = FUN_004b7e80(param_1,8);
        if (iVar1 == 0) {
          lVar2 = FUN_0041aec0((long)param_2 << 3,"../crypto/bn/bn_lib.c",0x119);
        }
        else {
          lVar2 = FUN_0041bfc0((long)param_2 << 3,"../crypto/bn/bn_lib.c",0x117);
        }
        if (lVar2 != 0) {
          if (0 < (int)param_1[1]) {
            thunk_FUN_00713a50(lVar2,*param_1,(long)(int)param_1[1] << 3);
          }
          if (*param_1 != 0) {
            FUN_004b7e90(param_1,1);
          }
          *param_1 = lVar2;
          *(int *)((long)param_1 + 0xc) = param_2;
          return param_1;
        }
        FUN_0051f420();
        param_1 = (long *)0x0;
        FUN_0051f540("../crypto/bn/bn_lib.c",0x11b,"bn_expand_internal");
        FUN_0051f8f0(3,0xc0100,0);
      }
      else {
        FUN_0051f420();
        param_1 = (long *)0x0;
        FUN_0051f540("../crypto/bn/bn_lib.c",0x113,"bn_expand_internal");
        FUN_0051f8f0(3,0x69,0);
      }
    }
    else {
      FUN_0051f420();
      param_1 = (long *)0x0;
      FUN_0051f540("../crypto/bn/bn_lib.c",0x10f,"bn_expand_internal");
      FUN_0051f8f0(3,0x72,0);
    }
  }
  return param_1;
}

