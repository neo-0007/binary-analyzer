
long * FUN_00418ef0(long *param_1,uint param_2)

{
  int iVar1;
  
  if (0x11 < param_2) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ex_data.c",0x23,"get_and_lock");
    FUN_0051f8f0(0xf,0x80106,0);
    return (long *)0x0;
  }
  if ((*param_1 != 0) && (iVar1 = FUN_004222c0(), iVar1 != 0)) {
    return param_1 + (int)(param_2 + 1);
  }
  return (long *)0x0;
}

