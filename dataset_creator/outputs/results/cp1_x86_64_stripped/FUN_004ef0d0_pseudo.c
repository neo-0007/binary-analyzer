
ulong FUN_004ef0d0(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4,code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_50 [2];
  undefined8 local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_50[0] = param_2;
  if (*(code **)(*param_4 + 0x48) == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_kmeth.c",0xa2,"ECDH_compute_key");
    FUN_0051f8f0(0x10,0x98,0);
    uVar1 = 0;
  }
  else if (param_2 < 0x80000000) {
    uVar1 = (**(code **)(*param_4 + 0x48))(&local_40,&local_38);
    uVar2 = local_40;
    if ((int)uVar1 != 0) {
      if (param_5 == (code *)0x0) {
        if (local_38 < local_50[0]) {
          local_50[0] = local_38;
        }
        thunk_FUN_00713a50(param_1,local_40,local_50[0]);
      }
      else {
        (*param_5)(local_40,local_38,param_1,local_50);
        uVar2 = local_40;
      }
      FUN_0041aef0(uVar2,local_38,"../crypto/ec/ec_kmeth.c",0xb2);
      uVar1 = local_50[0] & 0xffffffff;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_kmeth.c",0xa6,"ECDH_compute_key");
    FUN_0051f8f0(0x10,0xa1,0);
    uVar1 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

