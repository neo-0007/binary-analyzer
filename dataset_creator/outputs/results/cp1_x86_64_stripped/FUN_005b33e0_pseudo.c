
ulong FUN_005b33e0(long param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
                  undefined4 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < param_3) && (uVar3 = (ulong)(param_3 + 7 >> 3), param_4 < uVar3)) {
    param_4 = uVar3;
  }
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  local_38 = param_1;
  lVar2 = FUN_0041bc60(param_4,"../providers/implementations/rands/drbg.c",0xa1);
  if (lVar2 == 0) {
    FUN_0051f420();
    param_4 = 0;
    FUN_0051f540("../providers/implementations/rands/drbg.c",0xa3,"ossl_drbg_get_seed");
    FUN_0051f8f0(0x39,0xc0100,0);
  }
  else {
    iVar1 = FUN_005b3080(local_38,lVar2,param_4,*(undefined4 *)(local_38 + 0x80),param_6,&local_38);
    if (iVar1 == 0) {
      FUN_0041c0b0(lVar2,param_4,"../providers/implementations/rands/drbg.c",0xb3);
      param_4 = 0;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0xb4,"ossl_drbg_get_seed");
      FUN_0051f8f0(0x39,0xbf,0);
    }
    else {
      *param_2 = lVar2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

