
bool FUN_00429940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00417730(param_1,5,&DAT_0091b6a0);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      iVar1 = FUN_00428980(lVar2 + 0x40,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_00428980(lVar2 + 0x48,param_3);
        return iVar1 != 0;
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/rand/rand_lib.c",0x345,"RAND_set_seed_source_type");
      FUN_0051f8f0(0xf,0x67,0);
    }
  }
  return false;
}

