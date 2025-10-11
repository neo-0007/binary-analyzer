
long FUN_0041c700(undefined8 param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = thunk_FUN_007129d0();
  if (uVar2 < 2) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/o_str.c",0xc3,"ossl_hexstr2buf_sep");
    FUN_0051f8f0(0xf,0x79,0);
  }
  else {
    uVar2 = uVar2 >> 1;
    lVar3 = FUN_0041ad90(uVar2,"../crypto/o_str.c",199);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/o_str.c",200,"ossl_hexstr2buf_sep");
      FUN_0051f8f0(0xf,0xc0100,0);
    }
    else {
      if (param_2 == (undefined8 *)0x0) {
        local_48 = 0;
        iVar1 = FUN_0041c550(lVar3,uVar2,&local_48,param_1,(int)param_3);
        if (iVar1 != 0) goto LAB_0041c798;
      }
      else {
        *param_2 = 0;
        local_48 = 0;
        iVar1 = FUN_0041c550(lVar3,uVar2,&local_48,param_1,(int)param_3);
        if (iVar1 != 0) {
          *param_2 = local_48;
          goto LAB_0041c798;
        }
      }
      FUN_0041ad60(lVar3,"../crypto/o_str.c",0xd4);
      lVar3 = 0;
    }
  }
LAB_0041c798:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

