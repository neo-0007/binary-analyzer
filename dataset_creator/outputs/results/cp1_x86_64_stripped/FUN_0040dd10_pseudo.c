
void FUN_0040dd10(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0051f000();
  uVar1 = thunk_FUN_007129d0(param_1);
  local_28 = 0;
  lVar2 = FUN_004a14a0(&local_28,param_1,uVar1);
  FUN_0051a270(local_28);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0x5fe,"pkey_set_type");
    FUN_0051f8f0(6,0x9c,0);
  }
  else if (*param_2 == 0) {
    *param_2 = param_1;
  }
  else if (param_2[1] == 0) {
    param_2[1] = param_1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    FUN_0051f050();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

