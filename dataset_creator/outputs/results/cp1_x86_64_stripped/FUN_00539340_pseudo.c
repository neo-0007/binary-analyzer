
undefined4
FUN_00539340(long param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_b0;
  int local_ac;
  code *local_a8;
  code *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00423da0();
  iVar2 = FUN_00539240(0,uVar1,&local_b0,&local_ac,&local_a0,&local_a8);
  if (iVar2 == 0) {
    uVar1 = 0;
    if (param_1 == 0) {
      FUN_0041c470(local_98,"NULL",0x50);
    }
    else {
      FUN_004a0440(local_98,0x50,param_1);
    }
    FUN_0051f420();
    lVar5 = 0;
    lVar4 = 0;
    FUN_0051f540("../crypto/evp/evp_pbe.c",0x6d,"EVP_PBE_CipherInit_ex");
    FUN_0051f8f0(6,0x79,"TYPE=%s",local_98);
  }
  else {
    if (param_2 == 0) {
      param_3 = 0;
    }
    else if (param_3 == -1) {
      param_3 = thunk_FUN_007129d0(param_2);
    }
    if (local_b0 == -1) {
      lVar4 = 0;
      lVar6 = 0;
    }
    else {
      FUN_0051f000();
      uVar3 = FUN_00423b00(local_b0);
      lVar4 = FUN_00537960(param_7,uVar3,param_8);
      lVar6 = lVar4;
      if (lVar4 == 0) {
        uVar3 = FUN_00423b00(local_b0);
        lVar6 = FUN_0040d740(uVar3);
        if (lVar6 == 0) {
          FUN_0051f1a0();
          uVar1 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/evp_pbe.c",0x7f,"EVP_PBE_CipherInit_ex");
          uVar3 = FUN_00423b00(local_b0);
          FUN_0051f8f0(6,0xa0,uVar3);
          lVar5 = 0;
          goto LAB_00539487;
        }
      }
      FUN_0051f050();
    }
    lVar5 = 0;
    if (local_ac != -1) {
      FUN_0051f000();
      uVar3 = FUN_00423b00(local_ac);
      lVar5 = FUN_004069d0(param_7,uVar3,param_8);
      if (lVar5 == 0) {
        uVar1 = 0;
        uVar3 = FUN_00423b00(local_ac);
        FUN_0040d800(uVar3);
        FUN_0051f1a0();
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_pbe.c",0x8f,"EVP_PBE_CipherInit_ex");
        FUN_0051f8f0(6,0xa1,0);
        goto LAB_00539487;
      }
      FUN_0051f050();
    }
    if (local_a8 == (code *)0x0) {
      uVar1 = (*local_a0)(param_5,param_2,param_3,param_4,lVar6,lVar5,param_6);
    }
    else {
      uVar1 = (*local_a8)(param_5,param_2,param_3,param_4,lVar6,lVar5,param_6,param_7,param_8);
    }
  }
LAB_00539487:
  FUN_00537a40(lVar4);
  FUN_00406a50(lVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

